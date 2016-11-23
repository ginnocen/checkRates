void rateBJet_Run285480to285549_c()
{
//=========Macro generated from canvas: rateBJet_Run285480to285549_c/rateBJet_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *rateBJet_Run285480to285549_c = new TCanvas("rateBJet_Run285480to285549_c", "rateBJet_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   rateBJet_Run285480to285549_c->SetHighLightColor(2);
   rateBJet_Run285480to285549_c->Range(-8.235295,-2.235294,74.11765,0.1176471);
   rateBJet_Run285480to285549_c->SetFillColor(0);
   rateBJet_Run285480to285549_c->SetBorderMode(0);
   rateBJet_Run285480to285549_c->SetBorderSize(2);
   rateBJet_Run285480to285549_c->SetTickx(1);
   rateBJet_Run285480to285549_c->SetTicky(1);
   rateBJet_Run285480to285549_c->SetRightMargin(0.05);
   rateBJet_Run285480to285549_c->SetTopMargin(0.05);
   rateBJet_Run285480to285549_c->SetFrameBorderMode(0);
   rateBJet_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist3_h4 = new TH1F("dummyHist3_h4","",70,0,70);
   dummyHist3_h4->SetMinimum(5e+07);
   dummyHist3_h4->SetMaximum(-1);
   dummyHist3_h4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist3_h4->SetLineColor(ci);
   dummyHist3_h4->GetXaxis()->SetTitle("Run");
   dummyHist3_h4->GetXaxis()->CenterTitle(true);
   dummyHist3_h4->GetXaxis()->SetLabelFont(42);
   dummyHist3_h4->GetXaxis()->SetLabelSize(0.035);
   dummyHist3_h4->GetXaxis()->SetTitleSize(0.035);
   dummyHist3_h4->GetXaxis()->SetTitleFont(42);
   dummyHist3_h4->GetYaxis()->SetTitle("Counts");
   dummyHist3_h4->GetYaxis()->CenterTitle(true);
   dummyHist3_h4->GetYaxis()->SetLabelFont(42);
   dummyHist3_h4->GetYaxis()->SetLabelSize(0.035);
   dummyHist3_h4->GetYaxis()->SetTitleSize(0.035);
   dummyHist3_h4->GetYaxis()->SetTitleOffset(1.2);
   dummyHist3_h4->GetYaxis()->SetTitleFont(42);
   dummyHist3_h4->GetZaxis()->SetLabelFont(42);
   dummyHist3_h4->GetZaxis()->SetLabelSize(0.035);
   dummyHist3_h4->GetZaxis()->SetTitleSize(0.035);
   dummyHist3_h4->GetZaxis()->SetTitleFont(42);
   dummyHist3_h4->Draw("");
   
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
   rateBJet_Run285480to285549_c->Modified();
   rateBJet_Run285480to285549_c->cd();
   rateBJet_Run285480to285549_c->SetSelected(rateBJet_Run285480to285549_c);
}
