void mumu_dijet_M()
{
//=========Macro generated from canvas: dijet_M/dijet_M
//=========  (Fri Mar 25 19:14:59 2016) by ROOT version6.02/13
   TCanvas *dijet_M = new TCanvas("dijet_M", "dijet_M",1,1,700,476);
   gStyle->SetOptStat(0);
   dijet_M->SetHighLightColor(2);
   dijet_M->Range(0,0,1,1);
   dijet_M->SetFillColor(0);
   dijet_M->SetBorderMode(0);
   dijet_M->SetBorderSize(2);
   dijet_M->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper
   TPad *upper = new TPad("upper", "pad",0,0,1,1);
   upper->Draw();
   upper->cd();
   upper->Range(707.2916,-1.512,4634.375,8.568);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.15);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackdijet_M = new THStack();
   stackdijet_M->SetName("stackdijet_M");
   stackdijet_M->SetTitle(";M_{jj} (GeV);Events");
   stackdijet_M->SetMaximum(7.2);
   
   TH1F *stackdijet_M_stack_2 = new TH1F("stackdijet_M_stack_2","",13,1100,4241.667);
   stackdijet_M_stack_2->SetMinimum(0);
   stackdijet_M_stack_2->SetMaximum(7.56);
   stackdijet_M_stack_2->SetDirectory(0);
   stackdijet_M_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackdijet_M_stack_2->SetLineColor(ci);
   stackdijet_M_stack_2->GetXaxis()->SetTitle("M_{jj} (GeV)");
   stackdijet_M_stack_2->GetXaxis()->SetLabelFont(42);
   stackdijet_M_stack_2->GetXaxis()->SetLabelSize(0.06);
   stackdijet_M_stack_2->GetXaxis()->SetTitleSize(0.08);
   stackdijet_M_stack_2->GetXaxis()->SetTitleOffset(0.7);
   stackdijet_M_stack_2->GetYaxis()->SetTitle("Events");
   stackdijet_M_stack_2->GetYaxis()->SetLabelFont(42);
   stackdijet_M_stack_2->GetYaxis()->SetLabelSize(0.06);
   stackdijet_M_stack_2->GetYaxis()->SetTitleSize(0.08);
   stackdijet_M_stack_2->GetYaxis()->SetTitleOffset(0.45);
   stackdijet_M_stack_2->GetZaxis()->SetLabelFont(42);
   stackdijet_M_stack_2->GetZaxis()->SetLabelSize(0.035);
   stackdijet_M_stack_2->GetZaxis()->SetTitleSize(0.035);
   stackdijet_M_stack_2->GetZaxis()->SetTitleFont(42);
   stackdijet_M->SetHistogram(stackdijet_M_stack_2);
   
   
   TH1F *QCD Z#rightarrow#mu#mu8 = new TH1F("QCD Z#rightarrow#mu#mu8","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   QCD Z#rightarrow#mu#mu8->SetBinContent(1,1.462047);
   QCD Z#rightarrow#mu#mu8->SetBinContent(2,1.019721);
   QCD Z#rightarrow#mu#mu8->SetBinContent(3,0.565797);
   QCD Z#rightarrow#mu#mu8->SetBinContent(4,0.2933562);
   QCD Z#rightarrow#mu#mu8->SetBinContent(5,0.1386946);
   QCD Z#rightarrow#mu#mu8->SetBinContent(6,0.103667);
   QCD Z#rightarrow#mu#mu8->SetBinContent(7,0.05875506);
   QCD Z#rightarrow#mu#mu8->SetBinContent(8,0.03839791);
   QCD Z#rightarrow#mu#mu8->SetBinContent(9,0.007286895);
   QCD Z#rightarrow#mu#mu8->SetBinContent(11,0.03397342);
   QCD Z#rightarrow#mu#mu8->SetBinError(1,0.1700772);
   QCD Z#rightarrow#mu#mu8->SetBinError(2,0.141713);
   QCD Z#rightarrow#mu#mu8->SetBinError(3,0.1057284);
   QCD Z#rightarrow#mu#mu8->SetBinError(4,0.07581837);
   QCD Z#rightarrow#mu#mu8->SetBinError(5,0.05215629);
   QCD Z#rightarrow#mu#mu8->SetBinError(6,0.04460704);
   QCD Z#rightarrow#mu#mu8->SetBinError(7,0.03411161);
   QCD Z#rightarrow#mu#mu8->SetBinError(8,0.02703841);
   QCD Z#rightarrow#mu#mu8->SetBinError(9,0.007286895);
   QCD Z#rightarrow#mu#mu8->SetBinError(11,0.02449253);
   QCD Z#rightarrow#mu#mu8->SetEntries(13);
   QCD Z#rightarrow#mu#mu8->SetDirectory(0);
   QCD Z#rightarrow#mu#mu8->SetStats(0);

   ci = TColor::GetColor("#0066cc");
   QCD Z#rightarrow#mu#mu8->SetFillColor(ci);
   QCD Z#rightarrow#mu#mu8->GetXaxis()->SetLabelFont(42);
   QCD Z#rightarrow#mu#mu8->GetXaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#mu#mu8->GetXaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#mu#mu8->GetXaxis()->SetTitleFont(42);
   QCD Z#rightarrow#mu#mu8->GetYaxis()->SetLabelFont(42);
   QCD Z#rightarrow#mu#mu8->GetYaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#mu#mu8->GetYaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#mu#mu8->GetYaxis()->SetTitleFont(42);
   QCD Z#rightarrow#mu#mu8->GetZaxis()->SetLabelFont(42);
   QCD Z#rightarrow#mu#mu8->GetZaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#mu#mu8->GetZaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#mu#mu8->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(QCD Z#rightarrow#mu#mu,"");
   
   TH1F *EWK Z#rightarrow#mu#mu9 = new TH1F("EWK Z#rightarrow#mu#mu9","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   EWK Z#rightarrow#mu#mu9->SetBinContent(1,0.6003596);
   EWK Z#rightarrow#mu#mu9->SetBinContent(2,0.3156484);
   EWK Z#rightarrow#mu#mu9->SetBinContent(3,0.296173);
   EWK Z#rightarrow#mu#mu9->SetBinContent(4,0.2344284);
   EWK Z#rightarrow#mu#mu9->SetBinContent(5,0.1430099);
   EWK Z#rightarrow#mu#mu9->SetBinContent(6,0.1742051);
   EWK Z#rightarrow#mu#mu9->SetBinContent(7,0.267532);
   EWK Z#rightarrow#mu#mu9->SetBinContent(13,0.07071903);
   EWK Z#rightarrow#mu#mu9->SetBinError(1,0.2014357);
   EWK Z#rightarrow#mu#mu9->SetBinError(2,0.1606827);
   EWK Z#rightarrow#mu#mu9->SetBinError(3,0.1350174);
   EWK Z#rightarrow#mu#mu9->SetBinError(4,0.1123197);
   EWK Z#rightarrow#mu#mu9->SetBinError(5,0.0865778);
   EWK Z#rightarrow#mu#mu9->SetBinError(6,0.1025428);
   EWK Z#rightarrow#mu#mu9->SetBinError(7,0.1350589);
   EWK Z#rightarrow#mu#mu9->SetBinError(13,0.07071904);
   EWK Z#rightarrow#mu#mu9->SetEntries(13);
   EWK Z#rightarrow#mu#mu9->SetDirectory(0);
   EWK Z#rightarrow#mu#mu9->SetStats(0);

   ci = TColor::GetColor("#006699");
   EWK Z#rightarrow#mu#mu9->SetFillColor(ci);
   EWK Z#rightarrow#mu#mu9->GetXaxis()->SetLabelFont(42);
   EWK Z#rightarrow#mu#mu9->GetXaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#mu#mu9->GetXaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#mu#mu9->GetXaxis()->SetTitleFont(42);
   EWK Z#rightarrow#mu#mu9->GetYaxis()->SetLabelFont(42);
   EWK Z#rightarrow#mu#mu9->GetYaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#mu#mu9->GetYaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#mu#mu9->GetYaxis()->SetTitleFont(42);
   EWK Z#rightarrow#mu#mu9->GetZaxis()->SetLabelFont(42);
   EWK Z#rightarrow#mu#mu9->GetZaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#mu#mu9->GetZaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#mu#mu9->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(EWK Z#rightarrow#mu#mu,"");
   
   TH1F *Top10 = new TH1F("Top10","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   Top10->SetBinContent(1,0.07089879);
   Top10->SetBinContent(2,0.07772604);
   Top10->SetBinContent(4,0.04145235);
   Top10->SetBinContent(6,0.006316681);
   Top10->SetBinContent(11,0.02260122);
   Top10->SetBinError(1,0.03815767);
   Top10->SetBinError(2,0.03617994);
   Top10->SetBinError(4,0.02950276);
   Top10->SetBinError(6,0.006316681);
   Top10->SetBinError(11,0.02260122);
   Top10->SetEntries(13);
   Top10->SetDirectory(0);
   Top10->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top10->SetFillColor(ci);
   Top10->GetXaxis()->SetLabelFont(42);
   Top10->GetXaxis()->SetLabelSize(0.035);
   Top10->GetXaxis()->SetTitleSize(0.035);
   Top10->GetXaxis()->SetTitleFont(42);
   Top10->GetYaxis()->SetLabelFont(42);
   Top10->GetYaxis()->SetLabelSize(0.035);
   Top10->GetYaxis()->SetTitleSize(0.035);
   Top10->GetYaxis()->SetTitleFont(42);
   Top10->GetZaxis()->SetLabelFont(42);
   Top10->GetZaxis()->SetLabelSize(0.035);
   Top10->GetZaxis()->SetTitleSize(0.035);
   Top10->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(Top,"");
   
   TH1F *QCD11 = new TH1F("QCD11","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   QCD11->SetEntries(13);
   QCD11->SetDirectory(0);
   QCD11->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD11->SetFillColor(ci);
   QCD11->GetXaxis()->SetLabelFont(42);
   QCD11->GetXaxis()->SetLabelSize(0.035);
   QCD11->GetXaxis()->SetTitleSize(0.035);
   QCD11->GetXaxis()->SetTitleFont(42);
   QCD11->GetYaxis()->SetLabelFont(42);
   QCD11->GetYaxis()->SetLabelSize(0.035);
   QCD11->GetYaxis()->SetTitleSize(0.035);
   QCD11->GetYaxis()->SetTitleFont(42);
   QCD11->GetZaxis()->SetLabelFont(42);
   QCD11->GetZaxis()->SetLabelSize(0.035);
   QCD11->GetZaxis()->SetTitleSize(0.035);
   QCD11->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(QCD,"");
   
   TH1F *VV12 = new TH1F("VV12","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   VV12->SetBinContent(1,0.01801297);
   VV12->SetBinError(1,0.01801298);
   VV12->SetEntries(13);
   VV12->SetDirectory(0);
   VV12->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV12->SetFillColor(ci);
   VV12->GetXaxis()->SetLabelFont(42);
   VV12->GetXaxis()->SetLabelSize(0.035);
   VV12->GetXaxis()->SetTitleSize(0.035);
   VV12->GetXaxis()->SetTitleFont(42);
   VV12->GetYaxis()->SetLabelFont(42);
   VV12->GetYaxis()->SetLabelSize(0.035);
   VV12->GetYaxis()->SetTitleSize(0.035);
   VV12->GetYaxis()->SetTitleFont(42);
   VV12->GetZaxis()->SetLabelFont(42);
   VV12->GetZaxis()->SetLabelSize(0.035);
   VV12->GetZaxis()->SetTitleSize(0.035);
   VV12->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(VV,"");
   stackdijet_M->Draw("hist");
   
   TH1F *totalerrordijet_M13 = new TH1F("totalerrordijet_M13","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   totalerrordijet_M13->SetBinContent(1,2.151319);
   totalerrordijet_M13->SetBinContent(2,1.413095);
   totalerrordijet_M13->SetBinContent(3,0.86197);
   totalerrordijet_M13->SetBinContent(4,0.5692369);
   totalerrordijet_M13->SetBinContent(5,0.2817045);
   totalerrordijet_M13->SetBinContent(6,0.2841888);
   totalerrordijet_M13->SetBinContent(7,0.326287);
   totalerrordijet_M13->SetBinContent(8,0.03839791);
   totalerrordijet_M13->SetBinContent(9,0.007286895);
   totalerrordijet_M13->SetBinContent(11,0.05657464);
   totalerrordijet_M13->SetBinContent(13,0.07071903);
   totalerrordijet_M13->SetBinError(1,0.466892);
   totalerrordijet_M13->SetBinError(2,0.3066783);
   totalerrordijet_M13->SetBinError(3,0.1870698);
   totalerrordijet_M13->SetBinError(4,0.1235392);
   totalerrordijet_M13->SetBinError(5,0.06113717);
   totalerrordijet_M13->SetBinError(6,0.06167635);
   totalerrordijet_M13->SetBinError(7,0.07081275);
   totalerrordijet_M13->SetBinError(8,0.008333343);
   totalerrordijet_M13->SetBinError(9,0.001581445);
   totalerrordijet_M13->SetBinError(11,0.01227816);
   totalerrordijet_M13->SetBinError(13,0.01534786);
   totalerrordijet_M13->SetEntries(65);
   totalerrordijet_M13->SetDirectory(0);
   totalerrordijet_M13->SetStats(0);
   totalerrordijet_M13->SetFillColor(1);
   totalerrordijet_M13->SetFillStyle(3004);
   totalerrordijet_M13->GetXaxis()->SetLabelFont(42);
   totalerrordijet_M13->GetXaxis()->SetLabelSize(0.035);
   totalerrordijet_M13->GetXaxis()->SetTitleSize(0.035);
   totalerrordijet_M13->GetXaxis()->SetTitleFont(42);
   totalerrordijet_M13->GetYaxis()->SetLabelFont(42);
   totalerrordijet_M13->GetYaxis()->SetLabelSize(0.035);
   totalerrordijet_M13->GetYaxis()->SetTitleSize(0.035);
   totalerrordijet_M13->GetYaxis()->SetTitleFont(42);
   totalerrordijet_M13->GetZaxis()->SetLabelFont(42);
   totalerrordijet_M13->GetZaxis()->SetLabelSize(0.035);
   totalerrordijet_M13->GetZaxis()->SetTitleSize(0.035);
   totalerrordijet_M13->GetZaxis()->SetTitleFont(42);
   totalerrordijet_M13->Draw("E2same");
   
   TH1F *totlinedijet_M14 = new TH1F("totlinedijet_M14","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",13,1100,4241.667);
   totlinedijet_M14->SetBinContent(1,2.151319);
   totlinedijet_M14->SetBinContent(2,1.413095);
   totlinedijet_M14->SetBinContent(3,0.86197);
   totlinedijet_M14->SetBinContent(4,0.5692369);
   totlinedijet_M14->SetBinContent(5,0.2817045);
   totlinedijet_M14->SetBinContent(6,0.2841888);
   totlinedijet_M14->SetBinContent(7,0.326287);
   totlinedijet_M14->SetBinContent(8,0.03839791);
   totlinedijet_M14->SetBinContent(9,0.007286895);
   totlinedijet_M14->SetBinContent(11,0.05657464);
   totlinedijet_M14->SetBinContent(13,0.07071903);
   totlinedijet_M14->SetBinError(1,0.466892);
   totlinedijet_M14->SetBinError(2,0.3066783);
   totlinedijet_M14->SetBinError(3,0.1870698);
   totlinedijet_M14->SetBinError(4,0.1235392);
   totlinedijet_M14->SetBinError(5,0.06113717);
   totlinedijet_M14->SetBinError(6,0.06167635);
   totlinedijet_M14->SetBinError(7,0.07081275);
   totlinedijet_M14->SetBinError(8,0.008333343);
   totlinedijet_M14->SetBinError(9,0.001581445);
   totlinedijet_M14->SetBinError(11,0.01227816);
   totlinedijet_M14->SetBinError(13,0.01534786);
   totlinedijet_M14->SetEntries(65);
   totlinedijet_M14->SetDirectory(0);
   totlinedijet_M14->SetStats(0);
   totlinedijet_M14->SetFillColor(1);
   totlinedijet_M14->SetFillStyle(0);
   totlinedijet_M14->GetXaxis()->SetLabelFont(42);
   totlinedijet_M14->GetXaxis()->SetLabelSize(0.035);
   totlinedijet_M14->GetXaxis()->SetTitleSize(0.035);
   totlinedijet_M14->GetXaxis()->SetTitleFont(42);
   totlinedijet_M14->GetYaxis()->SetLabelFont(42);
   totlinedijet_M14->GetYaxis()->SetLabelSize(0.035);
   totlinedijet_M14->GetYaxis()->SetTitleSize(0.035);
   totlinedijet_M14->GetYaxis()->SetTitleFont(42);
   totlinedijet_M14->GetZaxis()->SetLabelFont(42);
   totlinedijet_M14->GetZaxis()->SetLabelSize(0.035);
   totlinedijet_M14->GetZaxis()->SetTitleSize(0.035);
   totlinedijet_M14->GetZaxis()->SetTitleFont(42);
   totlinedijet_M14->Draw("histsame");
   
   Double_t Graph_from_Data_fx3002[13] = {
   1220.833,
   1462.5,
   1704.167,
   1945.833,
   2187.5,
   2429.167,
   2670.833,
   2912.5,
   3154.167,
   3395.833,
   3637.5,
   3879.167,
   4120.833};
   Double_t Graph_from_Data_fy3002[13] = {
   1,
   4,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Data_felx3002[13] = {
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333};
   Double_t Graph_from_Data_fely3002[13] = {
   0.8272525,
   1.914367,
   0.8272525,
   0.8272525,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Data_fehx3002[13] = {
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333,
   120.8333};
   Double_t Graph_from_Data_fehy3002[13] = {
   2.29957,
   3.162815,
   2.29957,
   2.29957,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,Graph_from_Data_fx3002,Graph_from_Data_fy3002,Graph_from_Data_felx3002,Graph_from_Data_fehx3002,Graph_from_Data_fely3002,Graph_from_Data_fehy3002);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3002 = new TH1F("Graph_Graph_from_Data3002","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,785.8333,4555.833);
   Graph_Graph_from_Data3002->SetMinimum(0);
   Graph_Graph_from_Data3002->SetMaximum(7.879096);
   Graph_Graph_from_Data3002->SetDirectory(0);
   Graph_Graph_from_Data3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Data3002->SetLineColor(ci);
   Graph_Graph_from_Data3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Data3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Data3002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Data3002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Data3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Data3002);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.6,0.536,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.06);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Data","Data","PlePle");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("QCD Z#rightarrow#mu#mu","QCD Z#rightarrow#mu#mu","ff");

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
   entry=leg->AddEntry("EWK Z#rightarrow#mu#mu","EWK Z#rightarrow#mu#mu","ff");

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
   entry=leg->AddEntry("Top","Top","ff");

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
   entry=leg->AddEntry("QCD","QCD","ff");

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
   entry=leg->AddEntry("VV","VV","ff");

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
   dijet_M->cd();
   dijet_M->Modified();
   dijet_M->cd();
   dijet_M->SetSelected(dijet_M);
}
