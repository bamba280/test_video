#pragma once

//#include <opencv/cv.h>
//#include <opencv/highgui.h>
//#include <vfw.h>

//#pragma comment(lib,"vfw32.lib")
//#pragma comment(lib, "libtiff.lib")

#include "cv.h"
#include "highgui.h"

#ifdef _DEBUG
    //Debug���[�h�̏ꍇ
    #pragma comment(lib,"cv210d.lib")
    #pragma comment(lib,"cxcore210d.lib")
    #pragma comment(lib,"cvaux210d.lib")
    #pragma comment(lib,"highgui210d.lib")
#else
    //Release���[�h�̏ꍇ
    #pragma comment(lib,"cv210.lib")
    #pragma comment(lib,"cxcore210.lib")
    #pragma comment(lib,"cvaux210.lib")
    #pragma comment(lib,"highgui210.lib")
#endif

#if 0
#pragma comment(lib, "libjasperd.lib")
#pragma comment(lib, "libjpegd.lib")
#pragma comment(lib, "libpngd.lib")
#pragma comment(lib, "opencv_calib3d231d.lib")
#pragma comment(lib, "opencv_contrib231d.lib")
#pragma comment(lib, "opencv_core231d.lib")
#pragma comment(lib, "opencv_features2d231d.lib")
#pragma comment(lib, "opencv_flann231d.lib")
#pragma comment(lib, "opencv_gpu231d.lib")
#pragma comment(lib, "opencv_haartraining_engined.lib")
#pragma comment(lib, "opencv_highgui231d.lib")
#pragma comment(lib, "opencv_imgproc231d.lib")
#pragma comment(lib, "opencv_legacy231d.lib")
#pragma comment(lib, "opencv_ml231d.lib")
#pragma comment(lib, "opencv_objdetect231d.lib")
#pragma comment(lib, "opencv_ts231d.lib")
#pragma comment(lib, "opencv_video231d.lib")
#pragma comment(lib, "zlibd.lib")

#pragma comment(lib, "libjasper.lib")
#pragma comment(lib, "libjpeg.lib")
#pragma comment(lib, "libpng.lib")
#pragma comment(lib, "opencv_calib3d231.lib")
#pragma comment(lib, "opencv_contrib231.lib")
#pragma comment(lib, "opencv_core231.lib")
#pragma comment(lib, "opencv_features2d231.lib")
#pragma comment(lib, "opencv_flann231.lib")
#pragma comment(lib, "opencv_gpu231.lib")
#pragma comment(lib, "opencv_haartraining_engine.lib")
#pragma comment(lib, "opencv_highgui231.lib")
#pragma comment(lib, "opencv_imgproc231.lib")
#pragma comment(lib, "opencv_legacy231.lib")
#pragma comment(lib, "opencv_ml231.lib")
#pragma comment(lib, "opencv_objdetect231.lib")
#pragma comment(lib, "opencv_ts231.lib")
#pragma comment(lib, "opencv_video231.lib")
#pragma comment(lib, "zlib.lib")
#endif

namespace GroupPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 �̊T�v
	///
	/// �x��: ���̃N���X�̖��O��ύX����ꍇ�A���̃N���X���ˑ����邷�ׂĂ� .resx �t�@�C���Ɋ֘A�t����ꂽ
	///          �}�l�[�W ���\�[�X �R���p�C�� �c�[���ɑ΂��� 'Resource File Name' �v���p�e�B��
	///          �ύX����K�v������܂��B���̕ύX���s��Ȃ��ƁA
	///          �f�U�C�i�ƁA���̃t�H�[���Ɋ֘A�t����ꂽ���[�J���C�Y�ς݃��\�[�X�Ƃ��A
	///          ���������݂ɗ��p�ł��Ȃ��Ȃ�܂��B
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�ϐ��ł��B
		/// </summary>
		CvCapture *capture; // �L���v�`���I�u�W�F�N�g�\����
		IplImage *srcImage; // �L���v�`���C���[�W�\����

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 264);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 captureImage();
			 }
	private: System::Void captureImage(void) {
				 srcImage = cvQueryFrame(capture);
				 cvFlip(srcImage, srcImage, 0);
				 if((pictureBox1->Image == nullptr) || (pictureBox1->Width != srcImage->width) || (pictureBox1->Height != srcImage->height)){
					 //�s�N�`���{�b�N�X���r�b�g�}�b�v�摜�T�C�Y�ɍ��킹��
					 pictureBox1->Width = srcImage->width;
					 pictureBox1->Height = srcImage->height;
					 //PictureBox�Ɠ����傫����Bitmap�N���X���쐬����B
					 Bitmap^ bmpPicBox = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
					 //���Bitmap��PictureBox��Image�Ɏw�肷��B
					 pictureBox1->Image = bmpPicBox;
				 }

				 //Graphics�N���X�̍쐬(��̃s�N�`���{�b�N�X����Graphics���쐬����)
				 Graphics^g = Graphics::FromImage(pictureBox1->Image);

				 ///////////////////////////////////
				 // IplImage����Bitmap�̊m��
				 // �@�@�@�@
				 //IplImage�̃|�C���^��Bitmap�֓n���ABitmap���쐬
				 Bitmap^ bmp = gcnew Bitmap(srcImage->width, srcImage->height, srcImage->widthStep,
					 System::Drawing::Imaging::PixelFormat::Format24bppRgb, IntPtr(srcImage->imageData));

				 ///////////////////////////////////
				 // �摜�̕`��
				 //
				 //�s�N�`���{�b�N�X��Image��
//				 g->DrawImage(bmp, 0, 0, srcImage->width, srcImage->height);
				 g->DrawImage(bmp, 0, 0, srcImage->width, srcImage->height);
				 pictureBox1->Refresh();

				 delete g;
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 if((capture = cvCreateCameraCapture(-1)) == NULL){ // -1�FOpenCV���K���ȃJ���������蓖��
					 //return(-1);
				 }else{
				 }
				 timer1->Interval = 30; // ���~���b���ɃC�x���g���������邩�w��
				 timer1->Enabled = true; // ��ϰ���J�n��Ԃ�
			 }
};
}

