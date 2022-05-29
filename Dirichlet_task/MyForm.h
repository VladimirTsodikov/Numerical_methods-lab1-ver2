#pragma once

#include <vector>
#include <cmath>
#include <algorithm>

namespace Dirichlettask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
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
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:





    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::TextBox^  textBox4;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label5;

    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Button^  buttonCalculateTest;







    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::TabControl^  tabControl1;
    private: System::Windows::Forms::TabPage^  tabPage1;
    private: System::Windows::Forms::PictureBox^  pictureBox2;
    private: System::Windows::Forms::Label^  label14;
    private: System::Windows::Forms::TabPage^  tabPage2;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::Button^  buttonCalculateMain;











    private: System::Windows::Forms::GroupBox^  groupBox3;
    private: System::Windows::Forms::TextBox^  textBox5;
    private: System::Windows::Forms::Label^  label16;
    private: System::Windows::Forms::TextBox^  textBox6;
    private: System::Windows::Forms::Label^  label17;
    private: System::Windows::Forms::Label^  label18;
    private: System::Windows::Forms::Label^  label19;
    private: System::Windows::Forms::TextBox^  textBox7;
    private: System::Windows::Forms::TextBox^  textBox8;
    private: System::Windows::Forms::Label^  label15;

    private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
    private: System::Windows::Forms::TextBox^  textBox9;
    private: System::Windows::Forms::Label^  label28;






    private: System::Windows::Forms::DataGridView^  dataGridView1;
    private: System::Windows::Forms::DataGridView^  dataGridView2;
    private: System::Windows::Forms::TextBox^  textBox10;
    private: System::Windows::Forms::Label^  label29;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
    private: System::Windows::Forms::GroupBox^  groupBox4;
    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::Label^  label21;
    private: System::Windows::Forms::Label^  label22;
    private: System::Windows::Forms::Label^  label23;
    private: System::Windows::Forms::Label^  label24;
    private: System::Windows::Forms::Label^  label25;
    private: System::Windows::Forms::Label^  label26;
    private: System::Windows::Forms::Label^  label27;




private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::RadioButton^  radioButtonYTest;
private: System::Windows::Forms::RadioButton^  radioButtonXTest;
private: System::Windows::Forms::RadioButton^  radioButtonNullTest;

private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::RadioButton^  radioButtonYMain;

private: System::Windows::Forms::RadioButton^  radioButtonXMain;

private: System::Windows::Forms::RadioButton^  radioButtonNullMain;













