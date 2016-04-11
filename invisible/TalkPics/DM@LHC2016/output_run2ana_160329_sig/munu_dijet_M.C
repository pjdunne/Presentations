void munu_dijet_M()
{
//=========Macro generated from canvas: dijet_M/dijet_M
//=========  (Tue Mar 29 09:05:02 2016) by ROOT version6.02/13
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
   upper->Range(780,-11.40652,3980,55.69068);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.17);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackdijet_M = new THStack();
   stackdijet_M->SetName("stackdijet_M");
   stackdijet_M->SetTitle(";M_{jj} (GeV);Events");
   stackdijet_M->SetMaximum(46.64853);
   
   TH1F *stackdijet_M_stack_2 = new TH1F("stackdijet_M_stack_2","",16,1100,3660);
   stackdijet_M_stack_2->SetMinimum(0);
   stackdijet_M_stack_2->SetMaximum(48.98096);
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
   stackdijet_M_stack_2->GetXaxis()->SetTitleOffset(0.83);
   stackdijet_M_stack_2->GetYaxis()->SetTitle("Events");
   stackdijet_M_stack_2->GetYaxis()->SetLabelFont(42);
   stackdijet_M_stack_2->GetYaxis()->SetLabelSize(0.06);
   stackdijet_M_stack_2->GetYaxis()->SetTitleSize(0.08);
   stackdijet_M_stack_2->GetYaxis()->SetTitleOffset(0.6);
   stackdijet_M_stack_2->GetZaxis()->SetLabelFont(42);
   stackdijet_M_stack_2->GetZaxis()->SetLabelSize(0.035);
   stackdijet_M_stack_2->GetZaxis()->SetTitleSize(0.035);
   stackdijet_M_stack_2->GetZaxis()->SetTitleFont(42);
   stackdijet_M->SetHistogram(stackdijet_M_stack_2);
   
   
   TH1F *QCD W#rightarrow#mu#nu8 = new TH1F("QCD W#rightarrow#mu#nu8","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   QCD W#rightarrow#mu#nu8->SetBinContent(1,15.14247);
   QCD W#rightarrow#mu#nu8->SetBinContent(2,9.62111);
   QCD W#rightarrow#mu#nu8->SetBinContent(3,8.750401);
   QCD W#rightarrow#mu#nu8->SetBinContent(4,6.310017);
   QCD W#rightarrow#mu#nu8->SetBinContent(5,4.280097);
   QCD W#rightarrow#mu#nu8->SetBinContent(6,2.407126);
   QCD W#rightarrow#mu#nu8->SetBinContent(7,1.166548);
   QCD W#rightarrow#mu#nu8->SetBinContent(8,1.396911);
   QCD W#rightarrow#mu#nu8->SetBinContent(9,0.4968449);
   QCD W#rightarrow#mu#nu8->SetBinContent(10,0.6550269);
   QCD W#rightarrow#mu#nu8->SetBinContent(11,0.4262641);
   QCD W#rightarrow#mu#nu8->SetBinContent(12,1.189383);
   QCD W#rightarrow#mu#nu8->SetBinContent(13,0.2609474);
   QCD W#rightarrow#mu#nu8->SetBinContent(14,0.5239232);
   QCD W#rightarrow#mu#nu8->SetBinContent(16,0.2509389);
   QCD W#rightarrow#mu#nu8->SetBinError(1,1.697043);
   QCD W#rightarrow#mu#nu8->SetBinError(2,1.243345);
   QCD W#rightarrow#mu#nu8->SetBinError(3,1.277207);
   QCD W#rightarrow#mu#nu8->SetBinError(4,1.036124);
   QCD W#rightarrow#mu#nu8->SetBinError(5,0.8400245);
   QCD W#rightarrow#mu#nu8->SetBinError(6,0.6264842);
   QCD W#rightarrow#mu#nu8->SetBinError(7,0.3704437);
   QCD W#rightarrow#mu#nu8->SetBinError(8,0.4686142);
   QCD W#rightarrow#mu#nu8->SetBinError(9,0.171727);
   QCD W#rightarrow#mu#nu8->SetBinError(10,0.3564172);
   QCD W#rightarrow#mu#nu8->SetBinError(11,0.1775996);
   QCD W#rightarrow#mu#nu8->SetBinError(12,0.499794);
   QCD W#rightarrow#mu#nu8->SetBinError(13,0.1338368);
   QCD W#rightarrow#mu#nu8->SetBinError(14,0.2851642);
   QCD W#rightarrow#mu#nu8->SetBinError(16,0.1711751);
   QCD W#rightarrow#mu#nu8->SetEntries(16);
   QCD W#rightarrow#mu#nu8->SetDirectory(0);
   QCD W#rightarrow#mu#nu8->SetStats(0);

   ci = TColor::GetColor("#ffcc66");
   QCD W#rightarrow#mu#nu8->SetFillColor(ci);
   QCD W#rightarrow#mu#nu8->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow#mu#nu8->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#mu#nu8->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#mu#nu8->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow#mu#nu8->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow#mu#nu8->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#mu#nu8->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#mu#nu8->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow#mu#nu8->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow#mu#nu8->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow#mu#nu8->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow#mu#nu8->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(QCD W#rightarrow#mu#nu,"");
   
   TH1F *EWK W#rightarrow#mu#nu9 = new TH1F("EWK W#rightarrow#mu#nu9","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   EWK W#rightarrow#mu#nu9->SetBinContent(1,4.489893);
   EWK W#rightarrow#mu#nu9->SetBinContent(2,3.644007);
   EWK W#rightarrow#mu#nu9->SetBinContent(3,2.263965);
   EWK W#rightarrow#mu#nu9->SetBinContent(4,3.37734);
   EWK W#rightarrow#mu#nu9->SetBinContent(5,2.700362);
   EWK W#rightarrow#mu#nu9->SetBinContent(6,1.811273);
   EWK W#rightarrow#mu#nu9->SetBinContent(7,1.717875);
   EWK W#rightarrow#mu#nu9->SetBinContent(8,1.573344);
   EWK W#rightarrow#mu#nu9->SetBinContent(9,1.15734);
   EWK W#rightarrow#mu#nu9->SetBinContent(10,0.8223236);
   EWK W#rightarrow#mu#nu9->SetBinContent(11,0.6306083);
   EWK W#rightarrow#mu#nu9->SetBinContent(12,0.4427535);
   EWK W#rightarrow#mu#nu9->SetBinContent(13,0.18935);
   EWK W#rightarrow#mu#nu9->SetBinContent(14,0.5159712);
   EWK W#rightarrow#mu#nu9->SetBinContent(15,0.5486118);
   EWK W#rightarrow#mu#nu9->SetBinContent(16,1.578957);
   EWK W#rightarrow#mu#nu9->SetBinError(1,0.7258687);
   EWK W#rightarrow#mu#nu9->SetBinError(2,0.6464335);
   EWK W#rightarrow#mu#nu9->SetBinError(3,0.5220144);
   EWK W#rightarrow#mu#nu9->SetBinError(4,0.5975338);
   EWK W#rightarrow#mu#nu9->SetBinError(5,0.5729567);
   EWK W#rightarrow#mu#nu9->SetBinError(6,0.4520619);
   EWK W#rightarrow#mu#nu9->SetBinError(7,0.4804331);
   EWK W#rightarrow#mu#nu9->SetBinError(8,0.4258924);
   EWK W#rightarrow#mu#nu9->SetBinError(9,0.3524719);
   EWK W#rightarrow#mu#nu9->SetBinError(10,0.3115438);
   EWK W#rightarrow#mu#nu9->SetBinError(11,0.2869182);
   EWK W#rightarrow#mu#nu9->SetBinError(12,0.2592258);
   EWK W#rightarrow#mu#nu9->SetBinError(13,0.1339825);
   EWK W#rightarrow#mu#nu9->SetBinError(14,0.239549);
   EWK W#rightarrow#mu#nu9->SetBinError(15,0.2552639);
   EWK W#rightarrow#mu#nu9->SetBinError(16,0.4351893);
   EWK W#rightarrow#mu#nu9->SetEntries(16);
   EWK W#rightarrow#mu#nu9->SetDirectory(0);
   EWK W#rightarrow#mu#nu9->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   EWK W#rightarrow#mu#nu9->SetFillColor(ci);
   EWK W#rightarrow#mu#nu9->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow#mu#nu9->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#mu#nu9->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#mu#nu9->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow#mu#nu9->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow#mu#nu9->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#mu#nu9->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#mu#nu9->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow#mu#nu9->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow#mu#nu9->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow#mu#nu9->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow#mu#nu9->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(EWK W#rightarrow#mu#nu,"");
   
   TH1F *Top10 = new TH1F("Top10","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   Top10->SetBinContent(1,1.98991);
   Top10->SetBinContent(2,1.224861);
   Top10->SetBinContent(3,1.161473);
   Top10->SetBinContent(4,0.5318348);
   Top10->SetBinContent(5,0.7187908);
   Top10->SetBinContent(6,0.3328179);
   Top10->SetBinContent(7,0.1249798);
   Top10->SetBinContent(8,0.08961718);
   Top10->SetBinContent(9,0.2086885);
   Top10->SetBinContent(10,0.1235018);
   Top10->SetBinContent(11,0.08991496);
   Top10->SetBinContent(12,0.1067197);
   Top10->SetBinContent(13,0.05175175);
   Top10->SetBinContent(14,0.004373744);
   Top10->SetBinContent(15,0.01176887);
   Top10->SetBinContent(16,0.05269691);
   Top10->SetBinError(1,0.2338197);
   Top10->SetBinError(2,0.1790301);
   Top10->SetBinError(3,0.2153519);
   Top10->SetBinError(4,0.1353333);
   Top10->SetBinError(5,0.1757519);
   Top10->SetBinError(6,0.1326272);
   Top10->SetBinError(7,0.04852043);
   Top10->SetBinError(8,0.0452185);
   Top10->SetBinError(9,0.07794504);
   Top10->SetBinError(10,0.06468755);
   Top10->SetBinError(11,0.04886516);
   Top10->SetBinError(12,0.05447793);
   Top10->SetBinError(13,0.03456556);
   Top10->SetBinError(14,0.004373744);
   Top10->SetBinError(15,0.01176887);
   Top10->SetBinError(16,0.03672417);
   Top10->SetEntries(16);
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
   
   TH1F *QCD11 = new TH1F("QCD11","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   QCD11->SetBinContent(1,0.9184066);
   QCD11->SetBinContent(2,3.617597);
   QCD11->SetBinError(1,0.9184066);
   QCD11->SetBinError(2,3.617597);
   QCD11->SetEntries(16);
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
   
   TH1F *VV12 = new TH1F("VV12","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   VV12->SetBinContent(1,0.3344493);
   VV12->SetBinContent(2,0.01016635);
   VV12->SetBinContent(3,0.1972214);
   VV12->SetBinContent(10,0.2481633);
   VV12->SetBinError(1,0.2714421);
   VV12->SetBinError(2,0.01016635);
   VV12->SetBinError(3,0.1972214);
   VV12->SetBinError(10,0.2481633);
   VV12->SetEntries(16);
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
   
   TH1F *totalerrordijet_M13 = new TH1F("totalerrordijet_M13","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   totalerrordijet_M13->SetBinContent(1,22.87513);
   totalerrordijet_M13->SetBinContent(2,18.11774);
   totalerrordijet_M13->SetBinContent(3,12.37306);
   totalerrordijet_M13->SetBinContent(4,10.21919);
   totalerrordijet_M13->SetBinContent(5,7.69925);
   totalerrordijet_M13->SetBinContent(6,4.551217);
   totalerrordijet_M13->SetBinContent(7,3.009403);
   totalerrordijet_M13->SetBinContent(8,3.059872);
   totalerrordijet_M13->SetBinContent(9,1.862873);
   totalerrordijet_M13->SetBinContent(10,1.849016);
   totalerrordijet_M13->SetBinContent(11,1.146787);
   totalerrordijet_M13->SetBinContent(12,1.738856);
   totalerrordijet_M13->SetBinContent(13,0.5020492);
   totalerrordijet_M13->SetBinContent(14,1.044268);
   totalerrordijet_M13->SetBinContent(15,0.5603806);
   totalerrordijet_M13->SetBinContent(16,1.882593);
   totalerrordijet_M13->SetBinError(1,2.148276);
   totalerrordijet_M13->SetBinError(2,1.701495);
   totalerrordijet_M13->SetBinError(3,1.161993);
   totalerrordijet_M13->SetBinError(4,0.9597166);
   totalerrordijet_M13->SetBinError(5,0.7230609);
   totalerrordijet_M13->SetBinError(6,0.4274192);
   totalerrordijet_M13->SetBinError(7,0.2826225);
   totalerrordijet_M13->SetBinError(8,0.2873623);
   totalerrordijet_M13->SetBinError(9,0.1749483);
   totalerrordijet_M13->SetBinError(10,0.1736469);
   totalerrordijet_M13->SetBinError(11,0.1076984);
   totalerrordijet_M13->SetBinError(12,0.1633015);
   totalerrordijet_M13->SetBinError(13,0.04714903);
   totalerrordijet_M13->SetBinError(14,0.09807053);
   totalerrordijet_M13->SetBinError(15,0.05262712);
   totalerrordijet_M13->SetBinError(16,0.1768003);
   totalerrordijet_M13->SetEntries(80);
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
   
   TH1F *totlinedijet_M14 = new TH1F("totlinedijet_M14","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_leptight*1.024*1)}",16,1100,3660);
   totlinedijet_M14->SetBinContent(1,22.87513);
   totlinedijet_M14->SetBinContent(2,18.11774);
   totlinedijet_M14->SetBinContent(3,12.37306);
   totlinedijet_M14->SetBinContent(4,10.21919);
   totlinedijet_M14->SetBinContent(5,7.69925);
   totlinedijet_M14->SetBinContent(6,4.551217);
   totlinedijet_M14->SetBinContent(7,3.009403);
   totlinedijet_M14->SetBinContent(8,3.059872);
   totlinedijet_M14->SetBinContent(9,1.862873);
   totlinedijet_M14->SetBinContent(10,1.849016);
   totlinedijet_M14->SetBinContent(11,1.146787);
   totlinedijet_M14->SetBinContent(12,1.738856);
   totlinedijet_M14->SetBinContent(13,0.5020492);
   totlinedijet_M14->SetBinContent(14,1.044268);
   totlinedijet_M14->SetBinContent(15,0.5603806);
   totlinedijet_M14->SetBinContent(16,1.882593);
   totlinedijet_M14->SetBinError(1,2.148276);
   totlinedijet_M14->SetBinError(2,1.701495);
   totlinedijet_M14->SetBinError(3,1.161993);
   totlinedijet_M14->SetBinError(4,0.9597166);
   totlinedijet_M14->SetBinError(5,0.7230609);
   totlinedijet_M14->SetBinError(6,0.4274192);
   totlinedijet_M14->SetBinError(7,0.2826225);
   totlinedijet_M14->SetBinError(8,0.2873623);
   totlinedijet_M14->SetBinError(9,0.1749483);
   totlinedijet_M14->SetBinError(10,0.1736469);
   totlinedijet_M14->SetBinError(11,0.1076984);
   totlinedijet_M14->SetBinError(12,0.1633015);
   totlinedijet_M14->SetBinError(13,0.04714903);
   totlinedijet_M14->SetBinError(14,0.09807053);
   totlinedijet_M14->SetBinError(15,0.05262712);
   totlinedijet_M14->SetBinError(16,0.1768003);
   totlinedijet_M14->SetEntries(80);
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
   
   Double_t Graph_from_Data_fx3002[16] = {
   1180,
   1340,
   1500,
   1660,
   1820,
   1980,
   2140,
   2300,
   2460,
   2620,
   2780,
   2940,
   3100,
   3260,
   3420,
   3580};
   Double_t Graph_from_Data_fy3002[16] = {
   26,
   21,
   7,
   8,
   8,
   7,
   6,
   1,
   1,
   0,
   1,
   1,
   1,
   0,
   0,
   1};
   Double_t Graph_from_Data_felx3002[16] = {
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80};
   Double_t Graph_from_Data_fely3002[16] = {
   5.066111,
   4.545892,
   2.581513,
   2.768432,
   2.768432,
   2.581513,
   2.379969,
   0.8272525,
   0.8272525,
   0,
   0.8272525,
   0.8272525,
   0.8272525,
   0,
   0,
   0.8272525};
   Double_t Graph_from_Data_fehx3002[16] = {
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80,
   80};
   Double_t Graph_from_Data_fehy3002[16] = {
   6.164451,
   5.655298,
   3.770356,
   3.94522,
   3.94522,
   3.770356,
   3.583712,
   2.29957,
   2.29957,
   1.841055,
   2.29957,
   2.29957,
   2.29957,
   1.841055,
   1.841055,
   2.29957};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,Graph_from_Data_fx3002,Graph_from_Data_fy3002,Graph_from_Data_felx3002,Graph_from_Data_fehx3002,Graph_from_Data_fely3002,Graph_from_Data_fehy3002);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3002 = new TH1F("Graph_Graph_from_Data3002","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nselmuons==1&&nvetomuons==1&&nvetoelectrons==0&&lep_mt>=0&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,844,3916);
   Graph_Graph_from_Data3002->SetMinimum(0);
   Graph_Graph_from_Data3002->SetMaximum(35.3809);
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
   entry=leg->AddEntry("QCD W#rightarrow#mu#nu","QCD W#rightarrow#mu#nu","ff");

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
   entry=leg->AddEntry("EWK W#rightarrow#mu#nu","EWK W#rightarrow#mu#nu","ff");

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
   dijet_M->cd();
   dijet_M->Modified();
   dijet_M->cd();
   dijet_M->SetSelected(dijet_M);
}
