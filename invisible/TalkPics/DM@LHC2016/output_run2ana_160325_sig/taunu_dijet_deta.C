void taunu_dijet_deta()
{
//=========Macro generated from canvas: dijet_deta/dijet_deta
//=========  (Fri Mar 25 19:14:55 2016) by ROOT version6.02/13
   TCanvas *dijet_deta = new TCanvas("dijet_deta", "dijet_deta",1,1,700,476);
   gStyle->SetOptStat(0);
   dijet_deta->SetHighLightColor(2);
   dijet_deta->Range(0,0,1,1);
   dijet_deta->SetFillColor(0);
   dijet_deta->SetBorderMode(0);
   dijet_deta->SetBorderSize(2);
   dijet_deta->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper
   TPad *upper = new TPad("upper", "pad",0,0,1,1);
   upper->Draw();
   upper->cd();
   upper->Range(3.27,-1.512,6.57,8.568);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.15);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackdijet_deta = new THStack();
   stackdijet_deta->SetName("stackdijet_deta");
   stackdijet_deta->SetTitle(";#Delta#eta_{jj};Events");
   stackdijet_deta->SetMaximum(7.2);
   
   TH1F *stackdijet_deta_stack_3 = new TH1F("stackdijet_deta_stack_3","",11,3.6,6.24);
   stackdijet_deta_stack_3->SetMinimum(0);
   stackdijet_deta_stack_3->SetMaximum(7.56);
   stackdijet_deta_stack_3->SetDirectory(0);
   stackdijet_deta_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackdijet_deta_stack_3->SetLineColor(ci);
   stackdijet_deta_stack_3->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   stackdijet_deta_stack_3->GetXaxis()->SetLabelFont(42);
   stackdijet_deta_stack_3->GetXaxis()->SetLabelSize(0.06);
   stackdijet_deta_stack_3->GetXaxis()->SetTitleSize(0.08);
   stackdijet_deta_stack_3->GetXaxis()->SetTitleOffset(0.7);
   stackdijet_deta_stack_3->GetYaxis()->SetTitle("Events");
   stackdijet_deta_stack_3->GetYaxis()->SetLabelFont(42);
   stackdijet_deta_stack_3->GetYaxis()->SetLabelSize(0.06);
   stackdijet_deta_stack_3->GetYaxis()->SetTitleSize(0.08);
   stackdijet_deta_stack_3->GetYaxis()->SetTitleOffset(0.45);
   stackdijet_deta_stack_3->GetZaxis()->SetLabelFont(42);
   stackdijet_deta_stack_3->GetZaxis()->SetLabelSize(0.035);
   stackdijet_deta_stack_3->GetZaxis()->SetTitleSize(0.035);
   stackdijet_deta_stack_3->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->SetHistogram(stackdijet_deta_stack_3);
   
   
   TH1F *QCD W#rightarrow#tau#nu17 = new TH1F("QCD W#rightarrow#tau#nu17","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   QCD W#rightarrow#tau#nu17->SetBinContent(1,1.76834);
   QCD W#rightarrow#tau#nu17->SetBinContent(2,1.892616);
   QCD W#rightarrow#tau#nu17->SetBinContent(3,1.987262);
   QCD W#rightarrow#tau#nu17->SetBinContent(4,1.492657);
   QCD W#rightarrow#tau#nu17->SetBinContent(5,1.675743);
   QCD W#rightarrow#tau#nu17->SetBinContent(6,0.883851);
   QCD W#rightarrow#tau#nu17->SetBinContent(7,0.8582447);
   QCD W#rightarrow#tau#nu17->SetBinContent(8,0.6088763);
   QCD W#rightarrow#tau#nu17->SetBinContent(9,0.04705941);
   QCD W#rightarrow#tau#nu17->SetBinContent(10,0.2738363);
   QCD W#rightarrow#tau#nu17->SetBinError(1,0.3206313);
   QCD W#rightarrow#tau#nu17->SetBinError(2,0.3719288);
   QCD W#rightarrow#tau#nu17->SetBinError(3,0.435608);
   QCD W#rightarrow#tau#nu17->SetBinError(4,0.3597597);
   QCD W#rightarrow#tau#nu17->SetBinError(5,0.6347699);
   QCD W#rightarrow#tau#nu17->SetBinError(6,0.3251383);
   QCD W#rightarrow#tau#nu17->SetBinError(7,0.3521576);
   QCD W#rightarrow#tau#nu17->SetBinError(8,0.2769909);
   QCD W#rightarrow#tau#nu17->SetBinError(9,0.04705941);
   QCD W#rightarrow#tau#nu17->SetBinError(10,0.210177);
   QCD W#rightarrow#tau#nu17->SetEntries(11);
   QCD W#rightarrow#tau#nu17->SetDirectory(0);
   QCD W#rightarrow#tau#nu17->SetStats(0);

   ci = TColor::GetColor("#993300");
   QCD W#rightarrow#tau#nu17->SetFillColor(ci);
   QCD W#rightarrow#tau#nu17->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu17->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu17->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu17->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow#tau#nu17->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu17->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu17->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu17->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow#tau#nu17->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu17->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu17->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu17->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(QCD W#rightarrow#tau#nu,"");
   
   TH1F *EWK W#rightarrow#tau#nu18 = new TH1F("EWK W#rightarrow#tau#nu18","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   EWK W#rightarrow#tau#nu18->SetBinContent(1,0.5059628);
   EWK W#rightarrow#tau#nu18->SetBinContent(2,0.4554578);
   EWK W#rightarrow#tau#nu18->SetBinContent(3,0.483927);
   EWK W#rightarrow#tau#nu18->SetBinContent(4,0.9669223);
   EWK W#rightarrow#tau#nu18->SetBinContent(5,0.4568081);
   EWK W#rightarrow#tau#nu18->SetBinContent(6,0.693316);
   EWK W#rightarrow#tau#nu18->SetBinContent(7,0.4658994);
   EWK W#rightarrow#tau#nu18->SetBinContent(8,0.3281716);
   EWK W#rightarrow#tau#nu18->SetBinContent(9,0.1136285);
   EWK W#rightarrow#tau#nu18->SetBinContent(10,0.2329159);
   EWK W#rightarrow#tau#nu18->SetBinContent(11,0.5339843);
   EWK W#rightarrow#tau#nu18->SetBinError(1,0.2417344);
   EWK W#rightarrow#tau#nu18->SetBinError(2,0.2022378);
   EWK W#rightarrow#tau#nu18->SetBinError(3,0.2426242);
   EWK W#rightarrow#tau#nu18->SetBinError(4,0.351975);
   EWK W#rightarrow#tau#nu18->SetBinError(5,0.2222345);
   EWK W#rightarrow#tau#nu18->SetBinError(6,0.2822784);
   EWK W#rightarrow#tau#nu18->SetBinError(7,0.2385612);
   EWK W#rightarrow#tau#nu18->SetBinError(8,0.2394123);
   EWK W#rightarrow#tau#nu18->SetBinError(9,0.1136285);
   EWK W#rightarrow#tau#nu18->SetBinError(10,0.1647376);
   EWK W#rightarrow#tau#nu18->SetBinError(11,0.2345738);
   EWK W#rightarrow#tau#nu18->SetEntries(11);
   EWK W#rightarrow#tau#nu18->SetDirectory(0);
   EWK W#rightarrow#tau#nu18->SetStats(0);

   ci = TColor::GetColor("#cc6633");
   EWK W#rightarrow#tau#nu18->SetFillColor(ci);
   EWK W#rightarrow#tau#nu18->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu18->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu18->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu18->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow#tau#nu18->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu18->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu18->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu18->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow#tau#nu18->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu18->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu18->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu18->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(EWK W#rightarrow#tau#nu,"");
   
   TH1F *Top19 = new TH1F("Top19","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   Top19->SetBinContent(1,0.8331796);
   Top19->SetBinContent(2,1.322012);
   Top19->SetBinContent(3,0.9807049);
   Top19->SetBinContent(4,0.8672994);
   Top19->SetBinContent(5,0.8761155);
   Top19->SetBinContent(6,0.7191087);
   Top19->SetBinContent(7,0.5214905);
   Top19->SetBinContent(8,0.3067338);
   Top19->SetBinContent(9,0.3313061);
   Top19->SetBinContent(10,0.1802284);
   Top19->SetBinContent(11,0.1918536);
   Top19->SetBinError(1,0.1290887);
   Top19->SetBinError(2,0.1709913);
   Top19->SetBinError(3,0.1405527);
   Top19->SetBinError(4,0.1329565);
   Top19->SetBinError(5,0.1345364);
   Top19->SetBinError(6,0.136749);
   Top19->SetBinError(7,0.1037103);
   Top19->SetBinError(8,0.07804428);
   Top19->SetBinError(9,0.08681841);
   Top19->SetBinError(10,0.05934029);
   Top19->SetBinError(11,0.09516212);
   Top19->SetEntries(11);
   Top19->SetDirectory(0);
   Top19->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top19->SetFillColor(ci);
   Top19->GetXaxis()->SetLabelFont(42);
   Top19->GetXaxis()->SetLabelSize(0.035);
   Top19->GetXaxis()->SetTitleSize(0.035);
   Top19->GetXaxis()->SetTitleFont(42);
   Top19->GetYaxis()->SetLabelFont(42);
   Top19->GetYaxis()->SetLabelSize(0.035);
   Top19->GetYaxis()->SetTitleSize(0.035);
   Top19->GetYaxis()->SetTitleFont(42);
   Top19->GetZaxis()->SetLabelFont(42);
   Top19->GetZaxis()->SetLabelSize(0.035);
   Top19->GetZaxis()->SetTitleSize(0.035);
   Top19->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(Top,"");
   
   TH1F *QCD20 = new TH1F("QCD20","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   QCD20->SetBinContent(8,0.4228997);
   QCD20->SetBinError(8,0.4228997);
   QCD20->SetEntries(11);
   QCD20->SetDirectory(0);
   QCD20->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD20->SetFillColor(ci);
   QCD20->GetXaxis()->SetLabelFont(42);
   QCD20->GetXaxis()->SetLabelSize(0.035);
   QCD20->GetXaxis()->SetTitleSize(0.035);
   QCD20->GetXaxis()->SetTitleFont(42);
   QCD20->GetYaxis()->SetLabelFont(42);
   QCD20->GetYaxis()->SetLabelSize(0.035);
   QCD20->GetYaxis()->SetTitleSize(0.035);
   QCD20->GetYaxis()->SetTitleFont(42);
   QCD20->GetZaxis()->SetLabelFont(42);
   QCD20->GetZaxis()->SetLabelSize(0.035);
   QCD20->GetZaxis()->SetTitleSize(0.035);
   QCD20->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(QCD,"");
   
   TH1F *VV21 = new TH1F("VV21","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   VV21->SetEntries(11);
   VV21->SetDirectory(0);
   VV21->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV21->SetFillColor(ci);
   VV21->GetXaxis()->SetLabelFont(42);
   VV21->GetXaxis()->SetLabelSize(0.035);
   VV21->GetXaxis()->SetTitleSize(0.035);
   VV21->GetXaxis()->SetTitleFont(42);
   VV21->GetYaxis()->SetLabelFont(42);
   VV21->GetYaxis()->SetLabelSize(0.035);
   VV21->GetYaxis()->SetTitleSize(0.035);
   VV21->GetYaxis()->SetTitleFont(42);
   VV21->GetZaxis()->SetLabelFont(42);
   VV21->GetZaxis()->SetLabelSize(0.035);
   VV21->GetZaxis()->SetTitleSize(0.035);
   VV21->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(VV,"");
   stackdijet_deta->Draw("hist");
   
   TH1F *totalerrordijet_deta22 = new TH1F("totalerrordijet_deta22","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   totalerrordijet_deta22->SetBinContent(1,3.107483);
   totalerrordijet_deta22->SetBinContent(2,3.670086);
   totalerrordijet_deta22->SetBinContent(3,3.451894);
   totalerrordijet_deta22->SetBinContent(4,3.326878);
   totalerrordijet_deta22->SetBinContent(5,3.008667);
   totalerrordijet_deta22->SetBinContent(6,2.296276);
   totalerrordijet_deta22->SetBinContent(7,1.845635);
   totalerrordijet_deta22->SetBinContent(8,1.666682);
   totalerrordijet_deta22->SetBinContent(9,0.491994);
   totalerrordijet_deta22->SetBinContent(10,0.6869806);
   totalerrordijet_deta22->SetBinContent(11,0.7258379);
   totalerrordijet_deta22->SetBinError(1,0.3980432);
   totalerrordijet_deta22->SetBinError(2,0.4701081);
   totalerrordijet_deta22->SetBinError(3,0.4421594);
   totalerrordijet_deta22->SetBinError(4,0.426146);
   totalerrordijet_deta22->SetBinError(5,0.3853857);
   totalerrordijet_deta22->SetBinError(6,0.2941342);
   totalerrordijet_deta22->SetBinError(7,0.2364107);
   totalerrordijet_deta22->SetBinError(8,0.2134883);
   totalerrordijet_deta22->SetBinError(9,0.06302042);
   totalerrordijet_deta22->SetBinError(10,0.08799661);
   totalerrordijet_deta22->SetBinError(11,0.09297391);
   totalerrordijet_deta22->SetEntries(55);
   totalerrordijet_deta22->SetDirectory(0);
   totalerrordijet_deta22->SetStats(0);
   totalerrordijet_deta22->SetFillColor(1);
   totalerrordijet_deta22->SetFillStyle(3004);
   totalerrordijet_deta22->GetXaxis()->SetLabelFont(42);
   totalerrordijet_deta22->GetXaxis()->SetLabelSize(0.035);
   totalerrordijet_deta22->GetXaxis()->SetTitleSize(0.035);
   totalerrordijet_deta22->GetXaxis()->SetTitleFont(42);
   totalerrordijet_deta22->GetYaxis()->SetLabelFont(42);
   totalerrordijet_deta22->GetYaxis()->SetLabelSize(0.035);
   totalerrordijet_deta22->GetYaxis()->SetTitleSize(0.035);
   totalerrordijet_deta22->GetYaxis()->SetTitleFont(42);
   totalerrordijet_deta22->GetZaxis()->SetLabelFont(42);
   totalerrordijet_deta22->GetZaxis()->SetLabelSize(0.035);
   totalerrordijet_deta22->GetZaxis()->SetTitleSize(0.035);
   totalerrordijet_deta22->GetZaxis()->SetTitleFont(42);
   totalerrordijet_deta22->Draw("E2same");
   
   TH1F *totlinedijet_deta23 = new TH1F("totlinedijet_deta23","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   totlinedijet_deta23->SetBinContent(1,3.107483);
   totlinedijet_deta23->SetBinContent(2,3.670086);
   totlinedijet_deta23->SetBinContent(3,3.451894);
   totlinedijet_deta23->SetBinContent(4,3.326878);
   totlinedijet_deta23->SetBinContent(5,3.008667);
   totlinedijet_deta23->SetBinContent(6,2.296276);
   totlinedijet_deta23->SetBinContent(7,1.845635);
   totlinedijet_deta23->SetBinContent(8,1.666682);
   totlinedijet_deta23->SetBinContent(9,0.491994);
   totlinedijet_deta23->SetBinContent(10,0.6869806);
   totlinedijet_deta23->SetBinContent(11,0.7258379);
   totlinedijet_deta23->SetBinError(1,0.3980432);
   totlinedijet_deta23->SetBinError(2,0.4701081);
   totlinedijet_deta23->SetBinError(3,0.4421594);
   totlinedijet_deta23->SetBinError(4,0.426146);
   totlinedijet_deta23->SetBinError(5,0.3853857);
   totlinedijet_deta23->SetBinError(6,0.2941342);
   totlinedijet_deta23->SetBinError(7,0.2364107);
   totlinedijet_deta23->SetBinError(8,0.2134883);
   totlinedijet_deta23->SetBinError(9,0.06302042);
   totlinedijet_deta23->SetBinError(10,0.08799661);
   totlinedijet_deta23->SetBinError(11,0.09297391);
   totlinedijet_deta23->SetEntries(55);
   totlinedijet_deta23->SetDirectory(0);
   totlinedijet_deta23->SetStats(0);
   totlinedijet_deta23->SetFillColor(1);
   totlinedijet_deta23->SetFillStyle(0);
   totlinedijet_deta23->GetXaxis()->SetLabelFont(42);
   totlinedijet_deta23->GetXaxis()->SetLabelSize(0.035);
   totlinedijet_deta23->GetXaxis()->SetTitleSize(0.035);
   totlinedijet_deta23->GetXaxis()->SetTitleFont(42);
   totlinedijet_deta23->GetYaxis()->SetLabelFont(42);
   totlinedijet_deta23->GetYaxis()->SetLabelSize(0.035);
   totlinedijet_deta23->GetYaxis()->SetTitleSize(0.035);
   totlinedijet_deta23->GetYaxis()->SetTitleFont(42);
   totlinedijet_deta23->GetZaxis()->SetLabelFont(42);
   totlinedijet_deta23->GetZaxis()->SetLabelSize(0.035);
   totlinedijet_deta23->GetZaxis()->SetTitleSize(0.035);
   totlinedijet_deta23->GetZaxis()->SetTitleFont(42);
   totlinedijet_deta23->Draw("histsame");
   
   Double_t Graph_from_Data_fx3003[11] = {
   3.72,
   3.96,
   4.2,
   4.44,
   4.68,
   4.92,
   5.16,
   5.4,
   5.64,
   5.88,
   6.12};
   Double_t Graph_from_Data_fy3003[11] = {
   4,
   3,
   4,
   3,
   3,
   2,
   2,
   0,
   1,
   2,
   0};
   Double_t Graph_from_Data_felx3003[11] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t Graph_from_Data_fely3003[11] = {
   1.914367,
   1.632727,
   1.914367,
   1.632727,
   1.632727,
   1.29183,
   1.29183,
   0,
   0.8272525,
   1.29183,
   0};
   Double_t Graph_from_Data_fehx3003[11] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t Graph_from_Data_fehy3003[11] = {
   3.162815,
   2.918242,
   3.162815,
   2.918242,
   2.918242,
   2.63791,
   2.63791,
   1.841055,
   2.29957,
   2.63791,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_from_Data_fx3003,Graph_from_Data_fy3003,Graph_from_Data_felx3003,Graph_from_Data_fehx3003,Graph_from_Data_fely3003,Graph_from_Data_fehy3003);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3003 = new TH1F("Graph_Graph_from_Data3003","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,3.336,6.504);
   Graph_Graph_from_Data3003->SetMinimum(0);
   Graph_Graph_from_Data3003->SetMaximum(7.879096);
   Graph_Graph_from_Data3003->SetDirectory(0);
   Graph_Graph_from_Data3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Data3003->SetLineColor(ci);
   Graph_Graph_from_Data3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Data3003);
   
   grae->Draw("p");
   
   TH1F *Signal24 = new TH1F("Signal24","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",11,3.6,6.24);
   Signal24->SetBinContent(2,0.081629);
   Signal24->SetBinContent(3,0.1012379);
   Signal24->SetBinContent(5,0.09518784);
   Signal24->SetBinContent(9,0.07462846);
   Signal24->SetBinError(2,0.081629);
   Signal24->SetBinError(3,0.1012379);
   Signal24->SetBinError(5,0.09518784);
   Signal24->SetBinError(9,0.07462846);
   Signal24->SetEntries(11);
   Signal24->SetDirectory(0);
   Signal24->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Signal24->SetLineColor(ci);
   Signal24->GetXaxis()->SetLabelFont(42);
   Signal24->GetXaxis()->SetLabelSize(0.035);
   Signal24->GetXaxis()->SetTitleSize(0.035);
   Signal24->GetXaxis()->SetTitleFont(42);
   Signal24->GetYaxis()->SetLabelFont(42);
   Signal24->GetYaxis()->SetLabelSize(0.035);
   Signal24->GetYaxis()->SetTitleSize(0.035);
   Signal24->GetYaxis()->SetTitleFont(42);
   Signal24->GetZaxis()->SetLabelFont(42);
   Signal24->GetZaxis()->SetLabelSize(0.035);
   Signal24->GetZaxis()->SetTitleSize(0.035);
   Signal24->GetZaxis()->SetTitleFont(42);
   Signal24->Draw("samehisthisthist");
   
   TLegend *leg = new TLegend(0.6,0.477,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.06);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Data","Data","PlePlePle");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("QCD W#rightarrow#tau#nu","QCD W#rightarrow#tau#nu","fff");

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
   entry=leg->AddEntry("EWK W#rightarrow#tau#nu","EWK W#rightarrow#tau#nu","fff");

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
   entry=leg->AddEntry("Top","Top","fff");

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
   entry=leg->AddEntry("QCD","QCD","fff");

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
   entry=leg->AddEntry("VV","VV","fff");

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
   entry=leg->AddEntry("Signal","Signal","fff");
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
   dijet_deta->cd();
   dijet_deta->Modified();
   dijet_deta->cd();
   dijet_deta->SetSelected(dijet_deta);
}
