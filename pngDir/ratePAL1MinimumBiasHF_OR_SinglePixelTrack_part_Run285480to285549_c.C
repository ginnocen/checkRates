void ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c()
{
//=========Macro generated from canvas: ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c/ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c
//=========  (Tue Nov 22 15:10:59 2016) by ROOT version6.02/13
   TCanvas *ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c = new TCanvas("ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c", "ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c",0,0,800,600);
   gStyle->SetOptStat(0);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetHighLightColor(2);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->Range(-8.235295,-9.905463e+07,74.11765,8.914916e+08);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetFillColor(0);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetBorderMode(0);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetBorderSize(2);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetTickx(1);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetTicky(1);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetRightMargin(0.05);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetTopMargin(0.05);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetFrameBorderMode(0);
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetFrameBorderMode(0);
   
   TH1F *dummyHist6_h7 = new TH1F("dummyHist6_h7","",70,0,70);
   dummyHist6_h7->SetMinimum(0);
   dummyHist6_h7->SetMaximum(8.419643e+08);
   dummyHist6_h7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummyHist6_h7->SetLineColor(ci);
   dummyHist6_h7->GetXaxis()->SetTitle("Run");
   dummyHist6_h7->GetXaxis()->CenterTitle(true);
   dummyHist6_h7->GetXaxis()->SetLabelFont(42);
   dummyHist6_h7->GetXaxis()->SetLabelSize(0.035);
   dummyHist6_h7->GetXaxis()->SetTitleSize(0.035);
   dummyHist6_h7->GetXaxis()->SetTitleFont(42);
   dummyHist6_h7->GetYaxis()->SetTitle("Counts");
   dummyHist6_h7->GetYaxis()->CenterTitle(true);
   dummyHist6_h7->GetYaxis()->SetLabelFont(42);
   dummyHist6_h7->GetYaxis()->SetLabelSize(0.035);
   dummyHist6_h7->GetYaxis()->SetTitleSize(0.035);
   dummyHist6_h7->GetYaxis()->SetTitleOffset(1.2);
   dummyHist6_h7->GetYaxis()->SetTitleFont(42);
   dummyHist6_h7->GetZaxis()->SetLabelFont(42);
   dummyHist6_h7->GetZaxis()->SetLabelSize(0.035);
   dummyHist6_h7->GetZaxis()->SetTitleSize(0.035);
   dummyHist6_h7->GetZaxis()->SetTitleFont(42);
   dummyHist6_h7->Draw("");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr_fx11[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr_fy11[8] = {
   7528559,
   1.358267e+07,
   3.663312e+07,
   6.157734e+07,
   6.520773e+07,
   6.695332e+07,
   7.922572e+07,
   8.419643e+07};
   TGraph *graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr_fx11,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr_fy11);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#3333cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#3333cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->SetMaximum(9.186322e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr11);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr_fx12[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr_fy12[8] = {
   7528848,
   1.358381e+07,
   3.663518e+07,
   6.15789e+07,
   6.520809e+07,
   6.695383e+07,
   7.922901e+07,
   8.420078e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr_fx12,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr_fy12);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cccc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->SetMaximum(9.186797e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr12);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr_fx13[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr_fy13[8] = {
   7528919,
   1.358301e+07,
   3.663763e+07,
   6.158044e+07,
   6.521082e+07,
   6.695702e+07,
   7.923141e+07,
   8.420164e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr_fx13,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr_fy13);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->SetMaximum(9.186891e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr13);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr_fx14[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr_fy14[8] = {
   7529765,
   1.358389e+07,
   3.66368e+07,
   6.158059e+07,
   6.52106e+07,
   6.695728e+07,
   7.92296e+07,
   8.420016e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr_fx14,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr_fy14);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->SetMaximum(9.18672e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr14);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr_fx15[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr_fy15[8] = {
   7526604,
   1.358103e+07,
   3.663234e+07,
   6.157489e+07,
   6.520596e+07,
   6.695238e+07,
   7.922587e+07,
   8.419655e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr_fx15,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr_fy15);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ffcc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->SetMaximum(9.186354e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr15);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr_fx16[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr_fy16[8] = {
   7529446,
   1.358361e+07,
   3.663514e+07,
   6.157954e+07,
   6.521003e+07,
   6.69557e+07,
   7.922719e+07,
   8.419731e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr_fx16,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr_fy16);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->SetMaximum(9.18641e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr16);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr_fx17[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr_fy17[8] = {
   7529560,
   1.358454e+07,
   3.663772e+07,
   6.157996e+07,
   6.520988e+07,
   6.695502e+07,
   7.922669e+07,
   8.41975e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr_fx17,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr_fy17);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->SetMaximum(9.18643e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr17);
   
   graph->Draw("l");
   
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr_fx18[8] = {
   0,
   25,
   37,
   50,
   57,
   58,
   59,
   69};
   Double_t HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr_fy18[8] = {
   7529220,
   1.358263e+07,
   3.663529e+07,
   6.157549e+07,
   6.520623e+07,
   6.69513e+07,
   7.922257e+07,
   8.419358e+07};
   graph = new TGraph(8,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr_fx18,HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr_fy18);
   graph->SetName("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr");
   graph->SetTitle("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(0);
   
   TH1F *Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18 = new TH1F("Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18","HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr",100,0,75.9);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->SetMinimum(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->SetMaximum(9.186002e+07);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->SetDirectory(0);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->SetLineColor(ci);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetXaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetXaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetXaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetXaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetYaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetYaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetYaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetYaxis()->SetTitleFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetZaxis()->SetLabelFont(42);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetZaxis()->SetLabelSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetZaxis()->SetTitleSize(0.035);
   Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr18);
   
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
   TLegendEntry *entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part1_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part1","L");

   ci = TColor::GetColor("#3333cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part2_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part2","L");

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part3_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part3","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part4_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part4","L");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part5_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part5","L");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part6_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part6","L");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part7_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part7","L");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("HLT_PAL1MinimumBiasHF_OR_SinglePixelTrack_part8_v_countIntPerRun_gr","PAL1MinimumBiasHF_OR_SinglePixelTrack_part8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->Modified();
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->cd();
   ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c->SetSelected(ratePAL1MinimumBiasHF_OR_SinglePixelTrack_part_Run285480to285549_c);
}
