void taunu_metnomuons()
{
//=========Macro generated from canvas: metnomuons/metnomuons
//=========  (Fri Mar 25 19:14:55 2016) by ROOT version6.02/13
   TCanvas *metnomuons = new TCanvas("metnomuons", "metnomuons",0,0,700,500);
   gStyle->SetOptStat(0);
   metnomuons->SetHighLightColor(2);
   metnomuons->Range(0,0,1,1);
   metnomuons->SetFillColor(0);
   metnomuons->SetBorderMode(0);
   metnomuons->SetBorderSize(2);
   metnomuons->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper
   TPad *upper = new TPad("upper", "pad",0,0,1,1);
   upper->Draw();
   upper->cd();
   upper->Range(172.5,-2.728764,447.5,15.46299);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.15);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackmetnomuons = new THStack();
   stackmetnomuons->SetName("stackmetnomuons");
   stackmetnomuons->SetTitle(";E_{T,no-#mu}^{miss};E_{T,no-#mu}^{miss}");
   stackmetnomuons->SetMaximum(12.99411);
   
   TH1F *stackmetnomuons_stack_1 = new TH1F("stackmetnomuons_stack_1","",11,200,420);
   stackmetnomuons_stack_1->SetMinimum(0);
   stackmetnomuons_stack_1->SetMaximum(13.64382);
   stackmetnomuons_stack_1->SetDirectory(0);
   stackmetnomuons_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackmetnomuons_stack_1->SetLineColor(ci);
   stackmetnomuons_stack_1->GetXaxis()->SetTitle("E_{T,no-#mu}^{miss}");
   stackmetnomuons_stack_1->GetXaxis()->SetLabelFont(42);
   stackmetnomuons_stack_1->GetXaxis()->SetLabelSize(0.06);
   stackmetnomuons_stack_1->GetXaxis()->SetTitleSize(0.08);
   stackmetnomuons_stack_1->GetXaxis()->SetTitleOffset(0.7);
   stackmetnomuons_stack_1->GetYaxis()->SetTitle("E_{T,no-#mu}^{miss}");
   stackmetnomuons_stack_1->GetYaxis()->SetLabelFont(42);
   stackmetnomuons_stack_1->GetYaxis()->SetLabelSize(0.06);
   stackmetnomuons_stack_1->GetYaxis()->SetTitleSize(0.08);
   stackmetnomuons_stack_1->GetYaxis()->SetTitleOffset(0.45);
   stackmetnomuons_stack_1->GetZaxis()->SetLabelFont(42);
   stackmetnomuons_stack_1->GetZaxis()->SetLabelSize(0.035);
   stackmetnomuons_stack_1->GetZaxis()->SetTitleSize(0.035);
   stackmetnomuons_stack_1->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->SetHistogram(stackmetnomuons_stack_1);
   
   
   TH1F *QCD W#rightarrow#tau#nu1 = new TH1F("QCD W#rightarrow#tau#nu1","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   QCD W#rightarrow#tau#nu1->SetBinContent(1,2.125273);
   QCD W#rightarrow#tau#nu1->SetBinContent(2,1.669175);
   QCD W#rightarrow#tau#nu1->SetBinContent(3,1.047741);
   QCD W#rightarrow#tau#nu1->SetBinContent(4,1.242346);
   QCD W#rightarrow#tau#nu1->SetBinContent(5,1.076902);
   QCD W#rightarrow#tau#nu1->SetBinContent(6,1.057376);
   QCD W#rightarrow#tau#nu1->SetBinContent(7,0.764222);
   QCD W#rightarrow#tau#nu1->SetBinContent(8,0.6581103);
   QCD W#rightarrow#tau#nu1->SetBinContent(9,0.4780093);
   QCD W#rightarrow#tau#nu1->SetBinContent(10,0.2306541);
   QCD W#rightarrow#tau#nu1->SetBinContent(11,1.138678);
   QCD W#rightarrow#tau#nu1->SetBinError(1,0.6442428);
   QCD W#rightarrow#tau#nu1->SetBinError(2,0.4282486);
   QCD W#rightarrow#tau#nu1->SetBinError(3,0.3209077);
   QCD W#rightarrow#tau#nu1->SetBinError(4,0.3796029);
   QCD W#rightarrow#tau#nu1->SetBinError(5,0.3658505);
   QCD W#rightarrow#tau#nu1->SetBinError(6,0.3261481);
   QCD W#rightarrow#tau#nu1->SetBinError(7,0.2290593);
   QCD W#rightarrow#tau#nu1->SetBinError(8,0.2666849);
   QCD W#rightarrow#tau#nu1->SetBinError(9,0.1642907);
   QCD W#rightarrow#tau#nu1->SetBinError(10,0.1139618);
   QCD W#rightarrow#tau#nu1->SetBinError(11,0.258418);
   QCD W#rightarrow#tau#nu1->SetEntries(11);
   QCD W#rightarrow#tau#nu1->SetDirectory(0);
   QCD W#rightarrow#tau#nu1->SetStats(0);

   ci = TColor::GetColor("#993300");
   QCD W#rightarrow#tau#nu1->SetFillColor(ci);
   QCD W#rightarrow#tau#nu1->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu1->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu1->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu1->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow#tau#nu1->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu1->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu1->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu1->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow#tau#nu1->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu1->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu1->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu1->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(QCD W#rightarrow#tau#nu,"");
   
   TH1F *EWK W#rightarrow#tau#nu2 = new TH1F("EWK W#rightarrow#tau#nu2","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   EWK W#rightarrow#tau#nu2->SetBinContent(1,1.344409);
   EWK W#rightarrow#tau#nu2->SetBinContent(2,0.7041977);
   EWK W#rightarrow#tau#nu2->SetBinContent(3,0.1997724);
   EWK W#rightarrow#tau#nu2->SetBinContent(4,0.3416272);
   EWK W#rightarrow#tau#nu2->SetBinContent(5,0.5299835);
   EWK W#rightarrow#tau#nu2->SetBinContent(6,0.9193745);
   EWK W#rightarrow#tau#nu2->SetBinContent(7,0.2023707);
   EWK W#rightarrow#tau#nu2->SetBinContent(9,0.1467862);
   EWK W#rightarrow#tau#nu2->SetBinContent(10,0.1330894);
   EWK W#rightarrow#tau#nu2->SetBinContent(11,0.7153831);
   EWK W#rightarrow#tau#nu2->SetBinError(1,0.3724295);
   EWK W#rightarrow#tau#nu2->SetBinError(2,0.289041);
   EWK W#rightarrow#tau#nu2->SetBinError(3,0.1498362);
   EWK W#rightarrow#tau#nu2->SetBinError(4,0.1804463);
   EWK W#rightarrow#tau#nu2->SetBinError(5,0.2262862);
   EWK W#rightarrow#tau#nu2->SetBinError(6,0.3604512);
   EWK W#rightarrow#tau#nu2->SetBinError(7,0.1501752);
   EWK W#rightarrow#tau#nu2->SetBinError(9,0.1467862);
   EWK W#rightarrow#tau#nu2->SetBinError(10,0.1330894);
   EWK W#rightarrow#tau#nu2->SetBinError(11,0.3166386);
   EWK W#rightarrow#tau#nu2->SetEntries(11);
   EWK W#rightarrow#tau#nu2->SetDirectory(0);
   EWK W#rightarrow#tau#nu2->SetStats(0);

   ci = TColor::GetColor("#cc6633");
   EWK W#rightarrow#tau#nu2->SetFillColor(ci);
   EWK W#rightarrow#tau#nu2->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu2->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu2->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu2->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow#tau#nu2->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu2->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu2->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu2->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow#tau#nu2->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu2->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu2->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu2->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(EWK W#rightarrow#tau#nu,"");
   
   TH1F *Top3 = new TH1F("Top3","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   Top3->SetBinContent(1,2.013817);
   Top3->SetBinContent(2,1.567228);
   Top3->SetBinContent(3,1.112891);
   Top3->SetBinContent(4,0.7372111);
   Top3->SetBinContent(5,0.3087887);
   Top3->SetBinContent(6,0.2388978);
   Top3->SetBinContent(7,0.4021845);
   Top3->SetBinContent(8,0.2621121);
   Top3->SetBinContent(9,0.157985);
   Top3->SetBinContent(10,0.1359284);
   Top3->SetBinContent(11,0.1929886);
   Top3->SetBinError(1,0.1956818);
   Top3->SetBinError(2,0.2061214);
   Top3->SetBinError(3,0.154654);
   Top3->SetBinError(4,0.1237729);
   Top3->SetBinError(5,0.07848644);
   Top3->SetBinError(6,0.06967989);
   Top3->SetBinError(7,0.09870641);
   Top3->SetBinError(8,0.07715168);
   Top3->SetBinError(9,0.05785674);
   Top3->SetBinError(10,0.05358704);
   Top3->SetBinError(11,0.06443056);
   Top3->SetEntries(11);
   Top3->SetDirectory(0);
   Top3->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top3->SetFillColor(ci);
   Top3->GetXaxis()->SetLabelFont(42);
   Top3->GetXaxis()->SetLabelSize(0.035);
   Top3->GetXaxis()->SetTitleSize(0.035);
   Top3->GetXaxis()->SetTitleFont(42);
   Top3->GetYaxis()->SetLabelFont(42);
   Top3->GetYaxis()->SetLabelSize(0.035);
   Top3->GetYaxis()->SetTitleSize(0.035);
   Top3->GetYaxis()->SetTitleFont(42);
   Top3->GetZaxis()->SetLabelFont(42);
   Top3->GetZaxis()->SetLabelSize(0.035);
   Top3->GetZaxis()->SetTitleSize(0.035);
   Top3->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(Top,"");
   
   TH1F *QCD4 = new TH1F("QCD4","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   QCD4->SetBinContent(1,0.4228997);
   QCD4->SetBinError(1,0.4228997);
   QCD4->SetEntries(11);
   QCD4->SetDirectory(0);
   QCD4->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD4->SetFillColor(ci);
   QCD4->GetXaxis()->SetLabelFont(42);
   QCD4->GetXaxis()->SetLabelSize(0.035);
   QCD4->GetXaxis()->SetTitleSize(0.035);
   QCD4->GetXaxis()->SetTitleFont(42);
   QCD4->GetYaxis()->SetLabelFont(42);
   QCD4->GetYaxis()->SetLabelSize(0.035);
   QCD4->GetYaxis()->SetTitleSize(0.035);
   QCD4->GetYaxis()->SetTitleFont(42);
   QCD4->GetZaxis()->SetLabelFont(42);
   QCD4->GetZaxis()->SetLabelSize(0.035);
   QCD4->GetZaxis()->SetTitleSize(0.035);
   QCD4->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(QCD,"");
   
   TH1F *VV5 = new TH1F("VV5","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   VV5->SetEntries(11);
   VV5->SetDirectory(0);
   VV5->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV5->SetFillColor(ci);
   VV5->GetXaxis()->SetLabelFont(42);
   VV5->GetXaxis()->SetLabelSize(0.035);
   VV5->GetXaxis()->SetTitleSize(0.035);
   VV5->GetXaxis()->SetTitleFont(42);
   VV5->GetYaxis()->SetLabelFont(42);
   VV5->GetYaxis()->SetLabelSize(0.035);
   VV5->GetYaxis()->SetTitleSize(0.035);
   VV5->GetYaxis()->SetTitleFont(42);
   VV5->GetZaxis()->SetLabelFont(42);
   VV5->GetZaxis()->SetLabelSize(0.035);
   VV5->GetZaxis()->SetTitleSize(0.035);
   VV5->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(VV,"");
   stackmetnomuons->Draw("hist");
   
   TH1F *totalerrormetnomuons6 = new TH1F("totalerrormetnomuons6","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   totalerrormetnomuons6->SetBinContent(1,5.906399);
   totalerrormetnomuons6->SetBinContent(2,3.940601);
   totalerrormetnomuons6->SetBinContent(3,2.360405);
   totalerrormetnomuons6->SetBinContent(4,2.321184);
   totalerrormetnomuons6->SetBinContent(5,1.915674);
   totalerrormetnomuons6->SetBinContent(6,2.215649);
   totalerrormetnomuons6->SetBinContent(7,1.368777);
   totalerrormetnomuons6->SetBinContent(8,0.9202224);
   totalerrormetnomuons6->SetBinContent(9,0.7827804);
   totalerrormetnomuons6->SetBinContent(10,0.4996719);
   totalerrormetnomuons6->SetBinContent(11,2.047049);
   totalerrormetnomuons6->SetBinError(1,0.7565616);
   totalerrormetnomuons6->SetBinError(2,0.5047589);
   totalerrormetnomuons6->SetBinError(3,0.3023486);
   totalerrormetnomuons6->SetBinError(4,0.2973247);
   totalerrormetnomuons6->SetBinError(5,0.2453822);
   totalerrormetnomuons6->SetBinError(6,0.2838065);
   totalerrormetnomuons6->SetBinError(7,0.1753292);
   totalerrormetnomuons6->SetBinError(8,0.117873);
   totalerrormetnomuons6->SetBinError(9,0.1002678);
   totalerrormetnomuons6->SetBinError(10,0.0640039);
   totalerrormetnomuons6->SetBinError(11,0.2622103);
   totalerrormetnomuons6->SetEntries(55);
   totalerrormetnomuons6->SetDirectory(0);
   totalerrormetnomuons6->SetStats(0);
   totalerrormetnomuons6->SetFillColor(1);
   totalerrormetnomuons6->SetFillStyle(3004);
   totalerrormetnomuons6->GetXaxis()->SetLabelFont(42);
   totalerrormetnomuons6->GetXaxis()->SetLabelSize(0.035);
   totalerrormetnomuons6->GetXaxis()->SetTitleSize(0.035);
   totalerrormetnomuons6->GetXaxis()->SetTitleFont(42);
   totalerrormetnomuons6->GetYaxis()->SetLabelFont(42);
   totalerrormetnomuons6->GetYaxis()->SetLabelSize(0.035);
   totalerrormetnomuons6->GetYaxis()->SetTitleSize(0.035);
   totalerrormetnomuons6->GetYaxis()->SetTitleFont(42);
   totalerrormetnomuons6->GetZaxis()->SetLabelFont(42);
   totalerrormetnomuons6->GetZaxis()->SetLabelSize(0.035);
   totalerrormetnomuons6->GetZaxis()->SetTitleSize(0.035);
   totalerrormetnomuons6->GetZaxis()->SetTitleFont(42);
   totalerrormetnomuons6->Draw("E2same");
   
   TH1F *totlinemetnomuons7 = new TH1F("totlinemetnomuons7","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   totlinemetnomuons7->SetBinContent(1,5.906399);
   totlinemetnomuons7->SetBinContent(2,3.940601);
   totlinemetnomuons7->SetBinContent(3,2.360405);
   totlinemetnomuons7->SetBinContent(4,2.321184);
   totlinemetnomuons7->SetBinContent(5,1.915674);
   totlinemetnomuons7->SetBinContent(6,2.215649);
   totlinemetnomuons7->SetBinContent(7,1.368777);
   totlinemetnomuons7->SetBinContent(8,0.9202224);
   totlinemetnomuons7->SetBinContent(9,0.7827804);
   totlinemetnomuons7->SetBinContent(10,0.4996719);
   totlinemetnomuons7->SetBinContent(11,2.047049);
   totlinemetnomuons7->SetBinError(1,0.7565616);
   totlinemetnomuons7->SetBinError(2,0.5047589);
   totlinemetnomuons7->SetBinError(3,0.3023486);
   totlinemetnomuons7->SetBinError(4,0.2973247);
   totlinemetnomuons7->SetBinError(5,0.2453822);
   totlinemetnomuons7->SetBinError(6,0.2838065);
   totlinemetnomuons7->SetBinError(7,0.1753292);
   totlinemetnomuons7->SetBinError(8,0.117873);
   totlinemetnomuons7->SetBinError(9,0.1002678);
   totlinemetnomuons7->SetBinError(10,0.0640039);
   totlinemetnomuons7->SetBinError(11,0.2622103);
   totlinemetnomuons7->SetEntries(55);
   totlinemetnomuons7->SetDirectory(0);
   totlinemetnomuons7->SetStats(0);
   totlinemetnomuons7->SetFillColor(1);
   totlinemetnomuons7->SetFillStyle(0);
   totlinemetnomuons7->GetXaxis()->SetLabelFont(42);
   totlinemetnomuons7->GetXaxis()->SetLabelSize(0.035);
   totlinemetnomuons7->GetXaxis()->SetTitleSize(0.035);
   totlinemetnomuons7->GetXaxis()->SetTitleFont(42);
   totlinemetnomuons7->GetYaxis()->SetLabelFont(42);
   totlinemetnomuons7->GetYaxis()->SetLabelSize(0.035);
   totlinemetnomuons7->GetYaxis()->SetTitleSize(0.035);
   totlinemetnomuons7->GetYaxis()->SetTitleFont(42);
   totlinemetnomuons7->GetZaxis()->SetLabelFont(42);
   totlinemetnomuons7->GetZaxis()->SetLabelSize(0.035);
   totlinemetnomuons7->GetZaxis()->SetTitleSize(0.035);
   totlinemetnomuons7->GetZaxis()->SetTitleFont(42);
   totlinemetnomuons7->Draw("histsame");
   
   Double_t Graph_from_Data_fx3001[11] = {
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390,
   410};
   Double_t Graph_from_Data_fy3001[11] = {
   6,
   8,
   2,
   1,
   2,
   0,
   2,
   1,
   1,
   1,
   0};
   Double_t Graph_from_Data_felx3001[11] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t Graph_from_Data_fely3001[11] = {
   2.379969,
   2.768432,
   1.29183,
   0.8272525,
   1.29183,
   0,
   1.29183,
   0.8272525,
   0.8272525,
   0.8272525,
   0};
   Double_t Graph_from_Data_fehx3001[11] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t Graph_from_Data_fehy3001[11] = {
   3.583712,
   3.94522,
   2.63791,
   2.29957,
   2.63791,
   1.841055,
   2.63791,
   2.29957,
   2.29957,
   2.29957,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_from_Data_fx3001,Graph_from_Data_fy3001,Graph_from_Data_felx3001,Graph_from_Data_fehx3001,Graph_from_Data_fely3001,Graph_from_Data_fehy3001);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3001 = new TH1F("Graph_Graph_from_Data3001","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,178,442);
   Graph_Graph_from_Data3001->SetMinimum(0);
   Graph_Graph_from_Data3001->SetMaximum(13.13974);
   Graph_Graph_from_Data3001->SetDirectory(0);
   Graph_Graph_from_Data3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Data3001->SetLineColor(ci);
   Graph_Graph_from_Data3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Data3001);
   
   grae->Draw("p");
   
   TH1F *Signal8 = new TH1F("Signal8","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,200,420);
   Signal8->SetBinContent(1,0.07462846);
   Signal8->SetBinContent(5,0.1012379);
   Signal8->SetBinContent(7,0.081629);
   Signal8->SetBinContent(11,0.09518784);
   Signal8->SetBinError(1,0.07462846);
   Signal8->SetBinError(5,0.1012379);
   Signal8->SetBinError(7,0.081629);
   Signal8->SetBinError(11,0.09518784);
   Signal8->SetEntries(11);
   Signal8->SetDirectory(0);
   Signal8->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Signal8->SetLineColor(ci);
   Signal8->GetXaxis()->SetLabelFont(42);
   Signal8->GetXaxis()->SetLabelSize(0.035);
   Signal8->GetXaxis()->SetTitleSize(0.035);
   Signal8->GetXaxis()->SetTitleFont(42);
   Signal8->GetYaxis()->SetLabelFont(42);
   Signal8->GetYaxis()->SetLabelSize(0.035);
   Signal8->GetYaxis()->SetTitleSize(0.035);
   Signal8->GetYaxis()->SetTitleFont(42);
   Signal8->GetZaxis()->SetLabelFont(42);
   Signal8->GetZaxis()->SetLabelSize(0.035);
   Signal8->GetZaxis()->SetTitleSize(0.035);
   Signal8->GetZaxis()->SetTitleFont(42);
   Signal8->Draw("samehist");
   
   TLegend *leg = new TLegend(0.6,0.477,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.06);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Data","Data","Ple");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("QCD W#rightarrow#tau#nu","QCD W#rightarrow#tau#nu","f");

   ci = TColor::GetColor("#993300");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("EWK W#rightarrow#tau#nu","EWK W#rightarrow#tau#nu","f");

   ci = TColor::GetColor("#cc6633");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Top","Top","f");

   ci = TColor::GetColor("#9999cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("QCD","QCD","f");

   ci = TColor::GetColor("#ffccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VV","VV","f");

   ci = TColor::GetColor("#669966");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Signal","Signal","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.9,0.92,"2.3 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.136,0.87375,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.08000001);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.136,0.77775,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0608);
   tex->SetLineWidth(2);
   tex->Draw();
   upper->Modified();
   metnomuons->cd();
   metnomuons->Modified();
   metnomuons->cd();
   metnomuons->SetSelected(metnomuons);
}
