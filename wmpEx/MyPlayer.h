#pragma once

namespace wmpEx {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyPlayer
	/// </summary>
	public ref class MyPlayer : public System::Windows::Forms::Form
	{
	public:
		MyPlayer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyPlayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^  axWMPlayer;
	protected:

	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::Button^  btnStop;
	private: System::Windows::Forms::TextBox^  tbLoad;
	private: System::Windows::Forms::Button^  btnLoad;
	private: System::Windows::Forms::Button^  btnForward;
	private: System::Windows::Forms::Button^  btnBackward;
	private: System::Windows::Forms::Button^  btnMute;
	private: System::Windows::Forms::TrackBar^  trackBoxVol;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyPlayer::typeid));
			this->axWMPlayer = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->tbLoad = (gcnew System::Windows::Forms::TextBox());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->btnForward = (gcnew System::Windows::Forms::Button());
			this->btnBackward = (gcnew System::Windows::Forms::Button());
			this->btnMute = (gcnew System::Windows::Forms::Button());
			this->trackBoxVol = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWMPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBoxVol))->BeginInit();
			this->SuspendLayout();
			// 
			// axWMPlayer
			// 
			this->axWMPlayer->Enabled = true;
			this->axWMPlayer->Location = System::Drawing::Point(12, 45);
			this->axWMPlayer->Name = L"axWMPlayer";
			this->axWMPlayer->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWMPlayer.OcxState")));
			this->axWMPlayer->Size = System::Drawing::Size(266, 155);
			this->axWMPlayer->TabIndex = 0;
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(13, 231);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(75, 23);
			this->btnPlay->TabIndex = 1;
			this->btnPlay->Text = L"Play/Pause";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &MyPlayer::btnPlay_Click);
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(104, 231);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(75, 23);
			this->btnStop->TabIndex = 2;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = true;
			this->btnStop->Click += gcnew System::EventHandler(this, &MyPlayer::btnStop_Click);
			// 
			// tbLoad
			// 
			this->tbLoad->Location = System::Drawing::Point(13, 13);
			this->tbLoad->Name = L"tbLoad";
			this->tbLoad->Size = System::Drawing::Size(265, 20);
			this->tbLoad->TabIndex = 3;
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(284, 13);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 23);
			this->btnLoad->TabIndex = 4;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &MyPlayer::btnLoad_Click);
			// 
			// btnForward
			// 
			this->btnForward->Location = System::Drawing::Point(284, 80);
			this->btnForward->Name = L"btnForward";
			this->btnForward->Size = System::Drawing::Size(75, 23);
			this->btnForward->TabIndex = 5;
			this->btnForward->Text = L"Forward";
			this->btnForward->UseVisualStyleBackColor = true;
			this->btnForward->Click += gcnew System::EventHandler(this, &MyPlayer::btnForward_Click);
			// 
			// btnBackward
			// 
			this->btnBackward->Location = System::Drawing::Point(284, 118);
			this->btnBackward->Name = L"btnBackward";
			this->btnBackward->Size = System::Drawing::Size(75, 23);
			this->btnBackward->TabIndex = 6;
			this->btnBackward->Text = L"Backward";
			this->btnBackward->UseVisualStyleBackColor = true;
			this->btnBackward->Click += gcnew System::EventHandler(this, &MyPlayer::btnBackward_Click);
			// 
			// btnMute
			// 
			this->btnMute->Location = System::Drawing::Point(284, 177);
			this->btnMute->Name = L"btnMute";
			this->btnMute->Size = System::Drawing::Size(75, 23);
			this->btnMute->TabIndex = 7;
			this->btnMute->Text = L"Mute";
			this->btnMute->UseVisualStyleBackColor = true;
			this->btnMute->Click += gcnew System::EventHandler(this, &MyPlayer::btnMute_Click);
			// 
			// trackBoxVol
			// 
			this->trackBoxVol->Location = System::Drawing::Point(185, 220);
			this->trackBoxVol->Maximum = 100;
			this->trackBoxVol->Name = L"trackBoxVol";
			this->trackBoxVol->Size = System::Drawing::Size(174, 45);
			this->trackBoxVol->TabIndex = 8;
			this->trackBoxVol->Value = 50;
			this->trackBoxVol->Scroll += gcnew System::EventHandler(this, &MyPlayer::trackBoxVol_Scroll);
			// 
			// MyPlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 273);
			this->Controls->Add(this->trackBoxVol);
			this->Controls->Add(this->btnMute);
			this->Controls->Add(this->btnBackward);
			this->Controls->Add(this->btnForward);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->tbLoad);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->axWMPlayer);
			this->Name = L"MyPlayer";
			this->Text = L"MyPlayer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWMPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBoxVol))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			if (axWMPlayer->playState != WMPLib::WMPPlayState::wmppsPlaying)
				axWMPlayer->Ctlcontrols->play();
			else 
				axWMPlayer->Ctlcontrols->pause();
		}
		System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {
			axWMPlayer->Ctlcontrols->stop();
		}
		System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			if (tbLoad->Text != "")
			{
				axWMPlayer->URL = tbLoad->Text;
			}
		}
		System::Void btnForward_Click(System::Object^  sender, System::EventArgs^  e) {
			axWMPlayer->Ctlcontrols->fastForward();
		}
		System::Void btnBackward_Click(System::Object^  sender, System::EventArgs^  e) {
			axWMPlayer->Ctlcontrols->fastReverse();
		}
		System::Void trackBoxVol_Scroll(System::Object^  sender, System::EventArgs^  e) {
			if (axWMPlayer->settings->mute)
			{
				axWMPlayer->settings->mute = false;
				btnMute->Text = "Mute";
			}
			axWMPlayer->settings->volume = trackBoxVol->Value;
		}
		System::Void btnMute_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!axWMPlayer->settings->mute)
			{
				axWMPlayer->settings->mute = true;
				btnMute->Text = "Unmute";
			}				
			else
			{
				axWMPlayer->settings->mute = false;
				btnMute->Text = "Mute";
			}
		}
	};
}
