void mumu_alljetsmetnomu_mindphi()
{
//=========Macro generated from canvas: alljetsmetnomu_mindphi/alljetsmetnomu_mindphi
//=========  (Fri Mar 25 19:15:00 2016) by ROOT version6.02/13
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
   upper->Range(2.1948,-0.8603819,3.2468,4.875497);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.15);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackalljetsmetnomu_mindphi = new THStack();
   stackalljetsmetnomu_mindphi->SetName("stackalljetsmetnomu_mindphi");
   stackalljetsmetnomu_mindphi->SetTitle(";#Delta#phi(E_{T,no-#mu}^{miss},j);Events");
   stackalljetsmetnomu_mindphi->SetMaximum(4.097056);
   
   TH1F *stackalljetsmetnomu_mindphi_stack_4 = new TH1F("stackalljetsmetnomu_mindphi_stack_4","",8,2.3,3.1416);
   stackalljetsmetnomu_mindphi_stack_4->SetMinimum(0);
   stackalljetsmetnomu_mindphi_stack_4->SetMaximum(4.301909);
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
   
   
   TH1F *QCD Z#rightarrow#mu#mu22 = new TH1F("QCD Z#rightarrow#mu#mu22","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   QCD Z#rightarrow#mu#mu22->SetBinContent(1,0.5892528);
   QCD Z#rightarrow#mu#mu22->SetBinContent(2,0.6820758);
   QCD Z#rightarrow#mu#mu22->SetBinContent(3,0.5697758);
   QCD Z#rightarrow#mu#mu22->SetBinContent(4,0.4299697);
   QCD Z#rightarrow#mu#mu22->SetBinContent(5,0.4470482);
   QCD Z#rightarrow#mu#mu22->SetBinContent(6,0.413464);
   QCD Z#rightarrow#mu#mu22->SetBinContent(7,0.3966159);
   QCD Z#rightarrow#mu#mu22->SetBinContent(8,0.1934939);
   QCD Z#rightarrow#mu#mu22->SetBinError(1,0.1090513);
   QCD Z#rightarrow#mu#mu22->SetBinError(2,0.1156351);
   QCD Z#rightarrow#mu#mu22->SetBinError(3,0.1056346);
   QCD Z#rightarrow#mu#mu22->SetBinError(4,0.09003562);
   QCD Z#rightarrow#mu#mu22->SetBinError(5,0.0934874);
   QCD Z#rightarrow#mu#mu22->SetBinError(6,0.09153133);
   QCD Z#rightarrow#mu#mu22->SetBinError(7,0.0888501);
   QCD Z#rightarrow#mu#mu22->SetBinError(8,0.06043594);
   QCD Z#rightarrow#mu#mu22->SetEntries(8);
   QCD Z#rightarrow#mu#mu22->SetDirectory(0);
   QCD Z#rightarrow#mu#mu22->SetStats(0);

   ci = TColor::GetColor("#0066cc");
   QCD Z#rightarrow#mu#mu22->SetFillColor(ci);
   QCD Z#rightarrow#mu#mu22->GetXaxis()->SetLabelFont(42);
   QCD Z#rightarrow#mu#mu22->GetXaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#mu#mu22->GetXaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#mu#mu22->GetXaxis()->SetTitleFont(42);
   QCD Z#rightarrow#mu#mu22->GetYaxis()->SetLabelFont(42);
   QCD Z#rightarrow#mu#mu22->GetYaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#mu#mu22->GetYaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#mu#mu22->GetYaxis()->SetTitleFont(42);
   QCD Z#rightarrow#mu#mu22->GetZaxis()->SetLabelFont(42);
   QCD Z#rightarrow#mu#mu22->GetZaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#mu#mu22->GetZaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#mu#mu22->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(QCD Z#rightarrow#mu#mu,"");
   
   TH1F *EWK Z#rightarrow#mu#mu23 = new TH1F("EWK Z#rightarrow#mu#mu23","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   EWK Z#rightarrow#mu#mu23->SetBinContent(1,0.2222128);
   EWK Z#rightarrow#mu#mu23->SetBinContent(2,0.499717);
   EWK Z#rightarrow#mu#mu23->SetBinContent(3,0.1363732);
   EWK Z#rightarrow#mu#mu23->SetBinContent(4,0.4515088);
   EWK Z#rightarrow#mu#mu23->SetBinContent(5,0.2568142);
   EWK Z#rightarrow#mu#mu23->SetBinContent(6,0.2138747);
   EWK Z#rightarrow#mu#mu23->SetBinContent(7,0.2151469);
   EWK Z#rightarrow#mu#mu23->SetBinContent(8,0.1064278);
   EWK Z#rightarrow#mu#mu23->SetBinError(1,0.1095537);
   EWK Z#rightarrow#mu#mu23->SetBinError(2,0.1816153);
   EWK Z#rightarrow#mu#mu23->SetBinError(3,0.08619379);
   EWK Z#rightarrow#mu#mu23->SetBinError(4,0.179756);
   EWK Z#rightarrow#mu#mu23->SetBinError(5,0.1297784);
   EWK Z#rightarrow#mu#mu23->SetBinError(6,0.1234841);
   EWK Z#rightarrow#mu#mu23->SetBinError(7,0.1245537);
   EWK Z#rightarrow#mu#mu23->SetBinError(8,0.07849468);
   EWK Z#rightarrow#mu#mu23->SetEntries(8);
   EWK Z#rightarrow#mu#mu23->SetDirectory(0);
   EWK Z#rightarrow#mu#mu23->SetStats(0);

   ci = TColor::GetColor("#006699");
   EWK Z#rightarrow#mu#mu23->SetFillColor(ci);
   EWK Z#rightarrow#mu#mu23->GetXaxis()->SetLabelFont(42);
   EWK Z#rightarrow#mu#mu23->GetXaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#mu#mu23->GetXaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#mu#mu23->GetXaxis()->SetTitleFont(42);
   EWK Z#rightarrow#mu#mu23->GetYaxis()->SetLabelFont(42);
   EWK Z#rightarrow#mu#mu23->GetYaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#mu#mu23->GetYaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#mu#mu23->GetYaxis()->SetTitleFont(42);
   EWK Z#rightarrow#mu#mu23->GetZaxis()->SetLabelFont(42);
   EWK Z#rightarrow#mu#mu23->GetZaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#mu#mu23->GetZaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#mu#mu23->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(EWK Z#rightarrow#mu#mu,"");
   
   TH1F *Top24 = new TH1F("Top24","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   Top24->SetBinContent(1,0.0409542);
   Top24->SetBinContent(2,0.06211345);
   Top24->SetBinContent(3,0.01785211);
   Top24->SetBinContent(4,0.04267804);
   Top24->SetBinContent(5,0.01811492);
   Top24->SetBinContent(6,0.014183);
   Top24->SetBinContent(7,0.02309937);
   Top24->SetBinError(1,0.02911438);
   Top24->SetBinError(2,0.03298069);
   Top24->SetBinError(3,0.01785211);
   Top24->SetBinError(4,0.02948159);
   Top24->SetBinError(5,0.01811492);
   Top24->SetBinError(6,0.014183);
   Top24->SetBinError(7,0.02309937);
   Top24->SetEntries(8);
   Top24->SetDirectory(0);
   Top24->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top24->SetFillColor(ci);
   Top24->GetXaxis()->SetLabelFont(42);
   Top24->GetXaxis()->SetLabelSize(0.035);
   Top24->GetXaxis()->SetTitleSize(0.035);
   Top24->GetXaxis()->SetTitleFont(42);
   Top24->GetYaxis()->SetLabelFont(42);
   Top24->GetYaxis()->SetLabelSize(0.035);
   Top24->GetYaxis()->SetTitleSize(0.035);
   Top24->GetYaxis()->SetTitleFont(42);
   Top24->GetZaxis()->SetLabelFont(42);
   Top24->GetZaxis()->SetLabelSize(0.035);
   Top24->GetZaxis()->SetTitleSize(0.035);
   Top24->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(Top,"");
   
   TH1F *QCD25 = new TH1F("QCD25","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   QCD25->SetEntries(8);
   QCD25->SetDirectory(0);
   QCD25->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD25->SetFillColor(ci);
   QCD25->GetXaxis()->SetLabelFont(42);
   QCD25->GetXaxis()->SetLabelSize(0.035);
   QCD25->GetXaxis()->SetTitleSize(0.035);
   QCD25->GetXaxis()->SetTitleFont(42);
   QCD25->GetYaxis()->SetLabelFont(42);
   QCD25->GetYaxis()->SetLabelSize(0.035);
   QCD25->GetYaxis()->SetTitleSize(0.035);
   QCD25->GetYaxis()->SetTitleFont(42);
   QCD25->GetZaxis()->SetLabelFont(42);
   QCD25->GetZaxis()->SetLabelSize(0.035);
   QCD25->GetZaxis()->SetTitleSize(0.035);
   QCD25->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(QCD,"");
   
   TH1F *VV26 = new TH1F("VV26","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   VV26->SetBinContent(3,0.01801297);
   VV26->SetBinError(3,0.01801298);
   VV26->SetEntries(8);
   VV26->SetDirectory(0);
   VV26->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV26->SetFillColor(ci);
   VV26->GetXaxis()->SetLabelFont(42);
   VV26->GetXaxis()->SetLabelSize(0.035);
   VV26->GetXaxis()->SetTitleSize(0.035);
   VV26->GetXaxis()->SetTitleFont(42);
   VV26->GetYaxis()->SetLabelFont(42);
   VV26->GetYaxis()->SetLabelSize(0.035);
   VV26->GetYaxis()->SetTitleSize(0.035);
   VV26->GetYaxis()->SetTitleFont(42);
   VV26->GetZaxis()->SetLabelFont(42);
   VV26->GetZaxis()->SetLabelSize(0.035);
   VV26->GetZaxis()->SetTitleSize(0.035);
   VV26->GetZaxis()->SetTitleFont(42);
   stackalljetsmetnomu_mindphi->Add(VV,"");
   stackalljetsmetnomu_mindphi->Draw("hist");
   
   TH1F *totalerroralljetsmetnomu_mindphi27 = new TH1F("totalerroralljetsmetnomu_mindphi27","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(1,0.8524199);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(2,1.243906);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(3,0.7420141);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(4,0.9241566);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(5,0.7219774);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(6,0.6415218);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(7,0.6348622);
   totalerroralljetsmetnomu_mindphi27->SetBinContent(8,0.2999217);
   totalerroralljetsmetnomu_mindphi27->SetBinError(1,0.1849972);
   totalerroralljetsmetnomu_mindphi27->SetBinError(2,0.2699599);
   totalerroralljetsmetnomu_mindphi27->SetBinError(3,0.1610363);
   totalerroralljetsmetnomu_mindphi27->SetBinError(4,0.200566);
   totalerroralljetsmetnomu_mindphi27->SetBinError(5,0.1566878);
   totalerroralljetsmetnomu_mindphi27->SetBinError(6,0.1392269);
   totalerroralljetsmetnomu_mindphi27->SetBinError(7,0.1377816);
   totalerroralljetsmetnomu_mindphi27->SetBinError(8,0.06509078);
   totalerroralljetsmetnomu_mindphi27->SetEntries(40);
   totalerroralljetsmetnomu_mindphi27->SetDirectory(0);
   totalerroralljetsmetnomu_mindphi27->SetStats(0);
   totalerroralljetsmetnomu_mindphi27->SetFillColor(1);
   totalerroralljetsmetnomu_mindphi27->SetFillStyle(3004);
   totalerroralljetsmetnomu_mindphi27->GetXaxis()->SetLabelFont(42);
   totalerroralljetsmetnomu_mindphi27->GetXaxis()->SetLabelSize(0.035);
   totalerroralljetsmetnomu_mindphi27->GetXaxis()->SetTitleSize(0.035);
   totalerroralljetsmetnomu_mindphi27->GetXaxis()->SetTitleFont(42);
   totalerroralljetsmetnomu_mindphi27->GetYaxis()->SetLabelFont(42);
   totalerroralljetsmetnomu_mindphi27->GetYaxis()->SetLabelSize(0.035);
   totalerroralljetsmetnomu_mindphi27->GetYaxis()->SetTitleSize(0.035);
   totalerroralljetsmetnomu_mindphi27->GetYaxis()->SetTitleFont(42);
   totalerroralljetsmetnomu_mindphi27->GetZaxis()->SetLabelFont(42);
   totalerroralljetsmetnomu_mindphi27->GetZaxis()->SetLabelSize(0.035);
   totalerroralljetsmetnomu_mindphi27->GetZaxis()->SetTitleSize(0.035);
   totalerroralljetsmetnomu_mindphi27->GetZaxis()->SetTitleFont(42);
   totalerroralljetsmetnomu_mindphi27->Draw("E2same");
   
   TH1F *totlinealljetsmetnomu_mindphi28 = new TH1F("totlinealljetsmetnomu_mindphi28","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",8,2.3,3.1416);
   totlinealljetsmetnomu_mindphi28->SetBinContent(1,0.8524199);
   totlinealljetsmetnomu_mindphi28->SetBinContent(2,1.243906);
   totlinealljetsmetnomu_mindphi28->SetBinContent(3,0.7420141);
   totlinealljetsmetnomu_mindphi28->SetBinContent(4,0.9241566);
   totlinealljetsmetnomu_mindphi28->SetBinContent(5,0.7219774);
   totlinealljetsmetnomu_mindphi28->SetBinContent(6,0.6415218);
   totlinealljetsmetnomu_mindphi28->SetBinContent(7,0.6348622);
   totlinealljetsmetnomu_mindphi28->SetBinContent(8,0.2999217);
   totlinealljetsmetnomu_mindphi28->SetBinError(1,0.1849972);
   totlinealljetsmetnomu_mindphi28->SetBinError(2,0.2699599);
   totlinealljetsmetnomu_mindphi28->SetBinError(3,0.1610363);
   totlinealljetsmetnomu_mindphi28->SetBinError(4,0.200566);
   totlinealljetsmetnomu_mindphi28->SetBinError(5,0.1566878);
   totlinealljetsmetnomu_mindphi28->SetBinError(6,0.1392269);
   totlinealljetsmetnomu_mindphi28->SetBinError(7,0.1377816);
   totlinealljetsmetnomu_mindphi28->SetBinError(8,0.06509078);
   totlinealljetsmetnomu_mindphi28->SetEntries(40);
   totlinealljetsmetnomu_mindphi28->SetDirectory(0);
   totlinealljetsmetnomu_mindphi28->SetStats(0);
   totlinealljetsmetnomu_mindphi28->SetFillColor(1);
   totlinealljetsmetnomu_mindphi28->SetFillStyle(0);
   totlinealljetsmetnomu_mindphi28->GetXaxis()->SetLabelFont(42);
   totlinealljetsmetnomu_mindphi28->GetXaxis()->SetLabelSize(0.035);
   totlinealljetsmetnomu_mindphi28->GetXaxis()->SetTitleSize(0.035);
   totlinealljetsmetnomu_mindphi28->GetXaxis()->SetTitleFont(42);
   totlinealljetsmetnomu_mindphi28->GetYaxis()->SetLabelFont(42);
   totlinealljetsmetnomu_mindphi28->GetYaxis()->SetLabelSize(0.035);
   totlinealljetsmetnomu_mindphi28->GetYaxis()->SetTitleSize(0.035);
   totlinealljetsmetnomu_mindphi28->GetYaxis()->SetTitleFont(42);
   totlinealljetsmetnomu_mindphi28->GetZaxis()->SetLabelFont(42);
   totlinealljetsmetnomu_mindphi28->GetZaxis()->SetLabelSize(0.035);
   totlinealljetsmetnomu_mindphi28->GetZaxis()->SetTitleSize(0.035);
   totlinealljetsmetnomu_mindphi28->GetZaxis()->SetTitleFont(42);
   totlinealljetsmetnomu_mindphi28->Draw("histsame");
   
   Double_t Graph_from_Data_fx3004[8] = {
   2.3526,
   2.4578,
   2.563,
   2.6682,
   2.7734,
   2.8786,
   2.9838,
   3.089};
   Double_t Graph_from_Data_fy3004[8] = {
   1,
   0,
   1,
   1,
   1,
   1,
   0,
   2};
   Double_t Graph_from_Data_felx3004[8] = {
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526};
   Double_t Graph_from_Data_fely3004[8] = {
   0.8272525,
   0,
   0.8272525,
   0.8272525,
   0.8272525,
   0.8272525,
   0,
   1.29183};
   Double_t Graph_from_Data_fehx3004[8] = {
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526,
   0.0526};
   Double_t Graph_from_Data_fehy3004[8] = {
   2.29957,
   1.841055,
   2.29957,
   2.29957,
   2.29957,
   2.29957,
   1.841055,
   2.63791};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,Graph_from_Data_fx3004,Graph_from_Data_fy3004,Graph_from_Data_felx3004,Graph_from_Data_fehx3004,Graph_from_Data_fely3004,Graph_from_Data_fehy3004);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3004 = new TH1F("Graph_Graph_from_Data3004","alljetsmetnomu_mindphi {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==2&&nvetomuons==2&&nvetoelectrons==0&&m_mumu>60&&m_mumu<120&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,2.21584,3.22576);
   Graph_Graph_from_Data3004->SetMinimum(0);
   Graph_Graph_from_Data3004->SetMaximum(5.101701);
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
   
   TLegend *leg = new TLegend(0.6,0.536,0.89,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("QCD Z#rightarrow#mu#mu","QCD Z#rightarrow#mu#mu","ffff");

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
   entry=leg->AddEntry("EWK Z#rightarrow#mu#mu","EWK Z#rightarrow#mu#mu","ffff");

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
