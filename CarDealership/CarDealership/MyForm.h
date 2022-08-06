#pragma once

namespace CarDealership {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{


		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::RichTextBox^ offerBx2;
	private: System::Windows::Forms::ComboBox^ seatsBx;

		   MySqlDataReader^ sqlRd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CarDealershipConnector();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ offerBx;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ emissionClsBx;
	private: System::Windows::Forms::ComboBox^ efficiencyClsBx;

	private: System::Windows::Forms::ComboBox^ colorBx;
	private: System::Windows::Forms::TextBox^ cubicCapBx;



	private: System::Windows::Forms::ComboBox^ transmissionBx;
	private: System::Windows::Forms::ComboBox^ typeBx;
	private: System::Windows::Forms::ComboBox^ fuelBx;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ powerBx;
	private: System::Windows::Forms::TextBox^ mileageBx;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ markeBx;
	private: System::Windows::Forms::TextBox^ modelBx;
	private: System::Windows::Forms::TextBox^ registrationBx;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ numberBx;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ discountBx;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ sellPriceBx;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ buyPriceBx;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ refreshBtn;
	private: System::Windows::Forms::Button^ resetBtn;
	private: System::Windows::Forms::Button^ deteteBtn;
	private: System::Windows::Forms::Button^ createOfferBtn;
	private: System::Windows::Forms::Button^ printBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::TextBox^ searchBx;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->seatsBx = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->emissionClsBx = (gcnew System::Windows::Forms::ComboBox());
			this->efficiencyClsBx = (gcnew System::Windows::Forms::ComboBox());
			this->colorBx = (gcnew System::Windows::Forms::ComboBox());
			this->cubicCapBx = (gcnew System::Windows::Forms::TextBox());
			this->transmissionBx = (gcnew System::Windows::Forms::ComboBox());
			this->typeBx = (gcnew System::Windows::Forms::ComboBox());
			this->fuelBx = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->powerBx = (gcnew System::Windows::Forms::TextBox());
			this->mileageBx = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->markeBx = (gcnew System::Windows::Forms::ComboBox());
			this->modelBx = (gcnew System::Windows::Forms::TextBox());
			this->registrationBx = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numberBx = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->discountBx = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->sellPriceBx = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->buyPriceBx = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->refreshBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->deteteBtn = (gcnew System::Windows::Forms::Button());
			this->createOfferBtn = (gcnew System::Windows::Forms::Button());
			this->printBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->searchBx = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->offerBx = (gcnew System::Windows::Forms::Panel());
			this->offerBx2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->offerBx->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->seatsBx);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->emissionClsBx);
			this->panel1->Controls->Add(this->efficiencyClsBx);
			this->panel1->Controls->Add(this->colorBx);
			this->panel1->Controls->Add(this->cubicCapBx);
			this->panel1->Controls->Add(this->transmissionBx);
			this->panel1->Controls->Add(this->typeBx);
			this->panel1->Controls->Add(this->fuelBx);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->powerBx);
			this->panel1->Controls->Add(this->mileageBx);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->markeBx);
			this->panel1->Controls->Add(this->modelBx);
			this->panel1->Controls->Add(this->registrationBx);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->numberBx);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(260, 375);
			this->panel1->TabIndex = 0;
			// 
			// seatsBx
			// 
			this->seatsBx->FormattingEnabled = true;
			this->seatsBx->Items->AddRange(gcnew cli::array< System::Object^  >(9) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" });
			this->seatsBx->Location = System::Drawing::Point(60, 292);
			this->seatsBx->Name = L"seatsBx";
			this->seatsBx->Size = System::Drawing::Size(193, 21);
			this->seatsBx->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(-2, 346);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(135, 20);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Emission Class:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(-2, 320);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(141, 20);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Efficiency Class:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(-1, 293);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 20);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Seats:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(-2, 267);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 20);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Color:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(-2, 240);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(133, 20);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Cubic Capacity:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(-2, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Transmission:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(-2, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Type:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-2, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Fuel:";
			// 
			// emissionClsBx
			// 
			this->emissionClsBx->FormattingEnabled = true;
			this->emissionClsBx->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1 (None)", L"2 (Red)", L"3 (Yellow)", L"4 (Green)" });
			this->emissionClsBx->Location = System::Drawing::Point(139, 346);
			this->emissionClsBx->Name = L"emissionClsBx";
			this->emissionClsBx->Size = System::Drawing::Size(114, 21);
			this->emissionClsBx->TabIndex = 0;
			// 
			// efficiencyClsBx
			// 
			this->efficiencyClsBx->FormattingEnabled = true;
			this->efficiencyClsBx->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Euro6", L"Euro5", L"Euro4", L"Euro3", L"Euro2",
					L"Euro1", L"Non-Euro"
			});
			this->efficiencyClsBx->Location = System::Drawing::Point(145, 319);
			this->efficiencyClsBx->Name = L"efficiencyClsBx";
			this->efficiencyClsBx->Size = System::Drawing::Size(108, 21);
			this->efficiencyClsBx->TabIndex = 0;
			// 
			// colorBx
			// 
			this->colorBx->FormattingEnabled = true;
			this->colorBx->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Beige", L"Black", L"Blue", L"Brown", L"Gold", L"Green",
					L"Grey", L"Orange", L"Purple", L"Red", L"Silver", L"White", L"Yellow"
			});
			this->colorBx->Location = System::Drawing::Point(60, 266);
			this->colorBx->Name = L"colorBx";
			this->colorBx->Size = System::Drawing::Size(193, 21);
			this->colorBx->TabIndex = 0;
			// 
			// cubicCapBx
			// 
			this->cubicCapBx->Location = System::Drawing::Point(137, 240);
			this->cubicCapBx->Name = L"cubicCapBx";
			this->cubicCapBx->Size = System::Drawing::Size(116, 20);
			this->cubicCapBx->TabIndex = 0;
			// 
			// transmissionBx
			// 
			this->transmissionBx->FormattingEnabled = true;
			this->transmissionBx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Manual", L"Automatic", L"Semi-Automatic" });
			this->transmissionBx->Location = System::Drawing::Point(123, 213);
			this->transmissionBx->Name = L"transmissionBx";
			this->transmissionBx->Size = System::Drawing::Size(130, 21);
			this->transmissionBx->TabIndex = 0;
			// 
			// typeBx
			// 
			this->typeBx->FormattingEnabled = true;
			this->typeBx->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Sedan", L"Hatchback", L"Minivan", L"SUV", L"Crossover",
					L"Pickup", L"Coupe", L"Cabriolet", L"Roadster", L"Station Wagon", L"Sportscars", L"Limousine", L"Truck", L"Supercar"
			});
			this->typeBx->Location = System::Drawing::Point(56, 186);
			this->typeBx->Name = L"typeBx";
			this->typeBx->Size = System::Drawing::Size(197, 21);
			this->typeBx->TabIndex = 0;
			// 
			// fuelBx
			// 
			this->fuelBx->FormattingEnabled = true;
			this->fuelBx->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Petrol", L"Diesel", L"LPG", L"Natural Gas", L"Electric",
					L"Hybrid (p + e)", L"Hybrid (d + e)", L"Hydrogen", L"Ethanol"
			});
			this->fuelBx->Location = System::Drawing::Point(53, 159);
			this->fuelBx->Name = L"fuelBx";
			this->fuelBx->Size = System::Drawing::Size(200, 21);
			this->fuelBx->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-2, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Power:";
			// 
			// powerBx
			// 
			this->powerBx->Location = System::Drawing::Point(67, 133);
			this->powerBx->Name = L"powerBx";
			this->powerBx->Size = System::Drawing::Size(186, 20);
			this->powerBx->TabIndex = 0;
			// 
			// mileageBx
			// 
			this->mileageBx->Location = System::Drawing::Point(80, 107);
			this->mileageBx->Name = L"mileageBx";
			this->mileageBx->Size = System::Drawing::Size(173, 20);
			this->mileageBx->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-2, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Mileage:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-2, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"First Registration:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-2, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Model:";
			// 
			// markeBx
			// 
			this->markeBx->FormattingEnabled = true;
			this->markeBx->Items->AddRange(gcnew cli::array< System::Object^  >(67) {
				L"  Abarth", L"  Alfa Romeo", L"  Aston Martin",
					L"  Audi", L"  Bentley", L"  BMW", L"  Bugatti", L"  Cadillac", L"  Chevrolet", L"  Chrysler", L"  Citron", L"  Dacia", L"  DAF",
					L"  Daewoo", L"  Daihatsu", L"  Dodge", L"  Donkervoort", L"  DS", L"  Ferrari", L"  Fiat", L"  Fisker", L"  Ford", L"  Honda",
					L"  Hummer", L"  Hyundai", L"  Infiniti", L"  Iveco", L"  Jaguar", L"  Jeep", L"  Kia", L"  KTM", L"  Lada", L"  Lamborghini",
					L"  Lancia", L"  Land Rover", L"  Landwind", L"  Lexus", L"  Lotus", L"  MAN", L"  Maserati", L"  Maybach", L"  Mazda", L"  McLaren",
					L"  MercedesBenz", L"  MG", L"  Mini", L"  Mitsubishi", L"  Morgan", L"  Nissan", L"  Opel", L"  Peugeot", L"  Porsche", L"  Renault",
					L"  RollsRoyce", L"  Rover", L"  Saab", L"  Scania", L"  Seat", L"  Skoda", L"  Smart", L"  SsangYong", L"  Subaru", L"  Suzuki",
					L"  Tesla", L"  Toyota", L"  Volkswagen", L"  Volvo"
			});
			this->markeBx->Location = System::Drawing::Point(80, 29);
			this->markeBx->Name = L"markeBx";
			this->markeBx->Size = System::Drawing::Size(173, 21);
			this->markeBx->TabIndex = 0;
			// 
			// modelBx
			// 
			this->modelBx->Location = System::Drawing::Point(80, 55);
			this->modelBx->Name = L"modelBx";
			this->modelBx->Size = System::Drawing::Size(173, 20);
			this->modelBx->TabIndex = 0;
			// 
			// registrationBx
			// 
			this->registrationBx->Location = System::Drawing::Point(157, 81);
			this->registrationBx->Name = L"registrationBx";
			this->registrationBx->Size = System::Drawing::Size(96, 20);
			this->registrationBx->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-2, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Marke:";
			// 
			// numberBx
			// 
			this->numberBx->Location = System::Drawing::Point(80, 3);
			this->numberBx->Name = L"numberBx";
			this->numberBx->Size = System::Drawing::Size(173, 20);
			this->numberBx->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-2, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Number:";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->discountBx);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->sellPriceBx);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->buyPriceBx);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Location = System::Drawing::Point(278, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(260, 87);
			this->panel2->TabIndex = 1;
			// 
			// discountBx
			// 
			this->discountBx->FormattingEnabled = true;
			this->discountBx->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"4", L"5", L"7", L"10", L"12", L"15",
					L"20"
			});
			this->discountBx->Location = System::Drawing::Point(89, 57);
			this->discountBx->Name = L"discountBx";
			this->discountBx->Size = System::Drawing::Size(164, 21);
			this->discountBx->TabIndex = 5;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(-2, 58);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 20);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Discount:";
			// 
			// sellPriceBx
			// 
			this->sellPriceBx->Location = System::Drawing::Point(93, 31);
			this->sellPriceBx->Name = L"sellPriceBx";
			this->sellPriceBx->Size = System::Drawing::Size(160, 20);
			this->sellPriceBx->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(-2, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 20);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Sell Price:";
			// 
			// buyPriceBx
			// 
			this->buyPriceBx->Location = System::Drawing::Point(93, 5);
			this->buyPriceBx->Name = L"buyPriceBx";
			this->buyPriceBx->Size = System::Drawing::Size(160, 20);
			this->buyPriceBx->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(-2, 5);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 20);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Buy Price:";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->exitBtn);
			this->panel3->Controls->Add(this->refreshBtn);
			this->panel3->Controls->Add(this->resetBtn);
			this->panel3->Controls->Add(this->deteteBtn);
			this->panel3->Controls->Add(this->createOfferBtn);
			this->panel3->Controls->Add(this->printBtn);
			this->panel3->Controls->Add(this->modifyBtn);
			this->panel3->Controls->Add(this->saveBtn);
			this->panel3->Controls->Add(this->searchBx);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(278, 127);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(260, 260);
			this->panel3->TabIndex = 2;
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(2, 232);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(251, 23);
			this->exitBtn->TabIndex = 5;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// refreshBtn
			// 
			this->refreshBtn->Location = System::Drawing::Point(2, 203);
			this->refreshBtn->Name = L"refreshBtn";
			this->refreshBtn->Size = System::Drawing::Size(251, 23);
			this->refreshBtn->TabIndex = 8;
			this->refreshBtn->Text = L"Refresh";
			this->refreshBtn->UseVisualStyleBackColor = true;
			this->refreshBtn->Click += gcnew System::EventHandler(this, &MyForm::refreshBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(2, 174);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(251, 23);
			this->resetBtn->TabIndex = 7;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			this->resetBtn->Click += gcnew System::EventHandler(this, &MyForm::resetBtn_Click);
			// 
			// deteteBtn
			// 
			this->deteteBtn->Location = System::Drawing::Point(3, 145);
			this->deteteBtn->Name = L"deteteBtn";
			this->deteteBtn->Size = System::Drawing::Size(250, 23);
			this->deteteBtn->TabIndex = 6;
			this->deteteBtn->Text = L"Delete";
			this->deteteBtn->UseVisualStyleBackColor = true;
			this->deteteBtn->Click += gcnew System::EventHandler(this, &MyForm::deteteBtn_Click);
			// 
			// createOfferBtn
			// 
			this->createOfferBtn->Location = System::Drawing::Point(3, 116);
			this->createOfferBtn->Name = L"createOfferBtn";
			this->createOfferBtn->Size = System::Drawing::Size(250, 23);
			this->createOfferBtn->TabIndex = 5;
			this->createOfferBtn->Text = L"Create Offer";
			this->createOfferBtn->UseVisualStyleBackColor = true;
			this->createOfferBtn->Click += gcnew System::EventHandler(this, &MyForm::createOfferBtn_Click);
			// 
			// printBtn
			// 
			this->printBtn->Location = System::Drawing::Point(2, 87);
			this->printBtn->Name = L"printBtn";
			this->printBtn->Size = System::Drawing::Size(251, 23);
			this->printBtn->TabIndex = 4;
			this->printBtn->Text = L"Print";
			this->printBtn->UseVisualStyleBackColor = true;
			this->printBtn->Click += gcnew System::EventHandler(this, &MyForm::printBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(2, 58);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(251, 23);
			this->modifyBtn->TabIndex = 3;
			this->modifyBtn->Text = L"Modify";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &MyForm::modifyBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(2, 28);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(251, 23);
			this->saveBtn->TabIndex = 2;
			this->saveBtn->Text = L"Save";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// searchBx
			// 
			this->searchBx->Location = System::Drawing::Point(83, 3);
			this->searchBx->Name = L"searchBx";
			this->searchBx->Size = System::Drawing::Size(170, 20);
			this->searchBx->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(2, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::button1_KeyPress);
			// 
			// offerBx
			// 
			this->offerBx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->offerBx->Controls->Add(this->offerBx2);
			this->offerBx->Location = System::Drawing::Point(544, 12);
			this->offerBx->Name = L"offerBx";
			this->offerBx->Size = System::Drawing::Size(260, 375);
			this->offerBx->TabIndex = 3;
			// 
			// offerBx2
			// 
			this->offerBx2->Location = System::Drawing::Point(3, 3);
			this->offerBx2->Name = L"offerBx2";
			this->offerBx2->Size = System::Drawing::Size(250, 365);
			this->offerBx2->TabIndex = 0;
			this->offerBx2->Text = L"";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->dataGridView1);
			this->panel5->Location = System::Drawing::Point(12, 393);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(793, 356);
			this->panel5->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(783, 346);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 761);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->offerBx);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Car Dealership";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->offerBx->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
