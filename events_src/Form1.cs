using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

namespace Events
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		Counter oCounter = null;

		private System.Windows.Forms.Button cmdRun;
		private System.Windows.Forms.TextBox txtReachable;
		private System.Windows.Forms.TextBox txtCountTo;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Button btnRemoveDelegate;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
			oCounter = new Counter();
			oCounter.NumberReached += new NumberReachedEventHandler(oCounter_NumberReached);
			oCounter.NumberReached += new NumberReachedEventHandler(oCounter_NumberReached2);
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.cmdRun = new System.Windows.Forms.Button();
			this.txtReachable = new System.Windows.Forms.TextBox();
			this.txtCountTo = new System.Windows.Forms.TextBox();
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.btnRemoveDelegate = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// cmdRun
			// 
			this.cmdRun.Location = new System.Drawing.Point(16, 72);
			this.cmdRun.Name = "cmdRun";
			this.cmdRun.Size = new System.Drawing.Size(48, 23);
			this.cmdRun.TabIndex = 2;
			this.cmdRun.Text = "Run";
			this.cmdRun.Click += new System.EventHandler(this.cmdRun_Click);
			// 
			// txtReachable
			// 
			this.txtReachable.Location = new System.Drawing.Point(144, 40);
			this.txtReachable.Name = "txtReachable";
			this.txtReachable.Size = new System.Drawing.Size(56, 20);
			this.txtReachable.TabIndex = 1;
			this.txtReachable.Text = "";
			// 
			// txtCountTo
			// 
			this.txtCountTo.Location = new System.Drawing.Point(144, 16);
			this.txtCountTo.Name = "txtCountTo";
			this.txtCountTo.Size = new System.Drawing.Size(56, 20);
			this.txtCountTo.TabIndex = 0;
			this.txtCountTo.Text = "";
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(16, 16);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(51, 13);
			this.label1.TabIndex = 3;
			this.label1.Text = "Count To";
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(16, 40);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(99, 13);
			this.label2.TabIndex = 4;
			this.label2.Text = "Reach this number";
			// 
			// btnRemoveDelegate
			// 
			this.btnRemoveDelegate.Location = new System.Drawing.Point(16, 104);
			this.btnRemoveDelegate.Name = "btnRemoveDelegate";
			this.btnRemoveDelegate.Size = new System.Drawing.Size(168, 23);
			this.btnRemoveDelegate.TabIndex = 5;
			this.btnRemoveDelegate.Text = "Remove second handler";
			this.btnRemoveDelegate.Click += new System.EventHandler(this.btnRemoveDelegate_Click);
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(224, 134);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.btnRemoveDelegate,
																		  this.label2,
																		  this.label1,
																		  this.txtCountTo,
																		  this.txtReachable,
																		  this.cmdRun});
			this.Name = "Form1";
			this.Text = "Events";
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void cmdRun_Click(object sender, System.EventArgs e)
		{
			if(txtCountTo.Text == "" || txtReachable.Text=="")
				return;
			oCounter.CountTo(Convert.ToInt32(txtCountTo.Text), Convert.ToInt32(txtReachable.Text));
		}

		private void oCounter_NumberReached(object sender, NumberReachedEventArgs e)
		{
			MessageBox.Show("Reached: " + e.ReachedNumber.ToString());
		}
		private void oCounter_NumberReached2(object sender, NumberReachedEventArgs e)
		{
			MessageBox.Show("Reached2: " + e.ReachedNumber.ToString());
		}

		private void btnRemoveDelegate_Click(object sender, System.EventArgs e)
		{
			oCounter.NumberReached -= new NumberReachedEventHandler(oCounter_NumberReached2);
			oCounter.CountTo(Convert.ToInt32(txtCountTo.Text), Convert.ToInt32(txtReachable.Text));
		}
	}
}
