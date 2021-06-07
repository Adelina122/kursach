#pragma once

#include <windows.h>
#include <msclr\marshal_cppstd.h> // ��� marshal_as
#include <fstream> // ��� ������ � ���������� � �����
#include <string>
#include "FlowersIterator.h"
#include "SellerIterator.h"
#include "Administrator.h"
#include "Error.h"
#include <sstream>



namespace kursach {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� FlowerShop
	/// </summary>
	public ref class FlowerShop : public System::Windows::Forms::Form
	{
		Administrator* flowerShop = new Administrator("������� ������");

	public:
		FlowerShop(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~FlowerShop()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;








	private: System::Windows::Forms::Label^ labelProviderChooseTypeOfFlowers;




	private: System::Windows::Forms::Label^ labelProviderChooseSeller;
	private: System::Windows::Forms::Button^ buttonProviderDel;
	private: System::Windows::Forms::Button^ buttonProviderAdd;
	private: System::Windows::Forms::TextBox^ textBoxProviderEnterCountry;

	private: System::Windows::Forms::Label^ labelProviderEnterCountry;
	private: System::Windows::Forms::ComboBox^ comboBoxProviderChooseType;




	private: System::Windows::Forms::ComboBox^ comboBoxProviderChooseSeller;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;































	private: System::Windows::Forms::Button^ buttonPoleListFlowersToProvider;
	private: System::Windows::Forms::Button^ buttonPoleListColourWithSeason;
	private: System::Windows::Forms::Button^ buttonPoleListColourWithCountry;
	private: System::Windows::Forms::Button^ buttonPoleMaxPriceFlowers;
	private: System::Windows::Forms::Button^ buttonPoleProviderWithSort;
	private: System::Windows::Forms::Button^ buttonPoleProviderFromSeller;
	private: System::Windows::Forms::ComboBox^ comboBoxPoleChooseSeason;
	private: System::Windows::Forms::TextBox^ textBoxPoleEnterSort;




	private: System::Windows::Forms::Label^ labelPoleChooseSeason;
	private: System::Windows::Forms::Label^ labelPoleEnterCountry;


	private: System::Windows::Forms::Label^ labelPoleEnterSort;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private: System::Windows::Forms::TextBox^ textBoxProviderEnterNameFlowers;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonPoleClearPoleDataGridView;

	private: System::Windows::Forms::TextBox^ textBoxPoleEnterCountry;
	private: System::Windows::Forms::Button^ buttonPoleClearTablitsa;


	private: System::Windows::Forms::Label^ labelSellerName;
	private: System::Windows::Forms::ComboBox^ comboBoxSellerChooseType;
	private: System::Windows::Forms::Label^ labelSellerTypeOfFlowers;
	private: System::Windows::Forms::TextBox^ textBoxSellerName;


	private: System::Windows::Forms::Button^ buttonSellerAdd;
	private: System::Windows::Forms::Button^ buttonSellerDel;
	private: System::Windows::Forms::Label^ labelFlowersChooseSeller;
	private: System::Windows::Forms::Label^ labelFlowersEnterName;
	private: System::Windows::Forms::Label^ labelFlowersEnterSort;
	private: System::Windows::Forms::ComboBox^ comboBoxFlowersChooseSeller;
	private: System::Windows::Forms::ComboBox^ comboBoxFlowersChooseType;
	private: System::Windows::Forms::TextBox^ textBoxFlowersName;
	private: System::Windows::Forms::Label^ labelFlowersChooseTypeOfFlowers;
	private: System::Windows::Forms::ComboBox^ comboBoxFlowersChooseSeason;
	private: System::Windows::Forms::Label^ labelFlowersChooseSeason;
	private: System::Windows::Forms::Label^ labelFlowersEnterColour;
	private: System::Windows::Forms::TextBox^ textBoxFlowersEnterColour;
	private: System::Windows::Forms::TextBox^ textBoxFlowersEnterSort;
	private: System::Windows::Forms::Label^ labelFlowersEnterPrice;
	private: System::Windows::Forms::Label^ labelFlowersChooseGrowingRoom;
	private: System::Windows::Forms::TextBox^ textBoxFlowersEnterPrice;
	private: System::Windows::Forms::ComboBox^ comboBoxFlowersChooseGrowingRoom;
	private: System::Windows::Forms::Button^ buttonFlowersAdd;
	private: System::Windows::Forms::Button^ buttonFlowersDel;
	private: System::Windows::Forms::Label^ labelPoleZagolovokZaprosy;
	private: System::Windows::Forms::Label^ labelPoleZagolovokSeller;
	private: System::Windows::Forms::Label^ labelPoleZagolovokProvider;
	private: System::Windows::Forms::Label^ labelPoleZagolovokFlowers;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonPoleAllInformation;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;




















































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FlowerShop::typeid));
			this->textBoxProviderEnterNameFlowers = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxProviderChooseType = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxProviderChooseSeller = (gcnew System::Windows::Forms::ComboBox());
			this->buttonProviderDel = (gcnew System::Windows::Forms::Button());
			this->buttonProviderAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxProviderEnterCountry = (gcnew System::Windows::Forms::TextBox());
			this->labelProviderEnterCountry = (gcnew System::Windows::Forms::Label());
			this->labelProviderChooseTypeOfFlowers = (gcnew System::Windows::Forms::Label());
			this->labelProviderChooseSeller = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonPoleListFlowersToProvider = (gcnew System::Windows::Forms::Button());
			this->buttonPoleListColourWithSeason = (gcnew System::Windows::Forms::Button());
			this->buttonPoleListColourWithCountry = (gcnew System::Windows::Forms::Button());
			this->buttonPoleMaxPriceFlowers = (gcnew System::Windows::Forms::Button());
			this->buttonPoleProviderWithSort = (gcnew System::Windows::Forms::Button());
			this->buttonPoleProviderFromSeller = (gcnew System::Windows::Forms::Button());
			this->comboBoxPoleChooseSeason = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxPoleEnterSort = (gcnew System::Windows::Forms::TextBox());
			this->labelPoleChooseSeason = (gcnew System::Windows::Forms::Label());
			this->labelPoleEnterCountry = (gcnew System::Windows::Forms::Label());
			this->labelPoleEnterSort = (gcnew System::Windows::Forms::Label());
			this->buttonPoleClearTablitsa = (gcnew System::Windows::Forms::Button());
			this->textBoxPoleEnterCountry = (gcnew System::Windows::Forms::TextBox());
			this->buttonPoleClearPoleDataGridView = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->labelSellerName = (gcnew System::Windows::Forms::Label());
			this->comboBoxSellerChooseType = (gcnew System::Windows::Forms::ComboBox());
			this->labelSellerTypeOfFlowers = (gcnew System::Windows::Forms::Label());
			this->textBoxSellerName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSellerAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSellerDel = (gcnew System::Windows::Forms::Button());
			this->labelFlowersChooseSeller = (gcnew System::Windows::Forms::Label());
			this->labelFlowersEnterName = (gcnew System::Windows::Forms::Label());
			this->labelFlowersEnterSort = (gcnew System::Windows::Forms::Label());
			this->comboBoxFlowersChooseSeller = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxFlowersChooseType = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxFlowersName = (gcnew System::Windows::Forms::TextBox());
			this->labelFlowersChooseTypeOfFlowers = (gcnew System::Windows::Forms::Label());
			this->comboBoxFlowersChooseSeason = (gcnew System::Windows::Forms::ComboBox());
			this->labelFlowersChooseSeason = (gcnew System::Windows::Forms::Label());
			this->labelFlowersEnterColour = (gcnew System::Windows::Forms::Label());
			this->textBoxFlowersEnterColour = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFlowersEnterSort = (gcnew System::Windows::Forms::TextBox());
			this->labelFlowersEnterPrice = (gcnew System::Windows::Forms::Label());
			this->labelFlowersChooseGrowingRoom = (gcnew System::Windows::Forms::Label());
			this->textBoxFlowersEnterPrice = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxFlowersChooseGrowingRoom = (gcnew System::Windows::Forms::ComboBox());
			this->buttonFlowersAdd = (gcnew System::Windows::Forms::Button());
			this->buttonFlowersDel = (gcnew System::Windows::Forms::Button());
			this->labelPoleZagolovokZaprosy = (gcnew System::Windows::Forms::Label());
			this->labelPoleZagolovokSeller = (gcnew System::Windows::Forms::Label());
			this->labelPoleZagolovokProvider = (gcnew System::Windows::Forms::Label());
			this->labelPoleZagolovokFlowers = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonPoleAllInformation = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxProviderEnterNameFlowers
			// 
			this->textBoxProviderEnterNameFlowers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxProviderEnterNameFlowers->Location = System::Drawing::Point(1624, 524);
			this->textBoxProviderEnterNameFlowers->Name = L"textBoxProviderEnterNameFlowers";
			this->textBoxProviderEnterNameFlowers->Size = System::Drawing::Size(266, 30);
			this->textBoxProviderEnterNameFlowers->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1358, 524);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 27);
			this->label1->TabIndex = 13;
			this->label1->Text = L"�������� ������";
			// 
			// comboBoxProviderChooseType
			// 
			this->comboBoxProviderChooseType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxProviderChooseType->FormattingEnabled = true;
			this->comboBoxProviderChooseType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cut", L"WithRoot" });
			this->comboBoxProviderChooseType->Location = System::Drawing::Point(1624, 469);
			this->comboBoxProviderChooseType->Name = L"comboBoxProviderChooseType";
			this->comboBoxProviderChooseType->Size = System::Drawing::Size(266, 33);
			this->comboBoxProviderChooseType->TabIndex = 12;
			// 
			// comboBoxProviderChooseSeller
			// 
			this->comboBoxProviderChooseSeller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxProviderChooseSeller->FormattingEnabled = true;
			this->comboBoxProviderChooseSeller->Location = System::Drawing::Point(1624, 415);
			this->comboBoxProviderChooseSeller->Name = L"comboBoxProviderChooseSeller";
			this->comboBoxProviderChooseSeller->Size = System::Drawing::Size(266, 33);
			this->comboBoxProviderChooseSeller->TabIndex = 10;
			this->comboBoxProviderChooseSeller->SelectedIndexChanged += gcnew System::EventHandler(this, &FlowerShop::comboBoxProviderChooseSeller_SelectedIndexChanged);
			// 
			// buttonProviderDel
			// 
			this->buttonProviderDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->buttonProviderDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonProviderDel->Location = System::Drawing::Point(1685, 656);
			this->buttonProviderDel->Name = L"buttonProviderDel";
			this->buttonProviderDel->Size = System::Drawing::Size(157, 68);
			this->buttonProviderDel->TabIndex = 9;
			this->buttonProviderDel->Text = L"������� ����������";
			this->buttonProviderDel->UseVisualStyleBackColor = false;
			this->buttonProviderDel->Click += gcnew System::EventHandler(this, &FlowerShop::buttonProviderDel_Click);
			// 
			// buttonProviderAdd
			// 
			this->buttonProviderAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->buttonProviderAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonProviderAdd->Location = System::Drawing::Point(1466, 656);
			this->buttonProviderAdd->Name = L"buttonProviderAdd";
			this->buttonProviderAdd->Size = System::Drawing::Size(153, 69);
			this->buttonProviderAdd->TabIndex = 8;
			this->buttonProviderAdd->Text = L"�������� ����������";
			this->buttonProviderAdd->UseVisualStyleBackColor = false;
			this->buttonProviderAdd->Click += gcnew System::EventHandler(this, &FlowerShop::buttonProviderAdd_Click);
			// 
			// textBoxProviderEnterCountry
			// 
			this->textBoxProviderEnterCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxProviderEnterCountry->Location = System::Drawing::Point(1624, 580);
			this->textBoxProviderEnterCountry->Name = L"textBoxProviderEnterCountry";
			this->textBoxProviderEnterCountry->Size = System::Drawing::Size(266, 30);
			this->textBoxProviderEnterCountry->TabIndex = 7;
			// 
			// labelProviderEnterCountry
			// 
			this->labelProviderEnterCountry->AutoSize = true;
			this->labelProviderEnterCountry->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelProviderEnterCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelProviderEnterCountry->Location = System::Drawing::Point(1358, 585);
			this->labelProviderEnterCountry->Name = L"labelProviderEnterCountry";
			this->labelProviderEnterCountry->Size = System::Drawing::Size(161, 27);
			this->labelProviderEnterCountry->TabIndex = 6;
			this->labelProviderEnterCountry->Text = L"������� ������";
			// 
			// labelProviderChooseTypeOfFlowers
			// 
			this->labelProviderChooseTypeOfFlowers->AutoSize = true;
			this->labelProviderChooseTypeOfFlowers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelProviderChooseTypeOfFlowers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelProviderChooseTypeOfFlowers->Location = System::Drawing::Point(1358, 472);
			this->labelProviderChooseTypeOfFlowers->Name = L"labelProviderChooseTypeOfFlowers";
			this->labelProviderChooseTypeOfFlowers->Size = System::Drawing::Size(217, 27);
			this->labelProviderChooseTypeOfFlowers->TabIndex = 2;
			this->labelProviderChooseTypeOfFlowers->Text = L"�������� ��� ������";
			// 
			// labelProviderChooseSeller
			// 
			this->labelProviderChooseSeller->AutoSize = true;
			this->labelProviderChooseSeller->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelProviderChooseSeller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelProviderChooseSeller->Location = System::Drawing::Point(1358, 418);
			this->labelProviderChooseSeller->Name = L"labelProviderChooseSeller";
			this->labelProviderChooseSeller->Size = System::Drawing::Size(199, 27);
			this->labelProviderChooseSeller->TabIndex = 0;
			this->labelProviderChooseSeller->Text = L"�������� ��������";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 36);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->�������������ToolStripMenuItem1
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(76, 32);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(263, 36);
			this->�������������ToolStripMenuItem->Text = L"��������� ����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::����ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem1
			// 
			this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
			this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(263, 36);
			this->�������������ToolStripMenuItem1->Text = L"��������� ����";
			this->�������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FlowerShop::�������������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(105, 32);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(238, 36);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::����������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(238, 36);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(85, 32);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::�����ToolStripMenuItem_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(1650, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(274, 30);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// buttonPoleListFlowersToProvider
			// 
			this->buttonPoleListFlowersToProvider->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleListFlowersToProvider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleListFlowersToProvider->Location = System::Drawing::Point(12, 868);
			this->buttonPoleListFlowersToProvider->Name = L"buttonPoleListFlowersToProvider";
			this->buttonPoleListFlowersToProvider->Size = System::Drawing::Size(228, 87);
			this->buttonPoleListFlowersToProvider->TabIndex = 5;
			this->buttonPoleListFlowersToProvider->Text = L"������ ������(����) ������� �� �����������";
			this->buttonPoleListFlowersToProvider->UseVisualStyleBackColor = false;
			this->buttonPoleListFlowersToProvider->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleListFlowersToProvider_Click);
			// 
			// buttonPoleListColourWithSeason
			// 
			this->buttonPoleListColourWithSeason->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleListColourWithSeason->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleListColourWithSeason->Location = System::Drawing::Point(266, 868);
			this->buttonPoleListColourWithSeason->Name = L"buttonPoleListColourWithSeason";
			this->buttonPoleListColourWithSeason->Size = System::Drawing::Size(206, 87);
			this->buttonPoleListColourWithSeason->TabIndex = 6;
			this->buttonPoleListColourWithSeason->Text = L"������ ������(�������) � �������� ������� ��������\r\n";
			this->buttonPoleListColourWithSeason->UseVisualStyleBackColor = false;
			this->buttonPoleListColourWithSeason->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleListColourWithSeason_Click);
			// 
			// buttonPoleListColourWithCountry
			// 
			this->buttonPoleListColourWithCountry->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleListColourWithCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleListColourWithCountry->Location = System::Drawing::Point(506, 868);
			this->buttonPoleListColourWithCountry->Name = L"buttonPoleListColourWithCountry";
			this->buttonPoleListColourWithCountry->Size = System::Drawing::Size(214, 87);
			this->buttonPoleListColourWithCountry->TabIndex = 7;
			this->buttonPoleListColourWithCountry->Text = L"������ ������(�������) � ������ ������\r\n";
			this->buttonPoleListColourWithCountry->UseVisualStyleBackColor = false;
			this->buttonPoleListColourWithCountry->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleListColourWithCountry_Click);
			// 
			// buttonPoleMaxPriceFlowers
			// 
			this->buttonPoleMaxPriceFlowers->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleMaxPriceFlowers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleMaxPriceFlowers->Location = System::Drawing::Point(738, 868);
			this->buttonPoleMaxPriceFlowers->Name = L"buttonPoleMaxPriceFlowers";
			this->buttonPoleMaxPriceFlowers->Size = System::Drawing::Size(212, 87);
			this->buttonPoleMaxPriceFlowers->TabIndex = 8;
			this->buttonPoleMaxPriceFlowers->Text = L"�������� � �������� �������� �������\r\n\r\n";
			this->buttonPoleMaxPriceFlowers->UseVisualStyleBackColor = false;
			this->buttonPoleMaxPriceFlowers->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleMaxPriceFlowers_Click);
			// 
			// buttonPoleProviderWithSort
			// 
			this->buttonPoleProviderWithSort->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleProviderWithSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleProviderWithSort->ForeColor = System::Drawing::Color::Black;
			this->buttonPoleProviderWithSort->Location = System::Drawing::Point(974, 868);
			this->buttonPoleProviderWithSort->Name = L"buttonPoleProviderWithSort";
			this->buttonPoleProviderWithSort->Size = System::Drawing::Size(211, 87);
			this->buttonPoleProviderWithSort->TabIndex = 9;
			this->buttonPoleProviderWithSort->Text = L"���������� � �������� ������ ������";
			this->buttonPoleProviderWithSort->UseVisualStyleBackColor = false;
			this->buttonPoleProviderWithSort->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleProviderWithSort_Click);
			// 
			// buttonPoleProviderFromSeller
			// 
			this->buttonPoleProviderFromSeller->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleProviderFromSeller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleProviderFromSeller->ForeColor = System::Drawing::Color::Black;
			this->buttonPoleProviderFromSeller->Location = System::Drawing::Point(1228, 867);
			this->buttonPoleProviderFromSeller->Name = L"buttonPoleProviderFromSeller";
			this->buttonPoleProviderFromSeller->Size = System::Drawing::Size(224, 87);
			this->buttonPoleProviderFromSeller->TabIndex = 10;
			this->buttonPoleProviderFromSeller->Text = L"���������� ������� � ���������\r\n\r\n";
			this->buttonPoleProviderFromSeller->UseVisualStyleBackColor = false;
			this->buttonPoleProviderFromSeller->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleProviderFromSeller_Click);
			// 
			// comboBoxPoleChooseSeason
			// 
			this->comboBoxPoleChooseSeason->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxPoleChooseSeason->FormattingEnabled = true;
			this->comboBoxPoleChooseSeason->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Winter", L"Spring", L"Summer",
					L"Autumn"
			});
			this->comboBoxPoleChooseSeason->Location = System::Drawing::Point(266, 1000);
			this->comboBoxPoleChooseSeason->Name = L"comboBoxPoleChooseSeason";
			this->comboBoxPoleChooseSeason->Size = System::Drawing::Size(192, 33);
			this->comboBoxPoleChooseSeason->TabIndex = 11;
			// 
			// textBoxPoleEnterSort
			// 
			this->textBoxPoleEnterSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxPoleEnterSort->Location = System::Drawing::Point(974, 1000);
			this->textBoxPoleEnterSort->Name = L"textBoxPoleEnterSort";
			this->textBoxPoleEnterSort->Size = System::Drawing::Size(192, 30);
			this->textBoxPoleEnterSort->TabIndex = 14;
			this->textBoxPoleEnterSort->TextChanged += gcnew System::EventHandler(this, &FlowerShop::textBoxPoleEnterSort_TextChanged);
			// 
			// labelPoleChooseSeason
			// 
			this->labelPoleChooseSeason->AutoSize = true;
			this->labelPoleChooseSeason->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleChooseSeason->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelPoleChooseSeason->Location = System::Drawing::Point(278, 967);
			this->labelPoleChooseSeason->Name = L"labelPoleChooseSeason";
			this->labelPoleChooseSeason->Size = System::Drawing::Size(166, 27);
			this->labelPoleChooseSeason->TabIndex = 13;
			this->labelPoleChooseSeason->Text = L"�������� �����";
			// 
			// labelPoleEnterCountry
			// 
			this->labelPoleEnterCountry->AutoSize = true;
			this->labelPoleEnterCountry->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleEnterCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelPoleEnterCountry->Location = System::Drawing::Point(518, 967);
			this->labelPoleEnterCountry->Name = L"labelPoleEnterCountry";
			this->labelPoleEnterCountry->Size = System::Drawing::Size(161, 27);
			this->labelPoleEnterCountry->TabIndex = 15;
			this->labelPoleEnterCountry->Text = L"������� ������";
			// 
			// labelPoleEnterSort
			// 
			this->labelPoleEnterSort->AutoSize = true;
			this->labelPoleEnterSort->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleEnterSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPoleEnterSort->Location = System::Drawing::Point(995, 967);
			this->labelPoleEnterSort->Name = L"labelPoleEnterSort";
			this->labelPoleEnterSort->Size = System::Drawing::Size(142, 27);
			this->labelPoleEnterSort->TabIndex = 16;
			this->labelPoleEnterSort->Text = L"������� ����";
			// 
			// buttonPoleClearTablitsa
			// 
			this->buttonPoleClearTablitsa->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleClearTablitsa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleClearTablitsa->Location = System::Drawing::Point(1698, 877);
			this->buttonPoleClearTablitsa->Name = L"buttonPoleClearTablitsa";
			this->buttonPoleClearTablitsa->Size = System::Drawing::Size(192, 78);
			this->buttonPoleClearTablitsa->TabIndex = 20;
			this->buttonPoleClearTablitsa->Text = L"�������� �������";
			this->buttonPoleClearTablitsa->UseVisualStyleBackColor = false;
			this->buttonPoleClearTablitsa->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleClearTablitsa_Click);
			// 
			// textBoxPoleEnterCountry
			// 
			this->textBoxPoleEnterCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxPoleEnterCountry->Location = System::Drawing::Point(506, 1000);
			this->textBoxPoleEnterCountry->Name = L"textBoxPoleEnterCountry";
			this->textBoxPoleEnterCountry->Size = System::Drawing::Size(192, 30);
			this->textBoxPoleEnterCountry->TabIndex = 19;
			// 
			// buttonPoleClearPoleDataGridView
			// 
			this->buttonPoleClearPoleDataGridView->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleClearPoleDataGridView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleClearPoleDataGridView->Location = System::Drawing::Point(1480, 877);
			this->buttonPoleClearPoleDataGridView->Name = L"buttonPoleClearPoleDataGridView";
			this->buttonPoleClearPoleDataGridView->Size = System::Drawing::Size(192, 78);
			this->buttonPoleClearPoleDataGridView->TabIndex = 17;
			this->buttonPoleClearPoleDataGridView->Text = L"�������� ���� �������";
			this->buttonPoleClearPoleDataGridView->UseVisualStyleBackColor = false;
			this->buttonPoleClearPoleDataGridView->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleClearDataGridView_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(433, 342);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(894, 386);
			this->dataGridView1->TabIndex = 19;
			// 
			// labelSellerName
			// 
			this->labelSellerName->AutoSize = true;
			this->labelSellerName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelSellerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSellerName->Location = System::Drawing::Point(173, 418);
			this->labelSellerName->Name = L"labelSellerName";
			this->labelSellerName->Size = System::Drawing::Size(56, 27);
			this->labelSellerName->TabIndex = 0;
			this->labelSellerName->Text = L"���";
			// 
			// comboBoxSellerChooseType
			// 
			this->comboBoxSellerChooseType->AllowDrop = true;
			this->comboBoxSellerChooseType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxSellerChooseType->FormattingEnabled = true;
			this->comboBoxSellerChooseType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cut", L"WithRoot" });
			this->comboBoxSellerChooseType->Location = System::Drawing::Point(36, 566);
			this->comboBoxSellerChooseType->Name = L"comboBoxSellerChooseType";
			this->comboBoxSellerChooseType->Size = System::Drawing::Size(337, 33);
			this->comboBoxSellerChooseType->TabIndex = 11;
			// 
			// labelSellerTypeOfFlowers
			// 
			this->labelSellerTypeOfFlowers->AutoSize = true;
			this->labelSellerTypeOfFlowers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelSellerTypeOfFlowers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelSellerTypeOfFlowers->Location = System::Drawing::Point(138, 524);
			this->labelSellerTypeOfFlowers->Name = L"labelSellerTypeOfFlowers";
			this->labelSellerTypeOfFlowers->Size = System::Drawing::Size(119, 27);
			this->labelSellerTypeOfFlowers->TabIndex = 4;
			this->labelSellerTypeOfFlowers->Text = L"��� ������";
			// 
			// textBoxSellerName
			// 
			this->textBoxSellerName->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxSellerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSellerName->Location = System::Drawing::Point(36, 467);
			this->textBoxSellerName->Name = L"textBoxSellerName";
			this->textBoxSellerName->Size = System::Drawing::Size(337, 30);
			this->textBoxSellerName->TabIndex = 1;
			// 
			// buttonSellerAdd
			// 
			this->buttonSellerAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->buttonSellerAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSellerAdd->Location = System::Drawing::Point(36, 659);
			this->buttonSellerAdd->Name = L"buttonSellerAdd";
			this->buttonSellerAdd->Size = System::Drawing::Size(152, 69);
			this->buttonSellerAdd->TabIndex = 2;
			this->buttonSellerAdd->Text = L"�������� ��������";
			this->buttonSellerAdd->UseVisualStyleBackColor = false;
			this->buttonSellerAdd->Click += gcnew System::EventHandler(this, &FlowerShop::buttonSellerAdd_Click);
			// 
			// buttonSellerDel
			// 
			this->buttonSellerDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->buttonSellerDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSellerDel->Location = System::Drawing::Point(214, 656);
			this->buttonSellerDel->Name = L"buttonSellerDel";
			this->buttonSellerDel->Size = System::Drawing::Size(159, 71);
			this->buttonSellerDel->TabIndex = 3;
			this->buttonSellerDel->Text = L"������� ��������";
			this->buttonSellerDel->UseVisualStyleBackColor = false;
			this->buttonSellerDel->Click += gcnew System::EventHandler(this, &FlowerShop::buttonSellerDel_Click);
			// 
			// labelFlowersChooseSeller
			// 
			this->labelFlowersChooseSeller->AutoSize = true;
			this->labelFlowersChooseSeller->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersChooseSeller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersChooseSeller->Location = System::Drawing::Point(428, 145);
			this->labelFlowersChooseSeller->Name = L"labelFlowersChooseSeller";
			this->labelFlowersChooseSeller->Size = System::Drawing::Size(199, 27);
			this->labelFlowersChooseSeller->TabIndex = 0;
			this->labelFlowersChooseSeller->Text = L"�������� ��������";
			// 
			// labelFlowersEnterName
			// 
			this->labelFlowersEnterName->AutoSize = true;
			this->labelFlowersEnterName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersEnterName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersEnterName->Location = System::Drawing::Point(428, 245);
			this->labelFlowersEnterName->Name = L"labelFlowersEnterName";
			this->labelFlowersEnterName->Size = System::Drawing::Size(101, 27);
			this->labelFlowersEnterName->TabIndex = 1;
			this->labelFlowersEnterName->Text = L"��������";
			// 
			// labelFlowersEnterSort
			// 
			this->labelFlowersEnterSort->AutoSize = true;
			this->labelFlowersEnterSort->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersEnterSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersEnterSort->Location = System::Drawing::Point(659, 245);
			this->labelFlowersEnterSort->Name = L"labelFlowersEnterSort";
			this->labelFlowersEnterSort->Size = System::Drawing::Size(142, 27);
			this->labelFlowersEnterSort->TabIndex = 3;
			this->labelFlowersEnterSort->Text = L"������� ����";
			// 
			// comboBoxFlowersChooseSeller
			// 
			this->comboBoxFlowersChooseSeller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxFlowersChooseSeller->FormattingEnabled = true;
			this->comboBoxFlowersChooseSeller->Location = System::Drawing::Point(433, 188);
			this->comboBoxFlowersChooseSeller->Name = L"comboBoxFlowersChooseSeller";
			this->comboBoxFlowersChooseSeller->Size = System::Drawing::Size(207, 33);
			this->comboBoxFlowersChooseSeller->TabIndex = 5;
			this->comboBoxFlowersChooseSeller->SelectedIndexChanged += gcnew System::EventHandler(this, &FlowerShop::comboBoxFlowersChooseSeller_SelectedIndexChanged);
			// 
			// comboBoxFlowersChooseType
			// 
			this->comboBoxFlowersChooseType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxFlowersChooseType->FormattingEnabled = true;
			this->comboBoxFlowersChooseType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cut", L"WithRoot" });
			this->comboBoxFlowersChooseType->Location = System::Drawing::Point(664, 188);
			this->comboBoxFlowersChooseType->Name = L"comboBoxFlowersChooseType";
			this->comboBoxFlowersChooseType->Size = System::Drawing::Size(207, 33);
			this->comboBoxFlowersChooseType->TabIndex = 6;
			// 
			// textBoxFlowersName
			// 
			this->textBoxFlowersName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFlowersName->Location = System::Drawing::Point(433, 289);
			this->textBoxFlowersName->Name = L"textBoxFlowersName";
			this->textBoxFlowersName->Size = System::Drawing::Size(207, 30);
			this->textBoxFlowersName->TabIndex = 8;
			// 
			// labelFlowersChooseTypeOfFlowers
			// 
			this->labelFlowersChooseTypeOfFlowers->AutoSize = true;
			this->labelFlowersChooseTypeOfFlowers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersChooseTypeOfFlowers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersChooseTypeOfFlowers->Location = System::Drawing::Point(659, 145);
			this->labelFlowersChooseTypeOfFlowers->Name = L"labelFlowersChooseTypeOfFlowers";
			this->labelFlowersChooseTypeOfFlowers->Size = System::Drawing::Size(217, 27);
			this->labelFlowersChooseTypeOfFlowers->TabIndex = 9;
			this->labelFlowersChooseTypeOfFlowers->Text = L"�������� ��� ������";
			// 
			// comboBoxFlowersChooseSeason
			// 
			this->comboBoxFlowersChooseSeason->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxFlowersChooseSeason->FormattingEnabled = true;
			this->comboBoxFlowersChooseSeason->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Winter", L"Spring", L"Summer",
					L"Autumn"
			});
			this->comboBoxFlowersChooseSeason->Location = System::Drawing::Point(890, 186);
			this->comboBoxFlowersChooseSeason->Name = L"comboBoxFlowersChooseSeason";
			this->comboBoxFlowersChooseSeason->Size = System::Drawing::Size(207, 33);
			this->comboBoxFlowersChooseSeason->TabIndex = 10;
			// 
			// labelFlowersChooseSeason
			// 
			this->labelFlowersChooseSeason->AutoSize = true;
			this->labelFlowersChooseSeason->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersChooseSeason->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersChooseSeason->Location = System::Drawing::Point(885, 145);
			this->labelFlowersChooseSeason->Name = L"labelFlowersChooseSeason";
			this->labelFlowersChooseSeason->Size = System::Drawing::Size(166, 27);
			this->labelFlowersChooseSeason->TabIndex = 11;
			this->labelFlowersChooseSeason->Text = L"�������� �����";
			// 
			// labelFlowersEnterColour
			// 
			this->labelFlowersEnterColour->AutoSize = true;
			this->labelFlowersEnterColour->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersEnterColour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersEnterColour->Location = System::Drawing::Point(885, 245);
			this->labelFlowersEnterColour->Name = L"labelFlowersEnterColour";
			this->labelFlowersEnterColour->Size = System::Drawing::Size(143, 27);
			this->labelFlowersEnterColour->TabIndex = 12;
			this->labelFlowersEnterColour->Text = L"������� ����";
			// 
			// textBoxFlowersEnterColour
			// 
			this->textBoxFlowersEnterColour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxFlowersEnterColour->Location = System::Drawing::Point(890, 289);
			this->textBoxFlowersEnterColour->Name = L"textBoxFlowersEnterColour";
			this->textBoxFlowersEnterColour->Size = System::Drawing::Size(207, 30);
			this->textBoxFlowersEnterColour->TabIndex = 13;
			// 
			// textBoxFlowersEnterSort
			// 
			this->textBoxFlowersEnterSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxFlowersEnterSort->Location = System::Drawing::Point(664, 289);
			this->textBoxFlowersEnterSort->Name = L"textBoxFlowersEnterSort";
			this->textBoxFlowersEnterSort->Size = System::Drawing::Size(207, 30);
			this->textBoxFlowersEnterSort->TabIndex = 14;
			// 
			// labelFlowersEnterPrice
			// 
			this->labelFlowersEnterPrice->AutoSize = true;
			this->labelFlowersEnterPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersEnterPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersEnterPrice->Location = System::Drawing::Point(1115, 145);
			this->labelFlowersEnterPrice->Name = L"labelFlowersEnterPrice";
			this->labelFlowersEnterPrice->Size = System::Drawing::Size(141, 27);
			this->labelFlowersEnterPrice->TabIndex = 15;
			this->labelFlowersEnterPrice->Text = L"������� ����";
			// 
			// labelFlowersChooseGrowingRoom
			// 
			this->labelFlowersChooseGrowingRoom->AutoSize = true;
			this->labelFlowersChooseGrowingRoom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFlowersChooseGrowingRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelFlowersChooseGrowingRoom->Location = System::Drawing::Point(1115, 245);
			this->labelFlowersChooseGrowingRoom->Name = L"labelFlowersChooseGrowingRoom";
			this->labelFlowersChooseGrowingRoom->Size = System::Drawing::Size(223, 27);
			this->labelFlowersChooseGrowingRoom->TabIndex = 16;
			this->labelFlowersChooseGrowingRoom->Text = L"�������� ���������";
			// 
			// textBoxFlowersEnterPrice
			// 
			this->textBoxFlowersEnterPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxFlowersEnterPrice->Location = System::Drawing::Point(1120, 191);
			this->textBoxFlowersEnterPrice->Name = L"textBoxFlowersEnterPrice";
			this->textBoxFlowersEnterPrice->Size = System::Drawing::Size(207, 30);
			this->textBoxFlowersEnterPrice->TabIndex = 17;
			// 
			// comboBoxFlowersChooseGrowingRoom
			// 
			this->comboBoxFlowersChooseGrowingRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxFlowersChooseGrowingRoom->FormattingEnabled = true;
			this->comboBoxFlowersChooseGrowingRoom->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Greenhouse", L"Orangery",
					L"OpenGround"
			});
			this->comboBoxFlowersChooseGrowingRoom->Location = System::Drawing::Point(1120, 286);
			this->comboBoxFlowersChooseGrowingRoom->Name = L"comboBoxFlowersChooseGrowingRoom";
			this->comboBoxFlowersChooseGrowingRoom->Size = System::Drawing::Size(207, 33);
			this->comboBoxFlowersChooseGrowingRoom->TabIndex = 18;
			// 
			// buttonFlowersAdd
			// 
			this->buttonFlowersAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->buttonFlowersAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFlowersAdd->Location = System::Drawing::Point(615, 62);
			this->buttonFlowersAdd->Name = L"buttonFlowersAdd";
			this->buttonFlowersAdd->Size = System::Drawing::Size(184, 65);
			this->buttonFlowersAdd->TabIndex = 19;
			this->buttonFlowersAdd->Text = L"�������� �����";
			this->buttonFlowersAdd->UseVisualStyleBackColor = false;
			this->buttonFlowersAdd->Click += gcnew System::EventHandler(this, &FlowerShop::buttonFlowersAdd_Click);
			// 
			// buttonFlowersDel
			// 
			this->buttonFlowersDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->buttonFlowersDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFlowersDel->Location = System::Drawing::Point(1014, 62);
			this->buttonFlowersDel->Name = L"buttonFlowersDel";
			this->buttonFlowersDel->Size = System::Drawing::Size(171, 65);
			this->buttonFlowersDel->TabIndex = 20;
			this->buttonFlowersDel->Text = L"������� �����";
			this->buttonFlowersDel->UseVisualStyleBackColor = false;
			this->buttonFlowersDel->Click += gcnew System::EventHandler(this, &FlowerShop::buttonFlowersDel_Click);
			// 
			// labelPoleZagolovokZaprosy
			// 
			this->labelPoleZagolovokZaprosy->AutoSize = true;
			this->labelPoleZagolovokZaprosy->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleZagolovokZaprosy->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPoleZagolovokZaprosy->Location = System::Drawing::Point(874, 802);
			this->labelPoleZagolovokZaprosy->Name = L"labelPoleZagolovokZaprosy";
			this->labelPoleZagolovokZaprosy->Size = System::Drawing::Size(150, 46);
			this->labelPoleZagolovokZaprosy->TabIndex = 21;
			this->labelPoleZagolovokZaprosy->Text = L"�������";
			// 
			// labelPoleZagolovokSeller
			// 
			this->labelPoleZagolovokSeller->AutoSize = true;
			this->labelPoleZagolovokSeller->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleZagolovokSeller->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPoleZagolovokSeller->Location = System::Drawing::Point(126, 342);
			this->labelPoleZagolovokSeller->Name = L"labelPoleZagolovokSeller";
			this->labelPoleZagolovokSeller->Size = System::Drawing::Size(169, 46);
			this->labelPoleZagolovokSeller->TabIndex = 22;
			this->labelPoleZagolovokSeller->Text = L"��������";
			// 
			// labelPoleZagolovokProvider
			// 
			this->labelPoleZagolovokProvider->AutoSize = true;
			this->labelPoleZagolovokProvider->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleZagolovokProvider->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPoleZagolovokProvider->Location = System::Drawing::Point(1506, 342);
			this->labelPoleZagolovokProvider->Name = L"labelPoleZagolovokProvider";
			this->labelPoleZagolovokProvider->Size = System::Drawing::Size(228, 46);
			this->labelPoleZagolovokProvider->TabIndex = 23;
			this->labelPoleZagolovokProvider->Text = L"����������";
			// 
			// labelPoleZagolovokFlowers
			// 
			this->labelPoleZagolovokFlowers->AutoSize = true;
			this->labelPoleZagolovokFlowers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPoleZagolovokFlowers->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPoleZagolovokFlowers->Location = System::Drawing::Point(840, 62);
			this->labelPoleZagolovokFlowers->Name = L"labelPoleZagolovokFlowers";
			this->labelPoleZagolovokFlowers->Size = System::Drawing::Size(126, 46);
			this->labelPoleZagolovokFlowers->TabIndex = 24;
			this->labelPoleZagolovokFlowers->Text = L"�����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1785, 1012);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 44);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Adelina";
			// 
			// buttonPoleAllInformation
			// 
			this->buttonPoleAllInformation->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPoleAllInformation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonPoleAllInformation->Location = System::Drawing::Point(1480, 961);
			this->buttonPoleAllInformation->Name = L"buttonPoleAllInformation";
			this->buttonPoleAllInformation->Size = System::Drawing::Size(192, 78);
			this->buttonPoleAllInformation->TabIndex = 26;
			this->buttonPoleAllInformation->Text = L"��� ����������";
			this->buttonPoleAllInformation->UseVisualStyleBackColor = false;
			this->buttonPoleAllInformation->Click += gcnew System::EventHandler(this, &FlowerShop::buttonPoleAllInformation_Click);
			// 
			// FlowerShop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->buttonPoleAllInformation);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelPoleZagolovokFlowers);
			this->Controls->Add(this->labelPoleZagolovokProvider);
			this->Controls->Add(this->labelPoleZagolovokSeller);
			this->Controls->Add(this->labelPoleZagolovokZaprosy);
			this->Controls->Add(this->buttonFlowersDel);
			this->Controls->Add(this->buttonProviderDel);
			this->Controls->Add(this->buttonFlowersAdd);
			this->Controls->Add(this->textBoxProviderEnterNameFlowers);
			this->Controls->Add(this->comboBoxFlowersChooseGrowingRoom);
			this->Controls->Add(this->buttonProviderAdd);
			this->Controls->Add(this->labelFlowersChooseGrowingRoom);
			this->Controls->Add(this->textBoxFlowersEnterPrice);
			this->Controls->Add(this->buttonSellerDel);
			this->Controls->Add(this->textBoxProviderEnterCountry);
			this->Controls->Add(this->labelFlowersEnterPrice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxFlowersEnterColour);
			this->Controls->Add(this->textBoxFlowersEnterSort);
			this->Controls->Add(this->labelFlowersEnterColour);
			this->Controls->Add(this->labelProviderEnterCountry);
			this->Controls->Add(this->comboBoxFlowersChooseSeason);
			this->Controls->Add(this->labelFlowersChooseSeason);
			this->Controls->Add(this->buttonSellerAdd);
			this->Controls->Add(this->comboBoxProviderChooseType);
			this->Controls->Add(this->comboBoxSellerChooseType);
			this->Controls->Add(this->comboBoxProviderChooseSeller);
			this->Controls->Add(this->labelFlowersEnterSort);
			this->Controls->Add(this->comboBoxFlowersChooseType);
			this->Controls->Add(this->labelFlowersChooseTypeOfFlowers);
			this->Controls->Add(this->labelSellerName);
			this->Controls->Add(this->textBoxFlowersName);
			this->Controls->Add(this->labelSellerTypeOfFlowers);
			this->Controls->Add(this->textBoxPoleEnterSort);
			this->Controls->Add(this->comboBoxFlowersChooseSeller);
			this->Controls->Add(this->labelFlowersEnterName);
			this->Controls->Add(this->labelProviderChooseTypeOfFlowers);
			this->Controls->Add(this->textBoxSellerName);
			this->Controls->Add(this->labelPoleEnterSort);
			this->Controls->Add(this->labelFlowersChooseSeller);
			this->Controls->Add(this->textBoxPoleEnterCountry);
			this->Controls->Add(this->labelProviderChooseSeller);
			this->Controls->Add(this->labelPoleEnterCountry);
			this->Controls->Add(this->buttonPoleClearTablitsa);
			this->Controls->Add(this->buttonPoleClearPoleDataGridView);
			this->Controls->Add(this->labelPoleChooseSeason);
			this->Controls->Add(this->comboBoxPoleChooseSeason);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonPoleProviderFromSeller);
			this->Controls->Add(this->buttonPoleListFlowersToProvider);
			this->Controls->Add(this->buttonPoleProviderWithSort);
			this->Controls->Add(this->buttonPoleListColourWithSeason);
			this->Controls->Add(this->buttonPoleMaxPriceFlowers);
			this->Controls->Add(this->buttonPoleListColourWithCountry);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FlowerShop";
			this->Text = L"������� ������";
			this->Load += gcnew System::EventHandler(this, &FlowerShop::FlowerShop_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//---------------------------------------------������ ���������----------------------------------------------------
	private: System::Void FlowerShop_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("\t�� ������������ ���������!\n��� ��������� ��������� ���������� ������� 'C������' -> '����������'", "����� ����������!");

	}

		   //---------------------------------------------���������� ������ ��������----------------------------------------------------
	private: System::Void buttonSellerAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{ //������� ���������� ��� �������� ������ �������� � ���� ������
			string name = msclr::interop::marshal_as<std::string>(textBoxSellerName->Text); // interop - ������������� ����
			string type = msclr::interop::marshal_as<std::string>(comboBoxSellerChooseType->Text); // marshal_as - ���������� ������ �������������� ������ ����� ������������ � ������������ ������

			flowerShop->addSeller(new Seller(name, type)); //��������� ������ ��������
			flowerShop->sellersToComboBox(comboBoxProviderChooseSeller); //��������� ���������� ��� ��������� ������ �������� ��� ����������
			flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller); //��� ������
			flowerShop->addTypeOfFlowers(new Seller(name, type)); //���������� ������ ���� ������
			flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType); //��������� ���������� ��� ��������� ������ ������
			flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);

			MessageBox::Show("����� �������� ������� ��������!", "�������� ���������!"); //���� �������� �������-������������� ����
		}
		catch (...) {
			MessageBox::Show("���������� ��������� ������!", "������!"); //����� �������������, ��� �������� �� �������
		}
	}

		   //---------------------------------------------�������� ��������--------------------------------------------------------------
	private: System::Void buttonSellerDel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string name = msclr::interop::marshal_as<std::string>(textBoxSellerName->Text);
			if (!flowerShop->deleteSeller(name)) //���� ������ �������� �� ����������, �� ����������� ������
				throw SellerError("�������� ����������!\n������ �������� �� ����������!");

			flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);//��������� ���������� ��� ��������� ������ �������� ��� ����������
			flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);
			MessageBox::Show("�������� ������� ������.", "�������� �������!");
		}
		catch (SellerError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!"); //����� ����������� ������, ���� ������ �������� �� ����������
		}
		catch (...) {
			MessageBox::Show("���������� ��������� ������!", "������!"); //��������� ������
		}

	}

		   //---------------------------------------------���������� ����� ������----------------------------------------------------
	private: System::Void buttonFlowersAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseSeller->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxFlowersName->Text);
			string type = msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseType->Text);
			string sort = msclr::interop::marshal_as<std::string>(textBoxFlowersEnterSort->Text);
			string season = msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseSeason->Text);
			string colour = msclr::interop::marshal_as<std::string>(textBoxFlowersEnterColour->Text);
			int price = System::Convert::ToInt16(textBoxFlowersEnterPrice->Text);
			string growingRoom = msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseGrowingRoom->Text);

			//������� ������ ���� Flowers, � ������� ������������� ��� ������(�������� � �����������) - ���������� ��� � ������
			Flowers* element = getFlowersObject(type, name, sort, season, colour, price, growingRoom);
			if (!element) //���� ���������� ���� ������ �� ���������� - ������ �� ��������� � ����������� ����������
				throw FlowersError("������ ���� ������ �� �����������!");
			//���� ������ ������, �� ���������, ���������� �� ����� ��������, � ����� ��������� �����
			flowerShop->findSeller(seller)->addFlowers(element);

			MessageBox::Show("����� ������� ���������", "�������� ���������!");
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!"); //����� ����������� ������, ���� ����� ������ �� ����������
		}
		catch (...) {
			MessageBox::Show("���������� ��������� ������!", "������!"); //������ ������
		}
	}

		   //---------------------------------------------�������� ������ �� �������� --------------------------------------------
	private: System::Void buttonFlowersDel_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseSeller->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxFlowersName->Text);
			//������� ���������� ��� ��������, ���������� �� ����� ��������.
			//���� ���������� - ������� �����
			bool delFlowers = flowerShop->findSeller(seller)->deleteFlowers(name);
			if (!delFlowers) //���� �� ���������� - ����������� ������
				throw FlowersError("������ ���� ������ �� �����������!");

			MessageBox::Show("����� ������� �������", "�������� ���������!");
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("���������� ��������� ������!", "������!");
		}
	}

		   //---------------------------------------------���������� ������ ����������----------------------------------------------------
	private: System::Void buttonProviderAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxProviderChooseSeller->Text);
			string type = msclr::interop::marshal_as<std::string>(comboBoxProviderChooseType->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxProviderEnterNameFlowers->Text);
			string country = msclr::interop::marshal_as<std::string>(textBoxProviderEnterCountry->Text);
			//������� ������ ���� Provider, � ������� ������������� ��� ������(�������� � �����������) - ���������� ��� � ������
			Provider* element = getProviderObject(type, name, country);
			//���� ������ ������, �� ���������, ���������� �� ����� �������� � �������� ������, � ����� ��������� ����������
			flowerShop->findSeller(seller)->findFlowers(name)->addProvider(element);

			MessageBox::Show("��������� ������� ��������", "�������� ���������!");
		}
		catch (ProviderError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("���������� ��������� ������!", "������!");
		}
	}

		   //---------------------------------------------�������� ����������----------------------------------------------------
	private: System::Void buttonProviderDel_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxProviderChooseSeller->Text);
			string country = msclr::interop::marshal_as<std::string>(textBoxProviderEnterCountry->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxProviderEnterNameFlowers->Text);
			//���� ����� �������� � �������������� ������� �� ���������� - ����������� ����������
			if (!flowerShop->findSeller(seller)->findFlowers(name)->deleteProvider(country))
				throw ProviderError("������ ���������� �� ����������!");
			//���� ����� �������� � �������������� ������� ���������� - ������� ����������
			MessageBox::Show("��������� ������� ������", "�������� ���������!");
		}
		catch (ProviderError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("���������� ��������� ������!", "������!");
		}
	}

		   //---------------------------------------------������:����� ������� �� ���������----------------------------------------------------
	private: System::Void buttonPoleListFlowersToProvider_Click(System::Object^ sender, System::EventArgs^ e) {
		//������� ���� ��� �������
		dataGridView1->Columns->Clear();
		//������� ������ ������� � �������� ��� �, ������ ����� ������
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "�";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//������� ������ ������� � �������� ��� Seller, ������ ����� ���������
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 240;
		dataGridView1->Columns->Add(seller);
		//������� ������ ������� � �������� ��� Flowers, ������ �������� ������
		DataGridViewTextBoxColumn^ flowers;
		flowers = gcnew DataGridViewTextBoxColumn();
		flowers->Name = "flowers";
		flowers->HeaderText = "Flowers";
		flowers->Width = 241;
		dataGridView1->Columns->Add(flowers);
		//������� ����, ��� ���������� ��� �������� Seller � ������� ����������
		int i = 0;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			dataGridView1->Rows->Add(); //��������� ������
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //����������� ������� ������� �����
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str()); //����������� ������� ������� ��� ��������
			FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
			//���� ����� �������(������� �����), �������, ��� � ��������� �������� ��� ������
			if (iterFlowers.isEndContainer())
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-��� ������-");
			//���� ������� �� ����� - ���������� �� ��� � ���������� �����
			else for (; !iterFlowers.isEndContainer(); iterFlowers.nextElement())
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getName().c_str()) + ", ";
			i++;
		}

	}

		   //---------------------------------------------������:�����(�������) ��������� ������----------------------------------------------------
	private: System::Void buttonPoleListColourWithSeason_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			//���� �� ������ �����, ����������� ����������
			if (comboBoxPoleChooseSeason->Text == "")
				throw FlowersError("����� �� ������!.");
			//������� ���� ��� �������
			dataGridView1->Columns->Clear();
			//������� ������ ������� � �������� ��� �, ������ ����� ������
			DataGridViewTextBoxColumn^ number;
			number = gcnew DataGridViewTextBoxColumn();
			number->Name = "Number";
			number->HeaderText = "�";
			number->Width = 50;
			dataGridView1->Columns->Add(number);
			//������� ������ ������� � �������� ��� Season, ������ ����� ��������
			DataGridViewTextBoxColumn^ season;
			season = gcnew DataGridViewTextBoxColumn();
			season->Name = "season";
			season->HeaderText = "Season";
			season->Width = 240;
			dataGridView1->Columns->Add(season);
			//������� ������ ������� � �������� ��� Colours, ������ ���� ������
			DataGridViewTextBoxColumn^ colour;
			colour = gcnew DataGridViewTextBoxColumn();
			colour->Name = "colour";
			colour->HeaderText = "Colours";
			colour->Width = 241;
			dataGridView1->Columns->Add(colour);
			//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
			int i = 0;
			bool seasonExist = false; //������� ������� ���������� ��� ������������ ������������� ������������� ������ � ����� 
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
			{
				dataGridView1->Rows->Add(); //��������� ������
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //��������� � ������ ������� ����� ������
				//������� ����, ��� ���������� ��� �������� ������� Flowers � ������� ����������
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement())
				{ //���� ������������ ����� = ������ ���������� � ����������
					if (gcnew String(iterFlowers.getIterator()->getSeason().c_str()) == comboBoxPoleChooseSeason->Text)
					{ //���������� ������ � �������
						dataGridView1->Rows[0]->Cells[1]->Value = gcnew String(iterFlowers.getIterator()->getSeason().c_str());
						dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getColour().c_str()) + " ";
						seasonExist = true; //������ �������� � ����������, ������ ���������� - true
					}

				}
				i++;
			}
			if (!seasonExist)
			{ //����� ���������� ��������� � ���������� ����� � ���������� � �������, ��� ������ � ����� �����������
				dataGridView1->Rows[0]->Cells[1]->Value += gcnew String(comboBoxPoleChooseSeason->Text);
				dataGridView1->Rows[0]->Cells[2]->Value += gcnew String("-������ �����������-");
			}
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("������ ����������!", "������!");
		}

	}

		   //---------------------------------------------������:�����(�������) �������� ������----------------------------------------------------
	private: System::Void buttonPoleListColourWithCountry_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{ //���� �� ������� ������, ����������� ����������
			if (textBoxPoleEnterCountry->Text == "")
				throw FlowersError("������ �� �������!.");
			//������� ���� ��� �������
			dataGridView1->Columns->Clear();
			//������� ������ ������� � �������� ��� �, ������ ����� ������
			DataGridViewTextBoxColumn^ number;
			number = gcnew DataGridViewTextBoxColumn();
			number->Name = "Number";
			number->HeaderText = "�";
			number->Width = 50;
			dataGridView1->Columns->Add(number);
			//������� ������ ������� � �������� ��� Country, ������ �������� ������ ����������
			DataGridViewTextBoxColumn^ country;
			country = gcnew DataGridViewTextBoxColumn();
			country->Name = "country";
			country->HeaderText = "Country";
			country->Width = 240;
			dataGridView1->Columns->Add(country);
			//������� ������ ������� � �������� ��� Colours, ������ �������� ����� ������
			DataGridViewTextBoxColumn^ colour;
			colour = gcnew DataGridViewTextBoxColumn();
			colour->Name = "colour";
			colour->HeaderText = "Colours";
			colour->Width = 241;
			dataGridView1->Columns->Add(colour);
			//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
			int i = 0;
			bool countryExist = false;
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
			{
				dataGridView1->Rows->Add(); //��������� ������
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //��������� � ������ ������� ����� ������
				//������� ����, ��� ���������� ��� �������� ������� Flowers � ������� ����������
				//� ������ ���� ������� Provider
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
					for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer(); iterProvider.nextElement())
					{ //���� ������������ ������ = ������ ���������� � ����������
						if (gcnew String(iterProvider.getIterator()->getCountry().c_str()) == textBoxPoleEnterCountry->Text)
						{ //���������� ������ � �������
							dataGridView1->Rows[0]->Cells[1]->Value = gcnew String(iterProvider.getIterator()->getCountry().c_str());
							dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getColour().c_str()) + ", ";
							countryExist = true; //������ �������� � ����������, ������ ���������� - true
						}
					}
				}
				i++;
			}
			if (!countryExist)
			{ //����� ���������� ��������� � ���������� ������ � ���������� � �������, ��� ������ � ����� �����������
				dataGridView1->Rows[0]->Cells[1]->Value += gcnew String(textBoxPoleEnterCountry->Text);
				dataGridView1->Rows[0]->Cells[2]->Value += gcnew String("-������ �����������-");
			}
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("������ ����������!", "������!");
		}
	}

		   //---------------------------------------------������:�������� � ���� ����� ������----------------------------------------------------
	private: System::Void buttonPoleMaxPriceFlowers_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear(); //������� ���� ��� �������
		//������� ������ ������� � �������� ��� �, ������ ����� ������
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "�";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//������� ������ ������� � �������� ��� Seller, ������ ��� ��������
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 160;
		dataGridView1->Columns->Add(seller);
		//������� ������ ������� � �������� ��� Flowers, ������ �������� ������
		DataGridViewTextBoxColumn^ flowers;
		flowers = gcnew DataGridViewTextBoxColumn();
		flowers->Name = "flowers";
		flowers->HeaderText = "Flowers";
		flowers->Width = 160;
		dataGridView1->Columns->Add(flowers);
		//������� ��������� ������� � �������� ��� Price, ������ ������������ ��������� ������
		DataGridViewTextBoxColumn^ price;
		price = gcnew DataGridViewTextBoxColumn();
		price->Name = "price";
		price->HeaderText = "Price";
		price->Width = 161;
		dataGridView1->Columns->Add(price);
		//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
		int i = 0;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			bool flowersExist = false; //������� ������� ���������� ��� ������������ ������������� ������ � ������:�������� � ����
			dataGridView1->Rows->Add(); //��������� ������
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //���������� � ������ ������� ����� ������
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str()); //���������� �� ������ ������� ��� ��������
			FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
			int max = 1;
			//������� ����, ��� ���������� ��� �������� ������� Flowers � ������� ����������
			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement())
			{ //������� ���������� temp, ������� ������ ���� ������  
				int temp = iterFlowers.getIterator()->getPrice();
				if (temp > max) //���� ������� ���� ������ �� ������������
					max = temp; // �� ����������� ������������ �������
				flowersExist = true; //������ ������ ����������
			}
			if (flowersExist)
			{ //���������� ������ � �������
				dataGridView1->Rows[i]->Cells[3]->Value = System::Convert::ToString(max);
				dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(iterFlowers.getIterator()->getName().c_str());
			}
			if (!flowersExist)
			{ //���� ������ ��� - ���������� � ������� ���������� � �� ����������
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-������ �����������-");
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String("-������ �����������-");
			}
			i++;
		}

	}

		   //---------------------------------------------������:���������� � �������� ������----------------------------------------------------
	private: System::Void buttonPoleProviderWithSort_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{//���� �� ������ ����, ����������� ����������
			if (textBoxPoleEnterSort->Text == "")
				throw FlowersError("���� �� ������!.");
			//������� ���� ��� �������
			dataGridView1->Columns->Clear();
			//������� ������ ������� � �������� ��� �, ������ ����� ������
			DataGridViewTextBoxColumn^ number;
			number = gcnew DataGridViewTextBoxColumn();
			number->Name = "Number";
			number->HeaderText = "�";
			number->Width = 50;
			dataGridView1->Columns->Add(number);
			//������� ������ ������� � �������� ��� Sort, ������ ���� ������
			DataGridViewTextBoxColumn^ sort;
			sort = gcnew DataGridViewTextBoxColumn();
			sort->Name = "sort";
			sort->HeaderText = "Sort";
			sort->Width = 160;
			dataGridView1->Columns->Add(sort);
			//������� ������ ������� � �������� ��� Provider, ������ ��� ��������
			DataGridViewTextBoxColumn^ provider;
			provider = gcnew DataGridViewTextBoxColumn();
			provider->Name = "provider";
			provider->HeaderText = "Provider";
			provider->Width = 160;
			dataGridView1->Columns->Add(provider);
			//������� ��������� ������� � �������� ��� Country, ������ ������ ����������
			DataGridViewTextBoxColumn^ country;
			country = gcnew DataGridViewTextBoxColumn();
			country->Name = "country";
			country->HeaderText = "Country";
			country->Width = 161;
			dataGridView1->Columns->Add(country);
			//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
			int i = 0;
			bool isRunning = false;
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
			{
				dataGridView1->Rows->Add(); //��������� ������
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();  //���������� � ������ ������� ����� ������
				//dataGridView1->Rows[i]->Cells[1]->obj = gcnew String(iterSeller.getIterator()->getName().c_str());
				//FlowersContainerIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
				//������� ����, ��� ���������� ��� �������� ������� Flowers � ������� ����������
				//� ������ ���� ������� Provider
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
					for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer(); iterProvider.nextElement())
					{ //���� ������������ ���� = ����� ���������� � ����������
						if (gcnew String(iterFlowers.getIterator()->getSort().c_str()) == textBoxPoleEnterSort->Text)
						{ //��������� �������
							dataGridView1->Rows[0]->Cells[1]->Value = gcnew String(iterFlowers.getIterator()->getSort().c_str());
							dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterSeller.getIterator()->getName().c_str()) + ", ";
							dataGridView1->Rows[i]->Cells[3]->Value += gcnew String(iterProvider.getIterator()->getCountry().c_str()) + ", ";
							isRunning = true; //������ �������� � ����������, ������ ���������� - true
						}

					}
				}
				i++;
			}
			if (!isRunning)
			{ //����� ���������� ��������� � ���������� ���� � ���������� � �������, ��� ������ � ���������� �����������
				dataGridView1->Rows[i]->Cells[1]->Value += gcnew String(textBoxPoleEnterSort->Text);
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-������ �����������-");
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String("-������ �����������-");
			}
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("������ ����������!", "������!");
		}
	}

		   //---------------------------------------------������:���������� ������� � ���������----------------------------------------------------
	private: System::Void buttonPoleProviderFromSeller_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear(); //������� ���� ��� �������
		//������� ������ ������� � �������� ��� �, ������ ����� ������
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "�";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//������� ������ ������� � �������� ��� Seller, ������ ��� ��������
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 240;
		dataGridView1->Columns->Add(seller);
		//������� ������ ������� � �������� ��� Provider country, ������ ������-����������
		DataGridViewTextBoxColumn^ country;
		country = gcnew DataGridViewTextBoxColumn();
		country->Name = "country";
		country->HeaderText = "Provider country";
		country->Width = 241;
		dataGridView1->Columns->Add(country);
		//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
		int i = 0;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			bool isRunning = false;
			//for (FlowersContainerIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
			//	for (ProviderContainerIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer(); iterProvider.nextElement())
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str());
			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
				for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer(); iterProvider.nextElement())
				{ //��������� ������� �������
					isRunning = true;
					dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterProvider.getIterator()->getCountry().c_str()) + ", ";
				}
				if (!isRunning) //��������� ������� �����������, ��� ��������� ������
					dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-��� ��������-");
				i++;
			}
		}
	}

		   //---------------------------------------------������:��� ����������----------------------------------------------------
	private: System::Void buttonPoleAllInformation_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear(); //������� ���� ��� �������
		//������� ������ ������� � �������� ��� �, ������ ����� ������
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "�";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//������� ������ ������� Seller, ������ ��� ��������
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 100;
		dataGridView1->Columns->Add(seller);
		//������� ������ ������� Type, ������ ��� ������
		DataGridViewTextBoxColumn^ typeOfFlowers;
		typeOfFlowers = gcnew DataGridViewTextBoxColumn();
		typeOfFlowers->Name = "typeOfFlowers";
		typeOfFlowers->HeaderText = "Type";
		typeOfFlowers->Width = 75;
		dataGridView1->Columns->Add(typeOfFlowers);
		//������� ������ ������� Name, ������ �������� ������
		DataGridViewTextBoxColumn^ name;
		name = gcnew DataGridViewTextBoxColumn();
		name->Name = "name";
		name->HeaderText = "Name";
		name->Width = 70;
		dataGridView1->Columns->Add(name);
		//������� ��������� ������� Sort, ������ ���� ������
		DataGridViewTextBoxColumn^ sort;
		sort = gcnew DataGridViewTextBoxColumn();
		sort->Name = "sort";
		sort->HeaderText = "Sort";
		sort->Width = 70;
		dataGridView1->Columns->Add(sort);
		//������� ����� ������� Season, ������ ����� �������� ������
		DataGridViewTextBoxColumn^ season;
		season = gcnew DataGridViewTextBoxColumn();
		season->Name = "season";
		season->HeaderText = "Season";
		season->Width = 75;
		dataGridView1->Columns->Add(season);
		//������� ������ ������� Colour, ������ ���� ������
		DataGridViewTextBoxColumn^ colour;
		colour = gcnew DataGridViewTextBoxColumn();
		colour->Name = "colour";
		colour->HeaderText = "Colour";
		colour->Width = 75;
		dataGridView1->Columns->Add(colour);
		//������� ������� ������� Price, ������ ���� ������
		DataGridViewTextBoxColumn^ price;
		price = gcnew DataGridViewTextBoxColumn();
		price->Name = "price";
		price->HeaderText = "Price";
		price->Width = 50;
		dataGridView1->Columns->Add(price);
		//������� ������� ������� Price, ������ ���� ������
		DataGridViewTextBoxColumn^ growingRoom;
		growingRoom = gcnew DataGridViewTextBoxColumn();
		growingRoom->Name = "growingRoom";
		growingRoom->HeaderText = "Growing Room";
		growingRoom->Width = 80;
		dataGridView1->Columns->Add(growingRoom);
		//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
		int i = 0;
		bool isRunning = false;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			dataGridView1->Rows->Add(); //��������� ������
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str());
			FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
				isRunning = true; //��������� ������� �������
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getTypeOfFlowers().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String(iterFlowers.getIterator()->getName().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[4]->Value += gcnew String(iterFlowers.getIterator()->getSort().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[5]->Value += gcnew String(iterFlowers.getIterator()->getSeason().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[6]->Value += gcnew String(iterFlowers.getIterator()->getColour().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[7]->Value += System::Convert::ToString(iterFlowers.getIterator()->getPrice()) + ", ";
				dataGridView1->Rows[i]->Cells[8]->Value += gcnew String(iterFlowers.getIterator()->getGrowingRoom().c_str()) + ", ";
			}
			if (!isRunning)
			{ //���� ��� ������, ��������� ������� � �� �����������
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-��� ������-");
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String("-��� ������-");
				dataGridView1->Rows[i]->Cells[4]->Value += gcnew String("-��� ������-");
				dataGridView1->Rows[i]->Cells[5]->Value += gcnew String("-��� ������-");
				dataGridView1->Rows[i]->Cells[6]->Value += gcnew String("-��� ������-");
				dataGridView1->Rows[i]->Cells[7]->Value += gcnew String("-��� ������-");
				dataGridView1->Rows[i]->Cells[8]->Value += gcnew String("-��� ������-");
			}
			i++;
		}
	}

		   //---------------------------------------------�������-------------------------------------------------------
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("��������� ������� ���������� ��� ������ ������ � ������������ ���� �������.", "� ���������");
	}

		   //---------------------------------------------����������-------------------------------------------------------
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("����� ������� ������������� ��������� ������� ��������� ������ � �����('����' -> '��������� ����')\n\n������� ������ ����� �� ����� �������� �����: \n������� ������� ��������� ���������� � �������� � ������ ������ '�������� ��������', ����� ��� ������ �������������� ������ � ������ ������ '�������� �����', � � ����� ��������� ���������� � ����������� � ������ ������ '�������� ����������'\n\n����� ���� ����������� �������� ���������, ������ � �����������. ��� ����� ������� ����������� �� �������������� ��������� � ������ ��������������� ������ '�������'. \n�������, ��� ����������� ���� ����������!", "����������");
	}

		   //---------------------------------------------������� �������-------------------------------------------------------
	private: System::Void buttonPoleClearTablitsa_Click(System::Object^ sender, System::EventArgs^ e) {
		flowerShop->clearSellers();
		comboBoxProviderChooseSeller->Items->Clear();
		comboBoxProviderChooseType->Items->Clear();
		comboBoxFlowersChooseSeller->Items->Clear();
		comboBoxFlowersChooseType->Items->Clear();
		dataGridView1->Columns->Clear();
	}

		   //---------------------------------------------���������� � �����------------------------------------------------------ -
	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{ //������ ������ ������, ��������� ���� � ���������� ���� ����� ������������� ����� �� ����������
			openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			//openFileDialog1->ShowDialog();
			//string nameOfFile = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
			string nameOfFile = "data.txt"; //������ ��� �����
			ifstream fin(nameOfFile, ios_base::in); //��������� ����
			if (!fin.is_open()) //���������� ��� �������� �����
				throw FileError("������ �������� �����.");
			string data;
			fin >> data;
			if (data == "____________________________Information_about_Sellers____________________________")
			{
				do {
					string name;
					string typeOfFlowers;
					//��������� ������ � ����� ��� ���������
					fin >> data;
					fin >> data;
					name += data + " ";
					fin >> data;
					name += data;
					fin >> data;
					fin >> typeOfFlowers;
					//��������� �������� � ������� 
					flowerShop->addSeller(new Seller(name, typeOfFlowers));
					fin >> data; //��������� ������ �� ����� ����� ��� �� ������������ �����
				} while (data == "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" && !fin.eof());
			}
			else
				throw FileError("������ Seller � ����� ����������.");
			//���������� � ������
			if (data == "____________________________Information_about_Flowers____________________________")
			{
				do {
					string seller;
					string name;
					string typeOfFlowers;
					string sort;
					string season;
					string colour;
					int price;
					string growingRoom;
					//��������� ������ � ����� ��� flowers 
					fin >> data;
					fin >> data;
					seller += data + " ";
					fin >> data;
					seller += data;
					fin >> data;
					fin >> name;
					fin >> data;
					fin >> typeOfFlowers;
					fin >> data;
					fin >> sort;
					fin >> data;
					fin >> season;
					fin >> data;
					fin >> colour;
					fin >> data;
					fin >> price;
					fin >> data;
					fin >> growingRoom;
					//������� ������ ���� Flowers, � ������� ������������� ��� ������(�������� � �����������) - ���������� ��� � ������
					Flowers* elem = getFlowersObject(typeOfFlowers, name, sort, season, colour, price, growingRoom);
					if (!elem) //���������� ��� ������������ ����� ��� ��������������� ������ � �����
						throw FlowersError("������ � ����� ����������.");
					//���������� ����� ��������, ���� �� ���������� - ��������� ����� � ������� 
					flowerShop->findSeller(seller)->addFlowers(elem);
					fin >> data; //��������� ������ �� ����� ����� ��� �� ������������ �����
				} while (data == "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" && !fin.eof());
			}
			else
				throw FileError("������ Flowers � ����� ����������.");
			//���������� � ����������
			if (data == "____________________________Information_about_Provider____________________________")
			{
				do {
					string seller;
					string typeOfFlowers;
					string name;
					string country;
					//��������� ������ � ����������
					fin >> data;
					fin >> data;
					seller += data + " ";
					fin >> data;
					seller += data;
					fin >> data;
					fin >> typeOfFlowers;
					fin >> data;
					fin >> name;
					fin >> data;
					fin >> country;
					//������� ������ ���� Provider, � ������� ������������� ��� ������(�������� � �����������) - ���������� ��� � ������
					Provider* elem = getProviderObject(typeOfFlowers, name, country);
					if (!elem)//���������� ��� ������������ ����� ��� ��������������� ������ � �����
						throw ProviderError("������ � ���������� � ����� ����������.");
					//���������� ����� �������� � ������, ���� ��� ���������� - ��������� ���������� � ������� 
					flowerShop->findSeller(seller)->findFlowers(name)->addProvider(elem);
					fin >> data; //��������� ������ �� ����� ����� ��� �� ������������ �����
				} while (data == "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" && !fin.eof());
			}
			else
				throw FileError("������ Provider � ����� ����������.");
			//��������� �������� � ���������� ������
			flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);
			flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);
			//flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType);
			//flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);

			MessageBox::Show("������ � ����� ������� ���������.", "�������� �������!");
		}

		catch (FileError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("������ ��������� �����!", "������!");
		}
	}

		   //---------------------------------------------������ � ����------------------------------------------------------ -
	private: System::Void �������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{ //������ ������ ������, ��������� ���� � ���������� ���� ����� ������������� ����� �� ����������
			saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			//saveFileDialog1->ShowDialog();
			//string nameOfFile = msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName);
			string nameOfFile = "data.txt"; //������ ��� �����
			//��������� ����
			ofstream fout(nameOfFile, ios_base::out);
			if (!fout.is_open()) //������ � ������ �������� �����
				throw FileError("������!\n�� ������� ������� ����.");
			fout << "\n____________________________Information_about_Sellers____________________________\n\n";
			//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
			{ //���������� ������ � ����
				fout << "Name-  " << iterSeller.getIterator()->getName() << "\n";
				fout << "TypeOfFlowers- " << iterSeller.getIterator()->getTypeOfFlowers();
				//��������� � ���������� ��������
				iterSeller.nextElement();
				fout << "\n";
				if (!iterSeller.isEndContainer()) //���� ��� �� ����� ������� - ������ ����� ���������� ����������� ����
					fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
				fout << "\n";
			}
			fout << "____________________________Information_about_Flowers____________________________\n\n";
			//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
			{
				bool isRunning = false; //������� ������� ���������� ��� ������������ ������������� ������ � ������
			//������� ����, ��� ���������� ��� �������� ������� Flowers � ������� ����������
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer();)
				{ //���������� ������ � ����
					fout << "Seller- " << iterSeller.getIterator()->getName() << "\n";
					fout << "Name- " << iterFlowers.getIterator()->getName() << "\n";
					fout << "TypeOfFlowers- " << iterFlowers.getIterator()->getTypeOfFlowers() << "\n";
					fout << "Sort- " << iterFlowers.getIterator()->getSort() << "\n";
					fout << "Season- " << iterFlowers.getIterator()->getSeason() << "\n";
					fout << "Colour- " << iterFlowers.getIterator()->getColour() << "\n";
					fout << "Price- " << iterFlowers.getIterator()->getPrice() << "\n";
					fout << "GrowingRoom- " << iterFlowers.getIterator()->getGrowingRoom();
					isRunning = true;
					iterFlowers.nextElement(); //��������� � ���������� ��������
					fout << "\n";
					if (!iterFlowers.isEndContainer()) //���� ��� �� ����� ������� - ������ ����������� ����
						fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

				}
				iterSeller.nextElement(); //��������� � ���������� ��������
				if (!iterSeller.isEndContainer() && isRunning)
					fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
				if (isRunning) //���� ������ ���������� ������ ������� ������
					fout << "\n";
			}

			fout << "____________________________Information_about_Provider____________________________\n\n";
			//������� ����, ��� ���������� ��� �������� ������� Seller � ������� ����������
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
			{
				bool isRunning = false; //������� ������� ���������� ��� ������������ ������������� ������ 
				//������� ����, ��� ���������� ��� �������� ������� Flowers � ������� ����������
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer();)
				{ //������� ����, ��� ���������� ��� �������� ������� Provider � ������� ����������
					for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer();)
					{ //���������� ������
						fout << "Seller- " << iterSeller.getIterator()->getName() << "\n";
						//fout << "Production: " << iterFlowers.getIterator()->getName() << "\n";
						fout << "TypeOfFlowers- " << iterSeller.getIterator()->getTypeOfFlowers() << "\n";
						fout << "Name- " << iterFlowers.getIterator()->getName() << "\n";
						fout << "Country- " << iterProvider.getIterator()->getCountry();
						isRunning = true;
						iterProvider.nextElement(); //��������� � ���������� ��������
						fout << "\n";
						if (!iterProvider.isEndContainer())
							fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
					}
					iterFlowers.nextElement(); //��������� � ���������� ��������
					if (!iterFlowers.isEndContainer())
						fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				}
				iterSeller.nextElement(); //��������� � ���������� ��������
				if (!iterSeller.isEndContainer() && isRunning)
					fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"; //���� ��� �� ����� ������� - ������ ����������� ����
				else if (isRunning)
					fout << "\n";
			}

			MessageBox::Show("������ ������� �������� � ����.", "�������� �������!");
		}
		catch (FileError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "������!");
		}
		catch (...) {
			MessageBox::Show("������ ��������� �����!", "������!");
		}
	}

		   //---------------------------------------------����� � ���������-------------------------------------------------------
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}

		   //---------------------------------------------������� ���� ��� �������-------------------------------------------------------
	private: System::Void buttonPoleClearDataGridView_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear();
	}

	private: System::Void comboBoxProviderChooseSeller_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboBoxFlowersChooseSeller_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//flowerShop->findSeller(msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseSeller->Text))->flowersToComboBox(comboBox5);
	}

	private: System::Void textBoxPoleEnterSort_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
