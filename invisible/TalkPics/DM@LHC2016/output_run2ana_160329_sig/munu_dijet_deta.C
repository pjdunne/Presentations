void munu_dijet_deta()
{
//=========Macro generated from canvas: dijet_deta/dijet_deta
//=========  (Tue Mar 29 09:05:02 2016) by ROOT version6.02/13
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
   upper->Range(3.213333,-6.577709,7.08,32.1147);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.17);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackdijet_deta = new THStack();
   stackdijet_deta->SetName("stackdijet_deta");
   stackdijet_deta->SetTitle(";#Delta#eta_{jj};Events");
   stackdijet_deta->SetMaximum(26.90043);
   
   TH1F *stackdijet_deta_stack_3 = new TH1F("stackdijet_deta_stack_3","",16,3.6,6.693333);
   stackdijet_deta_stack_3->SetMinimum(0);
   stackdijet_deta_stack_3->SetMaximum(28.24546);
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
   stackdijet_deta_stack_3->GetXaxis()->SetTitleOffset(0.83);
   stackdijet_deta_stack_3->GetYaxis()->SetTitle("Events");
   stackdijet_deta_stack_3->GetYaxis()->SetLabelFont(42);
   stackdijet_deta_stack_3->GetYaxis()->SetLabelSize(0.06);
   stackdijet_deta_stack_3->GetYaxis()->SetTitleSize(0.08);
   stackdijet_deta_stack_3->GetYaxis()->SetTitleOffset(0.6);
   stackdijet_deta_stack_3->GetZaxis()->SetLabelFont(42);
   stackdijet_deta_stack_3->GetZaxis()->SetLabelSize(0.035);
   stackdijet_deta_stack_3->GetZaxis()->SetTitleSize(0.035);
   stackdijet_deta_stack_3->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->SetHistogram(stackdijet_deta_stack_3);
   
   
   TH1F *QCD W#rightarrow#mu#nu15 = new TH1F("QCD W#rightarrow#mu#nu15","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   QCD W#rightarrow#mu#nu15->SetBinContent(1,2.430357);
   QCD W#rightarrow#mu#nu15->SetBinContent(2,3.451729);
   QCD W#rightarrow#mu#nu15->SetBinContent(3,4.729957);
   QCD W#rightarrow#mu#nu15->SetBinContent(4,5.61719);
   QCD W#rightarrow#mu#nu15->SetBinContent(5,5.475317);
   QCD W#rightarrow#mu#nu15->SetBinContent(6,5.352895);
   QCD W#rightarrow#mu#nu15->SetBinContent(7,6.196339);
   QCD W#rightarrow#mu#nu15->SetBinContent(8,6.669825);
   QCD W#rightarrow#mu#nu15->SetBinContent(9,4.215909);
   QCD W#rightarrow#mu#nu15->SetBinContent(10,3.744441);
   QCD W#rightarrow#mu#nu15->SetBinContent(11,0.9951776);
   QCD W#rightarrow#mu#nu15->SetBinContent(12,1.439123);
   QCD W#rightarrow#mu#nu15->SetBinContent(13,0.9927002);
   QCD W#rightarrow#mu#nu15->SetBinContent(14,0.01359157);
   QCD W#rightarrow#mu#nu15->SetBinContent(15,0.6665474);
   QCD W#rightarrow#mu#nu15->SetBinContent(16,0.8869026);
   QCD W#rightarrow#mu#nu15->SetBinError(1,0.4695529);
   QCD W#rightarrow#mu#nu15->SetBinError(2,0.57477);
   QCD W#rightarrow#mu#nu15->SetBinError(3,0.7915255);
   QCD W#rightarrow#mu#nu15->SetBinError(4,0.9467522);
   QCD W#rightarrow#mu#nu15->SetBinError(5,0.9798824);
   QCD W#rightarrow#mu#nu15->SetBinError(6,1.001026);
   QCD W#rightarrow#mu#nu15->SetBinError(7,1.114767);
   QCD W#rightarrow#mu#nu15->SetBinError(8,1.160029);
   QCD W#rightarrow#mu#nu15->SetBinError(9,0.9090875);
   QCD W#rightarrow#mu#nu15->SetBinError(10,0.8472888);
   QCD W#rightarrow#mu#nu15->SetBinError(11,0.4107975);
   QCD W#rightarrow#mu#nu15->SetBinError(12,0.5079107);
   QCD W#rightarrow#mu#nu15->SetBinError(13,0.46406);
   QCD W#rightarrow#mu#nu15->SetBinError(14,0.01359157);
   QCD W#rightarrow#mu#nu15->SetBinError(15,0.3855038);
   QCD W#rightarrow#mu#nu15->SetBinError(16,0.4387591);
   QCD W#rightarrow#mu#nu15->SetEntries(16);
   QCD W#rightarrow#mu#nu15->SetDirectory(0);
   QCD W#rightarrow#mu#nu15->SetStats(0);

   ci = TColor::GetColor("#ffcc66");
   QCD W#rightarrow#mu#nu15->SetFillColor(ci);
   QCD W#rightarrow#mu#nu15->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow#mu#nu15->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#mu#nu15->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#mu#nu15->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow#mu#nu15->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow#mu#nu15->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#mu#nu15->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#mu#nu15->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow#mu#nu15->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow#mu#nu15->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#mu#nu15->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#mu#nu15->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(QCD W#rightarrow#mu#nu,"");
   
   TH1F *EWK W#rightarrow#mu#nu16 = new TH1F("EWK W#rightarrow#mu#nu16","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   EWK W#rightarrow#mu#nu16->SetBinContent(1,1.048476);
   EWK W#rightarrow#mu#nu16->SetBinContent(2,1.501731);
   EWK W#rightarrow#mu#nu16->SetBinContent(3,1.650554);
   EWK W#rightarrow#mu#nu16->SetBinContent(4,2.513628);
   EWK W#rightarrow#mu#nu16->SetBinContent(5,2.527244);
   EWK W#rightarrow#mu#nu16->SetBinContent(6,1.979616);
   EWK W#rightarrow#mu#nu16->SetBinContent(7,2.408992);
   EWK W#rightarrow#mu#nu16->SetBinContent(8,2.747818);
   EWK W#rightarrow#mu#nu16->SetBinContent(9,2.099121);
   EWK W#rightarrow#mu#nu16->SetBinContent(10,2.27665);
   EWK W#rightarrow#mu#nu16->SetBinContent(11,1.238897);
   EWK W#rightarrow#mu#nu16->SetBinContent(12,1.562889);
   EWK W#rightarrow#mu#nu16->SetBinContent(13,0.9771489);
   EWK W#rightarrow#mu#nu16->SetBinContent(14,1.10424);
   EWK W#rightarrow#mu#nu16->SetBinContent(15,0.4267003);
   EWK W#rightarrow#mu#nu16->SetBinContent(16,1.40027);
   EWK W#rightarrow#mu#nu16->SetBinError(1,0.3524095);
   EWK W#rightarrow#mu#nu16->SetBinError(2,0.43403);
   EWK W#rightarrow#mu#nu16->SetBinError(3,0.4697915);
   EWK W#rightarrow#mu#nu16->SetBinError(4,0.5421657);
   EWK W#rightarrow#mu#nu16->SetBinError(5,0.5124913);
   EWK W#rightarrow#mu#nu16->SetBinError(6,0.4888523);
   EWK W#rightarrow#mu#nu16->SetBinError(7,0.5241044);
   EWK W#rightarrow#mu#nu16->SetBinError(8,0.5693563);
   EWK W#rightarrow#mu#nu16->SetBinError(9,0.4872144);
   EWK W#rightarrow#mu#nu16->SetBinError(10,0.5025668);
   EWK W#rightarrow#mu#nu16->SetBinError(11,0.3750718);
   EWK W#rightarrow#mu#nu16->SetBinError(12,0.4559826);
   EWK W#rightarrow#mu#nu16->SetBinError(13,0.3285124);
   EWK W#rightarrow#mu#nu16->SetBinError(14,0.3777963);
   EWK W#rightarrow#mu#nu16->SetBinError(15,0.2019311);
   EWK W#rightarrow#mu#nu16->SetBinError(16,0.4027062);
   EWK W#rightarrow#mu#nu16->SetEntries(16);
   EWK W#rightarrow#mu#nu16->SetDirectory(0);
   EWK W#rightarrow#mu#nu16->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   EWK W#rightarrow#mu#nu16->SetFillColor(ci);
   EWK W#rightarrow#mu#nu16->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow#mu#nu16->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#mu#nu16->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#mu#nu16->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow#mu#nu16->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow#mu#nu16->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#mu#nu16->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#mu#nu16->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow#mu#nu16->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow#mu#nu16->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#mu#nu16->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#mu#nu16->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(EWK W#rightarrow#mu#nu,"");
   
   TH1F *Top17 = new TH1F("Top17","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   Top17->SetBinContent(1,0.2484338);
   Top17->SetBinContent(2,0.3096994);
   Top17->SetBinContent(3,0.4745931);
   Top17->SetBinContent(4,0.6525019);
   Top17->SetBinContent(5,0.5922627);
   Top17->SetBinContent(6,0.621866);
   Top17->SetBinContent(7,0.6673139);
   Top17->SetBinContent(8,0.8669147);
   Top17->SetBinContent(9,0.7930929);
   Top17->SetBinContent(10,0.5444115);
   Top17->SetBinContent(11,0.362671);
   Top17->SetBinContent(12,0.2489479);
   Top17->SetBinContent(13,0.140217);
   Top17->SetBinContent(14,0.1352825);
   Top17->SetBinContent(15,0.01503211);
   Top17->SetBinContent(16,0.1504605);
   Top17->SetBinError(1,0.1194019);
   Top17->SetBinError(2,0.08198795);
   Top17->SetBinError(3,0.1664265);
   Top17->SetBinError(4,0.1583317);
   Top17->SetBinError(5,0.1217626);
   Top17->SetBinError(6,0.1172975);
   Top17->SetBinError(7,0.1236542);
   Top17->SetBinError(8,0.1581054);
   Top17->SetBinError(9,0.1757427);
   Top17->SetBinError(10,0.1410256);
   Top17->SetBinError(11,0.09688187);
   Top17->SetBinError(12,0.08053012);
   Top17->SetBinError(13,0.05758026);
   Top17->SetBinError(14,0.07865451);
   Top17->SetBinError(15,0.01503211);
   Top17->SetBinError(16,0.06015257);
   Top17->SetEntries(16);
   Top17->SetDirectory(0);
   Top17->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top17->SetFillColor(ci);
   Top17->GetXaxis()->SetLabelFont(42);
   Top17->GetXaxis()->SetLabelSize(0.035);
   Top17->GetXaxis()->SetTitleSize(0.035);
   Top17->GetXaxis()->SetTitleFont(42);
   Top17->GetYaxis()->SetLabelFont(42);
   Top17->GetYaxis()->SetLabelSize(0.035);
   Top17->GetYaxis()->SetTitleSize(0.035);
   Top17->GetYaxis()->SetTitleFont(42);
   Top17->GetZaxis()->SetLabelFont(42);
   Top17->GetZaxis()->SetLabelSize(0.035);
   Top17->GetZaxis()->SetTitleSize(0.035);
   Top17->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(Top,"");
   
   TH1F *QCD18 = new TH1F("QCD18","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   QCD18->SetBinContent(6,0.9184066);
   QCD18->SetBinContent(8,3.617597);
   QCD18->SetBinError(6,0.9184066);
   QCD18->SetBinError(8,3.617597);
   QCD18->SetEntries(16);
   QCD18->SetDirectory(0);
   QCD18->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD18->SetFillColor(ci);
   QCD18->GetXaxis()->SetLabelFont(42);
   QCD18->GetXaxis()->SetLabelSize(0.035);
   QCD18->GetXaxis()->SetTitleSize(0.035);
   QCD18->GetXaxis()->SetTitleFont(42);
   QCD18->GetYaxis()->SetLabelFont(42);
   QCD18->GetYaxis()->SetLabelSize(0.035);
   QCD18->GetYaxis()->SetTitleSize(0.035);
   QCD18->GetYaxis()->SetTitleFont(42);
   QCD18->GetZaxis()->SetLabelFont(42);
   QCD18->GetZaxis()->SetLabelSize(0.035);
   QCD18->GetZaxis()->SetTitleSize(0.035);
   QCD18->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(QCD,"");
   
   TH1F *VV19 = new TH1F("VV19","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   VV19->SetBinContent(3,0.03209614);
   VV19->SetBinContent(6,0.03511212);
   VV19->SetBinContent(8,0.267241);
   VV19->SetBinContent(9,0.1972214);
   VV19->SetBinContent(10,0.01016635);
   VV19->SetBinContent(14,0.2481633);
   VV19->SetBinError(3,0.03209614);
   VV19->SetBinError(6,0.03511211);
   VV19->SetBinError(8,0.267241);
   VV19->SetBinError(9,0.1972214);
   VV19->SetBinError(10,0.01016635);
   VV19->SetBinError(14,0.2481633);
   VV19->SetEntries(16);
   VV19->SetDirectory(0);
   VV19->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV19->SetFillColor(ci);
   VV19->GetXaxis()->SetLabelFont(42);
   VV19->GetXaxis()->SetLabelSize(0.035);
   VV19->GetXaxis()->SetTitleSize(0.035);
   VV19->GetXaxis()->SetTitleFont(42);
   VV19->GetYaxis()->SetLabelFont(42);
   VV19->GetYaxis()->SetLabelSize(0.035);
   VV19->GetYaxis()->SetTitleSize(0.035);
   VV19->GetYaxis()->SetTitleFont(42);
   VV19->GetZaxis()->SetLabelFont(42);
   VV19->GetZaxis()->SetLabelSize(0.035);
   VV19->GetZaxis()->SetTitleSize(0.035);
   VV19->GetZaxis()->SetTitleFont(42);
   stackdijet_deta->Add(VV,"");
   stackdijet_deta->Draw("hist");
   
   TH1F *totalerrordijet_deta20 = new TH1F("totalerrordijet_deta20","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   totalerrordijet_deta20->SetBinContent(1,3.727268);
   totalerrordijet_deta20->SetBinContent(2,5.263159);
   totalerrordijet_deta20->SetBinContent(3,6.887199);
   totalerrordijet_deta20->SetBinContent(4,8.78332);
   totalerrordijet_deta20->SetBinContent(5,8.594824);
   totalerrordijet_deta20->SetBinContent(6,8.907897);
   totalerrordijet_deta20->SetBinContent(7,9.272644);
   totalerrordijet_deta20->SetBinContent(8,14.1694);
   totalerrordijet_deta20->SetBinContent(9,7.305345);
   totalerrordijet_deta20->SetBinContent(10,6.575669);
   totalerrordijet_deta20->SetBinContent(11,2.596746);
   totalerrordijet_deta20->SetBinContent(12,3.250959);
   totalerrordijet_deta20->SetBinContent(13,2.110066);
   totalerrordijet_deta20->SetBinContent(14,1.501277);
   totalerrordijet_deta20->SetBinContent(15,1.10828);
   totalerrordijet_deta20->SetBinContent(16,2.437633);
   totalerrordijet_deta20->SetBinError(1,0.3500395);
   totalerrordijet_deta20->SetBinError(2,0.49428);
   totalerrordijet_deta20->SetBinError(3,0.6467987);
   totalerrordijet_deta20->SetBinError(4,0.8248694);
   totalerrordijet_deta20->SetBinError(5,0.8071671);
   totalerrordijet_deta20->SetBinError(6,0.8365688);
   totalerrordijet_deta20->SetBinError(7,0.8708234);
   totalerrordijet_deta20->SetBinError(8,1.330693);
   totalerrordijet_deta20->SetBinError(9,0.6860681);
   totalerrordijet_deta20->SetBinError(10,0.6175419);
   totalerrordijet_deta20->SetBinError(11,0.2438686);
   totalerrordijet_deta20->SetBinError(12,0.3053079);
   totalerrordijet_deta20->SetBinError(13,0.198163);
   totalerrordijet_deta20->SetBinError(14,0.1409897);
   totalerrordijet_deta20->SetBinError(15,0.1040821);
   totalerrordijet_deta20->SetBinError(16,0.2289259);
   totalerrordijet_deta20->SetEntries(80);
   totalerrordijet_deta20->SetDirectory(0);
   totalerrordijet_deta20->SetStats(0);
   totalerrordijet_deta20->SetFillColor(1);
   totalerrordijet_deta20->SetFillStyle(3004);
   totalerrordijet_deta20->GetXaxis()->SetLabelFont(42);
   totalerrordijet_deta20->GetXaxis()->SetLabelSize(0.035);
   totalerrordijet_deta20->GetXaxis()->SetTitleSize(0.035);
   totalerrordijet_deta20->GetXaxis()->SetTitleFont(42);
   totalerrordijet_deta20->GetYaxis()->SetLabelFont(42);
   totalerrordijet_deta20->GetYaxis()->SetLabelSize(0.035);
   totalerrordijet_deta20->GetYaxis()->SetTitleSize(0.035);
   totalerrordijet_deta20->GetYaxis()->SetTitleFont(42);
   totalerrordijet_deta20->GetZaxis()->SetLabelFont(42);
   totalerrordijet_deta20->GetZaxis()->SetLabelSize(0.035);
   totalerrordijet_deta20->GetZaxis()->SetTitleSize(0.035);
   totalerrordijet_deta20->GetZaxis()->SetTitleFont(42);
   totalerrordijet_deta20->Draw("E2same");
   
   TH1F *totlinedijet_deta21 = new TH1F("totlinedijet_deta21","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,3.6,6.693333);
   totlinedijet_deta21->SetBinContent(1,3.727268);
   totlinedijet_deta21->SetBinContent(2,5.263159);
   totlinedijet_deta21->SetBinContent(3,6.887199);
   totlinedijet_deta21->SetBinContent(4,8.78332);
   totlinedijet_deta21->SetBinContent(5,8.594824);
   totlinedijet_deta21->SetBinContent(6,8.907897);
   totlinedijet_deta21->SetBinContent(7,9.272644);
   totlinedijet_deta21->SetBinContent(8,14.1694);
   totlinedijet_deta21->SetBinContent(9,7.305345);
   totlinedijet_deta21->SetBinContent(10,6.575669);
   totlinedijet_deta21->SetBinContent(11,2.596746);
   totlinedijet_deta21->SetBinContent(12,3.250959);
   totlinedijet_deta21->SetBinContent(13,2.110066);
   totlinedijet_deta21->SetBinContent(14,1.501277);
   totlinedijet_deta21->SetBinContent(15,1.10828);
   totlinedijet_deta21->SetBinContent(16,2.437633);
   totlinedijet_deta21->SetBinError(1,0.3500395);
   totlinedijet_deta21->SetBinError(2,0.49428);
   totlinedijet_deta21->SetBinError(3,0.6467987);
   totlinedijet_deta21->SetBinError(4,0.8248694);
   totlinedijet_deta21->SetBinError(5,0.8071671);
   totlinedijet_deta21->SetBinError(6,0.8365688);
   totlinedijet_deta21->SetBinError(7,0.8708234);
   totlinedijet_deta21->SetBinError(8,1.330693);
   totlinedijet_deta21->SetBinError(9,0.6860681);
   totlinedijet_deta21->SetBinError(10,0.6175419);
   totlinedijet_deta21->SetBinError(11,0.2438686);
   totlinedijet_deta21->SetBinError(12,0.3053079);
   totlinedijet_deta21->SetBinError(13,0.198163);
   totlinedijet_deta21->SetBinError(14,0.1409897);
   totlinedijet_deta21->SetBinError(15,0.1040821);
   totlinedijet_deta21->SetBinError(16,0.2289259);
   totlinedijet_deta21->SetEntries(80);
   totlinedijet_deta21->SetDirectory(0);
   totlinedijet_deta21->SetStats(0);
   totlinedijet_deta21->SetFillColor(1);
   totlinedijet_deta21->SetFillStyle(0);
   totlinedijet_deta21->GetXaxis()->SetLabelFont(42);
   totlinedijet_deta21->GetXaxis()->SetLabelSize(0.035);
   totlinedijet_deta21->GetXaxis()->SetTitleSize(0.035);
   totlinedijet_deta21->GetXaxis()->SetTitleFont(42);
   totlinedijet_deta21->GetYaxis()->SetLabelFont(42);
   totlinedijet_deta21->GetYaxis()->SetLabelSize(0.035);
   totlinedijet_deta21->GetYaxis()->SetTitleSize(0.035);
   totlinedijet_deta21->GetYaxis()->SetTitleFont(42);
   totlinedijet_deta21->GetZaxis()->SetLabelFont(42);
   totlinedijet_deta21->GetZaxis()->SetLabelSize(0.035);
   totlinedijet_deta21->GetZaxis()->SetTitleSize(0.035);
   totlinedijet_deta21->GetZaxis()->SetTitleFont(42);
   totlinedijet_deta21->Draw("histsame");
   
   Double_t Graph_from_Data_fx3003[16] = {
   3.696667,
   3.89,
   4.083333,
   4.276667,
   4.47,
   4.663333,
   4.856667,
   5.05,
   5.243333,
   5.436667,
   5.63,
   5.823333,
   6.016667,
   6.21,
   6.403333,
   6.596667};
   Double_t Graph_from_Data_fy3003[16] = {
   5,
   6,
   9,
   10,
   7,
   12,
   8,
   10,
   7,
   6,
   4,
   0,
   2,
   1,
   1,
   1};
   Double_t Graph_from_Data_felx3003[16] = {
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667};
   Double_t Graph_from_Data_fely3003[16] = {
   2.159724,
   2.379969,
   2.943511,
   3.108748,
   2.581513,
   3.415326,
   2.768432,
   3.108748,
   2.581513,
   2.379969,
   1.914367,
   0,
   1.29183,
   0.8272525,
   0.8272525,
   0.8272525};
   Double_t Graph_from_Data_fehx3003[16] = {
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667,
   0.09666667};
   Double_t Graph_from_Data_fehy3003[16] = {
   3.382539,
   3.583712,
   4.110286,
   4.267035,
   3.770356,
   4.559911,
   3.94522,
   4.267035,
   3.770356,
   3.583712,
   3.162815,
   1.841055,
   2.63791,
   2.29957,
   2.29957,
   2.29957};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,Graph_from_Data_fx3003,Graph_from_Data_fy3003,Graph_from_Data_felx3003,Graph_from_Data_fehx3003,Graph_from_Data_fely3003,Graph_from_Data_fehy3003);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3003 = new TH1F("Graph_Graph_from_Data3003","dijet_deta {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,3.290667,7.002667);
   Graph_Graph_from_Data3003->SetMinimum(0);
   Graph_Graph_from_Data3003->SetMaximum(18.2159);
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
   
   TLegend *leg = new TLegend(0.6,0.536,0.89,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("QCD W#rightarrow#mu#nu","QCD W#rightarrow#mu#nu","fff");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("EWK W#rightarrow#mu#nu","EWK W#rightarrow#mu#nu","fff");

   ci = TColor::GetColor("#ff9900");
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.9,0.92,"2.3 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.136,0.87445,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.08000001);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.136,0.77845,"Preliminary");
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
