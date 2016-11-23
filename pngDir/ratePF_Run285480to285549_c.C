void ratePF_Run285480to285549_c()
{
//=========Macro generated from canvas: ratePF_Run285480to285549_c/ratePF_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *ratePF_Run285480to285549_c = new TCanvas("ratePF_Run285480to285549_c", "ratePF_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   ratePF_Run285480to285549_c->SetHighLightColor(2);
   ratePF_Run285480to285549_c->Range(-8.235295,-2.235294,74.11765,0.1176471);
   ratePF_Run285480to285549_c->SetFillColor(0);
   ratePF_Run285480to285549_c->SetBorderMode(0);
   ratePF_Run285480to285549_c->SetBorderSize(2);
   ratePF_Run285480to285549_c->SetTickx(1);
   ratePF_Run285480to285549_c->SetTicky(1);
   ratePF_Run285480to285549_c->SetRightMargin(0.05);
   ratePF_Run285480to285549_c->SetTopMargin(0.05);
   ratePF_Run285480to285549_c->SetFrameBorderMode(0);
   ratePF_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist1_h2 = new TH1F("dummyHist1_h2","",70,0,70);
   dummyHist1_h2->SetMinimum(5e+07);
   dummyHist1_h2->SetMaximum(-1);
   dummyHist1_h2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist1_h2->SetLineColor(ci);
   dummyHist1_h2->GetXaxis()->SetTitle("Run");
   dummyHist1_h2->GetXaxis()->CenterTitle(true);
   dummyHist1_h2->GetXaxis()->SetLabelFont(42);
   dummyHist1_h2->GetXaxis()->SetLabelSize(0.035);
   dummyHist1_h2->GetXaxis()->SetTitleSize(0.035);
   dummyHist1_h2->GetXaxis()->SetTitleFont(42);
   dummyHist1_h2->GetYaxis()->SetTitle("Counts");
   dummyHist1_h2->GetYaxis()->CenterTitle(true);
   dummyHist1_h2->GetYaxis()->SetLabelFont(42);
   dummyHist1_h2->GetYaxis()->SetLabelSize(0.035);
   dummyHist1_h2->GetYaxis()->SetTitleSize(0.035);
   dummyHist1_h2->GetYaxis()->SetTitleOffset(1.2);
   dummyHist1_h2->GetYaxis()->SetTitleFont(42);
   dummyHist1_h2->GetZaxis()->SetLabelFont(42);
   dummyHist1_h2->GetZaxis()->SetLabelSize(0.035);
   dummyHist1_h2->GetZaxis()->SetTitleSize(0.035);
   dummyHist1_h2->GetZaxis()->SetTitleFont(42);
   dummyHist1_h2->Draw("");
   
   TLegend *leg = new TLegend(0.3,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   ratePF_Run285480to285549_c->Modified();
   ratePF_Run285480to285549_c->cd();
   ratePF_Run285480to285549_c->SetSelected(ratePF_Run285480to285549_c);
}
