void rateFullTracks_Run285480to285549_c()
{
//=========Macro generated from canvas: rateFullTracks_Run285480to285549_c/rateFullTracks_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *rateFullTracks_Run285480to285549_c = new TCanvas("rateFullTracks_Run285480to285549_c", "rateFullTracks_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   rateFullTracks_Run285480to285549_c->SetHighLightColor(2);
   rateFullTracks_Run285480to285549_c->Range(-8.235295,-7851696,74.11765,7.066526e+07);
   rateFullTracks_Run285480to285549_c->SetFillColor(0);
   rateFullTracks_Run285480to285549_c->SetBorderMode(0);
   rateFullTracks_Run285480to285549_c->SetBorderSize(2);
   rateFullTracks_Run285480to285549_c->SetTickx(1);
   rateFullTracks_Run285480to285549_c->SetTicky(1);
   rateFullTracks_Run285480to285549_c->SetRightMargin(0.05);
   rateFullTracks_Run285480to285549_c->SetTopMargin(0.05);
   rateFullTracks_Run285480to285549_c->SetFrameBorderMode(0);
   rateFullTracks_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist5_h6 = new TH1F("dummyHist5_h6","",70,0,70);
   dummyHist5_h6->SetMinimum(0);
   dummyHist5_h6->SetMaximum(6.673941e+07);
   dummyHist5_h6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist5_h6->SetLineColor(ci);
   dummyHist5_h6->GetXaxis()->SetTitle("Run");
   dummyHist5_h6->GetXaxis()->CenterTitle(true);
   dummyHist5_h6->GetXaxis()->SetLabelFont(42);
   dummyHist5_h6->GetXaxis()->SetLabelSize(0.035);
   dummyHist5_h6->GetXaxis()->SetTitleSize(0.035);
   dummyHist5_h6->GetXaxis()->SetTitleFont(42);
   dummyHist5_h6->GetYaxis()->SetTitle("Counts");
   dummyHist5_h6->GetYaxis()->CenterTitle(true);
   dummyHist5_h6->GetYaxis()->SetLabelFont(42);
   dummyHist5_h6->GetYaxis()->SetLabelSize(0.035);
   dummyHist5_h6->GetYaxis()->SetTitleSize(0.035);
   dummyHist5_h6->GetYaxis()->SetTitleOffset(1.2);
   dummyHist5_h6->GetYaxis()->SetTitleFont(42);
   dummyHist5_h6->GetZaxis()->SetLabelFont(42);
   dummyHist5_h6->GetZaxis()->SetLabelSize(0.035);
   dummyHist5_h6->GetZaxis()->SetTitleSize(0.035);
   dummyHist5_h6->GetZaxis()->SetTitleFont(42);
   dummyHist5_h6->Draw("");
   
   Double_t HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr_fx8[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr_fy8[8] = {
   106593,
   391459,
   1435067,
   4153812,
   4578690,
   4770993,
   6102598,
   6673941};
   TGraph *graph = new TGraph(8,HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr_fx8,HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr_fy8);
   graph->SetName("HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#3333cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#3333cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8 = new TH1F("Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8","HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->SetMinimum(0);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->SetMaximum(7330676);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->SetDirectory(0);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->SetLineColor(ci);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr8);
   
   graph->Draw("l");
   
   Double_t HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr_fx9[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr_fy9[8] = {
   6864,
   330099,
   2327023,
   4915438,
   5516157,
   5742921,
   6972173,
   7755201};
   graph = new TGraph(8,HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr_fx9,HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr_fy9);
   graph->SetName("HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cccc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9 = new TH1F("Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9","HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->SetMinimum(0);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->SetMaximum(8530035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->SetDirectory(0);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->SetLineColor(ci);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr9);
   
   graph->Draw("l");
   
   Double_t HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr_fx10[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr_fy10[8] = {
   2650,
   127329,
   897866,
   1898456,
   2132265,
   2219821,
   2693130,
   2995766};
   graph = new TGraph(8,HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr_fx10,HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr_fy10);
   graph->SetName("HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10 = new TH1F("Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10","HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->SetMinimum(0);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->SetMaximum(3295078);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->SetDirectory(0);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->SetLineColor(ci);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr10);
   
   graph->Draw("l");
   
   TLegend *leg = new TLegend(0.3,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("HLT_PAFullTracks_HighPt20_v_countIntPerRun_gr","PAFullTracks_HighPt20","L");

   ci = TColor::GetColor("#3333cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAFullTracks_HighPt30_v_countIntPerRun_gr","PAFullTracks_HighPt30","L");

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAFullTracks_HighPt40_v_countIntPerRun_gr","PAFullTracks_HighPt40","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   rateFullTracks_Run285480to285549_c->Modified();
   rateFullTracks_Run285480to285549_c->cd();
   rateFullTracks_Run285480to285549_c->SetSelected(rateFullTracks_Run285480to285549_c);
}