//---------------------------------------------------���������� � �����-------------------------------------------------------
//private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//	try
//	{
//		openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
//		openFileDialog1->ShowDialog();
//		string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
//		//string filename = "data.txt";
//		ifstream fin(filename, ios_base::in);
//		if (!fin.is_open())
//			throw FileError("������ �������� �����.");
//		string data;
//		fin >> data;
//		if (data == "Sellers")
//		{
//			do {
//				string name;
//				string typeOfFlowers;
//				//��������� ������ � ����� ��� ���������
//				fin >> data;
//				fin >> data;
//				name += data + " ";
//				//fin >> data;
//				//name += data + " ";
//				fin >> data;
//				name += data;
//				fin >> data;
//				fin >> typeOfFlowers;
//
//				flowerShop->addSeller(new Seller(name, typeOfFlowers));
//
//				fin >> data;
//			} while (data == "---" && !fin.eof());
//		}
//		else
//			throw FileError("������ Seller � ����� ����������.");
//		//if (data == "Flowers")
//		//{
//		//	do {//��������� ������ � ������
//		//		string seller;
//		//		string name;
//		//		string typeOfFlowers;
//		//		string sort;
//		//		string season;
//		//		string colour;
//		//		int price;
//		//		string growingRoom;
//		//		fin >> data;
//		//		fin >> data;
//		//		seller += data + " ";
//		//		fin >> data;
//		//		seller += data + " ";
//		//		fin >> data;
//		//		seller += data;
//		//		fin >> data;
//		//		fin >> name;
//		//		fin >> data;
//		//		fin >> typeOfFlowers;
//		//		fin >> data;
//		//		fin >> sort;
//		//		fin >> data;
//		//		fin >> season;
//		//		fin >> data;
//		//		fin >> colour;
//		//		fin >> data;
//		//		fin >> price;
//		//		fin >> data;
//		//		fin >> growingRoom;
//		//		Flowers* elem = getFlowersObj(typeOfFlowers, name, sort, season, colour, price, growingRoom);
//		//		if (!elem)
//		//			throw FlowersError("������ � ������ � ����� ����������.");
//		//		flowerShop->findSeller(seller)->addFlowers(elem);
//		//		fin >> data;
//		//	} while (data == "----------------------------" && !fin.eof());
//		//}
//		//else
//		//	throw FileError("������ Flowers � ����� ����������.");
//
//		if (data == "Flowers")
//		{
//			do {//������� ��� ��� flowers 
//				string seller;
//				string name;
//				string typeOfFlowers;
//				string sort;
//				string season;
//				string colour;
//				int price;
//				string growingRoom;
//
//				fin >> data;
//				fin >> data;
//				seller += data + " ";
//				//fin >> data;
//				//seller += data + " ";
//				fin >> data;
//				seller += data;
//				fin >> data;
//				fin >> name;
//				fin >> data;
//				fin >> typeOfFlowers;
//				fin >> data;
//				fin >> sort;
//				fin >> data;
//				fin >> season;
//				fin >> data;
//				fin >> colour;
//				fin >> data;
//				fin >> price;				
//				fin >> data;
//				fin >> growingRoom;
//
//				Flowers* elem = getFlowersObject(typeOfFlowers, name, sort, season, colour, price, growingRoom);
//				if (!elem)
//					throw FlowersError("��������� ��� � ����.");
//				flowerShop->findSeller(seller)->addFlowers(elem);
//
//				fin >> data;
//			} while (data == "---" && !fin.eof());
//		}
//		else
//			throw FileError("��������� Flowers ��� � ����.");
//		if (data == "Provider")
//		{
//			do {//��������� ������ � ����������
//				string seller;
//				string typeOfFlowers;
//				string name;
//				string country;
//
//				fin >> data;
//				fin >> data;
//				seller += data + " ";
//				//fin >> data;
//				//seller += data + " ";
//				fin >> data;
//				seller += data;
//				fin >> data;
//				fin >> typeOfFlowers;
//				fin >> data;
//				fin >> name;
//				fin >> data;
//				fin >> country;
//
//				Provider* elem = getProviderObject(typeOfFlowers, name, country);
//				if (!elem)
//					throw ProviderError("������ � ���������� � ����� ����������.");
//				flowerShop->findSeller(seller)->findFlowers(name)->addProvider(elem);
//
//				fin >> data;
//			} while (data == "---" && !fin.eof());
//		}
//		else
//			throw FileError("������ Provider � ����� ����������.");
//
//		flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);//���������� ������ � ��������� ������
//		flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);
//		//flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType);
//		//flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);
//
//		MessageBox::Show("������ � ����� ������� ���������.", "�������� �������!");
//	}
//
//	catch (FileError error) {
//		MessageBox::Show(gcnew String(error.getMessage()), "������!");
//	}
//	catch (...) {
//		MessageBox::Show("������ ��������� �����!", "������!");
//	}
////try
////{
////	openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
////
////	openFileDialog1->ShowDialog();
////	string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
////
////	ifstream fin(filename, ios_base::in);
////	if (!fin.is_open())
////		throw FileError("������� �������� �����.");
////
////	string data;
////	fin >> data;
////
////	if (data == "Sellers")
////	{
////		do {
////			string name;
////			string typeOfFlowers;
////			//������ � ����� ��� ���  �������
////			fin >> data;
////			fin >> data;
////			name += data + " ";
////			fin >> data;
////			name += data;
////			fin >> data;
////			fin >> typeOfFlowers;
////
////			flowerShop->addSeller(new Seller(name, typeOfFlowers));
////
////			fin >> data;
////		} while (data == "---" && !fin.eof());
////	}
////	else
////		throw FileError("��������� Seller ��� � ����.");
////
////	if (data == "Flowers")
////	{
////		do {//������� ��� ��� ��������� 
////			string seller;
////			string name;
////			string typeOfFlowers;
////			string sort;
////			string season;
////			string colour;
////			int price;
////			string growingRoom;
////
////			fin >> data;
////			fin >> data;
////			seller += data + " ";
////			fin >> data;
////			seller += data;
////			fin >> data;
////			fin >> name;
////			fin >> data;
////			fin >> typeOfFlowers;
////			fin >> data;
////			fin >> sort;
////			fin >> data;
////			fin >> season;
////			fin >> data;
////			fin >> colour;
////			fin >> data;
////			fin >> price;
////			fin >> data;
////			fin >> growingRoom;
////
////			Flowers* elem = getFlowersObj(typeOfFlowers, name, sort, season, colour, price, growingRoom);
////			if (!elem)
////				throw FlowersError("��������� Flowers ��� � ����.");
////			flowerShop->findSeller (seller)->addFlowers(elem);
////
////			fin >> data;
////		} while (data == "---" && !fin.eof());
////	}
////	else
////		throw FileError("��������� 3 ��� � ����.");
////
////	if (data == "Provier")
////	{
////		do {//������� ��� ��� �������
////			string seller;
////			string typeOfFlowers;
////			string country;
////			string name;
////
////			fin >> data;
////			fin >> data;
////			seller += data + " ";
////			fin >> data;
////			seller += data;
////			fin >> data;
////			fin >> typeOfFlowers;
////			fin >> data;
////			fin >> name;
////			fin >> data;
////			fin >> country;
////
////			Provider* elem = getProviderObj(typeOfFlowers, name, country);
////			if (!elem)
////				throw ProviderError("��������� Provider ��� � ����.");
////			flowerShop->findSeller(seller)->findFlowers(name)->addProvider(elem);
////
////			fin >> data;
////		} while (data == "---" && !fin.eof());
////	}
////	else
////		throw FileError("��������� 4 ��� � ����.");
////
////	flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);//���������� ������ � ��������� ������
////	flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);
////	flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);
////	flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType);
////
////	MessageBox::Show("��� � ����� ������ ����������� � ��������.", ":)");
////}
////catch (FileError error) {
////	MessageBox::Show(gcnew String(error.getMessage()), "�������!");
////}
////catch (...) {
////	MessageBox::Show("������� ������� �����!", "�������!");
////}
//}
//---------------------------------------------------������ � ����-------------------------------------------------------
//private: System::Void �������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
//	try
//	{
//		saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
//
//		//saveFileDialog1->ShowDialog();
//		//string filename = msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName);
//		string filename = "data.txt";
//
//		ofstream fout(filename, ios_base::out);
//		if (!fout.is_open())
//			throw FileError("������!\n�� ������� ������� ����.");
//
//		fout << "Sellers\n\n";
//		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
//		{
//			fout << "Name: " << iterSeller.getIterator()->getName() << "\n";
//			fout << "TypeOfFlowers: " << iterSeller.getIterator()->getTypeOfFlowers();
//
//			iterSeller.nextElement();
//			fout << "\n";
//			if (!iterSeller.isEndContainer())
//				fout << "---";
//			fout << "\n";
//		}
//		fout << "Flowers\n\n";
//		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
//		{
//			bool isRunning = false;
//			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer();)
//			{
//				isRunning = true;
//
//				fout << "Seller: " << iterSeller.getIterator()->getName() << "\n";
//				fout << "Name: " << iterFlowers.getIterator()->getName() << "\n";
//				fout << "TypeOfFlowers: " << iterFlowers.getIterator()->getTypeOfFlowers() << "\n";
//				fout << "Sort: " << iterFlowers.getIterator()->getSort() << "\n";
//				fout << "Season: " << iterFlowers.getIterator()->getSeason() << "\n";
//				fout << "Colour: " << iterFlowers.getIterator()->getColour() << "\n";
//				fout << "Price: " << iterFlowers.getIterator()->getPrice() << "\n";
//				fout << "GrowingRoom: " << iterFlowers.getIterator()->getGrowingRoom();
//				iterFlowers.nextElement();
//				fout << "\n";
//				if (!iterFlowers.isEndContainer())
//					fout << "---";
//			}
//			iterSeller.nextElement();
//			if (!iterSeller.isEndContainer() && isRunning)
//				fout << "---";
//			if (isRunning)
//				fout << "\n";
//		}
//
//		fout << "Provider\n\n";
//		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
//		{
//			bool isRunning = false;
//			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer();)
//			{
//				for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer();)
//				{
//					isRunning = true;
//					fout << "Seller: " << iterSeller.getIterator()->getName() << "\n";
//					//fout << "Production: " << iterFlowers.getIterator()->getName() << "\n";
//					fout << "TypeOfFlowers: " << iterSeller.getIterator()->getTypeOfFlowers() << "\n";
//					fout << "Name: " << iterFlowers.getIterator()->getName() << "\n";
//					fout << "Country: " << iterProvider.getIterator()->getCountry();
//
//					iterProvider.nextElement();
//					fout << "\n";
//					if (!iterProvider.isEndContainer())
//						fout << "---";
//				}
//				iterFlowers.nextElement();
//				if (!iterFlowers.isEndContainer())
//					fout << "---\n";
//			}
//			iterSeller.nextElement();
//			if (!iterSeller.isEndContainer() && isRunning)
//				fout << "---\n";
//			else if (isRunning)
//				fout << "\n";
//		}
//
//		MessageBox::Show("������ ������� �������� � ����.", "�������� �������!");
//	}
//	catch (FileError error) {
//		MessageBox::Show(gcnew String(error.getMessage()), "������!");
//	}
//	catch (...) {
//		MessageBox::Show("������ ��������� �����!", "������!");
//	}
//}