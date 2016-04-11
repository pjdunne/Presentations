void nunu_metnomuons()
{
//=========Macro generated from canvas: metnomuons/metnomuons
//=========  (Fri Mar 25 19:14:53 2016) by ROOT version6.02/13
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
   upper->Range(148,-4.703847,668,26.65513);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.15);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackmetnomuons = new THStack();
   stackmetnomuons->SetName("stackmetnomuons");
   stackmetnomuons->SetTitle(";E_{T,no-#mu}^{miss};E_{T,no-#mu}^{miss}");
   stackmetnomuons->SetMaximum(22.39927);
   
   TH1F *stackmetnomuons_stack_1 = new TH1F("stackmetnomuons_stack_1","",26,200,616);
   stackmetnomuons_stack_1->SetMinimum(0);
   stackmetnomuons_stack_1->SetMaximum(23.51923);
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
   
   
   TH1F *QCD W#rightarrow l#nu1 = new TH1F("QCD W#rightarrow l#nu1","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   QCD W#rightarrow l#nu1->SetBinContent(1,3.970038);
   QCD W#rightarrow l#nu1->SetBinContent(2,4.83447);
   QCD W#rightarrow l#nu1->SetBinContent(3,4.694126);
   QCD W#rightarrow l#nu1->SetBinContent(4,3.606804);
   QCD W#rightarrow l#nu1->SetBinContent(5,3.083503);
   QCD W#rightarrow l#nu1->SetBinContent(6,3.33339);
   QCD W#rightarrow l#nu1->SetBinContent(7,3.305848);
   QCD W#rightarrow l#nu1->SetBinContent(8,0.3606859);
   QCD W#rightarrow l#nu1->SetBinContent(9,2.206821);
   QCD W#rightarrow l#nu1->SetBinContent(10,1.581684);
   QCD W#rightarrow l#nu1->SetBinContent(11,0.6163543);
   QCD W#rightarrow l#nu1->SetBinContent(12,1.121937);
   QCD W#rightarrow l#nu1->SetBinContent(13,0.7605209);
   QCD W#rightarrow l#nu1->SetBinContent(14,0.5655675);
   QCD W#rightarrow l#nu1->SetBinContent(15,0.448033);
   QCD W#rightarrow l#nu1->SetBinContent(16,0.3322063);
   QCD W#rightarrow l#nu1->SetBinContent(17,0.0992768);
   QCD W#rightarrow l#nu1->SetBinContent(18,0.09929884);
   QCD W#rightarrow l#nu1->SetBinContent(19,0.1321437);
   QCD W#rightarrow l#nu1->SetBinContent(20,0.1174395);
   QCD W#rightarrow l#nu1->SetBinContent(21,0.1428854);
   QCD W#rightarrow l#nu1->SetBinContent(22,0.1520266);
   QCD W#rightarrow l#nu1->SetBinContent(23,0.08029718);
   QCD W#rightarrow l#nu1->SetBinContent(25,0.02340632);
   QCD W#rightarrow l#nu1->SetBinContent(26,0.1337261);
   QCD W#rightarrow l#nu1->SetBinError(1,0.8785163);
   QCD W#rightarrow l#nu1->SetBinError(2,0.9927568);
   QCD W#rightarrow l#nu1->SetBinError(3,1.047094);
   QCD W#rightarrow l#nu1->SetBinError(4,0.9233613);
   QCD W#rightarrow l#nu1->SetBinError(5,0.7743695);
   QCD W#rightarrow l#nu1->SetBinError(6,0.8234183);
   QCD W#rightarrow l#nu1->SetBinError(7,0.7984762);
   QCD W#rightarrow l#nu1->SetBinError(8,0.2206543);
   QCD W#rightarrow l#nu1->SetBinError(9,0.6585999);
   QCD W#rightarrow l#nu1->SetBinError(10,0.5666304);
   QCD W#rightarrow l#nu1->SetBinError(11,0.3070354);
   QCD W#rightarrow l#nu1->SetBinError(12,0.4315595);
   QCD W#rightarrow l#nu1->SetBinError(13,0.2984887);
   QCD W#rightarrow l#nu1->SetBinError(14,0.2726603);
   QCD W#rightarrow l#nu1->SetBinError(15,0.1899245);
   QCD W#rightarrow l#nu1->SetBinError(16,0.1518186);
   QCD W#rightarrow l#nu1->SetBinError(17,0.08422402);
   QCD W#rightarrow l#nu1->SetBinError(18,0.07961596);
   QCD W#rightarrow l#nu1->SetBinError(19,0.09421217);
   QCD W#rightarrow l#nu1->SetBinError(20,0.08054319);
   QCD W#rightarrow l#nu1->SetBinError(21,0.1012906);
   QCD W#rightarrow l#nu1->SetBinError(22,0.09257393);
   QCD W#rightarrow l#nu1->SetBinError(23,0.06901868);
   QCD W#rightarrow l#nu1->SetBinError(25,0.02340632);
   QCD W#rightarrow l#nu1->SetBinError(26,0.07762782);
   QCD W#rightarrow l#nu1->SetEntries(26);
   QCD W#rightarrow l#nu1->SetDirectory(0);
   QCD W#rightarrow l#nu1->SetStats(0);

   ci = TColor::GetColor("#ffcc66");
   QCD W#rightarrow l#nu1->SetFillColor(ci);
   QCD W#rightarrow l#nu1->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow l#nu1->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow l#nu1->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow l#nu1->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow l#nu1->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow l#nu1->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow l#nu1->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow l#nu1->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow l#nu1->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow l#nu1->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow l#nu1->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow l#nu1->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(QCD W#rightarrow l#nu,"");
   
   TH1F *EWK W#rightarrow l#nu2 = new TH1F("EWK W#rightarrow l#nu2","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   EWK W#rightarrow l#nu2->SetBinContent(1,1.50249);
   EWK W#rightarrow l#nu2->SetBinContent(2,2.11903);
   EWK W#rightarrow l#nu2->SetBinContent(3,2.329862);
   EWK W#rightarrow l#nu2->SetBinContent(4,1.759618);
   EWK W#rightarrow l#nu2->SetBinContent(5,0.8403417);
   EWK W#rightarrow l#nu2->SetBinContent(6,1.243296);
   EWK W#rightarrow l#nu2->SetBinContent(7,0.842021);
   EWK W#rightarrow l#nu2->SetBinContent(8,0.654556);
   EWK W#rightarrow l#nu2->SetBinContent(9,0.2955005);
   EWK W#rightarrow l#nu2->SetBinContent(10,0.4319043);
   EWK W#rightarrow l#nu2->SetBinContent(11,0.7605867);
   EWK W#rightarrow l#nu2->SetBinContent(12,0.8898234);
   EWK W#rightarrow l#nu2->SetBinContent(14,0.5578213);
   EWK W#rightarrow l#nu2->SetBinContent(15,0.2044063);
   EWK W#rightarrow l#nu2->SetBinContent(16,0.4042429);
   EWK W#rightarrow l#nu2->SetBinContent(19,0.3178089);
   EWK W#rightarrow l#nu2->SetBinContent(21,0.1422194);
   EWK W#rightarrow l#nu2->SetBinContent(24,0.2327258);
   EWK W#rightarrow l#nu2->SetBinError(1,0.396253);
   EWK W#rightarrow l#nu2->SetBinError(2,0.4918309);
   EWK W#rightarrow l#nu2->SetBinError(3,0.5505609);
   EWK W#rightarrow l#nu2->SetBinError(4,0.4398467);
   EWK W#rightarrow l#nu2->SetBinError(5,0.2916378);
   EWK W#rightarrow l#nu2->SetBinError(6,0.3984338);
   EWK W#rightarrow l#nu2->SetBinError(7,0.3356662);
   EWK W#rightarrow l#nu2->SetBinError(8,0.2659792);
   EWK W#rightarrow l#nu2->SetBinError(9,0.2089815);
   EWK W#rightarrow l#nu2->SetBinError(10,0.2502716);
   EWK W#rightarrow l#nu2->SetBinError(11,0.318474);
   EWK W#rightarrow l#nu2->SetBinError(12,0.3455042);
   EWK W#rightarrow l#nu2->SetBinError(14,0.2814131);
   EWK W#rightarrow l#nu2->SetBinError(15,0.1455576);
   EWK W#rightarrow l#nu2->SetBinError(16,0.2138702);
   EWK W#rightarrow l#nu2->SetBinError(19,0.1836569);
   EWK W#rightarrow l#nu2->SetBinError(21,0.1422194);
   EWK W#rightarrow l#nu2->SetBinError(24,0.1654636);
   EWK W#rightarrow l#nu2->SetEntries(26);
   EWK W#rightarrow l#nu2->SetDirectory(0);
   EWK W#rightarrow l#nu2->SetStats(0);

   ci = TColor::GetColor("#cc6600");
   EWK W#rightarrow l#nu2->SetFillColor(ci);
   EWK W#rightarrow l#nu2->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow l#nu2->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow l#nu2->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow l#nu2->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow l#nu2->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow l#nu2->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow l#nu2->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow l#nu2->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow l#nu2->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow l#nu2->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow l#nu2->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow l#nu2->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(EWK W#rightarrow l#nu,"");
   
   TH1F *Top3 = new TH1F("Top3","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   Top3->SetBinContent(1,0.3306976);
   Top3->SetBinContent(2,0.3937478);
   Top3->SetBinContent(3,0.1378864);
   Top3->SetBinContent(4,0.2276076);
   Top3->SetBinContent(5,0.08229773);
   Top3->SetBinContent(6,0.1572084);
   Top3->SetBinContent(7,0.2054523);
   Top3->SetBinContent(8,0.144269);
   Top3->SetBinContent(9,0.1245017);
   Top3->SetBinContent(10,0.05784291);
   Top3->SetBinContent(11,0.03401756);
   Top3->SetBinContent(12,0.02184422);
   Top3->SetBinContent(13,0.03746952);
   Top3->SetBinContent(14,0.04949928);
   Top3->SetBinContent(15,0.01820945);
   Top3->SetBinContent(16,0.08032139);
   Top3->SetBinContent(17,0.04272592);
   Top3->SetBinContent(18,0.1069007);
   Top3->SetBinError(1,0.08963686);
   Top3->SetBinError(2,0.1112332);
   Top3->SetBinError(3,0.05780463);
   Top3->SetBinError(4,0.0775059);
   Top3->SetBinError(5,0.04153767);
   Top3->SetBinError(6,0.05658851);
   Top3->SetBinError(7,0.1000958);
   Top3->SetBinError(8,0.06828606);
   Top3->SetBinError(9,0.05638601);
   Top3->SetBinError(10,0.03370916);
   Top3->SetBinError(11,0.02957691);
   Top3->SetBinError(12,0.02184422);
   Top3->SetBinError(13,0.02684971);
   Top3->SetBinError(14,0.0372173);
   Top3->SetBinError(15,0.01820945);
   Top3->SetBinError(16,0.04863965);
   Top3->SetBinError(17,0.03021271);
   Top3->SetBinError(18,0.0890142);
   Top3->SetEntries(26);
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
   
   TH1F *QCD4 = new TH1F("QCD4","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   QCD4->SetBinContent(5,3.084839);
   QCD4->SetBinError(5,3.084839);
   QCD4->SetEntries(26);
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
   
   TH1F *VV5 = new TH1F("VV5","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   VV5->SetBinContent(1,0.04727828);
   VV5->SetBinContent(2,0.2708899);
   VV5->SetBinContent(3,0.03731665);
   VV5->SetBinContent(4,0.02483717);
   VV5->SetBinContent(6,0.05615924);
   VV5->SetBinContent(7,0.0712022);
   VV5->SetBinContent(9,0.02489345);
   VV5->SetBinContent(11,0.07590512);
   VV5->SetBinContent(13,0.03508735);
   VV5->SetBinContent(14,0.02151105);
   VV5->SetBinContent(15,0.01485567);
   VV5->SetBinError(1,0.04727828);
   VV5->SetBinError(2,0.2708899);
   VV5->SetBinError(3,0.03731665);
   VV5->SetBinError(4,0.02483717);
   VV5->SetBinError(6,0.05615924);
   VV5->SetBinError(7,0.0712022);
   VV5->SetBinError(9,0.02489345);
   VV5->SetBinError(11,0.06135405);
   VV5->SetBinError(13,0.02782961);
   VV5->SetBinError(14,0.02151105);
   VV5->SetBinError(15,0.01485567);
   VV5->SetEntries(26);
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
   
   TH1F *QCD Z#rightarrow#nu#nu6 = new TH1F("QCD Z#rightarrow#nu#nu6","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   QCD Z#rightarrow#nu#nu6->SetBinContent(1,3.88365);
   QCD Z#rightarrow#nu#nu6->SetBinContent(2,4.578052);
   QCD Z#rightarrow#nu#nu6->SetBinContent(3,4.482041);
   QCD Z#rightarrow#nu#nu6->SetBinContent(4,3.746341);
   QCD Z#rightarrow#nu#nu6->SetBinContent(5,2.994138);
   QCD Z#rightarrow#nu#nu6->SetBinContent(6,2.980447);
   QCD Z#rightarrow#nu#nu6->SetBinContent(7,2.109807);
   QCD Z#rightarrow#nu#nu6->SetBinContent(8,2.310357);
   QCD Z#rightarrow#nu#nu6->SetBinContent(9,2.460585);
   QCD Z#rightarrow#nu#nu6->SetBinContent(10,1.911114);
   QCD Z#rightarrow#nu#nu6->SetBinContent(11,1.228061);
   QCD Z#rightarrow#nu#nu6->SetBinContent(12,1.175848);
   QCD Z#rightarrow#nu#nu6->SetBinContent(13,0.849494);
   QCD Z#rightarrow#nu#nu6->SetBinContent(14,0.771519);
   QCD Z#rightarrow#nu#nu6->SetBinContent(15,0.9733701);
   QCD Z#rightarrow#nu#nu6->SetBinContent(16,0.6328451);
   QCD Z#rightarrow#nu#nu6->SetBinContent(17,0.6408927);
   QCD Z#rightarrow#nu#nu6->SetBinContent(18,0.2798733);
   QCD Z#rightarrow#nu#nu6->SetBinContent(19,0.3522042);
   QCD Z#rightarrow#nu#nu6->SetBinContent(20,0.1660616);
   QCD Z#rightarrow#nu#nu6->SetBinContent(21,0.1939455);
   QCD Z#rightarrow#nu#nu6->SetBinContent(22,0.1944541);
   QCD Z#rightarrow#nu#nu6->SetBinContent(23,0.1661494);
   QCD Z#rightarrow#nu#nu6->SetBinContent(24,0.1750299);
   QCD Z#rightarrow#nu#nu6->SetBinContent(25,0.1856156);
   QCD Z#rightarrow#nu#nu6->SetBinContent(26,0.9792502);
   QCD Z#rightarrow#nu#nu6->SetBinError(1,0.4525067);
   QCD Z#rightarrow#nu#nu6->SetBinError(2,0.4665875);
   QCD Z#rightarrow#nu#nu6->SetBinError(3,0.4176296);
   QCD Z#rightarrow#nu#nu6->SetBinError(4,0.3999867);
   QCD Z#rightarrow#nu#nu6->SetBinError(5,0.3625134);
   QCD Z#rightarrow#nu#nu6->SetBinError(6,0.3717747);
   QCD Z#rightarrow#nu#nu6->SetBinError(7,0.2864981);
   QCD Z#rightarrow#nu#nu6->SetBinError(8,0.3096183);
   QCD Z#rightarrow#nu#nu6->SetBinError(9,0.3107074);
   QCD Z#rightarrow#nu#nu6->SetBinError(10,0.2722662);
   QCD Z#rightarrow#nu#nu6->SetBinError(11,0.2174423);
   QCD Z#rightarrow#nu#nu6->SetBinError(12,0.2087793);
   QCD Z#rightarrow#nu#nu6->SetBinError(13,0.1719601);
   QCD Z#rightarrow#nu#nu6->SetBinError(14,0.1590831);
   QCD Z#rightarrow#nu#nu6->SetBinError(15,0.1819965);
   QCD Z#rightarrow#nu#nu6->SetBinError(16,0.1492038);
   QCD Z#rightarrow#nu#nu6->SetBinError(17,0.1451962);
   QCD Z#rightarrow#nu#nu6->SetBinError(18,0.09635738);
   QCD Z#rightarrow#nu#nu6->SetBinError(19,0.1101555);
   QCD Z#rightarrow#nu#nu6->SetBinError(20,0.06471834);
   QCD Z#rightarrow#nu#nu6->SetBinError(21,0.08192364);
   QCD Z#rightarrow#nu#nu6->SetBinError(22,0.07316087);
   QCD Z#rightarrow#nu#nu6->SetBinError(23,0.06904669);
   QCD Z#rightarrow#nu#nu6->SetBinError(24,0.06730417);
   QCD Z#rightarrow#nu#nu6->SetBinError(25,0.06095442);
   QCD Z#rightarrow#nu#nu6->SetBinError(26,0.1290304);
   QCD Z#rightarrow#nu#nu6->SetEntries(26);
   QCD Z#rightarrow#nu#nu6->SetDirectory(0);
   QCD Z#rightarrow#nu#nu6->SetStats(0);

   ci = TColor::GetColor("#0066cc");
   QCD Z#rightarrow#nu#nu6->SetFillColor(ci);
   QCD Z#rightarrow#nu#nu6->GetXaxis()->SetLabelFont(42);
   QCD Z#rightarrow#nu#nu6->GetXaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#nu#nu6->GetXaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#nu#nu6->GetXaxis()->SetTitleFont(42);
   QCD Z#rightarrow#nu#nu6->GetYaxis()->SetLabelFont(42);
   QCD Z#rightarrow#nu#nu6->GetYaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#nu#nu6->GetYaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#nu#nu6->GetYaxis()->SetTitleFont(42);
   QCD Z#rightarrow#nu#nu6->GetZaxis()->SetLabelFont(42);
   QCD Z#rightarrow#nu#nu6->GetZaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#nu#nu6->GetZaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#nu#nu6->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(QCD Z#rightarrow#nu#nu,"");
   
   TH1F *EWK Z#rightarrow#nu#nu7 = new TH1F("EWK Z#rightarrow#nu#nu7","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   EWK Z#rightarrow#nu#nu7->SetBinContent(1,1.682572);
   EWK Z#rightarrow#nu#nu7->SetBinContent(2,2.620609);
   EWK Z#rightarrow#nu#nu7->SetBinContent(3,2.274094);
   EWK Z#rightarrow#nu#nu7->SetBinContent(4,1.461189);
   EWK Z#rightarrow#nu#nu7->SetBinContent(5,1.557759);
   EWK Z#rightarrow#nu#nu7->SetBinContent(6,2.166204);
   EWK Z#rightarrow#nu#nu7->SetBinContent(7,1.23598);
   EWK Z#rightarrow#nu#nu7->SetBinContent(8,1.360993);
   EWK Z#rightarrow#nu#nu7->SetBinContent(9,1.603072);
   EWK Z#rightarrow#nu#nu7->SetBinContent(10,0.6042874);
   EWK Z#rightarrow#nu#nu7->SetBinContent(11,0.5280493);
   EWK Z#rightarrow#nu#nu7->SetBinContent(12,0.3869332);
   EWK Z#rightarrow#nu#nu7->SetBinContent(13,0.625737);
   EWK Z#rightarrow#nu#nu7->SetBinContent(14,0.905148);
   EWK Z#rightarrow#nu#nu7->SetBinContent(15,0.5970786);
   EWK Z#rightarrow#nu#nu7->SetBinContent(16,0.1961514);
   EWK Z#rightarrow#nu#nu7->SetBinContent(17,0.1904344);
   EWK Z#rightarrow#nu#nu7->SetBinContent(18,0.3441783);
   EWK Z#rightarrow#nu#nu7->SetBinContent(19,0.3258909);
   EWK Z#rightarrow#nu#nu7->SetBinContent(20,0.2291572);
   EWK Z#rightarrow#nu#nu7->SetBinContent(21,0.1658158);
   EWK Z#rightarrow#nu#nu7->SetBinContent(22,0.1712467);
   EWK Z#rightarrow#nu#nu7->SetBinContent(23,0.06029015);
   EWK Z#rightarrow#nu#nu7->SetBinContent(24,0.2346535);
   EWK Z#rightarrow#nu#nu7->SetBinContent(26,0.4652852);
   EWK Z#rightarrow#nu#nu7->SetBinError(1,0.3316604);
   EWK Z#rightarrow#nu#nu7->SetBinError(2,0.4679964);
   EWK Z#rightarrow#nu#nu7->SetBinError(3,0.4433985);
   EWK Z#rightarrow#nu#nu7->SetBinError(4,0.3523348);
   EWK Z#rightarrow#nu#nu7->SetBinError(5,0.3560384);
   EWK Z#rightarrow#nu#nu7->SetBinError(6,0.4363684);
   EWK Z#rightarrow#nu#nu7->SetBinError(7,0.3172759);
   EWK Z#rightarrow#nu#nu7->SetBinError(8,0.3599584);
   EWK Z#rightarrow#nu#nu7->SetBinError(9,0.3814312);
   EWK Z#rightarrow#nu#nu7->SetBinError(10,0.2264866);
   EWK Z#rightarrow#nu#nu7->SetBinError(11,0.2143586);
   EWK Z#rightarrow#nu#nu7->SetBinError(12,0.1739662);
   EWK Z#rightarrow#nu#nu7->SetBinError(13,0.2380694);
   EWK Z#rightarrow#nu#nu7->SetBinError(14,0.2750167);
   EWK Z#rightarrow#nu#nu7->SetBinError(15,0.2194685);
   EWK Z#rightarrow#nu#nu7->SetBinError(16,0.1263877);
   EWK Z#rightarrow#nu#nu7->SetBinError(17,0.106645);
   EWK Z#rightarrow#nu#nu7->SetBinError(18,0.1731343);
   EWK Z#rightarrow#nu#nu7->SetBinError(19,0.1509239);
   EWK Z#rightarrow#nu#nu7->SetBinError(20,0.1338873);
   EWK Z#rightarrow#nu#nu7->SetBinError(21,0.1175248);
   EWK Z#rightarrow#nu#nu7->SetBinError(22,0.1212962);
   EWK Z#rightarrow#nu#nu7->SetBinError(23,0.06029015);
   EWK Z#rightarrow#nu#nu7->SetBinError(24,0.1364706);
   EWK Z#rightarrow#nu#nu7->SetBinError(26,0.1940159);
   EWK Z#rightarrow#nu#nu7->SetEntries(26);
   EWK Z#rightarrow#nu#nu7->SetDirectory(0);
   EWK Z#rightarrow#nu#nu7->SetStats(0);

   ci = TColor::GetColor("#006699");
   EWK Z#rightarrow#nu#nu7->SetFillColor(ci);
   EWK Z#rightarrow#nu#nu7->GetXaxis()->SetLabelFont(42);
   EWK Z#rightarrow#nu#nu7->GetXaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#nu#nu7->GetXaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#nu#nu7->GetXaxis()->SetTitleFont(42);
   EWK Z#rightarrow#nu#nu7->GetYaxis()->SetLabelFont(42);
   EWK Z#rightarrow#nu#nu7->GetYaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#nu#nu7->GetYaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#nu#nu7->GetYaxis()->SetTitleFont(42);
   EWK Z#rightarrow#nu#nu7->GetZaxis()->SetLabelFont(42);
   EWK Z#rightarrow#nu#nu7->GetZaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#nu#nu7->GetZaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#nu#nu7->GetZaxis()->SetTitleFont(42);
   stackmetnomuons->Add(EWK Z#rightarrow#nu#nu,"");
   stackmetnomuons->Draw("hist");
   
   TH1F *totalerrormetnomuons8 = new TH1F("totalerrormetnomuons8","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   totalerrormetnomuons8->SetBinContent(1,11.41673);
   totalerrormetnomuons8->SetBinContent(2,14.8168);
   totalerrormetnomuons8->SetBinContent(3,13.95533);
   totalerrormetnomuons8->SetBinContent(4,10.8264);
   totalerrormetnomuons8->SetBinContent(5,11.64288);
   totalerrormetnomuons8->SetBinContent(6,9.936705);
   totalerrormetnomuons8->SetBinContent(7,7.770311);
   totalerrormetnomuons8->SetBinContent(8,4.83086);
   totalerrormetnomuons8->SetBinContent(9,6.715374);
   totalerrormetnomuons8->SetBinContent(10,4.586833);
   totalerrormetnomuons8->SetBinContent(11,3.242974);
   totalerrormetnomuons8->SetBinContent(12,3.596385);
   totalerrormetnomuons8->SetBinContent(13,2.308309);
   totalerrormetnomuons8->SetBinContent(14,2.871066);
   totalerrormetnomuons8->SetBinContent(15,2.255953);
   totalerrormetnomuons8->SetBinContent(16,1.645767);
   totalerrormetnomuons8->SetBinContent(17,0.9733298);
   totalerrormetnomuons8->SetBinContent(18,0.8302511);
   totalerrormetnomuons8->SetBinContent(19,1.128048);
   totalerrormetnomuons8->SetBinContent(20,0.5126583);
   totalerrormetnomuons8->SetBinContent(21,0.644866);
   totalerrormetnomuons8->SetBinContent(22,0.5177274);
   totalerrormetnomuons8->SetBinContent(23,0.3067367);
   totalerrormetnomuons8->SetBinContent(24,0.6424091);
   totalerrormetnomuons8->SetBinContent(25,0.2090219);
   totalerrormetnomuons8->SetBinContent(26,1.578261);
   totalerrormetnomuons8->SetBinError(1,2.583681);
   totalerrormetnomuons8->SetBinError(2,3.35314);
   totalerrormetnomuons8->SetBinError(3,3.158184);
   totalerrormetnomuons8->SetBinError(4,2.450086);
   totalerrormetnomuons8->SetBinError(5,2.634861);
   totalerrormetnomuons8->SetBinError(6,2.248743);
   totalerrormetnomuons8->SetBinError(7,1.758473);
   totalerrormetnomuons8->SetBinError(8,1.093256);
   totalerrormetnomuons8->SetBinError(9,1.519734);
   totalerrormetnomuons8->SetBinError(10,1.038031);
   totalerrormetnomuons8->SetBinError(11,0.7339066);
   totalerrormetnomuons8->SetBinError(12,0.813886);
   totalerrormetnomuons8->SetBinError(13,0.5223857);
   totalerrormetnomuons8->SetBinError(14,0.6497414);
   totalerrormetnomuons8->SetBinError(15,0.5105373);
   totalerrormetnomuons8->SetBinError(16,0.3724481);
   totalerrormetnomuons8->SetBinError(17,0.220271);
   totalerrormetnomuons8->SetBinError(18,0.1878914);
   totalerrormetnomuons8->SetBinError(19,0.2552847);
   totalerrormetnomuons8->SetBinError(20,0.116018);
   totalerrormetnomuons8->SetBinError(21,0.1459375);
   totalerrormetnomuons8->SetBinError(22,0.1171652);
   totalerrormetnomuons8->SetBinError(23,0.06941657);
   totalerrormetnomuons8->SetBinError(24,0.1453815);
   totalerrormetnomuons8->SetBinError(25,0.04730306);
   totalerrormetnomuons8->SetBinError(26,0.3571711);
   totalerrormetnomuons8->SetEntries(182);
   totalerrormetnomuons8->SetDirectory(0);
   totalerrormetnomuons8->SetStats(0);
   totalerrormetnomuons8->SetFillColor(1);
   totalerrormetnomuons8->SetFillStyle(3004);
   totalerrormetnomuons8->GetXaxis()->SetLabelFont(42);
   totalerrormetnomuons8->GetXaxis()->SetLabelSize(0.035);
   totalerrormetnomuons8->GetXaxis()->SetTitleSize(0.035);
   totalerrormetnomuons8->GetXaxis()->SetTitleFont(42);
   totalerrormetnomuons8->GetYaxis()->SetLabelFont(42);
   totalerrormetnomuons8->GetYaxis()->SetLabelSize(0.035);
   totalerrormetnomuons8->GetYaxis()->SetTitleSize(0.035);
   totalerrormetnomuons8->GetYaxis()->SetTitleFont(42);
   totalerrormetnomuons8->GetZaxis()->SetLabelFont(42);
   totalerrormetnomuons8->GetZaxis()->SetLabelSize(0.035);
   totalerrormetnomuons8->GetZaxis()->SetTitleSize(0.035);
   totalerrormetnomuons8->GetZaxis()->SetTitleFont(42);
   totalerrormetnomuons8->Draw("E2same");
   
   TH1F *totlinemetnomuons9 = new TH1F("totlinemetnomuons9","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   totlinemetnomuons9->SetBinContent(1,11.41673);
   totlinemetnomuons9->SetBinContent(2,14.8168);
   totlinemetnomuons9->SetBinContent(3,13.95533);
   totlinemetnomuons9->SetBinContent(4,10.8264);
   totlinemetnomuons9->SetBinContent(5,11.64288);
   totlinemetnomuons9->SetBinContent(6,9.936705);
   totlinemetnomuons9->SetBinContent(7,7.770311);
   totlinemetnomuons9->SetBinContent(8,4.83086);
   totlinemetnomuons9->SetBinContent(9,6.715374);
   totlinemetnomuons9->SetBinContent(10,4.586833);
   totlinemetnomuons9->SetBinContent(11,3.242974);
   totlinemetnomuons9->SetBinContent(12,3.596385);
   totlinemetnomuons9->SetBinContent(13,2.308309);
   totlinemetnomuons9->SetBinContent(14,2.871066);
   totlinemetnomuons9->SetBinContent(15,2.255953);
   totlinemetnomuons9->SetBinContent(16,1.645767);
   totlinemetnomuons9->SetBinContent(17,0.9733298);
   totlinemetnomuons9->SetBinContent(18,0.8302511);
   totlinemetnomuons9->SetBinContent(19,1.128048);
   totlinemetnomuons9->SetBinContent(20,0.5126583);
   totlinemetnomuons9->SetBinContent(21,0.644866);
   totlinemetnomuons9->SetBinContent(22,0.5177274);
   totlinemetnomuons9->SetBinContent(23,0.3067367);
   totlinemetnomuons9->SetBinContent(24,0.6424091);
   totlinemetnomuons9->SetBinContent(25,0.2090219);
   totlinemetnomuons9->SetBinContent(26,1.578261);
   totlinemetnomuons9->SetBinError(1,2.583681);
   totlinemetnomuons9->SetBinError(2,3.35314);
   totlinemetnomuons9->SetBinError(3,3.158184);
   totlinemetnomuons9->SetBinError(4,2.450086);
   totlinemetnomuons9->SetBinError(5,2.634861);
   totlinemetnomuons9->SetBinError(6,2.248743);
   totlinemetnomuons9->SetBinError(7,1.758473);
   totlinemetnomuons9->SetBinError(8,1.093256);
   totlinemetnomuons9->SetBinError(9,1.519734);
   totlinemetnomuons9->SetBinError(10,1.038031);
   totlinemetnomuons9->SetBinError(11,0.7339066);
   totlinemetnomuons9->SetBinError(12,0.813886);
   totlinemetnomuons9->SetBinError(13,0.5223857);
   totlinemetnomuons9->SetBinError(14,0.6497414);
   totlinemetnomuons9->SetBinError(15,0.5105373);
   totlinemetnomuons9->SetBinError(16,0.3724481);
   totlinemetnomuons9->SetBinError(17,0.220271);
   totlinemetnomuons9->SetBinError(18,0.1878914);
   totlinemetnomuons9->SetBinError(19,0.2552847);
   totlinemetnomuons9->SetBinError(20,0.116018);
   totlinemetnomuons9->SetBinError(21,0.1459375);
   totlinemetnomuons9->SetBinError(22,0.1171652);
   totlinemetnomuons9->SetBinError(23,0.06941657);
   totlinemetnomuons9->SetBinError(24,0.1453815);
   totlinemetnomuons9->SetBinError(25,0.04730306);
   totlinemetnomuons9->SetBinError(26,0.3571711);
   totlinemetnomuons9->SetEntries(182);
   totlinemetnomuons9->SetDirectory(0);
   totlinemetnomuons9->SetStats(0);
   totlinemetnomuons9->SetFillColor(1);
   totlinemetnomuons9->SetFillStyle(0);
   totlinemetnomuons9->GetXaxis()->SetLabelFont(42);
   totlinemetnomuons9->GetXaxis()->SetLabelSize(0.035);
   totlinemetnomuons9->GetXaxis()->SetTitleSize(0.035);
   totlinemetnomuons9->GetXaxis()->SetTitleFont(42);
   totlinemetnomuons9->GetYaxis()->SetLabelFont(42);
   totlinemetnomuons9->GetYaxis()->SetLabelSize(0.035);
   totlinemetnomuons9->GetYaxis()->SetTitleSize(0.035);
   totlinemetnomuons9->GetYaxis()->SetTitleFont(42);
   totlinemetnomuons9->GetZaxis()->SetLabelFont(42);
   totlinemetnomuons9->GetZaxis()->SetLabelSize(0.035);
   totlinemetnomuons9->GetZaxis()->SetTitleSize(0.035);
   totlinemetnomuons9->GetZaxis()->SetTitleFont(42);
   totlinemetnomuons9->Draw("histsame");
   
   Double_t Graph_from_Data_fx3001[26] = {
   208,
   224,
   240,
   256,
   272,
   288,
   304,
   320,
   336,
   352,
   368,
   384,
   400,
   416,
   432,
   448,
   464,
   480,
   496,
   512,
   528,
   544,
   560,
   576,
   592,
   608};
   Double_t Graph_from_Data_fy3001[26] = {
   10,
   10,
   13,
   8,
   11,
   9,
   13,
   12,
   10,
   5,
   2,
   5,
   4,
   3,
   1,
   1,
   1,
   2,
   4,
   0,
   1,
   0,
   0,
   0,
   1,
   0};
   Double_t Graph_from_Data_felx3001[26] = {
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8};
   Double_t Graph_from_Data_fely3001[26] = {
   3.108748,
   3.108748,
   3.558726,
   2.768432,
   3.265636,
   2.943511,
   3.558726,
   3.415326,
   3.108748,
   2.159724,
   1.29183,
   2.159724,
   1.914367,
   1.632727,
   0.8272525,
   0.8272525,
   0.8272525,
   1.29183,
   1.914367,
   0,
   0.8272525,
   0,
   0,
   0,
   0.8272525,
   0};
   Double_t Graph_from_Data_fehx3001[26] = {
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8,
   8};
   Double_t Graph_from_Data_fehy3001[26] = {
   4.267035,
   4.267035,
   4.697668,
   3.94522,
   4.416609,
   4.110286,
   4.697668,
   4.559911,
   4.267035,
   3.382539,
   2.63791,
   3.382539,
   3.162815,
   2.918242,
   2.29957,
   2.29957,
   2.29957,
   2.63791,
   3.162815,
   1.841055,
   2.29957,
   1.841055,
   1.841055,
   1.841055,
   2.29957,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,Graph_from_Data_fx3001,Graph_from_Data_fy3001,Graph_from_Data_felx3001,Graph_from_Data_fehx3001,Graph_from_Data_fely3001,Graph_from_Data_fehy3001);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3001 = new TH1F("Graph_Graph_from_Data3001","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,158.4,657.6);
   Graph_Graph_from_Data3001->SetMinimum(0);
   Graph_Graph_from_Data3001->SetMaximum(19.46744);
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
   
   TH1F *Signal10 = new TH1F("Signal10","metnomuons {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",26,200,616);
   Signal10->SetBinContent(1,7.515497);
   Signal10->SetBinContent(2,8.155706);
   Signal10->SetBinContent(3,7.424196);
   Signal10->SetBinContent(4,6.060801);
   Signal10->SetBinContent(5,5.701416);
   Signal10->SetBinContent(6,4.46367);
   Signal10->SetBinContent(7,2.893439);
   Signal10->SetBinContent(8,2.753561);
   Signal10->SetBinContent(9,2.66478);
   Signal10->SetBinContent(10,2.233924);
   Signal10->SetBinContent(11,1.538365);
   Signal10->SetBinContent(12,1.005784);
   Signal10->SetBinContent(13,0.6339011);
   Signal10->SetBinContent(14,1.3562);
   Signal10->SetBinContent(15,0.6635406);
   Signal10->SetBinContent(16,0.7464085);
   Signal10->SetBinContent(17,0.7277128);
   Signal10->SetBinContent(18,0.5670899);
   Signal10->SetBinContent(19,0.3207874);
   Signal10->SetBinContent(20,0.1763774);
   Signal10->SetBinContent(21,0.3515279);
   Signal10->SetBinContent(22,0.212962);
   Signal10->SetBinContent(24,0.1194745);
   Signal10->SetBinContent(25,0.02816291);
   Signal10->SetBinContent(26,0.7138015);
   Signal10->SetBinError(1,0.8558299);
   Signal10->SetBinError(2,0.8081362);
   Signal10->SetBinError(3,1.013319);
   Signal10->SetBinError(4,0.9131919);
   Signal10->SetBinError(5,0.8639127);
   Signal10->SetBinError(6,0.6372091);
   Signal10->SetBinError(7,0.523898);
   Signal10->SetBinError(8,0.4908225);
   Signal10->SetBinError(9,0.7838697);
   Signal10->SetBinError(10,0.4484095);
   Signal10->SetBinError(11,0.3678957);
   Signal10->SetBinError(12,0.2946634);
   Signal10->SetBinError(13,0.2452481);
   Signal10->SetBinError(14,0.6791377);
   Signal10->SetBinError(15,0.2752556);
   Signal10->SetBinError(16,0.2657798);
   Signal10->SetBinError(17,0.2571585);
   Signal10->SetBinError(18,0.2340109);
   Signal10->SetBinError(19,0.1625812);
   Signal10->SetBinError(20,0.1247449);
   Signal10->SetBinError(21,0.1767326);
   Signal10->SetBinError(22,0.1510838);
   Signal10->SetBinError(24,0.1194745);
   Signal10->SetBinError(25,0.02816291);
   Signal10->SetBinError(26,0.4526911);
   Signal10->SetEntries(26);
   Signal10->SetDirectory(0);
   Signal10->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Signal10->SetLineColor(ci);
   Signal10->GetXaxis()->SetLabelFont(42);
   Signal10->GetXaxis()->SetLabelSize(0.035);
   Signal10->GetXaxis()->SetTitleSize(0.035);
   Signal10->GetXaxis()->SetTitleFont(42);
   Signal10->GetYaxis()->SetLabelFont(42);
   Signal10->GetYaxis()->SetLabelSize(0.035);
   Signal10->GetYaxis()->SetTitleSize(0.035);
   Signal10->GetYaxis()->SetTitleFont(42);
   Signal10->GetZaxis()->SetLabelFont(42);
   Signal10->GetZaxis()->SetLabelSize(0.035);
   Signal10->GetZaxis()->SetTitleSize(0.035);
   Signal10->GetZaxis()->SetTitleFont(42);
   Signal10->Draw("samehist");
   
   TLegend *leg = new TLegend(0.6,0.359,0.89,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("QCD W#rightarrow l#nu","QCD W#rightarrow l#nu","f");

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
   entry=leg->AddEntry("EWK W#rightarrow l#nu","EWK W#rightarrow l#nu","f");

   ci = TColor::GetColor("#cc6600");
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
   entry=leg->AddEntry("QCD Z#rightarrow#nu#nu","QCD Z#rightarrow#nu#nu","f");

   ci = TColor::GetColor("#0066cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("EWK Z#rightarrow#nu#nu","EWK Z#rightarrow#nu#nu","f");

   ci = TColor::GetColor("#006699");
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
