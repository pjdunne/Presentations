void taunu_alljetsmetnomu_mindphi()
{
//=========Macro generated from canvas: alljetsmetnomu_mindphi/alljetsmetnomu_mindphi
//=========  (Fri Mar 25 19:14:55 2016) by ROOT version6.02/13
   TCanvas *alljetsmetnomu_mindphi = new TCanvas("alljetsmetnomu_mindphi", "alljetsmetnomu_mindphi",1,1,700,476);
   gStyle->SetOptStat(0);
   alljetsmetnomu_mindphi->SetHighLightColor(2);
   alljetsmetnomu_mindphi->Range(0,0,1,1);
   alljetsmetnomu_mindphi->SetFillColor(0);
   alljetsmetnomu_mindphi->SetBorderMode(0);
   alljetsmetnomu_mindphi->SetBorderSize(2);
   alljetsmetnomu_mindphi->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper
   TPad *upper = new TPad("upper", "pad",0,0,1,1);
   upper->Draw();
   upper->cd();
   upper->Range(-0.2875,-3.391805,2.5875,19.22023);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.15);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackalljetsmetnomu_mindphi = new THStack();
   stackalljetsmetnomu_mindphi->SetName("stackalljetsmetnomu_mindphi");
   stackalljetsmetnomu_mindphi->SetTitle(";#Delta#phi(E_{T,no-#mu}^{miss},j);Events");
   stackalljetsmetnomu_mindphi->SetMaximum(16.15145);
   
   TH1F *stackalljetsmetnomu_mindphi_stack_4 = new TH1F("stackalljetsmetnomu_mindphi_stack_4","",10,0,2.3);
   stackalljetsmetnomu_mindphi_stack_4->SetMinimum(0);
   stackalljetsmetnomu_mindphi_stack_4->SetMaximum(16.95902);
   stackalljetsmetnomu_mindphi_stack_4->SetDirectory(0);
   stackalljetsmetnomu_mindphi_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackalljetsmetnomu_mindphi_stack_4->SetLineColor(ci);
   stackalljetsmetnomu_mindphi_stack_4->GetXaxis()->SetTitle("#Delta#phi(E_{T,no-#mu}^{miss},j)");
   stackalljetsmetnomu_mindphi_stack_4->GetXaxis()->SetLabelFont(42);
   stackalljetsmetnomu_mindphi_stack_4->GetXaxis()->SetLabelSize(0.06);
   stackalljetsmetnomu_mindphi_stack_4->GetXaxis()->SetTitleSize(0.08);
   stackalljetsmetnomu_mindphi_stack_4->GetXaxis()->SetTitleOffset(0.7);
   stackalljetsmetnomu_mindphi_stack_4->GetYaxis()->SetTitle("Events");
   stackalljetsmetnomu_mindphi_stack_4->GetYaxis()->SetLabelFont(42);
   stackalljetsmetnomu_mindphi_stack_4->GetYaxis()->SetLabelSize(0.06);
   stackalljetsmetnomu_mindphi_stack_4->GetYaxis()->SetTitleSize(0.08);
   stackalljetsmetnomu_mindphi_stack_4->GetYaxis()->SetTitleOffset(0.45);
   stackalljetsmetnomu_mindphi_stack_4->GetZaxis()->SetLabelFont(42);
   stackalljetsmetnomu_mindphi_stack_4->GetZaxis()->SetLabelSize(0.035);
   stackalljetsmetnomu_mindphi_stack_4->GetZaxis()->SetTitleSize(0.035);
   stackalljetsmetnomu_mindphi_stack_4->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->SetHistogram(stackalljetsmetnomu_mindphi_stack_4);
   
   
   TH1F *QCD W#rightarrow#tau#nu25 = new TH1F("QCD W#rightarrow#tau#nu25","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   QCD W#rightarrow#tau#nu25->SetBinContent(1,3.941835);
   QCD W#rightarrow#tau#nu25->SetBinContent(2,3.773301);
   QCD W#rightarrow#tau#nu25->SetBinContent(3,1.676289);
   QCD W#rightarrow#tau#nu25->SetBinContent(4,0.293471);
   QCD W#rightarrow#tau#nu25->SetBinContent(5,0.6537232);
   QCD W#rightarrow#tau#nu25->SetBinContent(6,0.4098423);
   QCD W#rightarrow#tau#nu25->SetBinContent(7,0.2760611);
   QCD W#rightarrow#tau#nu25->SetBinContent(8,0.2053119);
   QCD W#rightarrow#tau#nu25->SetBinContent(9,0.04232799);
   QCD W#rightarrow#tau#nu25->SetBinContent(10,0.216325);
   QCD W#rightarrow#tau#nu25->SetBinError(1,0.5281977);
   QCD W#rightarrow#tau#nu25->SetBinError(2,0.632061);
   QCD W#rightarrow#tau#nu25->SetBinError(3,0.408651);
   QCD W#rightarrow#tau#nu25->SetBinError(4,0.2074375);
   QCD W#rightarrow#tau#nu25->SetBinError(5,0.5415493);
   QCD W#rightarrow#tau#nu25->SetBinError(6,0.2174298);
   QCD W#rightarrow#tau#nu25->SetBinError(7,0.1665631);
   QCD W#rightarrow#tau#nu25->SetBinError(8,0.1033915);
   QCD W#rightarrow#tau#nu25->SetBinError(9,0.04232799);
   QCD W#rightarrow#tau#nu25->SetBinError(10,0.216325);
   QCD W#rightarrow#tau#nu25->SetEntries(10);
   QCD W#rightarrow#tau#nu25->SetDirectory(0);
   QCD W#rightarrow#tau#nu25->SetStats(0);

   ci = TColor::GetColor("#993300");
   QCD W#rightarrow#tau#nu25->SetFillColor(ci);
   QCD W#rightarrow#tau#nu25->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu25->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu25->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu25->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow#tau#nu25->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu25->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu25->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu25->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow#tau#nu25->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow#tau#nu25->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#tau#nu25->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#tau#nu25->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(QCD W#rightarrow#tau#nu,"");
   
   TH1F *EWK W#rightarrow#tau#nu26 = new TH1F("EWK W#rightarrow#tau#nu26","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   EWK W#rightarrow#tau#nu26->SetBinContent(1,2.972245);
   EWK W#rightarrow#tau#nu26->SetBinContent(2,1.111822);
   EWK W#rightarrow#tau#nu26->SetBinContent(3,0.5001914);
   EWK W#rightarrow#tau#nu26->SetBinContent(4,0.1215975);
   EWK W#rightarrow#tau#nu26->SetBinContent(5,0.1668825);
   EWK W#rightarrow#tau#nu26->SetBinContent(8,0.2054467);
   EWK W#rightarrow#tau#nu26->SetBinContent(9,0.1335846);
   EWK W#rightarrow#tau#nu26->SetBinContent(10,0.02522505);
   EWK W#rightarrow#tau#nu26->SetBinError(1,0.6043145);
   EWK W#rightarrow#tau#nu26->SetBinError(2,0.3497436);
   EWK W#rightarrow#tau#nu26->SetBinError(3,0.2489737);
   EWK W#rightarrow#tau#nu26->SetBinError(4,0.1215975);
   EWK W#rightarrow#tau#nu26->SetBinError(5,0.1287508);
   EWK W#rightarrow#tau#nu26->SetBinError(8,0.1453064);
   EWK W#rightarrow#tau#nu26->SetBinError(9,0.1335846);
   EWK W#rightarrow#tau#nu26->SetBinError(10,0.02522505);
   EWK W#rightarrow#tau#nu26->SetEntries(10);
   EWK W#rightarrow#tau#nu26->SetDirectory(0);
   EWK W#rightarrow#tau#nu26->SetStats(0);

   ci = TColor::GetColor("#cc6633");
   EWK W#rightarrow#tau#nu26->SetFillColor(ci);
   EWK W#rightarrow#tau#nu26->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu26->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu26->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu26->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow#tau#nu26->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu26->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu26->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu26->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow#tau#nu26->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow#tau#nu26->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#tau#nu26->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#tau#nu26->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(EWK W#rightarrow#tau#nu,"");
   
   TH1F *Top27 = new TH1F("Top27","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   Top27->SetBinContent(1,2.919924);
   Top27->SetBinContent(2,1.917435);
   Top27->SetBinContent(3,0.961783);
   Top27->SetBinContent(4,0.5527579);
   Top27->SetBinContent(5,0.3133616);
   Top27->SetBinContent(6,0.1737212);
   Top27->SetBinContent(7,0.127936);
   Top27->SetBinContent(8,0.02253936);
   Top27->SetBinContent(9,0.05527226);
   Top27->SetBinContent(10,0.08530216);
   Top27->SetBinError(1,0.2577858);
   Top27->SetBinError(2,0.1958568);
   Top27->SetBinError(3,0.1566593);
   Top27->SetBinError(4,0.1050078);
   Top27->SetBinError(5,0.08142653);
   Top27->SetBinError(6,0.06316609);
   Top27->SetBinError(7,0.05226801);
   Top27->SetBinError(8,0.02124318);
   Top27->SetBinError(9,0.03233203);
   Top27->SetBinError(10,0.04318535);
   Top27->SetEntries(10);
   Top27->SetDirectory(0);
   Top27->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top27->SetFillColor(ci);
   Top27->GetXaxis()->SetLabelFont(42);
   Top27->GetXaxis()->SetLabelSize(0.035);
   Top27->GetXaxis()->SetTitleSize(0.035);
   Top27->GetXaxis()->SetTitleFont(42);
   Top27->GetYaxis()->SetLabelFont(42);
   Top27->GetYaxis()->SetLabelSize(0.035);
   Top27->GetYaxis()->SetTitleSize(0.035);
   Top27->GetYaxis()->SetTitleFont(42);
   Top27->GetZaxis()->SetLabelFont(42);
   Top27->GetZaxis()->SetLabelSize(0.035);
   Top27->GetZaxis()->SetTitleSize(0.035);
   Top27->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(Top,"");
   
   TH1F *QCD28 = new TH1F("QCD28","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   QCD28->SetBinContent(1,0.4228997);
   QCD28->SetBinError(1,0.4228997);
   QCD28->SetEntries(10);
   QCD28->SetDirectory(0);
   QCD28->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD28->SetFillColor(ci);
   QCD28->GetXaxis()->SetLabelFont(42);
   QCD28->GetXaxis()->SetLabelSize(0.035);
   QCD28->GetXaxis()->SetTitleSize(0.035);
   QCD28->GetXaxis()->SetTitleFont(42);
   QCD28->GetYaxis()->SetLabelFont(42);
   QCD28->GetYaxis()->SetLabelSize(0.035);
   QCD28->GetYaxis()->SetTitleSize(0.035);
   QCD28->GetYaxis()->SetTitleFont(42);
   QCD28->GetZaxis()->SetLabelFont(42);
   QCD28->GetZaxis()->SetLabelSize(0.035);
   QCD28->GetZaxis()->SetTitleSize(0.035);
   QCD28->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(QCD,"");
   
   TH1F *VV29 = new TH1F("VV29","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   VV29->SetEntries(10);
   VV29->SetDirectory(0);
   VV29->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV29->SetFillColor(ci);
   VV29->GetXaxis()->SetLabelFont(42);
   VV29->GetXaxis()->SetLabelSize(0.035);
   VV29->GetXaxis()->SetTitleSize(0.035);
   VV29->GetXaxis()->SetTitleFont(42);
   VV29->GetYaxis()->SetLabelFont(42);
   VV29->GetYaxis()->SetLabelSize(0.035);
   VV29->GetYaxis()->SetTitleSize(0.035);
   VV29->GetYaxis()->SetTitleFont(42);
   VV29->GetZaxis()->SetLabelFont(42);
   VV29->GetZaxis()->SetLabelSize(0.035);
   VV29->GetZaxis()->SetTitleSize(0.035);
   VV29->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(VV,"");
   stackalljetsmetnomu_mindphi->Draw("hist");
   
   TH1F *totalerroralljetsmetnomu_mindphi30 = new TH1F("totalerroralljetsmetnomu_mindphi30","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(1,10.2569);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(2,6.802558);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(3,3.138263);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(4,0.9678265);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(5,1.133967);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(6,0.5835635);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(7,0.4039971);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(8,0.4332981);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(9,0.2311848);
   totalerroralljetsmetnomu_mindphi30->SetBinContent(10,0.3268523);
   totalerroralljetsmetnomu_mindphi30->SetBinError(1,1.313826);
   totalerroralljetsmetnomu_mindphi30->SetBinError(2,0.8713522);
   totalerroralljetsmetnomu_mindphi30->SetBinError(3,0.4019859);
   totalerroralljetsmetnomu_mindphi30->SetBinError(4,0.1239707);
   totalerroralljetsmetnomu_mindphi30->SetBinError(5,0.145252);
   totalerroralljetsmetnomu_mindphi30->SetBinError(6,0.07474972);
   totalerroralljetsmetnomu_mindphi30->SetBinError(7,0.05174873);
   totalerroralljetsmetnomu_mindphi30->SetBinError(8,0.05550195);
   totalerroralljetsmetnomu_mindphi30->SetBinError(9,0.02961289);
   totalerroralljetsmetnomu_mindphi30->SetBinError(10,0.04186711);
   totalerroralljetsmetnomu_mindphi30->SetEntries(50);
   totalerroralljetsmetnomu_mindphi30->SetDirectory(0);
   totalerroralljetsmetnomu_mindphi30->SetStats(0);
   totalerroralljetsmetnomu_mindphi30->SetFillColor(1);
   totalerroralljetsmetnomu_mindphi30->SetFillStyle(3004);
   totalerroralljetsmetnomu_mindphi30->GetXaxis()->SetLabelFont(42);
   totalerroralljetsmetnomu_mindphi30->GetXaxis()->SetLabelSize(0.035);
   totalerroralljetsmetnomu_mindphi30->GetXaxis()->SetTitleSize(0.035);
   totalerroralljetsmetnomu_mindphi30->GetXaxis()->SetTitleFont(42);
   totalerroralljetsmetnomu_mindphi30->GetYaxis()->SetLabelFont(42);
   totalerroralljetsmetnomu_mindphi30->GetYaxis()->SetLabelSize(0.035);
   totalerroralljetsmetnomu_mindphi30->GetYaxis()->SetTitleSize(0.035);
   totalerroralljetsmetnomu_mindphi30->GetYaxis()->SetTitleFont(42);
   totalerroralljetsmetnomu_mindphi30->GetZaxis()->SetLabelFont(42);
   totalerroralljetsmetnomu_mindphi30->GetZaxis()->SetLabelSize(0.035);
   totalerroralljetsmetnomu_mindphi30->GetZaxis()->SetTitleSize(0.035);
   totalerroralljetsmetnomu_mindphi30->GetZaxis()->SetTitleFont(42);
   totalerroralljetsmetnomu_mindphi30->Draw("E2same");
   
   TH1F *totlinealljetsmetnomu_mindphi31 = new TH1F("totlinealljetsmetnomu_mindphi31","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   totlinealljetsmetnomu_mindphi31->SetBinContent(1,10.2569);
   totlinealljetsmetnomu_mindphi31->SetBinContent(2,6.802558);
   totlinealljetsmetnomu_mindphi31->SetBinContent(3,3.138263);
   totlinealljetsmetnomu_mindphi31->SetBinContent(4,0.9678265);
   totlinealljetsmetnomu_mindphi31->SetBinContent(5,1.133967);
   totlinealljetsmetnomu_mindphi31->SetBinContent(6,0.5835635);
   totlinealljetsmetnomu_mindphi31->SetBinContent(7,0.4039971);
   totlinealljetsmetnomu_mindphi31->SetBinContent(8,0.4332981);
   totlinealljetsmetnomu_mindphi31->SetBinContent(9,0.2311848);
   totlinealljetsmetnomu_mindphi31->SetBinContent(10,0.3268523);
   totlinealljetsmetnomu_mindphi31->SetBinError(1,1.313826);
   totlinealljetsmetnomu_mindphi31->SetBinError(2,0.8713522);
   totlinealljetsmetnomu_mindphi31->SetBinError(3,0.4019859);
   totlinealljetsmetnomu_mindphi31->SetBinError(4,0.1239707);
   totlinealljetsmetnomu_mindphi31->SetBinError(5,0.145252);
   totlinealljetsmetnomu_mindphi31->SetBinError(6,0.07474972);
   totlinealljetsmetnomu_mindphi31->SetBinError(7,0.05174873);
   totlinealljetsmetnomu_mindphi31->SetBinError(8,0.05550195);
   totlinealljetsmetnomu_mindphi31->SetBinError(9,0.02961289);
   totlinealljetsmetnomu_mindphi31->SetBinError(10,0.04186711);
   totlinealljetsmetnomu_mindphi31->SetEntries(50);
   totlinealljetsmetnomu_mindphi31->SetDirectory(0);
   totlinealljetsmetnomu_mindphi31->SetStats(0);
   totlinealljetsmetnomu_mindphi31->SetFillColor(1);
   totlinealljetsmetnomu_mindphi31->SetFillStyle(0);
   totlinealljetsmetnomu_mindphi31->GetXaxis()->SetLabelFont(42);
   totlinealljetsmetnomu_mindphi31->GetXaxis()->SetLabelSize(0.035);
   totlinealljetsmetnomu_mindphi31->GetXaxis()->SetTitleSize(0.035);
   totlinealljetsmetnomu_mindphi31->GetXaxis()->SetTitleFont(42);
   totlinealljetsmetnomu_mindphi31->GetYaxis()->SetLabelFont(42);
   totlinealljetsmetnomu_mindphi31->GetYaxis()->SetLabelSize(0.035);
   totlinealljetsmetnomu_mindphi31->GetYaxis()->SetTitleSize(0.035);
   totlinealljetsmetnomu_mindphi31->GetYaxis()->SetTitleFont(42);
   totlinealljetsmetnomu_mindphi31->GetZaxis()->SetLabelFont(42);
   totlinealljetsmetnomu_mindphi31->GetZaxis()->SetLabelSize(0.035);
   totlinealljetsmetnomu_mindphi31->GetZaxis()->SetTitleSize(0.035);
   totlinealljetsmetnomu_mindphi31->GetZaxis()->SetTitleFont(42);
   totlinealljetsmetnomu_mindphi31->Draw("histsame");
   
   Double_t Graph_from_Data_fx3004[10] = {
   0.115,
   0.345,
   0.575,
   0.805,
   1.035,
   1.265,
   1.495,
   1.725,
   1.955,
   2.185};
   Double_t Graph_from_Data_fy3004[10] = {
   7,
   5,
   1,
   4,
   1,
   0,
   2,
   0,
   2,
   2};
   Double_t Graph_from_Data_felx3004[10] = {
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115};
   Double_t Graph_from_Data_fely3004[10] = {
   2.581513,
   2.159724,
   0.8272525,
   1.914367,
   0.8272525,
   0,
   1.29183,
   0,
   1.29183,
   1.29183};
   Double_t Graph_from_Data_fehx3004[10] = {
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115,
   0.115};
   Double_t Graph_from_Data_fehy3004[10] = {
   3.770356,
   3.382539,
   2.29957,
   3.162815,
   2.29957,
   1.841055,
   2.63791,
   1.841055,
   2.63791,
   2.63791};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_Data_fx3004,Graph_from_Data_fy3004,Graph_from_Data_felx3004,Graph_from_Data_fehx3004,Graph_from_Data_fely3004,Graph_from_Data_fehy3004);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3004 = new TH1F("Graph_Graph_from_Data3004","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,0,2.53);
   Graph_Graph_from_Data3004->SetMinimum(0);
   Graph_Graph_from_Data3004->SetMaximum(11.84739);
   Graph_Graph_from_Data3004->SetDirectory(0);
   Graph_Graph_from_Data3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Data3004->SetLineColor(ci);
   Graph_Graph_from_Data3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Data3004);
   
   grae->Draw("p");
   
   TH1F *Signal32 = new TH1F("Signal32","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (ntaus==1&&nvetomuons==0&&nvetoelectrons==0&&jetmetnomu_mindphi>=1.0&&alljetsmetnomu_mindphi<2.3) ) * (total_weight_lepveto*1.024*1)}",10,0,2.3);
   Signal32->SetBinContent(3,0.1012379);
   Signal32->SetBinContent(7,0.081629);
   Signal32->SetBinContent(9,0.09518784);
   Signal32->SetBinContent(10,0.07462846);
   Signal32->SetBinError(3,0.1012379);
   Signal32->SetBinError(7,0.081629);
   Signal32->SetBinError(9,0.09518784);
   Signal32->SetBinError(10,0.07462846);
   Signal32->SetEntries(10);
   Signal32->SetDirectory(0);
   Signal32->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Signal32->SetLineColor(ci);
   Signal32->GetXaxis()->SetLabelFont(42);
   Signal32->GetXaxis()->SetLabelSize(0.035);
   Signal32->GetXaxis()->SetTitleSize(0.035);
   Signal32->GetXaxis()->SetTitleFont(42);
   Signal32->GetYaxis()->SetLabelFont(42);
   Signal32->GetYaxis()->SetLabelSize(0.035);
   Signal32->GetYaxis()->SetTitleSize(0.035);
   Signal32->GetYaxis()->SetTitleFont(42);
   Signal32->GetZaxis()->SetLabelFont(42);
   Signal32->GetZaxis()->SetLabelSize(0.035);
   Signal32->GetZaxis()->SetTitleSize(0.035);
   Signal32->GetZaxis()->SetTitleFont(42);
   Signal32->Draw("samehisthisthisthist");
   
   TLegend *leg = new TLegend(0.6,0.477,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.06);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Data","Data","PlePlePlePle");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("QCD W#rightarrow#tau#nu","QCD W#rightarrow#tau#nu","ffff");

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
   entry=leg->AddEntry("EWK W#rightarrow#tau#nu","EWK W#rightarrow#tau#nu","ffff");

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
   entry=leg->AddEntry("Top","Top","ffff");

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
   entry=leg->AddEntry("QCD","QCD","ffff");

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
   entry=leg->AddEntry("VV","VV","ffff");

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
   entry=leg->AddEntry("Signal","Signal","ffff");
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
   alljetsmetnomu_mindphi->cd();
   alljetsmetnomu_mindphi->Modified();
   alljetsmetnomu_mindphi->cd();
   alljetsmetnomu_mindphi->SetSelected(alljetsmetnomu_mindphi);
}