private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label32;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;
private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tabPage8;
private: System::Windows::Forms::TabPage^  tabPage9;
private: System::Windows::Forms::DataGridView^  dataGridView3;
private: System::Windows::Forms::TabPage^  tabPage10;
private: System::Windows::Forms::DataGridView^  dataGridView4;
private: System::Windows::Forms::TabControl^  tabControl5;
private: System::Windows::Forms::TabPage^  tabPage15;
private: System::Windows::Forms::TabPage^  tabPage16;
private: System::Windows::Forms::DataGridView^  dataGridView5;
private: System::Windows::Forms::TabPage^  tabPage17;
private: System::Windows::Forms::DataGridView^  dataGridView6;
private: System::Windows::Forms::TabPage^  tabPage18;
private: System::Windows::Forms::DataGridView^  dataGridView7;
private: System::Windows::Forms::TabControl^  tabControl4;
private: System::Windows::Forms::TabPage^  tabPage11;
private: System::Windows::Forms::TabPage^  tabPage12;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart7;
private: System::Windows::Forms::TabPage^  tabPage13;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart8;
private: System::Windows::Forms::TabPage^  tabPage14;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart9;













    protected:

    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->buttonCalculateTest = (gcnew System::Windows::Forms::Button());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
            this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
            this->chart7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
            this->chart8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
            this->chart9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonYTest = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonXTest = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonNullTest = (gcnew System::Windows::Forms::RadioButton());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonYMain = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonXMain = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonNullMain = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->buttonCalculateMain = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabControl5->SuspendLayout();
            this->tabPage15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tabPage16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
            this->tabPage17->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
            this->tabPage18->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
            this->tabControl4->SuspendLayout();
            this->tabPage11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->tabPage12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->BeginInit();
            this->tabPage13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->BeginInit();
            this->tabPage14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart9))->BeginInit();
            this->groupBox7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->tabPage2->SuspendLayout();
            this->tabControl3->SuspendLayout();
            this->tabPage8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->tabPage9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->tabPage10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->tabControl2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
            this->tabPage4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
            this->tabPage5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
            this->tabPage6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
            this->tabPage7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
            this->groupBox8->SuspendLayout();
            this->groupBox4->SuspendLayout();
            this->groupBox12->SuspendLayout();
            this->groupBox11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->groupBox3->SuspendLayout();
            this->SuspendLayout();
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->label31);
            this->groupBox1->Controls->Add(this->label13);
            this->groupBox1->Controls->Add(this->label12);
            this->groupBox1->Controls->Add(this->label11);
            this->groupBox1->Controls->Add(this->label10);
            this->groupBox1->Controls->Add(this->label9);
            this->groupBox1->Controls->Add(this->label8);
            this->groupBox1->Controls->Add(this->label7);
            this->groupBox1->Controls->Add(this->label6);
            this->groupBox1->Location = System::Drawing::Point(6, 573);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(726, 318);
            this->groupBox1->TabIndex = 5;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Справка";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Location = System::Drawing::Point(6, 77);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(212, 17);
            this->label31->TabIndex = 9;
            this->label31->Text = L"Достигнутая точность метода:";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(8, 239);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(90, 17);
            this->label13->TabIndex = 7;
            this->label13->Text = L"В узле (x, y):";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(8, 212);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(300, 17);
            this->label12->TabIndex = 6;
            this->label12->Text = L"Макс. разность точн. и числ. решений |U-V|:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(7, 184);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(281, 17);
            this->label11->TabIndex = 5;
            this->label11->Text = L"Схема на сетке решена с невязкой Rs_2:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(8, 157);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(291, 17);
            this->label10->TabIndex = 4;
            this->label10->Text = L"Невязка СЛАУ на нач. приближении R0_2:";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(8, 129);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(248, 17);
            this->label9->TabIndex = 3;
            this->label9->Text = L"Достигнутая погрешность решения:";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(8, 102);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(124, 17);
            this->label8->TabIndex = 2;
            this->label8->Text = L"Кол-во итераций:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(6, 50);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(130, 17);
            this->label7->TabIndex = 1;
            this->label7->Text = L"Параметр метода:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(7, 22);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(54, 17);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Метод:";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->checkBox2);
            this->groupBox2->Controls->Add(this->label28);
            this->groupBox2->Controls->Add(this->textBox4);
            this->groupBox2->Controls->Add(this->textBox9);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->textBox3);
            this->groupBox2->Controls->Add(this->label3);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->label1);
            this->groupBox2->Controls->Add(this->textBox2);
            this->groupBox2->Controls->Add(this->textBox1);
            this->groupBox2->Location = System::Drawing::Point(6, 293);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(726, 114);
            this->groupBox2->TabIndex = 6;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Параметры метода";
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(440, 77);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(280, 21);
            this->checkBox2->TabIndex = 27;
            this->checkBox2->Text = L"Использовать оптимальное значение";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(7, 75);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(305, 17);
            this->label28->TabIndex = 23;
            this->label28->Text = L"Параметр метода  w (в интервале от 0 до 2):";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(461, 45);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(84, 22);
            this->textBox4->TabIndex = 7;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(318, 75);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(84, 22);
            this->textBox9->TabIndex = 22;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(284, 52);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(163, 17);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Макс. кол-во итераций:";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(461, 20);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(84, 22);
            this->textBox3->TabIndex = 5;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(284, 26);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(126, 17);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Точность метода:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(6, 50);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(159, 17);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Число разбиений по y:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(7, 25);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(158, 17);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Число разбиений по x:";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(171, 47);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(84, 22);
            this->textBox2->TabIndex = 1;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(172, 21);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(84, 22);
            this->textBox1->TabIndex = 0;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label5->Location = System::Drawing::Point(4, 154);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 18);
            this->label5->TabIndex = 7;
            // 
            // buttonCalculateTest
            // 
            this->buttonCalculateTest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->buttonCalculateTest->Location = System::Drawing::Point(6, 519);
            this->buttonCalculateTest->Name = L"buttonCalculateTest";
            this->buttonCalculateTest->Size = System::Drawing::Size(340, 48);
            this->buttonCalculateTest->TabIndex = 10;
            this->buttonCalculateTest->Text = L"Вычислить";
            this->buttonCalculateTest->UseVisualStyleBackColor = true;
            this->buttonCalculateTest->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculateTest_Click);
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(7, 3);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1512, 924);
            this->tabControl1->TabIndex = 13;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->tabControl5);
            this->tabPage1->Controls->Add(this->tabControl4);
            this->tabPage1->Controls->Add(this->groupBox7);
            this->tabPage1->Controls->Add(this->groupBox1);
            this->tabPage1->Controls->Add(this->pictureBox2);
            this->tabPage1->Controls->Add(this->label14);
            this->tabPage1->Controls->Add(this->groupBox2);
            this->tabPage1->Controls->Add(this->buttonCalculateTest);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1504, 895);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Тестовая задача";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // tabControl5
            // 
            this->tabControl5->Controls->Add(this->tabPage15);
            this->tabControl5->Controls->Add(this->tabPage16);
            this->tabControl5->Controls->Add(this->tabPage17);
            this->tabControl5->Controls->Add(this->tabPage18);
            this->tabControl5->Location = System::Drawing::Point(750, 459);
            this->tabControl5->Name = L"tabControl5";
            this->tabControl5->SelectedIndex = 0;
            this->tabControl5->Size = System::Drawing::Size(748, 436);
            this->tabControl5->TabIndex = 27;
            // 
            // tabPage15
            // 
            this->tabPage15->Controls->Add(this->dataGridView1);
            this->tabPage15->Location = System::Drawing::Point(4, 25);
            this->tabPage15->Name = L"tabPage15";
            this->tabPage15->Padding = System::Windows::Forms::Padding(3);
            this->tabPage15->Size = System::Drawing::Size(740, 407);
            this->tabPage15->TabIndex = 0;
            this->tabPage15->Text = L"V0(x,y)";
            this->tabPage15->UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(0, 3);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(737, 401);
            this->dataGridView1->TabIndex = 20;
            // 
            // tabPage16
            // 
            this->tabPage16->Controls->Add(this->dataGridView5);
            this->tabPage16->Location = System::Drawing::Point(4, 25);
            this->tabPage16->Name = L"tabPage16";
            this->tabPage16->Padding = System::Windows::Forms::Padding(3);
            this->tabPage16->Size = System::Drawing::Size(740, 407);
            this->tabPage16->TabIndex = 1;
            this->tabPage16->Text = L"U(x,y)";
            this->tabPage16->UseVisualStyleBackColor = true;
            // 
            // dataGridView5
            // 
            this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView5->Location = System::Drawing::Point(2, 3);
            this->dataGridView5->Name = L"dataGridView5";
            this->dataGridView5->RowTemplate->Height = 24;
            this->dataGridView5->Size = System::Drawing::Size(737, 401);
            this->dataGridView5->TabIndex = 21;
            // 
            // tabPage17
            // 
            this->tabPage17->Controls->Add(this->dataGridView6);
            this->tabPage17->Location = System::Drawing::Point(4, 25);
            this->tabPage17->Name = L"tabPage17";
            this->tabPage17->Size = System::Drawing::Size(740, 407);
            this->tabPage17->TabIndex = 2;
            this->tabPage17->Text = L"V(x,y)";
            this->tabPage17->UseVisualStyleBackColor = true;
            // 
            // dataGridView6
            // 
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Location = System::Drawing::Point(2, 3);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowTemplate->Height = 24;
            this->dataGridView6->Size = System::Drawing::Size(737, 401);
            this->dataGridView6->TabIndex = 21;
            // 
            // tabPage18
            // 
            this->tabPage18->Controls->Add(this->dataGridView7);
            this->tabPage18->Location = System::Drawing::Point(4, 25);
            this->tabPage18->Name = L"tabPage18";
            this->tabPage18->Size = System::Drawing::Size(740, 407);
            this->tabPage18->TabIndex = 3;
            this->tabPage18->Text = L"|U(x,y) - V(x,y)|";
            this->tabPage18->UseVisualStyleBackColor = true;
            // 
            // dataGridView7
            // 
            this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView7->Location = System::Drawing::Point(2, 3);
            this->dataGridView7->Name = L"dataGridView7";
            this->dataGridView7->RowTemplate->Height = 24;
            this->dataGridView7->Size = System::Drawing::Size(737, 401);
            this->dataGridView7->TabIndex = 21;
            // 
            // tabControl4
            // 
            this->tabControl4->Controls->Add(this->tabPage11);
            this->tabControl4->Controls->Add(this->tabPage12);
            this->tabControl4->Controls->Add(this->tabPage13);
            this->tabControl4->Controls->Add(this->tabPage14);
            this->tabControl4->Location = System::Drawing::Point(750, 6);
            this->tabControl4->Name = L"tabControl4";
            this->tabControl4->SelectedIndex = 0;
            this->tabControl4->Size = System::Drawing::Size(748, 450);
            this->tabControl4->TabIndex = 26;
            // 
            // tabPage11
            // 
            this->tabPage11->Controls->Add(this->chart1);
            this->tabPage11->Location = System::Drawing::Point(4, 25);
            this->tabPage11->Name = L"tabPage11";
            this->tabPage11->Padding = System::Windows::Forms::Padding(3);
            this->tabPage11->Size = System::Drawing::Size(740, 421);
            this->tabPage11->TabIndex = 0;
            this->tabPage11->Text = L"U(x,y)";
            this->tabPage11->UseVisualStyleBackColor = true;
            // 
            // chart1
            // 
            chartArea1->Area3DStyle->Enable3D = true;
            chartArea1->Area3DStyle->IsRightAngleAxes = false;
            chartArea1->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea1);
            this->chart1->Location = System::Drawing::Point(6, 3);
            this->chart1->Name = L"chart1";
            this->chart1->Size = System::Drawing::Size(728, 412);
            this->chart1->TabIndex = 21;
            this->chart1->Text = L"chart1";
            // 
            // tabPage12
            // 
            this->tabPage12->Controls->Add(this->chart7);
            this->tabPage12->Location = System::Drawing::Point(4, 25);
            this->tabPage12->Name = L"tabPage12";
            this->tabPage12->Padding = System::Windows::Forms::Padding(3);
            this->tabPage12->Size = System::Drawing::Size(740, 421);
            this->tabPage12->TabIndex = 1;
            this->tabPage12->Text = L"V0(x,y)";
            this->tabPage12->UseVisualStyleBackColor = true;
            // 
            // chart7
            // 
            chartArea2->Area3DStyle->Enable3D = true;
            chartArea2->Area3DStyle->IsRightAngleAxes = false;
            chartArea2->Name = L"ChartArea1";
            this->chart7->ChartAreas->Add(chartArea2);
            this->chart7->Location = System::Drawing::Point(6, 4);
            this->chart7->Name = L"chart7";
            this->chart7->Size = System::Drawing::Size(728, 412);
            this->chart7->TabIndex = 22;
            this->chart7->Text = L"chart7";
            // 
            // tabPage13
            // 
            this->tabPage13->Controls->Add(this->chart8);
            this->tabPage13->Location = System::Drawing::Point(4, 25);
            this->tabPage13->Name = L"tabPage13";
            this->tabPage13->Size = System::Drawing::Size(740, 421);
            this->tabPage13->TabIndex = 2;
            this->tabPage13->Text = L"V(x,y)";
            this->tabPage13->UseVisualStyleBackColor = true;
            // 
            // chart8
            // 
            chartArea3->Area3DStyle->Enable3D = true;
            chartArea3->Area3DStyle->IsRightAngleAxes = false;
            chartArea3->Name = L"ChartArea1";
            this->chart8->ChartAreas->Add(chartArea3);
            this->chart8->Location = System::Drawing::Point(6, 4);
            this->chart8->Name = L"chart8";
            this->chart8->Size = System::Drawing::Size(728, 412);
            this->chart8->TabIndex = 22;
            this->chart8->Text = L"chart8";
            // 
            // tabPage14
            // 
            this->tabPage14->Controls->Add(this->chart9);
            this->tabPage14->Location = System::Drawing::Point(4, 25);
            this->tabPage14->Name = L"tabPage14";
            this->tabPage14->Size = System::Drawing::Size(740, 421);
            this->tabPage14->TabIndex = 3;
            this->tabPage14->Text = L"U(x,y) - V(x,y)";
            this->tabPage14->UseVisualStyleBackColor = true;
            // 
            // chart9
            // 
            chartArea4->Area3DStyle->Enable3D = true;
            chartArea4->Area3DStyle->IsRightAngleAxes = false;
            chartArea4->Name = L"ChartArea1";
            this->chart9->ChartAreas->Add(chartArea4);
            this->chart9->Location = System::Drawing::Point(6, 4);
            this->chart9->Name = L"chart9";
            this->chart9->Size = System::Drawing::Size(728, 412);
            this->chart9->TabIndex = 22;
            this->chart9->Text = L"chart9";
            // 
            // groupBox7
            // 
            this->groupBox7->Controls->Add(this->radioButtonYTest);
            this->groupBox7->Controls->Add(this->radioButtonXTest);
            this->groupBox7->Controls->Add(this->radioButtonNullTest);
            this->groupBox7->Location = System::Drawing::Point(6, 413);
            this->groupBox7->Name = L"groupBox7";
            this->groupBox7->Size = System::Drawing::Size(726, 100);
            this->groupBox7->TabIndex = 24;
            this->groupBox7->TabStop = false;
            this->groupBox7->Text = L"Начальное приближение";
            // 
            // radioButtonYTest
            // 
            this->radioButtonYTest->AutoSize = true;
            this->radioButtonYTest->Location = System::Drawing::Point(9, 73);
            this->radioButtonYTest->Name = L"radioButtonYTest";
            this->radioButtonYTest->Size = System::Drawing::Size(179, 21);
            this->radioButtonYTest->TabIndex = 2;
            this->radioButtonYTest->TabStop = true;
            this->radioButtonYTest->Text = L"Интерполяция вдоль y";
            this->radioButtonYTest->UseVisualStyleBackColor = true;
            // 
            // radioButtonXTest
            // 
            this->radioButtonXTest->AutoSize = true;
            this->radioButtonXTest->Location = System::Drawing::Point(9, 46);
            this->radioButtonXTest->Name = L"radioButtonXTest";
            this->radioButtonXTest->Size = System::Drawing::Size(178, 21);
            this->radioButtonXTest->TabIndex = 1;
            this->radioButtonXTest->TabStop = true;
            this->radioButtonXTest->Text = L"Интерполяция вдоль x";
            this->radioButtonXTest->UseVisualStyleBackColor = true;
            // 
            // radioButtonNullTest
            // 
            this->radioButtonNullTest->AutoSize = true;
            this->radioButtonNullTest->Location = System::Drawing::Point(10, 22);
            this->radioButtonNullTest->Name = L"radioButtonNullTest";
            this->radioButtonNullTest->Size = System::Drawing::Size(85, 21);
            this->radioButtonNullTest->TabIndex = 0;
            this->radioButtonNullTest->TabStop = true;
            this->radioButtonNullTest->Text = L"Нулевое";
            this->radioButtonNullTest->UseVisualStyleBackColor = true;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(6, 29);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(726, 258);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 19;
            this->pictureBox2->TabStop = false;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->label14->Location = System::Drawing::Point(75, 3);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(172, 25);
            this->label14->TabIndex = 12;
            this->label14->Text = L"Описание задачи";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->tabControl3);
            this->tabPage2->Controls->Add(this->tabControl2);
            this->tabPage2->Controls->Add(this->groupBox8);
            this->tabPage2->Controls->Add(this->groupBox4);
            this->tabPage2->Controls->Add(this->buttonCalculateMain);
            this->tabPage2->Controls->Add(this->pictureBox1);
            this->tabPage2->Controls->Add(this->groupBox3);
            this->tabPage2->Controls->Add(this->label15);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1504, 895);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Основная задача";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabControl3
            // 
            this->tabControl3->Controls->Add(this->tabPage8);
            this->tabControl3->Controls->Add(this->tabPage9);
            this->tabControl3->Controls->Add(this->tabPage10);
            this->tabControl3->Location = System::Drawing::Point(773, 433);
            this->tabControl3->Name = L"tabControl3";
            this->tabControl3->SelectedIndex = 0;
            this->tabControl3->Size = System::Drawing::Size(725, 460);
            this->tabControl3->TabIndex = 30;
            // 
            // tabPage8
            // 
            this->tabPage8->Controls->Add(this->dataGridView2);
            this->tabPage8->Location = System::Drawing::Point(4, 25);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(3);
            this->tabPage8->Size = System::Drawing::Size(717, 431);
            this->tabPage8->TabIndex = 0;
            this->tabPage8->Text = L"V(x,y)";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(6, 6);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(708, 419);
            this->dataGridView2->TabIndex = 19;
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->dataGridView3);
            this->tabPage9->Location = System::Drawing::Point(4, 25);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Padding = System::Windows::Forms::Padding(3);
            this->tabPage9->Size = System::Drawing::Size(717, 431);
            this->tabPage9->TabIndex = 1;
            this->tabPage9->Text = L"V2(x,y)";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Location = System::Drawing::Point(4, 6);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(708, 419);
            this->dataGridView3->TabIndex = 20;
            // 
            // tabPage10
            // 
            this->tabPage10->Controls->Add(this->dataGridView4);
            this->tabPage10->Location = System::Drawing::Point(4, 25);
            this->tabPage10->Name = L"tabPage10";
            this->tabPage10->Size = System::Drawing::Size(717, 431);
            this->tabPage10->TabIndex = 2;
            this->tabPage10->Text = L"|V(x,y) - V2(x, y) |";
            this->tabPage10->UseVisualStyleBackColor = true;
            // 
            // dataGridView4
            // 
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Location = System::Drawing::Point(4, 6);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->RowTemplate->Height = 24;
            this->dataGridView4->Size = System::Drawing::Size(708, 419);
            this->dataGridView4->TabIndex = 20;
            // 
            // tabControl2
            // 
            this->tabControl2->Controls->Add(this->tabPage3);
            this->tabControl2->Controls->Add(this->tabPage4);
            this->tabControl2->Controls->Add(this->tabPage5);
            this->tabControl2->Controls->Add(this->tabPage6);
            this->tabControl2->Controls->Add(this->tabPage7);
            this->tabControl2->Location = System::Drawing::Point(769, 3);
            this->tabControl2->Name = L"tabControl2";
            this->tabControl2->SelectedIndex = 0;
            this->tabControl2->Size = System::Drawing::Size(729, 424);
            this->tabControl2->TabIndex = 29;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->chart2);
            this->tabPage3->Location = System::Drawing::Point(4, 25);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(721, 395);
            this->tabPage3->TabIndex = 0;
            this->tabPage3->Text = L"V(0)(x,y)";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // chart2
            // 
            chartArea5->Area3DStyle->Enable3D = true;
            chartArea5->Area3DStyle->IsRightAngleAxes = false;
            chartArea5->Name = L"ChartArea1";
            this->chart2->ChartAreas->Add(chartArea5);
            this->chart2->Location = System::Drawing::Point(6, 6);
            this->chart2->Name = L"chart2";
            this->chart2->Size = System::Drawing::Size(709, 383);
            this->chart2->TabIndex = 26;
            this->chart2->Text = L"chart2";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->chart3);
            this->tabPage4->Location = System::Drawing::Point(4, 25);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(721, 395);
            this->tabPage4->TabIndex = 1;
            this->tabPage4->Text = L"V2(0)(x,y)";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // chart3
            // 
            chartArea6->Area3DStyle->Enable3D = true;
            chartArea6->Area3DStyle->IsRightAngleAxes = false;
            chartArea6->Name = L"ChartArea1";
            this->chart3->ChartAreas->Add(chartArea6);
            this->chart3->Location = System::Drawing::Point(6, 6);
            this->chart3->Name = L"chart3";
            this->chart3->Size = System::Drawing::Size(709, 383);
            this->chart3->TabIndex = 27;
            this->chart3->Text = L"chart3";
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->chart4);
            this->tabPage5->Location = System::Drawing::Point(4, 25);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(721, 395);
            this->tabPage5->TabIndex = 2;
            this->tabPage5->Text = L"V(x,y)";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // chart4
            // 
            chartArea7->Area3DStyle->Enable3D = true;
            chartArea7->Area3DStyle->IsRightAngleAxes = false;
            chartArea7->Name = L"ChartArea1";
            this->chart4->ChartAreas->Add(chartArea7);
            this->chart4->Location = System::Drawing::Point(6, 6);
            this->chart4->Name = L"chart4";
            this->chart4->Size = System::Drawing::Size(709, 383);
            this->chart4->TabIndex = 27;
            this->chart4->Text = L"chart4";
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->chart5);
            this->tabPage6->Location = System::Drawing::Point(4, 25);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Size = System::Drawing::Size(721, 395);
            this->tabPage6->TabIndex = 3;
            this->tabPage6->Text = L"V2(x,y)";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // chart5
            // 
            chartArea8->Area3DStyle->Enable3D = true;
            chartArea8->Area3DStyle->IsRightAngleAxes = false;
            chartArea8->Name = L"ChartArea1";
            this->chart5->ChartAreas->Add(chartArea8);
            this->chart5->Location = System::Drawing::Point(6, 6);
            this->chart5->Name = L"chart5";
            this->chart5->Size = System::Drawing::Size(709, 383);
            this->chart5->TabIndex = 27;
            this->chart5->Text = L"chart5";
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->chart6);
            this->tabPage7->Location = System::Drawing::Point(4, 25);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Size = System::Drawing::Size(721, 395);
            this->tabPage7->TabIndex = 4;
            this->tabPage7->Text = L"V(x,y)-V2(x,y)";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // chart6
            // 
            chartArea9->Area3DStyle->Enable3D = true;
            chartArea9->Area3DStyle->IsRightAngleAxes = false;
            chartArea9->Name = L"ChartArea1";
            this->chart6->ChartAreas->Add(chartArea9);
            this->chart6->Location = System::Drawing::Point(6, 6);
            this->chart6->Name = L"chart6";
            this->chart6->Size = System::Drawing::Size(709, 383);
            this->chart6->TabIndex = 27;
            this->chart6->Text = L"chart6";
            // 
            // groupBox8
            // 
            this->groupBox8->Controls->Add(this->radioButtonYMain);
            this->groupBox8->Controls->Add(this->radioButtonXMain);
            this->groupBox8->Controls->Add(this->radioButtonNullMain);
            this->groupBox8->Location = System::Drawing::Point(6, 377);
            this->groupBox8->Name = L"groupBox8";
            this->groupBox8->Size = System::Drawing::Size(757, 50);
            this->groupBox8->TabIndex = 27;
            this->groupBox8->TabStop = false;
            this->groupBox8->Text = L"Начальное приближение";
            // 
            // radioButtonYMain
            // 
            this->radioButtonYMain->AutoSize = true;
            this->radioButtonYMain->Location = System::Drawing::Point(465, 22);
            this->radioButtonYMain->Name = L"radioButtonYMain";
            this->radioButtonYMain->Size = System::Drawing::Size(179, 21);
            this->radioButtonYMain->TabIndex = 2;
            this->radioButtonYMain->TabStop = true;
            this->radioButtonYMain->Text = L"Интерполяция вдоль y";
            this->radioButtonYMain->UseVisualStyleBackColor = true;
            // 
            // radioButtonXMain
            // 
            this->radioButtonXMain->AutoSize = true;
            this->radioButtonXMain->Location = System::Drawing::Point(201, 22);
            this->radioButtonXMain->Name = L"radioButtonXMain";
            this->radioButtonXMain->Size = System::Drawing::Size(178, 21);
            this->radioButtonXMain->TabIndex = 1;
            this->radioButtonXMain->TabStop = true;
            this->radioButtonXMain->Text = L"Интерполяция вдоль x";
            this->radioButtonXMain->UseVisualStyleBackColor = true;
            // 
            // radioButtonNullMain
            // 
            this->radioButtonNullMain->AutoSize = true;
            this->radioButtonNullMain->Location = System::Drawing::Point(10, 22);
            this->radioButtonNullMain->Name = L"radioButtonNullMain";
            this->radioButtonNullMain->Size = System::Drawing::Size(85, 21);
            this->radioButtonNullMain->TabIndex = 0;
            this->radioButtonNullMain->TabStop = true;
            this->radioButtonNullMain->Text = L"Нулевое";
            this->radioButtonNullMain->UseVisualStyleBackColor = true;
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->groupBox12);
            this->groupBox4->Controls->Add(this->groupBox11);
            this->groupBox4->Location = System::Drawing::Point(6, 487);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(757, 402);
            this->groupBox4->TabIndex = 25;
            this->groupBox4->TabStop = false;
            this->groupBox4->Text = L"Справка";
            // 
            // groupBox12
            // 
            this->groupBox12->Controls->Add(this->label32);
            this->groupBox12->Controls->Add(this->label36);
            this->groupBox12->Controls->Add(this->label37);
            this->groupBox12->Controls->Add(this->label38);
            this->groupBox12->Controls->Add(this->label39);
            this->groupBox12->Controls->Add(this->label40);
            this->groupBox12->Location = System::Drawing::Point(3, 244);
            this->groupBox12->Name = L"groupBox12";
            this->groupBox12->Size = System::Drawing::Size(754, 158);
            this->groupBox12->TabIndex = 11;
            this->groupBox12->TabStop = false;
            this->groupBox12->Text = L"Сетка (2n,2m)";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Location = System::Drawing::Point(6, 29);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(54, 17);
            this->label32->TabIndex = 0;
            this->label32->Text = L"Метод:";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Location = System::Drawing::Point(6, 52);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(130, 17);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Параметр метода:";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Location = System::Drawing::Point(271, 52);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(236, 17);
            this->label37->TabIndex = 5;
            this->label37->Text = L"Схема решена с невязкой R2_s_2:";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Location = System::Drawing::Point(6, 105);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(178, 17);
            this->label38->TabIndex = 3;
            this->label38->Text = L"Достиг. точность метода:";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Location = System::Drawing::Point(271, 29);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(262, 17);
            this->label39->TabIndex = 4;
            this->label39->Text = L"Невязка СЛАУ на нач. прибл. R2_0_2:";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Location = System::Drawing::Point(6, 78);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(124, 17);
            this->label40->TabIndex = 2;
            this->label40->Text = L"Кол-во итераций:";
            // 
            // groupBox11
            // 
            this->groupBox11->Controls->Add(this->label27);
            this->groupBox11->Controls->Add(this->label20);
            this->groupBox11->Controls->Add(this->label30);
            this->groupBox11->Controls->Add(this->label21);
            this->groupBox11->Controls->Add(this->label26);
            this->groupBox11->Controls->Add(this->label22);
            this->groupBox11->Controls->Add(this->label24);
            this->groupBox11->Controls->Add(this->label23);
            this->groupBox11->Controls->Add(this->label25);
            this->groupBox11->Location = System::Drawing::Point(0, 21);
            this->groupBox11->Name = L"groupBox11";
            this->groupBox11->Size = System::Drawing::Size(751, 217);
            this->groupBox11->TabIndex = 10;
            this->groupBox11->TabStop = false;
            this->groupBox11->Text = L"Сетка (n,m)";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(6, 24);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(54, 17);
            this->label27->TabIndex = 0;
            this->label27->Text = L"Метод:";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(293, 47);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(90, 17);
            this->label20->TabIndex = 7;
            this->label20->Text = L"В узле (x, y):";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Location = System::Drawing::Point(6, 121);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(189, 17);
            this->label30->TabIndex = 9;
            this->label30->Text = L"Достиг. точность решения:";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(293, 24);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(217, 17);
            this->label21->TabIndex = 6;
            this->label21->Text = L"Макс. разность решений |V2-V|:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(6, 47);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(130, 17);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Параметр метода:";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(6, 174);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(220, 17);
            this->label22->TabIndex = 5;
            this->label22->Text = L"Схема решена с невязкой Rs_2:";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(6, 95);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(178, 17);
            this->label24->TabIndex = 3;
            this->label24->Text = L"Достиг. точность метода:";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(7, 148);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(246, 17);
            this->label23->TabIndex = 4;
            this->label23->Text = L"Невязка СЛАУ на нач. прибл. R0_2:";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(6, 70);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(124, 17);
            this->label25->TabIndex = 2;
            this->label25->Text = L"Кол-во итераций:";
            // 
            // buttonCalculateMain
            // 
            this->buttonCalculateMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->buttonCalculateMain->Location = System::Drawing::Point(6, 433);
            this->buttonCalculateMain->Name = L"buttonCalculateMain";
            this->buttonCalculateMain->Size = System::Drawing::Size(338, 48);
            this->buttonCalculateMain->TabIndex = 15;
            this->buttonCalculateMain->Text = L"Вычислить";
            this->buttonCalculateMain->UseVisualStyleBackColor = true;
            this->buttonCalculateMain->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculateMain_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(6, 40);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(757, 213);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 18;
            this->pictureBox1->TabStop = false;
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->checkBox1);
            this->groupBox3->Controls->Add(this->textBox10);
            this->groupBox3->Controls->Add(this->label29);
            this->groupBox3->Controls->Add(this->textBox5);
            this->groupBox3->Controls->Add(this->label16);
            this->groupBox3->Controls->Add(this->textBox6);
            this->groupBox3->Controls->Add(this->label17);
            this->groupBox3->Controls->Add(this->label18);
            this->groupBox3->Controls->Add(this->label19);
            this->groupBox3->Controls->Add(this->textBox7);
            this->groupBox3->Controls->Add(this->textBox8);
            this->groupBox3->Location = System::Drawing::Point(6, 259);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(757, 112);
            this->groupBox3->TabIndex = 14;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Параметры метода";
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(433, 78);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(280, 21);
            this->checkBox1->TabIndex = 26;
            this->checkBox1->Text = L"Использовать оптимальное значение";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(317, 78);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(84, 22);
            this->textBox10->TabIndex = 25;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Location = System::Drawing::Point(6, 75);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(305, 17);
            this->label29->TabIndex = 24;
            this->label29->Text = L"Параметр метода  w (в интервале от 0 до 2):";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(465, 50);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(84, 22);
            this->textBox5->TabIndex = 7;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(289, 50);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(163, 17);
            this->label16->TabIndex = 6;
            this->label16->Text = L"Макс. кол-во итераций:";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(465, 22);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(84, 22);
            this->textBox6->TabIndex = 5;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(289, 25);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(126, 17);
            this->label17->TabIndex = 4;
            this->label17->Text = L"Точность метода:";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(7, 50);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(159, 17);
            this->label18->TabIndex = 3;
            this->label18->Text = L"Число разбиений по y:";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(7, 25);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(158, 17);
            this->label19->TabIndex = 2;
            this->label19->Text = L"Число разбиений по x:";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(182, 50);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(84, 22);
            this->textBox7->TabIndex = 1;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(182, 22);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(84, 22);
            this->textBox8->TabIndex = 0;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->label15->Location = System::Drawing::Point(78, 3);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(172, 25);
            this->label15->TabIndex = 13;
            this->label15->Text = L"Описание задачи";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1512, 933);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->label5);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ЛР 1. Вариант 5. Решение задачи Дирихле для уравнения Пуассона. Команда Цодикова."
                L"";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabControl5->ResumeLayout(false);
            this->tabPage15->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tabPage16->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
            this->tabPage17->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
            this->tabPage18->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
            this->tabControl4->ResumeLayout(false);
            this->tabPage11->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            this->tabPage12->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->EndInit();
            this->tabPage13->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->EndInit();
            this->tabPage14->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart9))->EndInit();
            this->groupBox7->ResumeLayout(false);
            this->groupBox7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabControl3->ResumeLayout(false);
            this->tabPage8->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->tabPage9->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->tabPage10->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->tabControl2->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
            this->tabPage4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
            this->tabPage5->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
            this->tabPage6->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
            this->tabPage7->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
            this->groupBox8->ResumeLayout(false);
            this->groupBox8->PerformLayout();
            this->groupBox4->ResumeLayout(false);
            this->groupBox12->ResumeLayout(false);
            this->groupBox12->PerformLayout();
            this->groupBox11->ResumeLayout(false);
            this->groupBox11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: 
        int Nmax;
        double eps;
        int n, m;
        double w; // parameter from 0 to 2
        const double PI = 3.141592653589793;
        const double a = 0.0;
        const double b = 2.0;
        const double c = 0.0;
        const double d = 1.0;

    private: 
        double u(double i, double j, int _n, int _m) {
            const double h = (b - a) / _n;
            const double k = (d - c) / _m;
            double x = a + i * h;
            double y = c + j * k;
            return std::exp(std::sin(PI * x * y) * std::sin(PI * x * y));
        }

        double u1_test(double y) {
            return 1.0;
        }

        double u2_test(double y) {
            return std::exp(std::pow(std::sin(2 * PI * y), 2));
        }

        double u3_test(double x) {
            return 1.0;
        }

        double u4_test(double x) {
            return std::exp(std::pow(std::sin(PI * x), 2));
        }

        double f_test(double x, double y) {
            return 0.5 * PI * PI * std::exp(std::pow(std::sin(PI * x * y), 2)) * (-4 * std::cos(2 * PI * x * y) + cos(4 * PI * x * y) - 1) * (x * x + y * y);
        }

        double u1(double y) {
            return -y * (y - 1);
        }

        double u2(double y) {
            return y * (1 - y);
        }

        double u3(double x) {
            return std::abs(std::sin(PI * x));
        }

        double u4(double x) {
            return std::abs(std::sin(PI * x)) * std::exp(x);
        }

        double f_main(double x, double y) {
            return -std::abs(x - y);
        }

        double interpolationXTest(double j, double m) {
            double t;
            double k = (d - c) / m;
            double y = c + j * k;
            t = j / m;
            return (u2_test(y) - u1_test(y)) * t + u1_test(y);
        }

        double interpolationYTest(double i, double n) {
            double t;
            double h = (b - a) / n;
            double x = a + i * h;
            t = i / n;
            return (u4_test(x) - u3_test(x)) * t + u3_test(x);
        }

    private: int Clamp(int value, int min, int max) {
        if (value < min)
            return min;
        if (value > max)
            return max;
        return value;
    }

    private: Color calculateColorRed(double min, double z, double max) {
        int c = (int)Math::Round((max - z) * 255 / (max - min));
        return Color::FromArgb(255, Clamp(c,0,255), Clamp(c,0,255));
    }

    private: Color calculateColorBlue(double min, double z, double max) {
         int c = (int)Math::Round((max - z) * 255 / (max - min));
         return Color::FromArgb(Clamp(c, 0, 255), Clamp(c, 0, 255), 255);
    }
     
    private: Color calculateColorPurple(double min, double z, double max) {
        int c = (int)Math::Round((max - z) * 255 / (max - min));
        return Color::FromArgb(255, Clamp(c, 0, 255), 255);
    }

   

    System::Void buttonCalculateTest_Click(System::Object^  sender, System::EventArgs^  e) {
        n = Convert::ToInt32(textBox1->Text);
        m = Convert::ToInt32(textBox2->Text);
        eps = Convert::ToDouble(textBox3->Text);
        Nmax = Convert::ToInt32(textBox4->Text);
        
       /* int n_2 = 2 * n;
        int m_2 = 2 * m;*/

        int s = 0;
        double eps_max = 0.0;
        double eps_cur = 0.0;
        double solve_err = 0.0;
        double solve_eps = 0.0;
        double a2, k2, h2; // a2_2, k2_2, h2_2;
        double h = (b - a) / n;
        double k = (d - c) / m;
        /*double h_2 = (b - a) / n_2;
        double k_2 = (d - c) / m_2;*/

        if (checkBox2->Checked) {
            w = 2.0 - (h + k);
        }
        else {
            w = Convert::ToDouble(textBox9->Text);
        }
        

        double uv_max = 0.0;
        double x_max, y_max;

        std::vector<std::vector<double>> v(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> f(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> R(n + 1, std::vector<double>(m + 1, 0.0));

        /*std::vector<std::vector<double>> v2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));
        std::vector<std::vector<double>> f2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));*/

        double v_old; // v_old2;
        double v_new; // v_new2;
        double R_N_2 = 0.0;
        double R_0_2 = 0.0;
        bool flag = false;

        h2 = -(1 / (h * h));
        k2 = -(1 / (k * k));
        a2 = -2 * (h2 + k2);

        /*h2_2 = -(1 / (h_2 * h_2));
        k2_2 = -(1 / (k_2 * k_2));
        a2_2 = -2 * (h2_2 + k2_2);*/

        if (radioButtonNullTest->Checked) {
            //it's ok
        }

        if (radioButtonXTest->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationXTest(j, m);
                }

           /* for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationXTest(j, m_2);
                }*/
        }

        if (radioButtonYTest->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationYTest(i, n);
                }

           /* for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationYTest(i, n_2);
                }*/
        }

        // initialize u1(y), u2(y) for (n, m)
        for (int j = 0; j <= m; j++) {
            double y = c + j * k;
            v[0][j] = u1_test(y);
            v[n][j] = u2_test(y);
        }

        //// initialize u1(y), u2(y) for (2n, 2m)
        //for (int j = 0; j <= m_2; j++) {
        //    double y = c + j * k_2;
        //    v2[0][j] = u1_test(y);
        //    v2[n_2][j] = u2_test(y);
        //}

        // initialize u3(x), u4(x) for (n, m)
        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            v[i][0] = u3_test(x);
            v[i][m] = u4_test(x);
        }

        //// initialize u3(x), u4(x) for (2n, 2m)
        //for (int i = 0; i <= n_2; i++) {
        //    double x = a + i * h_2;
        //    v2[i][0] = u3_test(x);
        //    v2[i][m_2] = u4_test(x);
        //}

        // initialize f(x,y) for (n, m)
        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                double x = a + i * h;
                double y = c + j * k;
                f[i][j] = f_test(x, y);
            }

        //// initialize f(x,y) for (2n, 2m)
        //for (int j = 0; j <= m_2; j++)
        //    for (int i = 0; i <= n_2; i++) {
        //        double x = a + i * h_2;
        //        double y = c + j * k_2;
        //        f2[i][j] = f_test(x, y);
        //    }

        // calculate R for null iteration, (n, m)
        for (int j = 1; j < m; j++)
            for (int i = 1; i < n; i++) {
                R[i][j] = a2 * v[i][j] + h2 * v[i + 1][j] + h2 * v[i - 1][j] + k2 * v[i][j + 1] + k2 * v[i][j - 1] - f[i][j];
            }

        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_0_2 += R[i][j] * R[i][j];
            }
        R_0_2 = std::sqrt(R_0_2);
        // end of calculating R for null iteration, (n, m)

        dataGridView1->Rows->Clear();
        dataGridView1->Columns->Clear();
        this->dataGridView1->Columns->Add("", "j / i");

        int newm = m;
        int newn = n;

        for (int j = 0; j <= std::min(100, newm); j++) {
            this->dataGridView1->Rows->Add(Convert::ToString(j));
        }

        for (int i = 0; i <= std::min(newn, 100); i++) {
            this->dataGridView1->Columns->Add("", Convert::ToString(i));
        }

        for (int i = 0; i <= std::min(newn, 100); i++)
            for (int j = 0; j <= std::min(newm, 100); j++)
                this->dataGridView1->Rows[j]->Cells[i + 1]->Value = round(v[i][j] * 1e8) / 1e8;

        this->chart1->Series->Clear();
        this->chart7->Series->Clear();
        this->chart8->Series->Clear();
        this->chart9->Series->Clear();

        //if (radioButtonDrawV0->Checked) {
            chart7->ChartAreas[0]->RecalculateAxesScale();
            double x7, y7, z7;
            double xstep7 = (b - a) / n, ystep7 = (d - c) / m;
            double max7 = v[0][0], min7 = max7;
            Color Color1;
            for (x7 = a; x7 <= b; x7 += xstep7)
                for (y7 = c; y7 <= d; y7 += ystep7) {
                    int i = int((x7 - a) / xstep7);
                    int j = int((y7 - c) / ystep7);
                    z7 = v[i][j];
                    if (z7 > max7) max7 = z7;
                    else if (z7 < min7) min7 = z7;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart7->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x7 = a + i * xstep7;
                    y7 = c + j * ystep7;
                    z7 = v[i][j];
                    chart7->Series[i]->Points->AddXY((double)y7, z7);
                    Color1 = calculateColorBlue(min7, z7, max7);
                    chart7->Series[i]->Points[j]->Color = Color1;
                    chart7->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        //}

        // MVR
        while (!flag) {
            eps_max = 0.0;
            // (n, m)
            for (int j = 1; j < m; j++) {
                for (int i = 1; i < n; i++) {
                    v_old = v[i][j];
                    v_new = -w * (h2 * v[i + 1][j] + h2 * v[i - 1][j] + k2 * v[i][j + 1] + k2 * v[i][j - 1]);
                    v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
                    v_new = v_new / a2;
                    v[i][j] = v_new;
                    R[i][j] = a2 * v[i][j] + h2 * v[i + 1][j] + h2 * v[i - 1][j] + k2 * v[i][j + 1] + k2 * v[i][j - 1] - f[i][j];
                    eps_cur = std::abs(v_old - v_new);
                    if (eps_cur > eps_max) {
                        eps_max = eps_cur;
                    }
                }
            }

            s++;
            if ((eps_max <= eps) || (s >= Nmax)) {
                flag = true;
            }
        }
        // End MVR

        R_N_2 = 0.0;
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_N_2 += R[i][j] * R[i][j];
            }
        R_N_2 = std::sqrt(R_N_2);

        for (int j = 0; j < m + 1; j++)
            for (int i = 0; i < n + 1; i++) {
                /*if (std::abs(v2[2 * i][2 * j] - v[i][j]) > solve_eps) {
                    solve_eps = std::abs(v2[2 * i][2 * j] - v[i][j]);
                }*/

                if (std::abs(u(i, j, n, m) - v[i][j]) > solve_err) {
                    solve_err = std::abs(u(i, j, n, m) - v[i][j]);
                }

            }

        this->label6->Text = "Метод:    метод верхней релаксации";
        this->label7->Text = ("Параметр метода:" + "   " + Convert::ToString(w));
        this->label31->Text = ("Достигнутая точность метода:" + "   " + Convert::ToString(eps_max));
        this->label8->Text = ("Количество итераций:" + "   " + Convert::ToString(s));
        this->label9->Text = ("Достигнутая погрешность решения:" + "   " + Convert::ToString(solve_err));
        this->label10->Text = ("Невязка СЛАУ на нач. приближении R0_2:" + "   " + Convert::ToString(round(R_0_2 * 1e8) / 1e8));
        this->label11->Text = ("Схема на сетке решена с невязкой Rs_2:" + "   " + Convert::ToString(R_N_2));


        for (int j = 0; j < m + 1; j++)
            for (int i = 0; i < n + 1; i++) {
                if (std::abs(u(i, j, n, m) - v[i][j]) > uv_max) {
                    uv_max = std::abs(u(i, j, n, m) - v[i][j]);
                    x_max = a + i * h;
                    y_max = c + j * k;
                }
            }

        this->label12->Text = ("Макс. разность двух решений |U-V|:" + "   " + Convert::ToString(round(uv_max * 1e8) / 1e8));
        this->label13->Text = ("В узле (x, y):" + "   (" + Convert::ToString(round(x_max * 1e8) / 1e8) + ", " + Convert::ToString(round(y_max * 1e8) / 1e8) + ")");

        //if (this->radioButtonU->Checked) {
            dataGridView5->Rows->Clear();
            dataGridView5->Columns->Clear();
            this->dataGridView5->Columns->Add("", "j / i");
            for (int j = 0; j <= std::min(newm, 100); j++) {
                this->dataGridView5->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= std::min(newn, 100); i++) {
                this->dataGridView5->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= std::min(newn, 100); i++)
                for (int j = 0; j <= std::min(newm, 100); j++)
                    this->dataGridView5->Rows[j]->Cells[i + 1]->Value = round(u(i,j,n,m) * 1e8) / 1e8;
        //}

        //if (this->radioButtonV->Checked) {
            dataGridView6->Rows->Clear();
            dataGridView6->Columns->Clear();
            this->dataGridView6->Columns->Add("", "j / i");
            for (int j = 0; j <= std::min(newm, 100); j++) {
                this->dataGridView6->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= std::min(newn, 100); i++) {
                this->dataGridView6->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= std::min(newn, 100); i++)
                for (int j = 0; j <= std::min(newm, 100); j++)
                    this->dataGridView6->Rows[j]->Cells[i + 1]->Value = round(v[i][j] * 1e8) / 1e8;
        //}

        //if (this->radioButtonV2V->Checked) {
            dataGridView7->Rows->Clear();
            dataGridView7->Columns->Clear();
            this->dataGridView7->Columns->Add("", "j / i");
            for (int j = 0; j <= std::min(newm, 100); j++) {
                this->dataGridView7->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= std::min(newn, 100); i++) {
                this->dataGridView7->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= std::min(newn, 100); i++)
                for (int j = 0; j <= std::min(newm, 100); j++)
                    this->dataGridView7->Rows[j]->Cells[i + 1]->Value = round(std::abs(u(i,j,n,m) - v[i][j]) * 1e8) / 1e8;
        //}

        //if (radioButtonDrawU->Checked) {
            chart1->ChartAreas[0]->RecalculateAxesScale();
            double x1, y1, z1;
            double xstep1 = (b - a) / n, ystep1 = (d - c) / m;
            double max1 = u(a, c, n, m), min1 = max1;
            Color Color2;
            for (x1 = a; x1 <= b; x1 += xstep1)
                for (y1 = c; y1 <= d; y1 += ystep1) {
                    int i = int((x1 - a) / xstep1);
                    int j = int((y1 - c) / ystep1);
                    z1 = u(i, j, n, m);
                    if (z1 > max1) max1 = z1;
                    else if (z1 < min1) min1 = z1;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart1->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x1 = a + i * xstep1;
                    y1 = c + j * ystep1;
                    z1 = u(i, j, n, m);
                    chart1->Series[i]->Points->AddXY((double)y1, z1);
                    Color2 = calculateColorPurple(min1, z1, max1);
                    chart1->Series[i]->Points[j]->Color = Color2;
                    chart1->Series[i]->Points[j]->BackSecondaryColor = Color2;
                }
            }
        //}

        //if (radioButtonDrawV->Checked) {
            chart8->ChartAreas[0]->RecalculateAxesScale();
            double x8, y8, z8;
            double xstep8 = (b - a) / n, ystep8 = (d - c) / m;
            double max8 = v[0][0], min8 = max8;
            Color Color8;
            for (x8 = a; x8 <= b; x8 += xstep8)
                for (y8 = c; y8 <= d; y8 += ystep8) {
                    int i = int((x8 - a) / xstep8);
                    int j = int((y8 - c) / ystep8);
                    z8 = v[i][j];
                    if (z8 > max8) max8 = z8;
                    else if (z8 < min8) min8 = z8;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart8->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x8 = a + i * xstep8;
                    y8 = c + j * ystep8;
                    z8 = v[i][j];
                    chart8->Series[i]->Points->AddXY((double)y8, z8);
                    Color8 = calculateColorBlue(min8, z8, max8);
                    chart8->Series[i]->Points[j]->Color = Color8;
                    chart8->Series[i]->Points[j]->BackSecondaryColor = Color8;
                }
            }
        //}

        //if (radioButtonDrawUV->Checked) {
            chart9->ChartAreas[0]->RecalculateAxesScale();
            double x9, y9, z9;
            double xstep9 = (b - a) / n, ystep9 = (d - c) / m;
            double max9 = u(a, c, n, m)-v[0][0], min9 = max9;
            Color Color9;
            for (x9 = a; x9 <= b; x9 += xstep9)
                for (y9 = c; y9 <= d; y9 += ystep9) {
                    int i = int((x9 - a) / xstep9);
                    int j = int((y9 - c) / ystep9);
                    z9 = u(i,j,n,m) - v[i][j];
                    if (z9 > max9) max9 = z9;
                    else if (z9 < min9) min9 = z9;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart9->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x9 = a + i * xstep9;
                    y9 = c + j * ystep9;
                    z9 = u(i, j, n, m)-v[i][j];
                    chart9->Series[i]->Points->AddXY((double)y9, z9);
                    Color9 = calculateColorRed(min9, z9, max9);
                    chart9->Series[i]->Points[j]->Color = Color9;
                    chart9->Series[i]->Points[j]->BackSecondaryColor = Color9;
                }
            }
        //}
    }

    System::Void buttonCalculateMain_Click(System::Object^  sender, System::EventArgs^  e) {
        n = Convert::ToInt32(textBox8->Text);
        m = Convert::ToInt32(textBox7->Text);
        eps = Convert::ToDouble(textBox6->Text);
        Nmax = Convert::ToInt32(textBox5->Text);

        int n_2 = 2 * n;
        int m_2 = 2 * m;

        double w2;

        int s = 0, s2 = 0;
        double eps_max = 0.0, eps_max2 = 0.0;
        double eps_cur = 0.0, eps_curr2 = 0.0;
        double solve_eps = 0.0;
        double a2, k2, h2, a2_2, k2_2, h2_2;
        double h = (b - a) / n;
        double k = (d - c) / m;
        double h_2 = (b - a) / n_2;
        double k_2 = (d - c) / m_2;

        if (checkBox1->Checked) {
            w = 2.0 - (h + k);
            w2 = 2.0 - (h_2 + k_2);
        }
        else {
            w = Convert::ToDouble(textBox10->Text);
            w2 = w;
        }
        

        double v2v_max = 0.0;
        double x_max, y_max;

        std::vector<std::vector<double>> v(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> f(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> R(n + 1, std::vector<double>(m + 1, 0.0));

        std::vector<std::vector<double>> v2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));
        std::vector<std::vector<double>> f2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));
        std::vector<std::vector<double>> R2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));

        double v_old, v_old2;
        double v_new, v_new2;
        double R_N_2 = 0.0, R2_N_2 = 0.0;
        double R_0_2 = 0.0, R2_0_2 = 0.0;
        bool flag = false, flag2 = false;

        h2 = -(1 / (h * h));
        k2 = -(1 / (k * k));
        a2 = -2 * (h2 + k2);

        h2_2 = -(1 / (h_2 * h_2));
        k2_2 = -(1 / (k_2 * k_2));
        a2_2 = -2 * (h2_2 + k2_2);

        if (radioButtonNullMain->Checked) {
            //it's ok
        }

        if (radioButtonXMain->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationXTest(j, m);
                }

            for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationXTest(j, m_2);
                }
        }

        if (radioButtonYMain->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationYTest(i, n);
                }

            for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationYTest(i, n_2);
                }
        }

        // initialize u1(y), u2(y) for (n, m)
        for (int j = 0; j <= m; j++) {
            double y = c + j * k;
            v[0][j] = u1(y);
            v[n][j] = u2(y);
        }

        // initialize u3(x), u4(x) for (n, m)
        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            v[i][0] = u3(x);
            v[i][m] = u4(x);
        }

        // initialize f(x,y) for (n, m)
        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                double x = a + i * h;
                double y = c + j * k;
                f[i][j] = f_main(x,y);
            }
        // initialize u1(y), u2(y) for (2n, 2m)
        for (int j = 0; j <= m_2; j++) {
            double y = c + j * k_2;
            v2[0][j] = u1(y);
            v2[n_2][j] = u2(y);
        }

        // initialize u3(x), u4(x) for (2n, 2m)
        for (int i = 0; i <= n_2; i++) {
            double x = a + i * h_2;
            v2[i][0] = u3(x);
            v2[i][m_2] = u4(x);
        }

        // initialize f(x,y) for (2n, 2m)
        for (int j = 0; j <= m_2; j++)
            for (int i = 0; i <= n_2; i++) {
                double x = a + i * h_2;
                double y = c + j * k_2;
                f2[i][j] = f_main(x,y);
            }

        // calculate R0 (n,m)
        for (int j = 1; j < m; j++)
            for (int i = 1; i < n; i++) {
                R[i][j] = a2 * v[i][j] + (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
            }

        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_0_2 += R[i][j] * R[i][j];
            }
        R_0_2 = std::sqrt(R_0_2);
        // end of calculating R0 (n,m)

        // calculate R0 (2n,2m)
        for (int j = 1; j < m_2; j++)
            for (int i = 1; i < n_2; i++) {
                R2[i][j] = a2_2 * v2[i][j] + (h2_2 * (v2[i + 1][j] + v2[i - 1][j]) + k2_2 * (v2[i][j + 1] + v2[i][j - 1])) - f2[i][j];
            }

        for (int i = 0; i < n_2 + 1; i++)
            for (int j = 0; j < m_2 + 1; j++) {
                R2_0_2 += R2[i][j] * R2[i][j];
            }
        R2_0_2 = std::sqrt(R2_0_2);
        // end of calculating R0 (2n,2m)

        this->chart2->Series->Clear();
        this->chart3->Series->Clear();
        this->chart4->Series->Clear();
        this->chart5->Series->Clear();
        this->chart6->Series->Clear();

        //if (radioButtonDrawV0Main->Checked) {
            chart2->ChartAreas[0]->RecalculateAxesScale();
            double x1, y1, z1;
            double xstep1 = (b - a) / n, ystep1 = (d - c) / m;
            double max1 = v[0][0], min1 = max1;
            Color Color1;
            for (x1 = a; x1 <= b; x1 += xstep1)
                for (y1 = c; y1 <= d; y1 += ystep1) {
                    int i = int((x1 - a) / xstep1);
                    int j = int((y1 - c) / ystep1);
                    z1 = v[i][j];
                    if (z1 > max1) max1 = z1;
                    else if (z1 < min1) min1 = z1;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart2->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x1 = a + i * xstep1;
                    y1 = c + j * ystep1;
                    z1 = v[i][j];
                    chart2->Series[i]->Points->AddXY((double)y1, z1);
                    Color1 = calculateColorBlue(min1, z1, max1);
                    chart2->Series[i]->Points[j]->Color = Color1;
                    chart2->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        //}

        //if (radioButtonDrawV20->Checked) {
            chart3->ChartAreas[0]->RecalculateAxesScale();
            double x2, y2, z2;
            double xstep2 = (b - a) / n_2, ystep2 = (d - c) / m_2;
            double max2 = v2[0][0], min2 = max2;
            Color Color2;
            for (x2 = a; x2 <= b; x2 += xstep2)
                for (y2 = c; y2 <= d; y2 += ystep2) {
                    int i = int((x2 - a) / xstep2);
                    int j = int((y2 - c) / ystep2);
                    z2 = v2[i][j];
                    if (z2 > max2) max2 = z2;
                    else if (z2 < min2) min2 = z2;
                }
            for (int i = 0; i <= n_2; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart3->Series->Add(Series1);
                for (int j = 0; j <= m_2; j++) {
                    x2 = a + i * xstep2;
                    y2 = c + j * ystep2;
                    z2 = v2[i][j];
                    chart3->Series[i]->Points->AddXY((double)y2, z2);
                    Color2 = calculateColorPurple(min2, z2, max2);
                    chart3->Series[i]->Points[j]->Color = Color2;
                    chart3->Series[i]->Points[j]->BackSecondaryColor = Color2;
                }
            }
        //}

        while (!flag2) {
            eps_max2 = 0.0;

            // (2n, 2m)
            for (int j = 1; j < m_2; j++) {
                for (int i = 1; i < n_2; i++) {
                    v_old2 = v2[i][j];
                    v_new2 = -w2 * (h2_2 * (v2[i + 1][j] + v2[i - 1][j]) + k2_2 * (v2[i][j + 1] + v2[i][j - 1]));
                    v_new2 = v_new2 + (1 - w2) * a2_2 * v2[i][j] + w2 * f2[i][j];
                    v_new2 = v_new2 / a2_2;
                    R2[i][j] = a2_2 * v2[i][j] + (h2_2*(v2[i + 1][j] + v2[i - 1][j]) + k2_2* (v2[i][j + 1] + v2[i][j - 1])) - f2[i][j];
                    eps_curr2 = std::abs(v_old2 - v_new2);
                    if (eps_curr2 > eps_max2) {
                        eps_max2 = eps_curr2;
                    }
                    v2[i][j] = v_new2;
                }
            }

            s2++;
            if ((eps_max2 <= eps) || (s2 >= Nmax)) {
                flag2 = true;
            }
        }


        while (!flag) {
            eps_max = 0.0;

            // (n, m)
            for (int j = 1; j < m; j++) {
                for (int i = 1; i < n; i++) {
                    v_old = v[i][j];
                    v_new = -w * (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
                    v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
                    v_new = v_new / a2;
                    R[i][j] = a2 * v[i][j] + (h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
                    eps_cur = std::abs(v_old - v_new);
                    if (eps_cur > eps_max) {
                        eps_max = eps_cur;
                    }
                    v[i][j] = v_new;
                }
            }

            s++;
            if ((eps_max <= eps) || (s >= Nmax)) {
                flag = true;
            }
        }

        R_N_2 = 0.0;
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_N_2 += R[i][j] * R[i][j];
            }
        R_N_2 = std::sqrt(R_N_2);

        R2_N_2 = 0.0;
        for (int i = 0; i < n_2 + 1; i++)
            for (int j = 0; j < m_2 + 1; j++) {
                R2_N_2 += R2[i][j] * R2[i][j];
            }
        R2_N_2 = std::sqrt(R2_N_2);

        for (int j = 0; j < m + 1; j++)
            for (int i = 0; i < n + 1; i++) {
                if (std::abs(v2[2 * i][2 * j] - v[i][j]) > solve_eps) {
                    solve_eps = std::abs(v2[2 * i][2 * j] - v[i][j]);
                }

            }

        this->label27->Text = "Метод:    метод верхней релаксации";
        this->label26->Text = ("Параметр метода:" + "   " + Convert::ToString(w));
        this->label25->Text = ("Количество итераций:" + "   " + Convert::ToString(s));
        this->label24->Text = ("Достиг. точность метода:" + "   " + Convert::ToString(eps_max));
        this->label23->Text = ("Невязка СЛАУ на нач. приближении R0_2:" + "   " + Convert::ToString(round(R_0_2 * 1e8) / 1e8));
        this->label22->Text = ("Схема на сетке решена с невязкой Rs_2:" + "   " + Convert::ToString(R_N_2));
        this->label30->Text = ("Достиг. точность решения:" + "   " + Convert::ToString(solve_eps));

        this->label32->Text = "Метод:    метод верхней релаксации";
        this->label36->Text = ("Параметр метода:" + "   " + Convert::ToString(w2));
        this->label40->Text = ("Количество итераций:" + "   " + Convert::ToString(s2));
        this->label38->Text = ("Достиг. точность метода:" + "   " + Convert::ToString(eps_max2));
        this->label39->Text = ("Невязка СЛАУ на нач. приближении R2_0_2:" + "   " + Convert::ToString(round(R2_0_2 * 1e8) / 1e8));
        this->label37->Text = ("Схема на сетке решена с невязкой R2_s_2:" + "   " + Convert::ToString(R2_N_2));

        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                if (std::abs(v2[2 * i][2 * j] - v[i][j]) > v2v_max) {
                    v2v_max = std::abs(v2[2 * i][2 * j] - v[i][j]);
                    x_max = a + i * h;
                    y_max = c + j * k;
                }
            }

        this->label21->Text = ("Макс. разность двух решений |V2-V|:" + "   " + Convert::ToString(round(v2v_max * 1e8) / 1e8));
        this->label20->Text = ("В узле (x, y):" + "   (" + Convert::ToString(round(x_max * 1e8) / 1e8) + ", " + Convert::ToString(round(y_max * 1e8) / 1e8) + ")");

        int newm = m;
        int newn = n;

        //if (this->radioButtonV_main->Checked) {
            dataGridView2->Rows->Clear();
            dataGridView2->Columns->Clear();
            this->dataGridView2->Columns->Add("", "j / i");
            for (int j = 0; j <= std::min(newm, 100); j++) {
                this->dataGridView2->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= std::min(newn, 100); i++) {
                this->dataGridView2->Columns->Add("", Convert::ToString(i));
            }

            for (int j = 0; j <= std::min(newm, 100); j++)
                for (int i = 0; i <= std::min(newn, 100); i++)
                    this->dataGridView2->Rows[j]->Cells[i + 1]->Value = round(v[i][j] * 1e8) / 1e8;
        //}

        //if (this->radioButtonV2_main->Checked) {
            dataGridView3->Rows->Clear();
            dataGridView3->Columns->Clear();
            this->dataGridView3->Columns->Add("", "j / i");
            for (int j = 0; j <= std::min(m_2, 100); j++) {
                this->dataGridView3->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= std::min(n_2, 100); i++) {
                this->dataGridView3->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= std::min(n_2, 100); i++)
                for (int j = 0; j <= std::min(m_2, 100); j++)
                    this->dataGridView3->Rows[j]->Cells[i + 1]->Value = round(v2[i][j] * 1e8) / 1e8;
        //}

        //if (this->radioButtonV2V_main->Checked) {
            dataGridView4->Rows->Clear();
            dataGridView4->Columns->Clear();
            this->dataGridView4->Columns->Add("", "j / i");
            for (int j = 0; j <= std::min(newm, 100); j++) {
                this->dataGridView4->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= std::min(newn, 100); i++) {
                this->dataGridView4->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= std::min(newn, 100); i++)
                for (int j = 0; j <= std::min(newm, 100); j++)
                    this->dataGridView4->Rows[j]->Cells[i + 1]->Value = round(std::abs(v2[2 * i][2 * j] - v[i][j]) * 1e8) / 1e8;
        //}


        //if (radioButtonDrawVMain->Checked) {
            chart4->ChartAreas[0]->RecalculateAxesScale();
            double x3, y3, z3;
            double xstep3 = (b - a) / n, ystep3 = (d - c) / m;
            double max3 = v[0][0], min3 = max3;
            Color Color3;
            for (x3 = a; x3 <= b; x3 += xstep3)
                for (y3 = c; y3 <= d; y3 += ystep3) {
                    int i = int((x3 - a) / xstep3);
                    int j = int((y3 - c) / ystep3);
                    z3 = v[i][j];
                    if (z3 > max3) max3 = z3;
                    else if (z3 < min3) min3 = z3;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart4->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x3 = a + i * xstep3;
                    y3 = c + j * ystep3;
                    z3 = v[i][j];
                    chart4->Series[i]->Points->AddXY((double)y3, z3);
                    Color3 = calculateColorBlue(min3, z3, max3);
                    chart4->Series[i]->Points[j]->Color = Color3;
                    chart4->Series[i]->Points[j]->BackSecondaryColor = Color3;
                }
            }
        //}

        //if (radioButtonDrawV2->Checked) {
            chart5->ChartAreas[0]->RecalculateAxesScale();
            double x4, y4, z4;
            double xstep4 = (b - a) / n_2, ystep4 = (d - c) / m_2; //шаги
            double max4 = v2[0][0], min4 = max4;
            Color Color4;
            for (x4 = a; x4 <= b; x4 += xstep4)
                for (y4 = c; y4 <= d; y4 += ystep4) {
                    int i = int((x4 - a) / xstep4);
                    int j = int((y4 - c) / ystep4);
                    z4 = v2[i][j];
                    if (z4 > max4) max4 = z4;
                    else if (z4 < min4) min4 = z4;
                }
            for (int i = 0; i <= n_2; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart5->Series->Add(Series1);
                for (int j = 0; j <= m_2; j++) {
                    x4 = a + i * xstep4;
                    y4 = c + j * ystep4;
                    z4 = v2[i][j];
                    chart5->Series[i]->Points->AddXY((double)y4, z4);
                    Color4 = calculateColorPurple(min4, z4, max4);
                    chart5->Series[i]->Points[j]->Color = Color4;
                    chart5->Series[i]->Points[j]->BackSecondaryColor = Color4;
                }
            }
        //}
        
        //if (radioButtonDrawVV2->Checked) {
            chart6->ChartAreas[0]->RecalculateAxesScale();
            double x5, y5, z5;
            double xstep5 = (b - a) / n, ystep5 = (d - c) / m;
            double max5 = v[0][0] - v2[0][0], min5 = max5;
            Color Color5;
            for (x5 = a; x5 <= b; x5 += xstep5)
                for (y5 = c; y5 <= d; y5 += ystep5) {
                    int i = int((x5 - a) / xstep5);
                    int j = int((y5 - c) / ystep5);
                    z5 = v[i][j] - v2[2 * i][2 * j];
                    if (z5 > max5) max5 = z5;
                    else if (z5 < min5) min5 = z5;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart6->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x5 = a + i * xstep5;
                    y5 = c + j * ystep5;
                    z5 = v[i][j] - v2[2 * i][2 * j];
                    chart6->Series[i]->Points->AddXY((double)y5, z5);
                    Color5 = calculateColorRed(min5, z5, max5);
                    chart6->Series[i]->Points[j]->Color = Color5;
                    chart6->Series[i]->Points[j]->BackSecondaryColor = Color5;
                }
            }
       // }
    }
};
    }
