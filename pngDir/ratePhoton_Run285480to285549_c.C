void ratePhoton_Run285480to285549_c()
{
//=========Macro generated from canvas: ratePhoton_Run285480to285549_c/ratePhoton_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *ratePhoton_Run285480to285549_c = new TCanvas("ratePhoton_Run285480to285549_c", "ratePhoton_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   ratePhoton_Run285480to285549_c->SetHighLightColor(2);
   ratePhoton_Run285480to285549_c->Range(-8.235295,-2.235294,74.11765,0.1176471);
   ratePhoton_Run285480to285549_c->SetFillColor(0);
   ratePhoton_Run285480to285549_c->SetBorderMode(0);
   ratePhoton_Run285480to285549_c->SetBorderSize(2);
   ratePhoton_Run285480to285549_c->SetTickx(1);
   ratePhoton_Run285480to285549_c->SetTicky(1);
   ratePhoton_Run285480to285549_c->SetRightMargin(0.05);
   ratePhoton_Run285480to285549_c->SetTopMargin(0.05);
   ratePhoton_Run285480to285549_c->SetFrameBorderMode(0);
   ratePhoton_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist2_h3 = new TH1F("dummyHist2_h3","",70,0,70);
   dummyHist2_h3->SetMinimum(5e+07);
   dummyHist2_h3->SetMaximum(-1);
   dummyHist2_h3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist2_h3->SetLineColor(ci);
   dummyHist2_h3->GetXaxis()->SetTitle("Run");
   dummyHist2_h3->GetXaxis()->CenterTitle(true);
   dummyHist2_h3->GetXaxis()->SetLabelFont(42);
   dummyHist2_h3->GetXaxis()->SetLabelSize(0.035);
   dummyHist2_h3->GetXaxis()->SetTitleSize(0.035);
   dummyHist2_h3->GetXaxis()->SetTitleFont(42);
   dummyHist2_h3->GetYaxis()->SetTitle("Counts");
   dummyHist2_h3->GetYaxis()->CenterTitle(true);
   dummyHist2_h3->GetYaxis()->SetLabelFont(42);
   dummyHist2_h3->GetYaxis()->SetLabelSize(0.035);
   dummyHist2_h3->GetYaxis()->SetTitleSize(0.035);
   dummyHist2_h3->GetYaxis()->SetTitleOffset(1.2);
   dummyHist2_h3->GetYaxis()->SetTitleFont(42);
   dummyHist2_h3->GetZaxis()->SetLabelFont(42);
   dummyHist2_h3->GetZaxis()->SetLabelSize(0.035);
   dummyHist2_h3->GetZaxis()->SetTitleSize(0.035);
   dummyHist2_h3->GetZaxis()->SetTitleFont(42);
   dummyHist2_h3->Draw("");
   
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
   ratePhoton_Run285480to285549_c->Modified();
   ratePhoton_Run285480to285549_c->cd();
   ratePhoton_Run285480to285549_c->SetSelected(ratePhoton_Run285480to285549_c);
}
