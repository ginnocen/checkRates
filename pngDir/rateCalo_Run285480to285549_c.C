void rateCalo_Run285480to285549_c()
{
//=========Macro generated from canvas: rateCalo_Run285480to285549_c/rateCalo_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *rateCalo_Run285480to285549_c = new TCanvas("rateCalo_Run285480to285549_c", "rateCalo_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   rateCalo_Run285480to285549_c->SetHighLightColor(2);
   rateCalo_Run285480to285549_c->Range(-8.235295,-2.235294,74.11765,0.1176471);
   rateCalo_Run285480to285549_c->SetFillColor(0);
   rateCalo_Run285480to285549_c->SetBorderMode(0);
   rateCalo_Run285480to285549_c->SetBorderSize(2);
   rateCalo_Run285480to285549_c->SetTickx(1);
   rateCalo_Run285480to285549_c->SetTicky(1);
   rateCalo_Run285480to285549_c->SetRightMargin(0.05);
   rateCalo_Run285480to285549_c->SetTopMargin(0.05);
   rateCalo_Run285480to285549_c->SetFrameBorderMode(0);
   rateCalo_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist0_h1 = new TH1F("dummyHist0_h1","",70,0,70);
   dummyHist0_h1->SetMinimum(5e+07);
   dummyHist0_h1->SetMaximum(-1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist0_h1->SetLineColor(ci);
   dummyHist0_h1->GetXaxis()->SetTitle("Run");
   dummyHist0_h1->GetXaxis()->CenterTitle(true);
   dummyHist0_h1->GetXaxis()->SetLabelFont(42);
   dummyHist0_h1->GetXaxis()->SetLabelSize(0.035);
   dummyHist0_h1->GetXaxis()->SetTitleSize(0.035);
   dummyHist0_h1->GetXaxis()->SetTitleFont(42);
   dummyHist0_h1->GetYaxis()->SetTitle("Counts");
   dummyHist0_h1->GetYaxis()->CenterTitle(true);
   dummyHist0_h1->GetYaxis()->SetLabelFont(42);
   dummyHist0_h1->GetYaxis()->SetLabelSize(0.035);
   dummyHist0_h1->GetYaxis()->SetTitleSize(0.035);
   dummyHist0_h1->GetYaxis()->SetTitleOffset(1.2);
   dummyHist0_h1->GetYaxis()->SetTitleFont(42);
   dummyHist0_h1->GetZaxis()->SetLabelFont(42);
   dummyHist0_h1->GetZaxis()->SetLabelSize(0.035);
   dummyHist0_h1->GetZaxis()->SetTitleSize(0.035);
   dummyHist0_h1->GetZaxis()->SetTitleFont(42);
   dummyHist0_h1->Draw("");
   
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
   rateCalo_Run285480to285549_c->Modified();
   rateCalo_Run285480to285549_c->cd();
   rateCalo_Run285480to285549_c->SetSelected(rateCalo_Run285480to285549_c);
}
