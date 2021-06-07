#pragma once

#include <windows.h>
#include <msclr\marshal_cppstd.h> // для marshal_as
#include <fstream> // для записи и считывания с файла
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
	/// Сводка для FlowerShop
	/// </summary>
	public ref class FlowerShop : public System::Windows::Forms::Form
	{
		Administrator* flowerShop = new Administrator("Магазин цветов");

	public:
		FlowerShop(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ЗагрузитьФайлToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьФайлToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;








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

	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ инструкцияToolStripMenuItem;




















































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ЗагрузитьФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьФайлToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструкцияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1->Text = L"Название цветов";
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
			this->buttonProviderDel->Text = L"Удалить поставщика";
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
			this->buttonProviderAdd->Text = L"Добавить поставщика";
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
			this->labelProviderEnterCountry->Text = L"Введите страну";
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
			this->labelProviderChooseTypeOfFlowers->Text = L"Выберите тип цветов";
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
			this->labelProviderChooseSeller->Text = L"Выберите продавца";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->справкаToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 36);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ЗагрузитьФайлToolStripMenuItem,
					this->сохранитьФайлToolStripMenuItem1
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(76, 32);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// ЗагрузитьФайлToolStripMenuItem
			// 
			this->ЗагрузитьФайлToolStripMenuItem->Name = L"ЗагрузитьФайлToolStripMenuItem";
			this->ЗагрузитьФайлToolStripMenuItem->Size = System::Drawing::Size(263, 36);
			this->ЗагрузитьФайлToolStripMenuItem->Text = L"Загрузить файл";
			this->ЗагрузитьФайлToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::счисToolStripMenuItem_Click);
			// 
			// сохранитьФайлToolStripMenuItem1
			// 
			this->сохранитьФайлToolStripMenuItem1->Name = L"сохранитьФайлToolStripMenuItem1";
			this->сохранитьФайлToolStripMenuItem1->Size = System::Drawing::Size(263, 36);
			this->сохранитьФайлToolStripMenuItem1->Text = L"Сохранить файл";
			this->сохранитьФайлToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FlowerShop::сохранитьФайлToolStripMenuItem1_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->информацияToolStripMenuItem,
					this->инструкцияToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(105, 32);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(238, 36);
			this->информацияToolStripMenuItem->Text = L"О программе";
			this->информацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::информацияToolStripMenuItem_Click);
			// 
			// инструкцияToolStripMenuItem
			// 
			this->инструкцияToolStripMenuItem->Name = L"инструкцияToolStripMenuItem";
			this->инструкцияToolStripMenuItem->Size = System::Drawing::Size(238, 36);
			this->инструкцияToolStripMenuItem->Text = L"Инструкция";
			this->инструкцияToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::инструкцияToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(85, 32);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &FlowerShop::выходToolStripMenuItem_Click);
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
			this->buttonPoleListFlowersToProvider->Text = L"Список цветов(квітів) каждого из поставщиков";
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
			this->buttonPoleListColourWithSeason->Text = L"Список цветов(кольорів) с заданным сезоном цветения\r\n";
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
			this->buttonPoleListColourWithCountry->Text = L"Список цветов(кольорів) в данной стране\r\n";
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
			this->buttonPoleMaxPriceFlowers->Text = L"Продавцы с наиболее дорогими цветами\r\n\r\n";
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
			this->buttonPoleProviderWithSort->Text = L"Поставщики с заданным сортом цветов";
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
			this->buttonPoleProviderFromSeller->Text = L"Поставщики каждого с продавцов\r\n\r\n";
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
			this->labelPoleChooseSeason->Text = L"Выберите сезон";
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
			this->labelPoleEnterCountry->Text = L"Введите страну";
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
			this->labelPoleEnterSort->Text = L"Введите сорт";
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
			this->buttonPoleClearTablitsa->Text = L"Очистить таблицу";
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
			this->buttonPoleClearPoleDataGridView->Text = L"Очистить поле таблицы";
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
			this->labelSellerName->Text = L"Имя";
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
			this->labelSellerTypeOfFlowers->Text = L"Тип цветов";
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
			this->buttonSellerAdd->Text = L"Добавить продавца";
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
			this->buttonSellerDel->Text = L"Удалить продавца";
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
			this->labelFlowersChooseSeller->Text = L"Выберите продавца";
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
			this->labelFlowersEnterName->Text = L"Название";
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
			this->labelFlowersEnterSort->Text = L"Введите сорт";
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
			this->labelFlowersChooseTypeOfFlowers->Text = L"Выберите тип цветов";
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
			this->labelFlowersChooseSeason->Text = L"Выберите сезон";
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
			this->labelFlowersEnterColour->Text = L"Введите цвет";
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
			this->labelFlowersEnterPrice->Text = L"Введите цену";
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
			this->labelFlowersChooseGrowingRoom->Text = L"Выберите помещение";
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
			this->buttonFlowersAdd->Text = L"Добавить цветы";
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
			this->buttonFlowersDel->Text = L"Удалить цветы";
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
			this->labelPoleZagolovokZaprosy->Text = L"Запросы";
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
			this->labelPoleZagolovokSeller->Text = L"Продавцы";
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
			this->labelPoleZagolovokProvider->Text = L"Поставщики";
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
			this->labelPoleZagolovokFlowers->Text = L"Цветы";
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
			this->buttonPoleAllInformation->Text = L"Вся информация";
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
			this->Text = L"Магазин цветов";
			this->Load += gcnew System::EventHandler(this, &FlowerShop::FlowerShop_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//---------------------------------------------запуск программы----------------------------------------------------
	private: System::Void FlowerShop_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("\tВы активировали программу!\nДля получения подробной инструкции нажмите 'Cправка' -> 'Инструкция'", "Добро пожаловать!");

	}

		   //---------------------------------------------добавление нового продавца----------------------------------------------------
	private: System::Void buttonSellerAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{ //создаем переменные для создания нового продавца и типа цветов
			string name = msclr::interop::marshal_as<std::string>(textBoxSellerName->Text); // interop - пространоство имен
			string type = msclr::interop::marshal_as<std::string>(comboBoxSellerChooseType->Text); // marshal_as - упрощенный способ преобразования данных между собственными и управляемыми типами

			flowerShop->addSeller(new Seller(name, type)); //добаление нового продавца
			flowerShop->sellersToComboBox(comboBoxProviderChooseSeller); //Вставляем информацию для следущего выбора продавца для поставщика
			flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller); //для цветов
			flowerShop->addTypeOfFlowers(new Seller(name, type)); //добавление нового типа цветов
			flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType); //Вставляем информацию для следущего выбора цветов
			flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);

			MessageBox::Show("Новый продавец успешно добавлен!", "Операция выполнена!"); //если опреация успешна-высвечивается окно
		}
		catch (...) {
			MessageBox::Show("Некоректно введенные данные!", "Ошибка!"); //иначе высвечивается, что операция не успешна
		}
	}

		   //---------------------------------------------удаление продавца--------------------------------------------------------------
	private: System::Void buttonSellerDel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string name = msclr::interop::marshal_as<std::string>(textBoxSellerName->Text);
			if (!flowerShop->deleteSeller(name)) //если такого продавца не существует, то выбрасываем ошибку
				throw SellerError("Удаление невозможно!\nТакого продавца не существует!");

			flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);//Вставляем информацию для следущего выбора продавца для поставщика
			flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);
			MessageBox::Show("Продавец успешно удален.", "Операциа успешна!");
		}
		catch (SellerError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!"); //Ловим выброшенную ошибку, если такого продавца не существует
		}
		catch (...) {
			MessageBox::Show("Некоректно введенные данные!", "Ошибка!"); //остальные ошибки
		}

	}

		   //---------------------------------------------добавление новых цветов----------------------------------------------------
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

			//создаем объект типа Flowers, в котором установленный тип цветов(согласно с комбоБоксом) - обрезанные или с корнем
			Flowers* element = getFlowersObject(type, name, sort, season, colour, price, growingRoom);
			if (!element) //если введенного типа цветов не существует - объект не создается и выбрасывает исключение
				throw FlowersError("Такого вида цветов не сущетствует!");
			//если объект создан, то проверяем, существует ли такой продавец, а потом добавляем цветы
			flowerShop->findSeller(seller)->addFlowers(element);

			MessageBox::Show("Цветы успешно добавлены", "Операция выполнена!");
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!"); //Ловим выброшенную ошибку, если таких цветов не существует
		}
		catch (...) {
			MessageBox::Show("Некоректно введенные данные!", "Ошибка!"); //Другие ошибки
		}
	}

		   //---------------------------------------------удаление цветов по названию --------------------------------------------
	private: System::Void buttonFlowersDel_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxFlowersChooseSeller->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxFlowersName->Text);
			//создаем переменную для проверки, существует ли такой продавец.
			//если существует - удаляем цветы
			bool delFlowers = flowerShop->findSeller(seller)->deleteFlowers(name);
			if (!delFlowers) //если не существует - выбрасываем ошибку
				throw FlowersError("Такого вида цветов не сущетствует!");

			MessageBox::Show("Цветы успешно удалены", "Операция выполнена!");
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Некоректно введенные данные!", "Ошибка!");
		}
	}

		   //---------------------------------------------добавление нового поставщика----------------------------------------------------
	private: System::Void buttonProviderAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxProviderChooseSeller->Text);
			string type = msclr::interop::marshal_as<std::string>(comboBoxProviderChooseType->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxProviderEnterNameFlowers->Text);
			string country = msclr::interop::marshal_as<std::string>(textBoxProviderEnterCountry->Text);
			//создаем объект типа Provider, в котором установленный тип цветов(согласно с комбоБоксом) - обрезанные или с корнем
			Provider* element = getProviderObject(type, name, country);
			//если объект создан, то проверяем, существует ли такой продавец и название цветов, а потом добавляем поставщика
			flowerShop->findSeller(seller)->findFlowers(name)->addProvider(element);

			MessageBox::Show("Поставшик успешно добавлен", "Операция выполнена!");
		}
		catch (ProviderError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Некоректно введенные данные!", "Ошибка!");
		}
	}

		   //---------------------------------------------удаление поставщика----------------------------------------------------
	private: System::Void buttonProviderDel_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string seller = msclr::interop::marshal_as<std::string>(comboBoxProviderChooseSeller->Text);
			string country = msclr::interop::marshal_as<std::string>(textBoxProviderEnterCountry->Text);
			string name = msclr::interop::marshal_as<std::string>(textBoxProviderEnterNameFlowers->Text);
			//если такой продавец с установленными цветами не существует - выбрасываем исключение
			if (!flowerShop->findSeller(seller)->findFlowers(name)->deleteProvider(country))
				throw ProviderError("Такого поставщика не существует!");
			//если такой продавец с установленными цветами существует - удаляем поставщика
			MessageBox::Show("Поставшик успешно удален", "Операция выполнена!");
		}
		catch (ProviderError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Некоректно введенные данные!", "Ошибка!");
		}
	}

		   //---------------------------------------------Запрос:цветы каждого из продавцов----------------------------------------------------
	private: System::Void buttonPoleListFlowersToProvider_Click(System::Object^ sender, System::EventArgs^ e) {
		//очистка поля для таблицы
		dataGridView1->Columns->Clear();
		//создаем первый столбик и называем его №, хранит номер строки
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "№";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//создаем второй столбик и называем его Seller, хранит имена продавцов
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 240;
		dataGridView1->Columns->Add(seller);
		//создаем третий столбик и называем его Flowers, хранит название цветов
		DataGridViewTextBoxColumn^ flowers;
		flowers = gcnew DataGridViewTextBoxColumn();
		flowers->Name = "flowers";
		flowers->HeaderText = "Flowers";
		flowers->Width = 241;
		dataGridView1->Columns->Add(flowers);
		//создаем цикл, где перебираем все элементы Seller с помощью контейнера
		int i = 0;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			dataGridView1->Rows->Add(); //добавляем строку
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //присваиваем первому столбцу номер
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str()); //присваиваем второму столбцу имя продавца
			FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
			//если конец очереди(очередь пуста), выводим, что у заданного продавца нет цветов
			if (iterFlowers.isEndContainer())
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-нет цветов-");
			//если очередь не пуста - проходимся по ней и записываем цветы
			else for (; !iterFlowers.isEndContainer(); iterFlowers.nextElement())
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getName().c_str()) + ", ";
			i++;
		}

	}

		   //---------------------------------------------Запрос:цветы(кольори) заданного сезона----------------------------------------------------
	private: System::Void buttonPoleListColourWithSeason_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			//если не указан сезон, срабатывает исключение
			if (comboBoxPoleChooseSeason->Text == "")
				throw FlowersError("Сезон не указан!.");
			//очистка поля для таблицы
			dataGridView1->Columns->Clear();
			//создаем первый столбик и называем его №, хранит номер строки
			DataGridViewTextBoxColumn^ number;
			number = gcnew DataGridViewTextBoxColumn();
			number->Name = "Number";
			number->HeaderText = "№";
			number->Width = 50;
			dataGridView1->Columns->Add(number);
			//создаем второй столбик и называем его Season, хранит сезон цветения
			DataGridViewTextBoxColumn^ season;
			season = gcnew DataGridViewTextBoxColumn();
			season->Name = "season";
			season->HeaderText = "Season";
			season->Width = 240;
			dataGridView1->Columns->Add(season);
			//создаем третий столбик и называем его Colours, хранит цвет цветов
			DataGridViewTextBoxColumn^ colour;
			colour = gcnew DataGridViewTextBoxColumn();
			colour->Name = "colour";
			colour->HeaderText = "Colours";
			colour->Width = 241;
			dataGridView1->Columns->Add(colour);
			//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
			int i = 0;
			bool seasonExist = false; //создаем булевую переменную для отслеживания существования определенного сезона и цвета 
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
			{
				dataGridView1->Rows->Add(); //добавляем строку
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //добавляем в первый столбик номер строки
				//создаем цикл, где перебираем все элементы очереди Flowers с помошью контейнера
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement())
				{ //если существующий сезон = сезону записанном в комбоБоксе
					if (gcnew String(iterFlowers.getIterator()->getSeason().c_str()) == comboBoxPoleChooseSeason->Text)
					{ //записываем данные в таблицу
						dataGridView1->Rows[0]->Cells[1]->Value = gcnew String(iterFlowers.getIterator()->getSeason().c_str());
						dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getColour().c_str()) + " ";
						seasonExist = true; //данные записаны и существуют, значит переменная - true
					}

				}
				i++;
			}
			if (!seasonExist)
			{ //иначе записываем указанный в комбоБоксе сезон и записываем в таблицу, что данные о цвете отсутствуют
				dataGridView1->Rows[0]->Cells[1]->Value += gcnew String(comboBoxPoleChooseSeason->Text);
				dataGridView1->Rows[0]->Cells[2]->Value += gcnew String("-данные отсутствуют-");
			}
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Данные некоректны!", "Ошибка!");
		}

	}

		   //---------------------------------------------Запрос:цветы(кольори) заданной страны----------------------------------------------------
	private: System::Void buttonPoleListColourWithCountry_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{ //если не указана страна, срабатывает исключение
			if (textBoxPoleEnterCountry->Text == "")
				throw FlowersError("Страна не указана!.");
			//очистка поля для таблицы
			dataGridView1->Columns->Clear();
			//создаем первый столбик и называем его №, хранит номер строки
			DataGridViewTextBoxColumn^ number;
			number = gcnew DataGridViewTextBoxColumn();
			number->Name = "Number";
			number->HeaderText = "№";
			number->Width = 50;
			dataGridView1->Columns->Add(number);
			//создаем второй столбик и называем его Country, хранит название страны поставщика
			DataGridViewTextBoxColumn^ country;
			country = gcnew DataGridViewTextBoxColumn();
			country->Name = "country";
			country->HeaderText = "Country";
			country->Width = 240;
			dataGridView1->Columns->Add(country);
			//создаем второй столбик и называем его Colours, хранит название цвета цветка
			DataGridViewTextBoxColumn^ colour;
			colour = gcnew DataGridViewTextBoxColumn();
			colour->Name = "colour";
			colour->HeaderText = "Colours";
			colour->Width = 241;
			dataGridView1->Columns->Add(colour);
			//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
			int i = 0;
			bool countryExist = false;
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
			{
				dataGridView1->Rows->Add(); //добавляем строку
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //добавляем в первый столбик номер строки
				//создаем цикл, где перебираем все элементы очереди Flowers с помошью контейнера
				//и второй цикл очереди Provider
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
					for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer(); iterProvider.nextElement())
					{ //если существующая страна = стране записанной в комбоБоксе
						if (gcnew String(iterProvider.getIterator()->getCountry().c_str()) == textBoxPoleEnterCountry->Text)
						{ //записываем данные в таблицу
							dataGridView1->Rows[0]->Cells[1]->Value = gcnew String(iterProvider.getIterator()->getCountry().c_str());
							dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getColour().c_str()) + ", ";
							countryExist = true; //данные записаны и существуют, значит переменная - true
						}
					}
				}
				i++;
			}
			if (!countryExist)
			{ //иначе записываем указанную в комбоБоксе страну и записываем в таблицу, что данные о цвете отсутствуют
				dataGridView1->Rows[0]->Cells[1]->Value += gcnew String(textBoxPoleEnterCountry->Text);
				dataGridView1->Rows[0]->Cells[2]->Value += gcnew String("-данные отсутствуют-");
			}
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Данные некоректны!", "Ошибка!");
		}
	}

		   //---------------------------------------------Запрос:продавцы с макс ценой цветов----------------------------------------------------
	private: System::Void buttonPoleMaxPriceFlowers_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear(); //очистка поля для таблицы
		//создаем первый столбик и называем его №, хранит номер строки
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "№";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//создаем второй столбик и называем его Seller, хранит имя продавца
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 160;
		dataGridView1->Columns->Add(seller);
		//создаем третий столбик и называем его Flowers, хранит название цветов
		DataGridViewTextBoxColumn^ flowers;
		flowers = gcnew DataGridViewTextBoxColumn();
		flowers->Name = "flowers";
		flowers->HeaderText = "Flowers";
		flowers->Width = 160;
		dataGridView1->Columns->Add(flowers);
		//создаем четвертый столбик и называем его Price, хранит максимальную стоимость цветов
		DataGridViewTextBoxColumn^ price;
		price = gcnew DataGridViewTextBoxColumn();
		price->Name = "price";
		price->HeaderText = "Price";
		price->Width = 161;
		dataGridView1->Columns->Add(price);
		//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
		int i = 0;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			bool flowersExist = false; //создаем булевую переменную для отслеживания существования данных о цветах:названия и цены
			dataGridView1->Rows->Add(); //добавляем строку
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString(); //записываем в первый столбик номер строки
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str()); //записываем во второй столбец имя продавца
			FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
			int max = 1;
			//создаем цикл, где перебираем все элементы очереди Flowers с помошью контейнера
			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement())
			{ //создаем переменную temp, которая хранит цену цветов  
				int temp = iterFlowers.getIterator()->getPrice();
				if (temp > max) //если текущая цена больше за максимальную
					max = temp; // то присваиваем максимальной текущую
				flowersExist = true; //значит данные существуют
			}
			if (flowersExist)
			{ //записываем данные в таблицу
				dataGridView1->Rows[i]->Cells[3]->Value = System::Convert::ToString(max);
				dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(iterFlowers.getIterator()->getName().c_str());
			}
			if (!flowersExist)
			{ //если данных нет - записываем в таблицу информацию о их отсутствии
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-данные отсутствуют-");
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String("-данные отсутствуют-");
			}
			i++;
		}

	}

		   //---------------------------------------------Запрос:поставщики с заданным сортом----------------------------------------------------
	private: System::Void buttonPoleProviderWithSort_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{//если не указан сорт, срабатывает исключение
			if (textBoxPoleEnterSort->Text == "")
				throw FlowersError("Сорт не указан!.");
			//очистка поля для таблицы
			dataGridView1->Columns->Clear();
			//создаем первый столбик и называем его №, хранит номер строки
			DataGridViewTextBoxColumn^ number;
			number = gcnew DataGridViewTextBoxColumn();
			number->Name = "Number";
			number->HeaderText = "№";
			number->Width = 50;
			dataGridView1->Columns->Add(number);
			//создаем второй столбик и называем его Sort, хранит сорт цветов
			DataGridViewTextBoxColumn^ sort;
			sort = gcnew DataGridViewTextBoxColumn();
			sort->Name = "sort";
			sort->HeaderText = "Sort";
			sort->Width = 160;
			dataGridView1->Columns->Add(sort);
			//создаем третий столбик и называем его Provider, хранит имя продавца
			DataGridViewTextBoxColumn^ provider;
			provider = gcnew DataGridViewTextBoxColumn();
			provider->Name = "provider";
			provider->HeaderText = "Provider";
			provider->Width = 160;
			dataGridView1->Columns->Add(provider);
			//создаем четвертый столбик и называем его Country, хранит страну поставщика
			DataGridViewTextBoxColumn^ country;
			country = gcnew DataGridViewTextBoxColumn();
			country->Name = "country";
			country->HeaderText = "Country";
			country->Width = 161;
			dataGridView1->Columns->Add(country);
			//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
			int i = 0;
			bool isRunning = false;
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
			{
				dataGridView1->Rows->Add(); //добавляем строку
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();  //записываем в первый столбик номер строки
				//dataGridView1->Rows[i]->Cells[1]->obj = gcnew String(iterSeller.getIterator()->getName().c_str());
				//FlowersContainerIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
				//создаем цикл, где перебираем все элементы очереди Flowers с помошью контейнера
				//и второй цикл очереди Provider
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
					for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer(); iterProvider.nextElement())
					{ //если существующий сорт = сорту записанном в комбоБоксе
						if (gcnew String(iterFlowers.getIterator()->getSort().c_str()) == textBoxPoleEnterSort->Text)
						{ //заполняем таблицу
							dataGridView1->Rows[0]->Cells[1]->Value = gcnew String(iterFlowers.getIterator()->getSort().c_str());
							dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterSeller.getIterator()->getName().c_str()) + ", ";
							dataGridView1->Rows[i]->Cells[3]->Value += gcnew String(iterProvider.getIterator()->getCountry().c_str()) + ", ";
							isRunning = true; //данные записаны и существуют, значит переменная - true
						}

					}
				}
				i++;
			}
			if (!isRunning)
			{ //иначе записываем указанный в комбоБоксе сорт и записываем в таблицу, что данные о поставщике отсутствуют
				dataGridView1->Rows[i]->Cells[1]->Value += gcnew String(textBoxPoleEnterSort->Text);
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-данные отсутствуют-");
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String("-данные отсутствуют-");
			}
		}
		catch (FlowersError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Данные некоректны!", "Ошибка!");
		}
	}

		   //---------------------------------------------Запрос:поставщики каждого с продавцов----------------------------------------------------
	private: System::Void buttonPoleProviderFromSeller_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear(); //очистка поля для таблицы
		//создаем первый столбик и называем его №, хранит номер строки
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "№";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//создаем второй столбик и называем его Seller, хранит имя продавца
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 240;
		dataGridView1->Columns->Add(seller);
		//создаем третий столбик и называем его Provider country, хранит страну-поставщика
		DataGridViewTextBoxColumn^ country;
		country = gcnew DataGridViewTextBoxColumn();
		country->Name = "country";
		country->HeaderText = "Provider country";
		country->Width = 241;
		dataGridView1->Columns->Add(country);
		//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
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
				{ //заполняем таблицу данными
					isRunning = true;
					dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterProvider.getIterator()->getCountry().c_str()) + ", ";
				}
				if (!isRunning) //заполняем таблицу информацией, про отстствие данных
					dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-нет поставок-");
				i++;
			}
		}
	}

		   //---------------------------------------------Запрос:вся информация----------------------------------------------------
	private: System::Void buttonPoleAllInformation_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear(); //очистка поля для таблицы
		//создаем первый столбик и называем его №, хранит номер строки
		DataGridViewTextBoxColumn^ number;
		number = gcnew DataGridViewTextBoxColumn();
		number->Name = "Number";
		number->HeaderText = "№";
		number->Width = 50;
		dataGridView1->Columns->Add(number);
		//создаем первый столбик Seller, хранит имя продавца
		DataGridViewTextBoxColumn^ seller;
		seller = gcnew DataGridViewTextBoxColumn();
		seller->Name = "seller";
		seller->HeaderText = "Seller";
		seller->Width = 100;
		dataGridView1->Columns->Add(seller);
		//создаем второй столбик Type, хранит тип цветов
		DataGridViewTextBoxColumn^ typeOfFlowers;
		typeOfFlowers = gcnew DataGridViewTextBoxColumn();
		typeOfFlowers->Name = "typeOfFlowers";
		typeOfFlowers->HeaderText = "Type";
		typeOfFlowers->Width = 75;
		dataGridView1->Columns->Add(typeOfFlowers);
		//создаем третий столбик Name, хранит название цветов
		DataGridViewTextBoxColumn^ name;
		name = gcnew DataGridViewTextBoxColumn();
		name->Name = "name";
		name->HeaderText = "Name";
		name->Width = 70;
		dataGridView1->Columns->Add(name);
		//создаем четвертый столбик Sort, хранит сорт цветов
		DataGridViewTextBoxColumn^ sort;
		sort = gcnew DataGridViewTextBoxColumn();
		sort->Name = "sort";
		sort->HeaderText = "Sort";
		sort->Width = 70;
		dataGridView1->Columns->Add(sort);
		//создаем пятый столбик Season, хранит сезон цветения цветов
		DataGridViewTextBoxColumn^ season;
		season = gcnew DataGridViewTextBoxColumn();
		season->Name = "season";
		season->HeaderText = "Season";
		season->Width = 75;
		dataGridView1->Columns->Add(season);
		//создаем шестый столбик Colour, хранит цвет цветов
		DataGridViewTextBoxColumn^ colour;
		colour = gcnew DataGridViewTextBoxColumn();
		colour->Name = "colour";
		colour->HeaderText = "Colour";
		colour->Width = 75;
		dataGridView1->Columns->Add(colour);
		//создаем седьмой столбик Price, хранит цену цветов
		DataGridViewTextBoxColumn^ price;
		price = gcnew DataGridViewTextBoxColumn();
		price->Name = "price";
		price->HeaderText = "Price";
		price->Width = 50;
		dataGridView1->Columns->Add(price);
		//создаем седьмой столбик Price, хранит цену цветов
		DataGridViewTextBoxColumn^ growingRoom;
		growingRoom = gcnew DataGridViewTextBoxColumn();
		growingRoom->Name = "growingRoom";
		growingRoom->HeaderText = "Growing Room";
		growingRoom->Width = 80;
		dataGridView1->Columns->Add(growingRoom);
		//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
		int i = 0;
		bool isRunning = false;
		for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer(); iterSeller.nextElement())
		{
			dataGridView1->Rows->Add(); //добавляем строку
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(iterSeller.getIterator()->getName().c_str());
			FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer());
			for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer(); iterFlowers.nextElement()) {
				isRunning = true; //заполняем таблицу данными
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(iterFlowers.getIterator()->getTypeOfFlowers().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String(iterFlowers.getIterator()->getName().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[4]->Value += gcnew String(iterFlowers.getIterator()->getSort().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[5]->Value += gcnew String(iterFlowers.getIterator()->getSeason().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[6]->Value += gcnew String(iterFlowers.getIterator()->getColour().c_str()) + ", ";
				dataGridView1->Rows[i]->Cells[7]->Value += System::Convert::ToString(iterFlowers.getIterator()->getPrice()) + ", ";
				dataGridView1->Rows[i]->Cells[8]->Value += gcnew String(iterFlowers.getIterator()->getGrowingRoom().c_str()) + ", ";
			}
			if (!isRunning)
			{ //если нет данных, заполняем таблицу с их отсутствием
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("-нет данных-");
				dataGridView1->Rows[i]->Cells[3]->Value += gcnew String("-нет данных-");
				dataGridView1->Rows[i]->Cells[4]->Value += gcnew String("-нет данных-");
				dataGridView1->Rows[i]->Cells[5]->Value += gcnew String("-нет данных-");
				dataGridView1->Rows[i]->Cells[6]->Value += gcnew String("-нет данных-");
				dataGridView1->Rows[i]->Cells[7]->Value += gcnew String("-нет данных-");
				dataGridView1->Rows[i]->Cells[8]->Value += gcnew String("-нет данных-");
			}
			i++;
		}
	}

		   //---------------------------------------------Справка-------------------------------------------------------
	private: System::Void информацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Программа создана специально для заказа цветов и отслеживания этих заказов.", "О программе");
	}

		   //---------------------------------------------Инструкция-------------------------------------------------------
	private: System::Void инструкцияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Перед началом использования программы следует загрузить данные с файла('Файл' -> 'Загрузить файл')\n\nВводить данные нужно по четко заданной схеме: \nсначала следует заполнить информацию о продавце и нажать кнопку 'Добавить продавца', потом все ввести характеристики цветов и нажать кнопку 'Добавить цветы', и в конце заполнить информацию о поставщиках и нажать кнопку 'Добавить поставщика'\n\nТакже есть возможность удаления продавцов, цветов и поставщиков. Для этого следует действовать по вышеописанному алгоритму и нажать соответствующую кнопку 'Удалить'. \nСпасибо, что пользуетесь моей программой!", "Инструкция");
	}

		   //---------------------------------------------Очистка таблицы-------------------------------------------------------
	private: System::Void buttonPoleClearTablitsa_Click(System::Object^ sender, System::EventArgs^ e) {
		flowerShop->clearSellers();
		comboBoxProviderChooseSeller->Items->Clear();
		comboBoxProviderChooseType->Items->Clear();
		comboBoxFlowersChooseSeller->Items->Clear();
		comboBoxFlowersChooseType->Items->Clear();
		dataGridView1->Columns->Clear();
	}

		   //---------------------------------------------Считывание с файла------------------------------------------------------ -
	private: System::Void счисToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{ //задает фильтр файлов, благодаря чему в диалоговом окне можно отфильтровать файлы по расширению
			openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			//openFileDialog1->ShowDialog();
			//string nameOfFile = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
			string nameOfFile = "data.txt"; //задаем имя файлу
			ifstream fin(nameOfFile, ios_base::in); //открываем файл
			if (!fin.is_open()) //исключение при открытии файла
				throw FileError("Ошибка открытия файла.");
			string data;
			fin >> data;
			if (data == "____________________________Information_about_Sellers____________________________")
			{
				do {
					string name;
					string typeOfFlowers;
					//считываем данные с файла про продавцов
					fin >> data;
					fin >> data;
					name += data + " ";
					fin >> data;
					name += data;
					fin >> data;
					fin >> typeOfFlowers;
					//добавляем продавца в таблицу 
					flowerShop->addSeller(new Seller(name, typeOfFlowers));
					fin >> data; //считываем данные до конца файла или до разделяющего знака
				} while (data == "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" && !fin.eof());
			}
			else
				throw FileError("Данные Seller в файле некоректны.");
			//информация о цветах
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
					//считываем данные с файла про flowers 
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
					//создаем объект типа Flowers, в котором установленный тип цветов(согласно с комбоБоксом) - обрезанные или с корнем
					Flowers* elem = getFlowersObject(typeOfFlowers, name, sort, season, colour, price, growingRoom);
					if (!elem) //исключение при неправильном вводе или несуществовании данных в файле
						throw FlowersError("Данные в файле некоректны.");
					//производим поиск продавца, если он существует - добавляем цветы в таблицу 
					flowerShop->findSeller(seller)->addFlowers(elem);
					fin >> data; //считываем данные до конца файла или до разделяющего знака
				} while (data == "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" && !fin.eof());
			}
			else
				throw FileError("Данные Flowers в файле некоректны.");
			//информация о поставщике
			if (data == "____________________________Information_about_Provider____________________________")
			{
				do {
					string seller;
					string typeOfFlowers;
					string name;
					string country;
					//считываем данные о поставщике
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
					//создаем объект типа Provider, в котором установленный тип цветов(согласно с комбоБоксом) - обрезанные или с корнем
					Provider* elem = getProviderObject(typeOfFlowers, name, country);
					if (!elem)//исключение при неправильном вводе или несуществовании данных в файле
						throw ProviderError("Данные о поставщике в файле некоректны.");
					//производим поиск продавца и цветов, если они существуют - добавляем поставщика в таблицу 
					flowerShop->findSeller(seller)->findFlowers(name)->addProvider(elem);
					fin >> data; //считываем данные до конца файла или до разделяющего знака
				} while (data == "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" && !fin.eof());
			}
			else
				throw FileError("Данные Provider в файле некоректны.");
			//добавляем продавца в выпадающие списки
			flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);
			flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);
			//flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType);
			//flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);

			MessageBox::Show("Данные с файла успешно загружены.", "Операция успешна!");
		}

		catch (FileError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Ошибка обработки файла!", "Ошибка!");
		}
	}

		   //---------------------------------------------Запись в файл------------------------------------------------------ -
	private: System::Void сохранитьФайлToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{ //задает фильтр файлов, благодаря чему в диалоговом окне можно отфильтровать файлы по расширению
			saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			//saveFileDialog1->ShowDialog();
			//string nameOfFile = msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName);
			string nameOfFile = "data.txt"; //задаем имя файлу
			//открываем файл
			ofstream fout(nameOfFile, ios_base::out);
			if (!fout.is_open()) //ошибка в случае открытия файла
				throw FileError("Ошибка!\nНе удалось открыть файл.");
			fout << "\n____________________________Information_about_Sellers____________________________\n\n";
			//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
			{ //записываем данные в файл
				fout << "Name-  " << iterSeller.getIterator()->getName() << "\n";
				fout << "TypeOfFlowers- " << iterSeller.getIterator()->getTypeOfFlowers();
				//переходим к следующему элементу
				iterSeller.nextElement();
				fout << "\n";
				if (!iterSeller.isEndContainer()) //если это не конец очереди - ставим между продавцами разделяющий знак
					fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
				fout << "\n";
			}
			fout << "____________________________Information_about_Flowers____________________________\n\n";
			//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
			{
				bool isRunning = false; //создаем булевую переменную для отслеживания существования данных о цветах
			//создаем цикл, где перебираем все элементы очереди Flowers с помошью контейнера
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer();)
				{ //записываем данные в файл
					fout << "Seller- " << iterSeller.getIterator()->getName() << "\n";
					fout << "Name- " << iterFlowers.getIterator()->getName() << "\n";
					fout << "TypeOfFlowers- " << iterFlowers.getIterator()->getTypeOfFlowers() << "\n";
					fout << "Sort- " << iterFlowers.getIterator()->getSort() << "\n";
					fout << "Season- " << iterFlowers.getIterator()->getSeason() << "\n";
					fout << "Colour- " << iterFlowers.getIterator()->getColour() << "\n";
					fout << "Price- " << iterFlowers.getIterator()->getPrice() << "\n";
					fout << "GrowingRoom- " << iterFlowers.getIterator()->getGrowingRoom();
					isRunning = true;
					iterFlowers.nextElement(); //переходим к следующему элементу
					fout << "\n";
					if (!iterFlowers.isEndContainer()) //если это не конец очереди - ставим разделяющий знак
						fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

				}
				iterSeller.nextElement(); //переходим к следующему элементу
				if (!iterSeller.isEndContainer() && isRunning)
					fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
				if (isRunning) //если данные существуют делаем перевод строки
					fout << "\n";
			}

			fout << "____________________________Information_about_Provider____________________________\n\n";
			//создаем цикл, где перебираем все элементы очереди Seller с помошью контейнера
			for (SellerIterator iterSeller(&flowerShop->getSellerContainer()); !iterSeller.isEndContainer();)
			{
				bool isRunning = false; //создаем булевую переменную для отслеживания существования данных 
				//создаем цикл, где перебираем все элементы очереди Flowers с помошью контейнера
				for (FlowersIterator iterFlowers(&iterSeller.getIterator()->getFlowersContainer()); !iterFlowers.isEndContainer();)
				{ //создаем цикл, где перебираем все элементы очереди Provider с помошью контейнера
					for (ProviderIterator iterProvider(&iterFlowers.getIterator()->getProviderContainer()); !iterProvider.isEndContainer();)
					{ //записываем данные
						fout << "Seller- " << iterSeller.getIterator()->getName() << "\n";
						//fout << "Production: " << iterFlowers.getIterator()->getName() << "\n";
						fout << "TypeOfFlowers- " << iterSeller.getIterator()->getTypeOfFlowers() << "\n";
						fout << "Name- " << iterFlowers.getIterator()->getName() << "\n";
						fout << "Country- " << iterProvider.getIterator()->getCountry();
						isRunning = true;
						iterProvider.nextElement(); //переходим к следующему элементу
						fout << "\n";
						if (!iterProvider.isEndContainer())
							fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
					}
					iterFlowers.nextElement(); //переходим к следующему элементу
					if (!iterFlowers.isEndContainer())
						fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				}
				iterSeller.nextElement(); //переходим к следующему элементу
				if (!iterSeller.isEndContainer() && isRunning)
					fout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"; //если это не конец очереди - ставим разделяющий знак
				else if (isRunning)
					fout << "\n";
			}

			MessageBox::Show("Данные успешно записаны в файл.", "Операция успешна!");
		}
		catch (FileError error) {
			MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
		}
		catch (...) {
			MessageBox::Show("Ошибка обработки файла!", "Ошибка!");
		}
	}

		   //---------------------------------------------Выход с программы-------------------------------------------------------
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}

		   //---------------------------------------------Очистка поля для таблицы-------------------------------------------------------
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
//---------------------------------------------------Считывание с файла-------------------------------------------------------
//private: System::Void счисToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//	try
//	{
//		openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
//		openFileDialog1->ShowDialog();
//		string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
//		//string filename = "data.txt";
//		ifstream fin(filename, ios_base::in);
//		if (!fin.is_open())
//			throw FileError("Ошибка открытия файла.");
//		string data;
//		fin >> data;
//		if (data == "Sellers")
//		{
//			do {
//				string name;
//				string typeOfFlowers;
//				//считываем данные с файла про продавцов
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
//			throw FileError("Данные Seller в файле некоректны.");
//		//if (data == "Flowers")
//		//{
//		//	do {//считываем данные о цветах
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
//		//			throw FlowersError("Данные о цветах в файле некоректны.");
//		//		flowerShop->findSeller(seller)->addFlowers(elem);
//		//		fin >> data;
//		//	} while (data == "----------------------------" && !fin.eof());
//		//}
//		//else
//		//	throw FileError("Данные Flowers в файле некоректны.");
//
//		if (data == "Flowers")
//		{
//			do {//зчитуємо дані про flowers 
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
//					throw FlowersError("Некоректні дані у файлі.");
//				flowerShop->findSeller(seller)->addFlowers(elem);
//
//				fin >> data;
//			} while (data == "---" && !fin.eof());
//		}
//		else
//			throw FileError("Некоректні Flowers дані у файлі.");
//		if (data == "Provider")
//		{
//			do {//считываем данные о поставщике
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
//					throw ProviderError("Данные о поставщике в файле некоректны.");
//				flowerShop->findSeller(seller)->findFlowers(name)->addProvider(elem);
//
//				fin >> data;
//			} while (data == "---" && !fin.eof());
//		}
//		else
//			throw FileError("Данные Provider в файле некоректны.");
//
//		flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);//добавляєть фермер у випадаючі списки
//		flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);
//		//flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType);
//		//flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);
//
//		MessageBox::Show("Данные с файла успешно загружены.", "Операция успешна!");
//	}
//
//	catch (FileError error) {
//		MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
//	}
//	catch (...) {
//		MessageBox::Show("Ошибка обработки файла!", "Ошибка!");
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
////		throw FileError("Помилка відкриття файлу.");
////
////	string data;
////	fin >> data;
////
////	if (data == "Sellers")
////	{
////		do {
////			string name;
////			string typeOfFlowers;
////			//читаємо з файла дані про  фермера
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
////		throw FileError("Некоректні Seller дані у файлі.");
////
////	if (data == "Flowers")
////	{
////		do {//зчитуємо дані про продукцію 
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
////				throw FlowersError("Некоректні Flowers дані у файлі.");
////			flowerShop->findSeller (seller)->addFlowers(elem);
////
////			fin >> data;
////		} while (data == "---" && !fin.eof());
////	}
////	else
////		throw FileError("Некоректні 3 дані у файлі.");
////
////	if (data == "Provier")
////	{
////		do {//зчитуємо дані про потреби
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
////				throw ProviderError("Некоректні Provider дані у файлі.");
////			flowerShop->findSeller(seller)->findFlowers(name)->addProvider(elem);
////
////			fin >> data;
////		} while (data == "---" && !fin.eof());
////	}
////	else
////		throw FileError("Некоректні 4 дані у файлі.");
////
////	flowerShop->sellersToComboBox(comboBoxFlowersChooseSeller);//добавляєть фермер у випадаючі списки
////	flowerShop->sellersToComboBox(comboBoxProviderChooseSeller);
////	flowerShop->typeOfFlowersToComboBox(comboBoxFlowersChooseType);
////	flowerShop->typeOfFlowersToComboBox(comboBoxProviderChooseType);
////
////	MessageBox::Show("Дані з файлу успішно завантажено в програму.", ":)");
////}
////catch (FileError error) {
////	MessageBox::Show(gcnew String(error.getMessage()), "Помилка!");
////}
////catch (...) {
////	MessageBox::Show("Помилка обробки файлу!", "Помилка!");
////}
//}
//---------------------------------------------------Запись в файл-------------------------------------------------------
//private: System::Void сохранитьФайлToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
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
//			throw FileError("Ошибка!\nНе удалось открыть файл.");
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
//		MessageBox::Show("Данные успешно записаны в файл.", "Операция успешна!");
//	}
//	catch (FileError error) {
//		MessageBox::Show(gcnew String(error.getMessage()), "Ошибка!");
//	}
//	catch (...) {
//		MessageBox::Show("Ошибка обработки файла!", "Ошибка!");
//	}
//}