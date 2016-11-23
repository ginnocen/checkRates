void rateDmeson_Run285480to285549_c()
{
//=========Macro generated from canvas: rateDmeson_Run285480to285549_c/rateDmeson_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *rateDmeson_Run285480to285549_c = new TCanvas("rateDmeson_Run285480to285549_c", "rateDmeson_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   rateDmeson_Run285480to285549_c->SetHighLightColor(2);
   rateDmeson_Run285480to285549_c->Range(-8.235295,-8.159211e+07,74.11765,7.343289e+08);
   rateDmeson_Run285480to285549_c->SetFillColor(0);
   rateDmeson_Run285480to285549_c->SetBorderMode(0);
   rateDmeson_Run285480to285549_c->SetBorderSize(2);
   rateDmeson_Run285480to285549_c->SetTickx(1);
   rateDmeson_Run285480to285549_c->SetTicky(1);
   rateDmeson_Run285480to285549_c->SetRightMargin(0.05);
   rateDmeson_Run285480to285549_c->SetTopMargin(0.05);
   rateDmeson_Run285480to285549_c->SetFrameBorderMode(0);
   rateDmeson_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist4_h5 = new TH1F("dummyHist4_h5","",70,0,70);
   dummyHist4_h5->SetMinimum(0);
   dummyHist4_h5->SetMaximum(6.935329e+08);
   dummyHist4_h5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist4_h5->SetLineColor(ci);
   dummyHist4_h5->GetXaxis()->SetTitle("Run");
   dummyHist4_h5->GetXaxis()->CenterTitle(true);
   dummyHist4_h5->GetXaxis()->SetLabelFont(42);
   dummyHist4_h5->GetXaxis()->SetLabelSize(0.035);
   dummyHist4_h5->GetXaxis()->SetTitleSize(0.035);
   dummyHist4_h5->GetXaxis()->SetTitleFont(42);
   dummyHist4_h5->GetYaxis()->SetTitle("Counts");
   dummyHist4_h5->GetYaxis()->CenterTitle(true);
   dummyHist4_h5->GetYaxis()->SetLabelFont(42);
   dummyHist4_h5->GetYaxis()->SetLabelSize(0.035);
   dummyHist4_h5->GetYaxis()->SetTitleSize(0.035);
   dummyHist4_h5->GetYaxis()->SetTitleOffset(1.2);
   dummyHist4_h5->GetYaxis()->SetTitleFont(42);
   dummyHist4_h5->GetZaxis()->SetLabelFont(42);
   dummyHist4_h5->GetZaxis()->SetLabelSize(0.035);
   dummyHist4_h5->GetZaxis()->SetTitleSize(0.035);
   dummyHist4_h5->GetZaxis()->SetTitleFont(42);
   dummyHist4_h5->Draw("");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr_fx1[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr_fy1[8] = {
   1.133029e+07,
   1.896273e+07,
   4.734389e+07,
   5.885574e+07,
   6.059628e+07,
   6.13924e+07,
   6.700564e+07,
   6.935329e+07};
   TGraph *graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr_fx1,HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr_fy1);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#3333cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#3333cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1","HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->SetMinimum(5527990);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->SetMaximum(7.515559e+07);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr1);
   
   graph->Draw("l");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr_fx2[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr_fy2[8] = {
   0,
   0,
   0,
   1.151869e+07,
   1.32579e+07,
   1.405345e+07,
   1.966691e+07,
   2.201666e+07};
   graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr_fx2,HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr_fy2);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cccc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2","HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->SetMinimum(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->SetMaximum(2.421832e+07);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr2);
   
   graph->Draw("l");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr_fx3[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr_fy3[8] = {
   0,
   0,
   0,
   1.151842e+07,
   1.32584e+07,
   1.405406e+07,
   1.966822e+07,
   2.201769e+07};
   graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr_fx3,HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr_fy3);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3","HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->SetMinimum(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->SetMaximum(2.421946e+07);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr3);
   
   graph->Draw("l");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr_fx4[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr_fy4[8] = {
   2126413,
   8099373,
   3.010076e+07,
   5.68428e+07,
   6.097467e+07,
   6.284715e+07,
   7.587016e+07,
   8.143168e+07};
   graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr_fx4,HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr_fy4);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4","HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->SetMinimum(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->SetMaximum(8.93622e+07);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr4);
   
   graph->Draw("l");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr_fx5[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr_fy5[8] = {
   219435,
   798539,
   2893494,
   5122150,
   5359677,
   5478725,
   6796999,
   7122984};
   graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr_fx5,HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr_fy5);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ffcc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5","HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->SetMinimum(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->SetMaximum(7813339);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr5);
   
   graph->Draw("l");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr_fx6[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr_fy6[8] = {
   20325,
   107780,
   473141,
   841157,
   881807,
   902099,
   1119438,
   1175101};
   graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr_fx6,HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr_fy6);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6","HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->SetMinimum(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->SetMaximum(1290579);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr6);
   
   graph->Draw("l");
   
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr_fx7[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr_fy7[8] = {
   1690,
   81062,
   566076,
   1197584,
   1347200,
   1403067,
   1701008,
   1893281};
   graph = new TGraph(8,HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr_fx7,HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr_fy7);
   graph->SetName("HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7 = new TH1F("Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7","HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->SetMinimum(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->SetMaximum(2082440);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->SetDirectory(0);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->SetLineColor(ci);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr7);
   
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
   TLegendEntry *entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt5_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt5","L");

   ci = TColor::GetColor("#3333cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt5_part2_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt5_part2","L");

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt5_part3_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt5_part3","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt8_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt8","L");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt15_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt15","L");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt30_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt30","L");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PADmesonPPTrackingGlobal_Dpt50_v_countIntPerRun_gr","PADmesonPPTrackingGlobal_Dpt50","L");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   rateDmeson_Run285480to285549_c->Modified();
   rateDmeson_Run285480to285549_c->cd();
   rateDmeson_Run285480to285549_c->SetSelected(rateDmeson_Run285480to285549_c);
}
