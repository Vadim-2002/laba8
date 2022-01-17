#pragma once

#include "My_storage.h"
#include "Ccircle.h"
#include "CSquare.h"
#include "CTriangle.h"
#include "CGroup.h"
#include "Shapes.h"
#include "StickySquare.h"

namespace laba6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
				delete group;
				delete storage;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ num_choosing_shape;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rb_color_green;
	private: System::Windows::Forms::RadioButton^ rb_color_blue;
	private: System::Windows::Forms::RadioButton^ rb_color_red;
	private: System::Windows::Forms::NumericUpDown^ num_increase_size;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_OK;


	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ lb_quantily;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TreeView^ treeView1;













	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->num_choosing_shape = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rb_color_green = (gcnew System::Windows::Forms::RadioButton());
			this->rb_color_blue = (gcnew System::Windows::Forms::RadioButton());
			this->rb_color_red = (gcnew System::Windows::Forms::RadioButton());
			this->num_increase_size = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->lb_quantily = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_choosing_shape))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_increase_size))->BeginInit();
			this->SuspendLayout();
			// 
			// num_choosing_shape
			// 
			this->num_choosing_shape->Location = System::Drawing::Point(108, 7);
			this->num_choosing_shape->Name = L"num_choosing_shape";
			this->num_choosing_shape->Size = System::Drawing::Size(70, 20);
			this->num_choosing_shape->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 65);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������� ������:\r\n\r\n0 - ����\r\n1 - �������\r\n2 - �����������";
			// 
			// rb_color_green
			// 
			this->rb_color_green->AutoSize = true;
			this->rb_color_green->Location = System::Drawing::Point(15, 132);
			this->rb_color_green->Name = L"rb_color_green";
			this->rb_color_green->Size = System::Drawing::Size(54, 17);
			this->rb_color_green->TabIndex = 2;
			this->rb_color_green->TabStop = true;
			this->rb_color_green->Text = L"Green";
			this->rb_color_green->UseVisualStyleBackColor = true;
			// 
			// rb_color_blue
			// 
			this->rb_color_blue->AutoSize = true;
			this->rb_color_blue->Location = System::Drawing::Point(15, 86);
			this->rb_color_blue->Name = L"rb_color_blue";
			this->rb_color_blue->Size = System::Drawing::Size(46, 17);
			this->rb_color_blue->TabIndex = 3;
			this->rb_color_blue->TabStop = true;
			this->rb_color_blue->Text = L"Blue";
			this->rb_color_blue->UseVisualStyleBackColor = true;
			// 
			// rb_color_red
			// 
			this->rb_color_red->AutoSize = true;
			this->rb_color_red->Location = System::Drawing::Point(15, 109);
			this->rb_color_red->Name = L"rb_color_red";
			this->rb_color_red->Size = System::Drawing::Size(45, 17);
			this->rb_color_red->TabIndex = 4;
			this->rb_color_red->TabStop = true;
			this->rb_color_red->Text = L"Red";
			this->rb_color_red->UseVisualStyleBackColor = true;
			// 
			// num_increase_size
			// 
			this->num_increase_size->Location = System::Drawing::Point(100, 160);
			this->num_increase_size->Name = L"num_increase_size";
			this->num_increase_size->Size = System::Drawing::Size(70, 20);
			this->num_increase_size->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"����� ������";
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(177, 159);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 8;
			this->btn_OK->Text = L"OK";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &MyForm::btn_OK_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(9, 199);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(134, 23);
			this->btn_delete->TabIndex = 9;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// lb_quantily
			// 
			this->lb_quantily->AutoSize = true;
			this->lb_quantily->Location = System::Drawing::Point(130, 242);
			this->lb_quantily->Name = L"lb_quantily";
			this->lb_quantily->Size = System::Drawing::Size(13, 13);
			this->lb_quantily->TabIndex = 10;
			this->lb_quantily->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"���������� ��������";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Load_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"������������ ������� �� �����";
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(57, 359);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(121, 97);
			this->treeView1->TabIndex = 19;
			this->treeView1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::treeView1_KeyDown);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lb_quantily);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->num_increase_size);
			this->Controls->Add(this->rb_color_red);
			this->Controls->Add(this->rb_color_blue);
			this->Controls->Add(this->rb_color_green);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num_choosing_shape);
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(1000, 700);
			this->MinimumSize = System::Drawing::Size(1000, 700);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_choosing_shape))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_increase_size))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		Graphics^ g = Graphics::FromHwnd(this->Handle);

		/*������ ������ ���������� �����*/
		for (int i = 0; i < storage->getCount(); i++)
		{
			if (rb_color_red->Checked == true)
			{
				storage->getObject(i).draw_red(g);
			}
			else
				if (rb_color_blue->Checked == true)
				{
					storage->getObject(i).draw_blue(g);
				}
				else
					if (rb_color_green->Checked == true)
					{
						storage->getObject(i).draw_green(g);
					}
		}
	}

	My_storage* storage = new My_storage(0); //��������� �����
	CGroup* group = new CGroup(0); //������ �����

	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		/*������ ������*/
		if (e->Button.ToString() == "Right")
		{
			if (num_choosing_shape->Value == 0)
			{
				storage->addObjects(storage->getCount(), new CCircle(e->X, e->Y));
				Invalidate();
			}
			else
				if (num_choosing_shape->Value == 1)
				{
					storage->addObjects(storage->getCount(), new CSquare(e->X, e->Y));
					Invalidate();
				}
				else
					if (num_choosing_shape->Value == 2)
					{
						storage->addObjects(storage->getCount(), new CTriangle(e->X, e->Y));
						Invalidate();
					}
					else
						if (num_choosing_shape->Value == 3)
						{
							storage->addObjects(storage->getCount(), new StickySquare(e->X, e->Y));
							Invalidate();
						}

			UpdateFromStorage(sender, e);
		}
	}

    /*�������� ���� ������*/
	private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		storage->Save();
		for (int i = 0; i < storage->getCount(); i++)
		{
			storage->getObject(i).unselect();
		}

		for (int i = 0; i < storage->getCount(); i++)
		{
			if (storage->getObject(i).reach(e->X, e->Y))
			{
				storage->getObject(i).select();
				Invalidate();
			}
		}
	}

	/*�������� ������ ������*/
	private: System::Void btn_OK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < storage->getCount(); i++)
		{
			if (storage->getObject(i).is_select() == true)
			{
				storage->getObject(i).change_the_size(Decimal::ToInt32(num_increase_size->Value));
			}
		}
		Invalidate();
	}
    
	/*������� ��������� ������*/
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < storage->getCount(); i++)
		{
			if (storage->getObject(i).is_select() == true)
			{
				storage->deleteObject(i);
				Invalidate();
			}
		}
	}

	/*�������� ��������� ������*/
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		for (int i = 0; i < storage->getCount(); i++)
		{
			if (e->KeyValue == 65 && storage->getObject(i).is_select() == true)
			{
				if (storage->getObject(i).getX() - storage->getObject(i).getR() >= 30)
				{
					storage->getObject(i).change_the_x(-15);

					for (int j = 0; j < storage->getCount(); j++)
					{
						if (storage->getObject(j).getName() == "StickySquare")
						{
							int max_x = storage->getObject(j).getX() + storage->getObject(j).getR();
							int min_x = storage->getObject(j).getX() - storage->getObject(j).getR();
							int max_y = storage->getObject(j).getY() + storage->getObject(j).getR();
							int min_y = storage->getObject(j).getY() - storage->getObject(j).getR();

							int x = storage->getObject(i).getX();
							int y = storage->getObject(i).getY();
							int r = storage->getObject(i).getR();

							if (min_x <= x && x <= max_x && min_y <= y && y <= max_y)
							{
								storage->getObject(i).select();
								storage->getObject(j).select();
								break;
							}
						}
					}

					Invalidate();
				}
			}

			if (e->KeyValue == 68 && storage->getObject(i).is_select() == true)
			{
				if (storage->getObject(i).getX() + storage->getObject(i).getR() <= 950)
				{
					storage->getObject(i).change_the_x(15);

					for (int j = 0; j < storage->getCount(); j++)
					{
						if (storage->getObject(j).getName() == "StickySquare")
						{
							int max_x = storage->getObject(j).getX() + storage->getObject(j).getR();
							int min_x = storage->getObject(j).getX() - storage->getObject(j).getR();
							int max_y = storage->getObject(j).getY() + storage->getObject(j).getR();
							int min_y = storage->getObject(j).getY() - storage->getObject(j).getR();

							int x = storage->getObject(i).getX();
							int y = storage->getObject(i).getY();
							int r = storage->getObject(i).getR();

							if (min_x <= x && x <= max_x && min_y <= y && y <= max_y)
							{
								storage->getObject(i).select();
								storage->getObject(j).select();
								break;
							}
						}
					}
					Invalidate();
				}
			}

			if (e->KeyValue == 87 && storage->getObject(i).is_select() == true)
			{
				if (storage->getObject(i).getY() - storage->getObject(i).getR() >= 50)
				{
					storage->getObject(i).change_the_y(-15);

					for (int j = 0; j < storage->getCount(); j++)
					{
						if (storage->getObject(j).getName() == "StickySquare")
						{
							int max_x = storage->getObject(j).getX() + storage->getObject(j).getR();
							int min_x = storage->getObject(j).getX() - storage->getObject(j).getR();
							int max_y = storage->getObject(j).getY() + storage->getObject(j).getR();
							int min_y = storage->getObject(j).getY() - storage->getObject(j).getR();

							int x = storage->getObject(i).getX();
							int y = storage->getObject(i).getY();
							int r = storage->getObject(i).getR();

							if (min_x <= x && x <= max_x && min_y <= y && y <= max_y)
							{
								storage->getObject(i).select();
								storage->getObject(j).select();
								break;
							}
						}
					}

					Invalidate();
				}
			}

			if (e->KeyValue == 83 && storage->getObject(i).is_select() == true)
			{
				if (storage->getObject(i).getY() + storage->getObject(i).getR() <= 650)
				{
					storage->getObject(i).change_the_y(15);

					for (int j = 0; j < storage->getCount(); j++)
					{
						if (storage->getObject(j).getName() == "StickySquare")
						{
							int max_x = storage->getObject(j).getX() + storage->getObject(j).getR();
							int min_x = storage->getObject(j).getX() - storage->getObject(j).getR();
							int max_y = storage->getObject(j).getY() + storage->getObject(j).getR();
							int min_y = storage->getObject(j).getY() - storage->getObject(j).getR();

							int x = storage->getObject(i).getX();
							int y = storage->getObject(i).getY();
							int r = storage->getObject(i).getR();

							if (min_x <= x && x <= max_x && min_y <= y && y <= max_y)
							{
								storage->getObject(i).select();
								storage->getObject(j).select();
								break;
							}
						}
					}

					Invalidate();
				}
			}
		}

		if (e->Control == true)
		{
			marked_ctrl = true;
		}
	}

    bool marked_ctrl = false;

	private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (marked_ctrl == true)
		{
			marked_ctrl = false;

			storage->addObjects(storage->getCount(), group); //��������� ������ � ���������
			UpdateFromStorage(sender, e);
			Invalidate();
		}
	}

	/*�������� ������ � ������� �� � ������*/
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		lb_quantily->Text = storage->getCount().ToString();// ���������� ���������� �����

		if ((marked_ctrl == true) && e->Button.ToString() == "Left")
		{
			for (int i = 0; i < storage->getCount(); i++)
			{
				if (storage->getObject(i).reach(e->X, e->Y) == true)
				{
					storage->getObject(i).select(); //������� ������
					group->expand_the_group(&(storage->getObject(i))); //������� � � ������
					storage->deleteObject(i); //������ �� ���������
				}
			}
		}
	}
	
	/*��������������� ������� �� �����*/
    private: System::Void Load_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		storage->Load();
		UpdateFromStorage(sender, e);
		Invalidate();
	}

	private: System::Void UpdateFromStorage(System::Object^ sender, System::EventArgs^ e)
	{
		treeView1->Nodes->Clear();

		for (int i = 0; i < storage->getCount(); i++)
		{
			TreeNode^ n = gcnew TreeNode();

			treeView1->Nodes->Add(FigureToNode((storage->getObject(i)), n, i));
		}
	}

	private: TreeNode^ FigureToNode(Shapes &a, TreeNode^ t, int i)
	{
		int k = 0;

		if (a.is_select() == true)
			t->Checked = true;

		TreeNode^ n = gcnew TreeNode();

		if (a.getName() == "CGroup")
		{
			t->Text = i + " " + a.ftostring();
			
			std::string hh = "kk";

			for (int j = 0; j < a.getSize(); j++)
			{
				n = gcnew TreeNode();
				k = t->Nodes->Add(FigureToNode(a.getObject(j), n, i * 100 + k));
			}
		}
		else
		{
			t->Text = i + " " + a.ftostring();
		}
		return t;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}

	private: System::Void treeView1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (e->KeyValue == 46)
		{
			for (int i = 0; i < storage->getCount(); i++)
			{
				storage->getObject(i).unselect();
			}

			Graphics^ g = Graphics::FromHwnd(this->Handle);
			g->Clear(Color::White);

			for (int i = 0; i < storage->getCount(); i++)
			{
				if (rb_color_red->Checked == true)
				{
					storage->getObject(i).draw_red(g);
				}
				else
					if (rb_color_blue->Checked == true)
					{
						storage->getObject(i).draw_blue(g);
					}
					else
						if (rb_color_green->Checked == true)
						{
							storage->getObject(i).draw_green(g);
						}
			}


			this->Refresh();
		}
	}
};
}