// =========================================Functions=============================================================

	private: System::Void CarDealershipConnector() {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = inventory123; database = inventorydb";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "select * from inventorydb";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->DataSource = sqlDt;
	}

	private: System::Void RefreshDB() {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = inventory123; database = inventorydb";
		sqlCmd->Connection = sqlConn;
		String^ ID = numberBx->Text;
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from inventorydb", sqlConn);
		DataTable^ sqlDt = gcnew DataTable();
		sqlDtA->Fill(sqlDt);
		dataGridView1->DataSource = sqlDt;
	}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		numberBx->Text = "";
		markeBx->Text = "";
		modelBx->Text = "";
		registrationBx->Text = "";
		mileageBx->Text = "";
		powerBx->Text = "";
		fuelBx->Text = "";
		typeBx->Text = "";
		transmissionBx->Text = "";
		cubicCapBx->Text = "";
		colorBx->Text = "";
		seatsBx->Text = "";
		efficiencyClsBx->Text = "";
		emissionClsBx->Text = "";
		buyPriceBx->Text = "";
		sellPriceBx->Text = "";
		discountBx->Text = "";
		searchBx->Text = "";
		offerBx2->Text = "";
	}

	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iEixt;
		iEixt = MessageBox::Show("Confirm exit", "Car Dealership", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iEixt == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void refreshBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDB();
	}
	private: System::Void printBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		printPreviewDialog1->ShowDialog();
	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Time NEw Roman", 16, FontStyle::Regular);

		e->Graphics->DrawString(offerBx2->Text, fntString, Brushes::Black, 100, 100);
	}
	private: System::Void createOfferBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		double sellPrice = Convert::ToInt32(sellPriceBx->Text);
		double discount = Convert::ToInt32(discountBx->Text);
		double disc = sellPrice * discount / 100;
		double buyPrice = Convert::ToInt32(buyPriceBx->Text);
		double power = Convert::ToInt32(powerBx->Text);
		double transformation = 0.74 * power;
		offerBx2->Clear();
		offerBx2->AppendText("\t\t" + "Car offer for " + numberBx->Text + "\t\t" + "\n");
		offerBx2->AppendText("\t\t" + markeBx->Text + " " + modelBx->Text + "\t\t" + "\n");
		offerBx2->AppendText("\n");
		offerBx2->AppendText("First Registration: " + registrationBx->Text+ "\n");
		offerBx2->AppendText("Mileage: " + mileageBx->Text + "km\n");
		offerBx2->AppendText("Power: " + powerBx->Text + "hp (" + System::Convert::ToString(transformation) +"kw)\n");
		offerBx2->AppendText("Fuel: " + fuelBx->Text + "\n");
		offerBx2->AppendText("Vehicle Type: " + typeBx->Text + "\n");
		offerBx2->AppendText("Transmission: " + transmissionBx->Text + "\n");
		if (fuelBx->Text != "Electric")
			offerBx2->AppendText("Cubic Capacity: " + cubicCapBx->Text + "ccm\n");
		offerBx2->AppendText("Color: " + colorBx->Text + "\n");
		offerBx2->AppendText("Number of Seats: " + seatsBx->Text + "\n");
		offerBx2->AppendText("Efficiency Class: " + efficiencyClsBx->Text + "\n");
		offerBx2->AppendText("Emission Class: " + emissionClsBx->Text + "\n");
		offerBx2->AppendText("\n");
		offerBx2->AppendText("Buy Price: " + buyPriceBx->Text + "$\n");
		offerBx2->AppendText("Sell Price: " + sellPriceBx->Text + "$\n");
		offerBx2->AppendText("Discount: " + discountBx->Text + "%\n");
		offerBx2->AppendText("Price after Discount: " + System::Convert::ToString(sellPrice - disc) + "$\n");
		offerBx2->AppendText("\n");
		offerBx2->AppendText("Dealership profit: " + System::Convert::ToString(sellPrice - disc - buyPrice) + "$\n");
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			numberBx->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
			markeBx->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			modelBx->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			registrationBx->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
			mileageBx->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
			powerBx->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
			fuelBx->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
			typeBx->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
			transmissionBx->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
			cubicCapBx->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
			colorBx->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
			seatsBx->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
			efficiencyClsBx->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
			emissionClsBx->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();
			buyPriceBx->Text = dataGridView1->SelectedRows[0]->Cells[14]->Value->ToString();
			sellPriceBx->Text = dataGridView1->SelectedRows[0]->Cells[15]->Value->ToString();
			discountBx->Text = dataGridView1->SelectedRows[0]->Cells[16]->Value->ToString();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void deteteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = inventory123; database = inventorydb";
			sqlCmd->Connection = sqlConn;
			String^ ID = numberBx->Text;
			MySqlCommand^ sqlCmd = gcnew MySqlCommand("delete * from inventorydb where Number =" + ID + "", sqlConn);
			sqlConn->Open();
			sqlRd = sqlCmd->ExecuteReader(); 
			MessageBox::Show("Car deleted","Car Dealership", MessageBoxButtons::OK, MessageBoxIcon::Information);
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = inventory123; database = inventorydb";
			sqlCmd->Connection = sqlConn;
			String^ ID = numberBx->Text;
			String^ marke = markeBx->Text;
			String^ model = modelBx->Text;
			String^ registration = registrationBx->Text; 
			String^ mileage = mileageBx->Text; 
			String^ power = powerBx->Text; 
			String^ fuel = fuelBx->Text; 
			String^ type = typeBx->Text;
			String^ transmission = transmissionBx->Text;
			String^ cubicCap = cubicCapBx->Text;
			String^ color = colorBx->Text;
			String^ seats = seatsBx->Text;
			String^ efficiency = efficiencyClsBx->Text;
			String^ emission = emissionClsBx->Text;
			String^ buyPrice = buyPriceBx->Text; 
			String^ sellPrice = sellPriceBx->Text;
			String^ discount = discountBx->Text;

			sqlCmd->CommandText = "update inventorydb set Number = '" + ID + "', Marke = '" + marke + "', Model = '" + model + "', FirstRegistration = '" + registration
				+ "', Mileage = '" + mileage + "', Power = '" + power + "', Fuel = '" + fuel + "', Type = '" + type + "', Transmission = '" + transmission
				+ "', CubicCapacity = '" + cubicCap + "', Color = '" + color + "', Seats = '" + seats + "', EfficiencyClass = '" + efficiency + "', EmissionClass = '" + emission
				+ "', BuyPrice = '" + buyPrice + "', SellPrice = '" + sellPrice + "', Discount = '" + discount + "'WHERE Number =" + ID + "", sqlConn;
			
			sqlConn->Open();
			sqlRd = sqlCmd->ExecuteReader();
			MessageBox::Show("Car Modified", "Car Dealership", MessageBoxButtons::OK, MessageBoxIcon::Information);
			sqlConn->Close();

			CarDealershipConnector();
			RefreshDB();
			
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = inventory123; database = inventorydb";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;

		try {
			sqlCmd->CommandText = "insert into inventorydb(Number, Marke, Model, FirstRegistration, Mileage, Power, Fuel, Type, Transmission, CubicCapacity, Color, Seats, EfficiencyClass, EmissionClass, BuyPrice, SellPrice, Discount)" 
				+ "values('" + numberBx->Text + "','" + markeBx->Text + "','" + modelBx->Text + "','" + registrationBx->Text + "','" + mileageBx->Text + "','" + powerBx->Text + "','" + fuelBx->Text + "','" + typeBx->Text + "','" + transmissionBx->Text 
				+ "','" + cubicCapBx->Text + "','" + colorBx->Text + "','" + seatsBx->Text + "','" + efficiencyClsBx->Text + "','" + emissionClsBx->Text + "','" + buyPriceBx->Text + "','" + sellPriceBx->Text + "','" + discountBx->Text + "')";

			sqlCmd->ExecuteNonQuery();
			MessageBox::Show("Car Saved", "Car Dealership", MessageBoxButtons::OK, MessageBoxIcon::Information);
			sqlConn->Close();
			CarDealershipConnector();
			RefreshDB();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try {
			if (e->KeyChar == (Char)13)
			{
				DataView^ dv = sqlDt->DefaultView;
				dv->RowFilter = String::Format("Marke like '%{0}%'", searchBx->Text);
				dataGridView1->DataSource = dv->ToTable();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
