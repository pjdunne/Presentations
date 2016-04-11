void nunu_dijet_M()
{
//=========Macro generated from canvas: dijet_M/dijet_M
//=========  (Tue Mar 29 10:08:15 2016) by ROOT version6.02/13
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
   upper->Range(719.375,-14.21076,4525.625,69.38196);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetBottomMargin(0.17);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderMode(0);
   
   THStack *stackdijet_M = new THStack();
   stackdijet_M->SetName("stackdijet_M");
   stackdijet_M->SetTitle(";M_{jj} (GeV);Events");
   stackdijet_M->SetMaximum(58.11684);
   
   TH1F *stackdijet_M_stack_2 = new TH1F("stackdijet_M_stack_2","",21,1100,4145);
   stackdijet_M_stack_2->SetMinimum(0);
   stackdijet_M_stack_2->SetMaximum(61.02269);
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
   
   
   TH1F *QCD W#rightarrow l#nu11 = new TH1F("QCD W#rightarrow l#nu11","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   QCD W#rightarrow l#nu11->SetBinContent(1,8.206244);
   QCD W#rightarrow l#nu11->SetBinContent(2,8.242172);
   QCD W#rightarrow l#nu11->SetBinContent(3,6.421702);
   QCD W#rightarrow l#nu11->SetBinContent(4,3.391224);
   QCD W#rightarrow l#nu11->SetBinContent(5,2.49396);
   QCD W#rightarrow l#nu11->SetBinContent(6,2.051592);
   QCD W#rightarrow l#nu11->SetBinContent(7,0.9872188);
   QCD W#rightarrow l#nu11->SetBinContent(8,0.9265956);
   QCD W#rightarrow l#nu11->SetBinContent(9,0.6912653);
   QCD W#rightarrow l#nu11->SetBinContent(10,0.2268255);
   QCD W#rightarrow l#nu11->SetBinContent(11,0.3178729);
   QCD W#rightarrow l#nu11->SetBinContent(12,0.6398602);
   QCD W#rightarrow l#nu11->SetBinContent(13,0.3426516);
   QCD W#rightarrow l#nu11->SetBinContent(14,0.2576652);
   QCD W#rightarrow l#nu11->SetBinContent(15,0.1508631);
   QCD W#rightarrow l#nu11->SetBinContent(16,0.3326145);
   QCD W#rightarrow l#nu11->SetBinContent(17,0.1221627);
   QCD W#rightarrow l#nu11->SetBinError(1,1.282505);
   QCD W#rightarrow l#nu11->SetBinError(2,1.249351);
   QCD W#rightarrow l#nu11->SetBinError(3,1.133229);
   QCD W#rightarrow l#nu11->SetBinError(4,0.7940766);
   QCD W#rightarrow l#nu11->SetBinError(5,0.6879906);
   QCD W#rightarrow l#nu11->SetBinError(6,0.6393456);
   QCD W#rightarrow l#nu11->SetBinError(7,0.3679374);
   QCD W#rightarrow l#nu11->SetBinError(8,0.4566136);
   QCD W#rightarrow l#nu11->SetBinError(9,0.3268451);
   QCD W#rightarrow l#nu11->SetBinError(10,0.2268255);
   QCD W#rightarrow l#nu11->SetBinError(11,0.2521885);
   QCD W#rightarrow l#nu11->SetBinError(12,0.307858);
   QCD W#rightarrow l#nu11->SetBinError(13,0.3426516);
   QCD W#rightarrow l#nu11->SetBinError(14,0.241514);
   QCD W#rightarrow l#nu11->SetBinError(15,0.1508631);
   QCD W#rightarrow l#nu11->SetBinError(16,0.3326145);
   QCD W#rightarrow l#nu11->SetBinError(17,0.1221627);
   QCD W#rightarrow l#nu11->SetEntries(21);
   QCD W#rightarrow l#nu11->SetDirectory(0);
   QCD W#rightarrow l#nu11->SetStats(0);

   ci = TColor::GetColor("#ffcc66");
   QCD W#rightarrow l#nu11->SetFillColor(ci);
   QCD W#rightarrow l#nu11->GetXaxis()->SetLabelFont(42);
   QCD W#rightarrow l#nu11->GetXaxis()->SetLabelSize(0.035);
   QCD W#rightarrow l#nu11->GetXaxis()->SetTitleSize(0.035);
   QCD W#rightarrow l#nu11->GetXaxis()->SetTitleFont(42);
   QCD W#rightarrow l#nu11->GetYaxis()->SetLabelFont(42);
   QCD W#rightarrow l#nu11->GetYaxis()->SetLabelSize(0.035);
   QCD W#rightarrow l#nu11->GetYaxis()->SetTitleSize(0.035);
   QCD W#rightarrow l#nu11->GetYaxis()->SetTitleFont(42);
   QCD W#rightarrow l#nu11->GetZaxis()->SetLabelFont(42);
   QCD W#rightarrow l#nu11->GetZaxis()->SetLabelSize(0.035);
   QCD W#rightarrow l#nu11->GetZaxis()->SetTitleSize(0.035);
   QCD W#rightarrow l#nu11->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(QCD W#rightarrow l#nu,"");
   
   TH1F *EWK W#rightarrow l#nu12 = new TH1F("EWK W#rightarrow l#nu12","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   EWK W#rightarrow l#nu12->SetBinContent(1,2.038782);
   EWK W#rightarrow l#nu12->SetBinContent(2,2.308738);
   EWK W#rightarrow l#nu12->SetBinContent(3,2.062082);
   EWK W#rightarrow l#nu12->SetBinContent(4,1.652835);
   EWK W#rightarrow l#nu12->SetBinContent(5,0.5489044);
   EWK W#rightarrow l#nu12->SetBinContent(6,0.5884976);
   EWK W#rightarrow l#nu12->SetBinContent(7,1.029987);
   EWK W#rightarrow l#nu12->SetBinContent(8,1.076817);
   EWK W#rightarrow l#nu12->SetBinContent(9,0.866482);
   EWK W#rightarrow l#nu12->SetBinContent(10,0.8051455);
   EWK W#rightarrow l#nu12->SetBinContent(11,0.3846786);
   EWK W#rightarrow l#nu12->SetBinContent(12,0.5580491);
   EWK W#rightarrow l#nu12->SetBinContent(13,0.2068806);
   EWK W#rightarrow l#nu12->SetBinContent(14,0.2185352);
   EWK W#rightarrow l#nu12->SetBinContent(15,0.1616001);
   EWK W#rightarrow l#nu12->SetBinContent(16,0.03989625);
   EWK W#rightarrow l#nu12->SetBinContent(18,0.2933421);
   EWK W#rightarrow l#nu12->SetBinContent(19,0.1202249);
   EWK W#rightarrow l#nu12->SetBinContent(21,0.5667757);
   EWK W#rightarrow l#nu12->SetBinError(1,0.4943864);
   EWK W#rightarrow l#nu12->SetBinError(2,0.5413814);
   EWK W#rightarrow l#nu12->SetBinError(3,0.4962255);
   EWK W#rightarrow l#nu12->SetBinError(4,0.4662516);
   EWK W#rightarrow l#nu12->SetBinError(5,0.231819);
   EWK W#rightarrow l#nu12->SetBinError(6,0.2525271);
   EWK W#rightarrow l#nu12->SetBinError(7,0.361617);
   EWK W#rightarrow l#nu12->SetBinError(8,0.3570205);
   EWK W#rightarrow l#nu12->SetBinError(9,0.3298771);
   EWK W#rightarrow l#nu12->SetBinError(10,0.3248387);
   EWK W#rightarrow l#nu12->SetBinError(11,0.198936);
   EWK W#rightarrow l#nu12->SetBinError(12,0.2554632);
   EWK W#rightarrow l#nu12->SetBinError(13,0.1349631);
   EWK W#rightarrow l#nu12->SetBinError(14,0.1546961);
   EWK W#rightarrow l#nu12->SetBinError(15,0.1616001);
   EWK W#rightarrow l#nu12->SetBinError(16,0.03989625);
   EWK W#rightarrow l#nu12->SetBinError(18,0.170277);
   EWK W#rightarrow l#nu12->SetBinError(19,0.1202249);
   EWK W#rightarrow l#nu12->SetBinError(21,0.2606133);
   EWK W#rightarrow l#nu12->SetEntries(21);
   EWK W#rightarrow l#nu12->SetDirectory(0);
   EWK W#rightarrow l#nu12->SetStats(0);

   ci = TColor::GetColor("#cc6600");
   EWK W#rightarrow l#nu12->SetFillColor(ci);
   EWK W#rightarrow l#nu12->GetXaxis()->SetLabelFont(42);
   EWK W#rightarrow l#nu12->GetXaxis()->SetLabelSize(0.035);
   EWK W#rightarrow l#nu12->GetXaxis()->SetTitleSize(0.035);
   EWK W#rightarrow l#nu12->GetXaxis()->SetTitleFont(42);
   EWK W#rightarrow l#nu12->GetYaxis()->SetLabelFont(42);
   EWK W#rightarrow l#nu12->GetYaxis()->SetLabelSize(0.035);
   EWK W#rightarrow l#nu12->GetYaxis()->SetTitleSize(0.035);
   EWK W#rightarrow l#nu12->GetYaxis()->SetTitleFont(42);
   EWK W#rightarrow l#nu12->GetZaxis()->SetLabelFont(42);
   EWK W#rightarrow l#nu12->GetZaxis()->SetLabelSize(0.035);
   EWK W#rightarrow l#nu12->GetZaxis()->SetTitleSize(0.035);
   EWK W#rightarrow l#nu12->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(EWK W#rightarrow l#nu,"");
   
   TH1F *Top13 = new TH1F("Top13","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   Top13->SetBinContent(1,0.4226065);
   Top13->SetBinContent(2,0.4748102);
   Top13->SetBinContent(3,0.4036559);
   Top13->SetBinContent(4,0.3405848);
   Top13->SetBinContent(5,0.1687735);
   Top13->SetBinContent(6,0.1463771);
   Top13->SetBinContent(7,0.07249582);
   Top13->SetBinContent(8,0.1116767);
   Top13->SetBinContent(10,0.02530215);
   Top13->SetBinContent(11,0.02157512);
   Top13->SetBinContent(12,0.02090285);
   Top13->SetBinContent(17,0.01972432);
   Top13->SetBinContent(21,0.0240147);
   Top13->SetBinError(1,0.09607052);
   Top13->SetBinError(2,0.1291671);
   Top13->SetBinError(3,0.1216788);
   Top13->SetBinError(4,0.08945151);
   Top13->SetBinError(5,0.06488837);
   Top13->SetBinError(6,0.09438641);
   Top13->SetBinError(7,0.04039175);
   Top13->SetBinError(8,0.05189625);
   Top13->SetBinError(10,0.02530215);
   Top13->SetBinError(11,0.02157512);
   Top13->SetBinError(12,0.02090285);
   Top13->SetBinError(17,0.01972432);
   Top13->SetBinError(21,0.0240147);
   Top13->SetEntries(21);
   Top13->SetDirectory(0);
   Top13->SetStats(0);

   ci = TColor::GetColor("#9999cc");
   Top13->SetFillColor(ci);
   Top13->GetXaxis()->SetLabelFont(42);
   Top13->GetXaxis()->SetLabelSize(0.035);
   Top13->GetXaxis()->SetTitleSize(0.035);
   Top13->GetXaxis()->SetTitleFont(42);
   Top13->GetYaxis()->SetLabelFont(42);
   Top13->GetYaxis()->SetLabelSize(0.035);
   Top13->GetYaxis()->SetTitleSize(0.035);
   Top13->GetYaxis()->SetTitleFont(42);
   Top13->GetZaxis()->SetLabelFont(42);
   Top13->GetZaxis()->SetLabelSize(0.035);
   Top13->GetZaxis()->SetTitleSize(0.035);
   Top13->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(Top,"");
   
   TH1F *QCD14 = new TH1F("QCD14","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&alljetsmetnomu_mindphi>1) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   QCD14->SetBinContent(1,2.221649);
   QCD14->SetBinContent(2,0.6251771);
   QCD14->SetBinContent(4,0.6053159);
   QCD14->SetBinContent(21,0.3280852);
   QCD14->SetBinError(1,2.221649);
   QCD14->SetBinError(2,0.6251771);
   QCD14->SetBinError(4,0.605316);
   QCD14->SetBinError(21,0.3225601);
   QCD14->SetEntries(21);
   QCD14->SetDirectory(0);
   QCD14->SetStats(0);

   ci = TColor::GetColor("#ffccff");
   QCD14->SetFillColor(ci);
   QCD14->GetXaxis()->SetLabelFont(42);
   QCD14->GetXaxis()->SetLabelSize(0.035);
   QCD14->GetXaxis()->SetTitleSize(0.035);
   QCD14->GetXaxis()->SetTitleFont(42);
   QCD14->GetYaxis()->SetLabelFont(42);
   QCD14->GetYaxis()->SetLabelSize(0.035);
   QCD14->GetYaxis()->SetTitleSize(0.035);
   QCD14->GetYaxis()->SetTitleFont(42);
   QCD14->GetZaxis()->SetLabelFont(42);
   QCD14->GetZaxis()->SetLabelSize(0.035);
   QCD14->GetZaxis()->SetTitleSize(0.035);
   QCD14->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(QCD,"");
   
   TH1F *VV15 = new TH1F("VV15","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   VV15->SetBinContent(1,0.0464045);
   VV15->SetBinContent(2,0.1555495);
   VV15->SetBinContent(3,0.2708899);
   VV15->SetBinContent(4,0.0712022);
   VV15->SetBinContent(5,0.02483717);
   VV15->SetBinContent(6,0.06377453);
   VV15->SetBinContent(7,0.04727828);
   VV15->SetBinError(1,0.03289999);
   VV15->SetBinError(2,0.08493138);
   VV15->SetBinError(3,0.2708899);
   VV15->SetBinError(4,0.0712022);
   VV15->SetBinError(5,0.02483717);
   VV15->SetBinError(6,0.04574442);
   VV15->SetBinError(7,0.04727828);
   VV15->SetEntries(21);
   VV15->SetDirectory(0);
   VV15->SetStats(0);

   ci = TColor::GetColor("#669966");
   VV15->SetFillColor(ci);
   VV15->GetXaxis()->SetLabelFont(42);
   VV15->GetXaxis()->SetLabelSize(0.035);
   VV15->GetXaxis()->SetTitleSize(0.035);
   VV15->GetXaxis()->SetTitleFont(42);
   VV15->GetYaxis()->SetLabelFont(42);
   VV15->GetYaxis()->SetLabelSize(0.035);
   VV15->GetYaxis()->SetTitleSize(0.035);
   VV15->GetYaxis()->SetTitleFont(42);
   VV15->GetZaxis()->SetLabelFont(42);
   VV15->GetZaxis()->SetLabelSize(0.035);
   VV15->GetZaxis()->SetTitleSize(0.035);
   VV15->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(VV,"");
   
   TH1F *QCD Z#rightarrow#nu#nu16 = new TH1F("QCD Z#rightarrow#nu#nu16","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   QCD Z#rightarrow#nu#nu16->SetBinContent(1,11.2452);
   QCD Z#rightarrow#nu#nu16->SetBinContent(2,7.228728);
   QCD Z#rightarrow#nu#nu16->SetBinContent(3,5.970949);
   QCD Z#rightarrow#nu#nu16->SetBinContent(4,4.847819);
   QCD Z#rightarrow#nu#nu16->SetBinContent(5,2.804847);
   QCD Z#rightarrow#nu#nu16->SetBinContent(6,1.999618);
   QCD Z#rightarrow#nu#nu16->SetBinContent(7,1.354496);
   QCD Z#rightarrow#nu#nu16->SetBinContent(8,1.035194);
   QCD Z#rightarrow#nu#nu16->SetBinContent(9,0.8450516);
   QCD Z#rightarrow#nu#nu16->SetBinContent(10,0.814047);
   QCD Z#rightarrow#nu#nu16->SetBinContent(11,0.7881694);
   QCD Z#rightarrow#nu#nu16->SetBinContent(12,0.2282847);
   QCD Z#rightarrow#nu#nu16->SetBinContent(13,0.1511874);
   QCD Z#rightarrow#nu#nu16->SetBinContent(14,0.2620666);
   QCD Z#rightarrow#nu#nu16->SetBinContent(15,0.1034231);
   QCD Z#rightarrow#nu#nu16->SetBinContent(16,0.08050849);
   QCD Z#rightarrow#nu#nu16->SetBinContent(17,0.1402749);
   QCD Z#rightarrow#nu#nu16->SetBinContent(18,0.1616581);
   QCD Z#rightarrow#nu#nu16->SetBinContent(19,0.02654264);
   QCD Z#rightarrow#nu#nu16->SetBinContent(20,0.2120853);
   QCD Z#rightarrow#nu#nu16->SetBinContent(21,0.1209988);
   QCD Z#rightarrow#nu#nu16->SetBinError(1,0.6895361);
   QCD Z#rightarrow#nu#nu16->SetBinError(2,0.5435646);
   QCD Z#rightarrow#nu#nu16->SetBinError(3,0.4982344);
   QCD Z#rightarrow#nu#nu16->SetBinError(4,0.4679855);
   QCD Z#rightarrow#nu#nu16->SetBinError(5,0.3207087);
   QCD Z#rightarrow#nu#nu16->SetBinError(6,0.2648868);
   QCD Z#rightarrow#nu#nu16->SetBinError(7,0.2316188);
   QCD Z#rightarrow#nu#nu16->SetBinError(8,0.2246252);
   QCD Z#rightarrow#nu#nu16->SetBinError(9,0.1753626);
   QCD Z#rightarrow#nu#nu16->SetBinError(10,0.1875035);
   QCD Z#rightarrow#nu#nu16->SetBinError(11,0.173976);
   QCD Z#rightarrow#nu#nu16->SetBinError(12,0.08283631);
   QCD Z#rightarrow#nu#nu16->SetBinError(13,0.06596896);
   QCD Z#rightarrow#nu#nu16->SetBinError(14,0.09651465);
   QCD Z#rightarrow#nu#nu16->SetBinError(15,0.06526608);
   QCD Z#rightarrow#nu#nu16->SetBinError(16,0.0521533);
   QCD Z#rightarrow#nu#nu16->SetBinError(17,0.07236114);
   QCD Z#rightarrow#nu#nu16->SetBinError(18,0.08914302);
   QCD Z#rightarrow#nu#nu16->SetBinError(19,0.01903293);
   QCD Z#rightarrow#nu#nu16->SetBinError(20,0.09234791);
   QCD Z#rightarrow#nu#nu16->SetBinError(21,0.06008491);
   QCD Z#rightarrow#nu#nu16->SetEntries(21);
   QCD Z#rightarrow#nu#nu16->SetDirectory(0);
   QCD Z#rightarrow#nu#nu16->SetStats(0);

   ci = TColor::GetColor("#0066cc");
   QCD Z#rightarrow#nu#nu16->SetFillColor(ci);
   QCD Z#rightarrow#nu#nu16->GetXaxis()->SetLabelFont(42);
   QCD Z#rightarrow#nu#nu16->GetXaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#nu#nu16->GetXaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#nu#nu16->GetXaxis()->SetTitleFont(42);
   QCD Z#rightarrow#nu#nu16->GetYaxis()->SetLabelFont(42);
   QCD Z#rightarrow#nu#nu16->GetYaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#nu#nu16->GetYaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#nu#nu16->GetYaxis()->SetTitleFont(42);
   QCD Z#rightarrow#nu#nu16->GetZaxis()->SetLabelFont(42);
   QCD Z#rightarrow#nu#nu16->GetZaxis()->SetLabelSize(0.035);
   QCD Z#rightarrow#nu#nu16->GetZaxis()->SetTitleSize(0.035);
   QCD Z#rightarrow#nu#nu16->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(QCD Z#rightarrow#nu#nu,"");
   
   TH1F *EWK Z#rightarrow#nu#nu17 = new TH1F("EWK Z#rightarrow#nu#nu17","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   EWK Z#rightarrow#nu#nu17->SetBinContent(1,3.322397);
   EWK Z#rightarrow#nu#nu17->SetBinContent(2,2.468372);
   EWK Z#rightarrow#nu#nu17->SetBinContent(3,3.303061);
   EWK Z#rightarrow#nu#nu17->SetBinContent(4,1.772031);
   EWK Z#rightarrow#nu#nu17->SetBinContent(5,2.544153);
   EWK Z#rightarrow#nu#nu17->SetBinContent(6,0.8901407);
   EWK Z#rightarrow#nu#nu17->SetBinContent(7,1.451381);
   EWK Z#rightarrow#nu#nu17->SetBinContent(8,0.3669709);
   EWK Z#rightarrow#nu#nu17->SetBinContent(9,1.163298);
   EWK Z#rightarrow#nu#nu17->SetBinContent(10,0.7390324);
   EWK Z#rightarrow#nu#nu17->SetBinContent(11,0.8468723);
   EWK Z#rightarrow#nu#nu17->SetBinContent(12,0.4409763);
   EWK Z#rightarrow#nu#nu17->SetBinContent(13,0.3569485);
   EWK Z#rightarrow#nu#nu17->SetBinContent(14,0.4351356);
   EWK Z#rightarrow#nu#nu17->SetBinContent(15,0.2673908);
   EWK Z#rightarrow#nu#nu17->SetBinContent(16,0.1567015);
   EWK Z#rightarrow#nu#nu17->SetBinContent(17,0.1247009);
   EWK Z#rightarrow#nu#nu17->SetBinContent(18,0.1880564);
   EWK Z#rightarrow#nu#nu17->SetBinContent(19,0.2288975);
   EWK Z#rightarrow#nu#nu17->SetBinContent(20,0.1575954);
   EWK Z#rightarrow#nu#nu17->SetBinContent(21,0.7686954);
   EWK Z#rightarrow#nu#nu17->SetBinError(1,0.5512984);
   EWK Z#rightarrow#nu#nu17->SetBinError(2,0.465655);
   EWK Z#rightarrow#nu#nu17->SetBinError(3,0.50234);
   EWK Z#rightarrow#nu#nu17->SetBinError(4,0.3849706);
   EWK Z#rightarrow#nu#nu17->SetBinError(5,0.4611329);
   EWK Z#rightarrow#nu#nu17->SetBinError(6,0.2672354);
   EWK Z#rightarrow#nu#nu17->SetBinError(7,0.35538);
   EWK Z#rightarrow#nu#nu17->SetBinError(8,0.161398);
   EWK Z#rightarrow#nu#nu17->SetBinError(9,0.3258229);
   EWK Z#rightarrow#nu#nu17->SetBinError(10,0.2409885);
   EWK Z#rightarrow#nu#nu17->SetBinError(11,0.2647857);
   EWK Z#rightarrow#nu#nu17->SetBinError(12,0.1851148);
   EWK Z#rightarrow#nu#nu17->SetBinError(13,0.1627184);
   EWK Z#rightarrow#nu#nu17->SetBinError(14,0.1949348);
   EWK Z#rightarrow#nu#nu17->SetBinError(15,0.1295442);
   EWK Z#rightarrow#nu#nu17->SetBinError(16,0.1111698);
   EWK Z#rightarrow#nu#nu17->SetBinError(17,0.07758118);
   EWK Z#rightarrow#nu#nu17->SetBinError(18,0.1331124);
   EWK Z#rightarrow#nu#nu17->SetBinError(19,0.1335451);
   EWK Z#rightarrow#nu#nu17->SetBinError(20,0.1118586);
   EWK Z#rightarrow#nu#nu17->SetBinError(21,0.2511461);
   EWK Z#rightarrow#nu#nu17->SetEntries(21);
   EWK Z#rightarrow#nu#nu17->SetDirectory(0);
   EWK Z#rightarrow#nu#nu17->SetStats(0);

   ci = TColor::GetColor("#006699");
   EWK Z#rightarrow#nu#nu17->SetFillColor(ci);
   EWK Z#rightarrow#nu#nu17->GetXaxis()->SetLabelFont(42);
   EWK Z#rightarrow#nu#nu17->GetXaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#nu#nu17->GetXaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#nu#nu17->GetXaxis()->SetTitleFont(42);
   EWK Z#rightarrow#nu#nu17->GetYaxis()->SetLabelFont(42);
   EWK Z#rightarrow#nu#nu17->GetYaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#nu#nu17->GetYaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#nu#nu17->GetYaxis()->SetTitleFont(42);
   EWK Z#rightarrow#nu#nu17->GetZaxis()->SetLabelFont(42);
   EWK Z#rightarrow#nu#nu17->GetZaxis()->SetLabelSize(0.035);
   EWK Z#rightarrow#nu#nu17->GetZaxis()->SetTitleSize(0.035);
   EWK Z#rightarrow#nu#nu17->GetZaxis()->SetTitleFont(42);
   stackdijet_M->Add(EWK Z#rightarrow#nu#nu,"");
   stackdijet_M->Draw("hist");
   
   TH1F *totalerrordijet_M18 = new TH1F("totalerrordijet_M18","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   totalerrordijet_M18->SetBinContent(1,27.50328);
   totalerrordijet_M18->SetBinContent(2,21.50355);
   totalerrordijet_M18->SetBinContent(3,18.43234);
   totalerrordijet_M18->SetBinContent(4,12.68101);
   totalerrordijet_M18->SetBinContent(5,8.585475);
   totalerrordijet_M18->SetBinContent(6,5.74);
   totalerrordijet_M18->SetBinContent(7,4.942858);
   totalerrordijet_M18->SetBinContent(8,3.517254);
   totalerrordijet_M18->SetBinContent(9,3.566097);
   totalerrordijet_M18->SetBinContent(10,2.610353);
   totalerrordijet_M18->SetBinContent(11,2.359168);
   totalerrordijet_M18->SetBinContent(12,1.888073);
   totalerrordijet_M18->SetBinContent(13,1.057668);
   totalerrordijet_M18->SetBinContent(14,1.173403);
   totalerrordijet_M18->SetBinContent(15,0.6832771);
   totalerrordijet_M18->SetBinContent(16,0.6097208);
   totalerrordijet_M18->SetBinContent(17,0.4068629);
   totalerrordijet_M18->SetBinContent(18,0.6430566);
   totalerrordijet_M18->SetBinContent(19,0.375665);
   totalerrordijet_M18->SetBinContent(20,0.3696806);
   totalerrordijet_M18->SetBinContent(21,1.80857);
   totalerrordijet_M18->SetBinError(1,6.224176);
   totalerrordijet_M18->SetBinError(2,4.866397);
   totalerrordijet_M18->SetBinError(3,4.171362);
   totalerrordijet_M18->SetBinError(4,2.869798);
   totalerrordijet_M18->SetBinError(5,1.94295);
   totalerrordijet_M18->SetBinError(6,1.299);
   totalerrordijet_M18->SetBinError(7,1.118602);
   totalerrordijet_M18->SetBinError(8,0.7959781);
   totalerrordijet_M18->SetBinError(9,0.8070315);
   totalerrordijet_M18->SetBinError(10,0.5907403);
   totalerrordijet_M18->SetBinError(11,0.5338956);
   totalerrordijet_M18->SetBinError(12,0.4272836);
   totalerrordijet_M18->SetBinError(13,0.2393574);
   totalerrordijet_M18->SetBinError(14,0.2655488);
   totalerrordijet_M18->SetBinError(15,0.1546302);
   totalerrordijet_M18->SetBinError(16,0.1379839);
   totalerrordijet_M18->SetBinError(17,0.09207579);
   totalerrordijet_M18->SetBinError(18,0.145528);
   totalerrordijet_M18->SetBinError(19,0.0850155);
   totalerrordijet_M18->SetBinError(20,0.08366119);
   totalerrordijet_M18->SetBinError(21,0.4092914);
   totalerrordijet_M18->SetEntries(147);
   totalerrordijet_M18->SetDirectory(0);
   totalerrordijet_M18->SetStats(0);
   totalerrordijet_M18->SetFillColor(1);
   totalerrordijet_M18->SetFillStyle(3004);
   totalerrordijet_M18->GetXaxis()->SetLabelFont(42);
   totalerrordijet_M18->GetXaxis()->SetLabelSize(0.035);
   totalerrordijet_M18->GetXaxis()->SetTitleSize(0.035);
   totalerrordijet_M18->GetXaxis()->SetTitleFont(42);
   totalerrordijet_M18->GetYaxis()->SetLabelFont(42);
   totalerrordijet_M18->GetYaxis()->SetLabelSize(0.035);
   totalerrordijet_M18->GetYaxis()->SetTitleSize(0.035);
   totalerrordijet_M18->GetYaxis()->SetTitleFont(42);
   totalerrordijet_M18->GetZaxis()->SetLabelFont(42);
   totalerrordijet_M18->GetZaxis()->SetLabelSize(0.035);
   totalerrordijet_M18->GetZaxis()->SetTitleSize(0.035);
   totalerrordijet_M18->GetZaxis()->SetTitleFont(42);
   totalerrordijet_M18->Draw("E2same");
   
   TH1F *totlinedijet_M19 = new TH1F("totlinedijet_M19","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   totlinedijet_M19->SetBinContent(1,27.50328);
   totlinedijet_M19->SetBinContent(2,21.50355);
   totlinedijet_M19->SetBinContent(3,18.43234);
   totlinedijet_M19->SetBinContent(4,12.68101);
   totlinedijet_M19->SetBinContent(5,8.585475);
   totlinedijet_M19->SetBinContent(6,5.74);
   totlinedijet_M19->SetBinContent(7,4.942858);
   totlinedijet_M19->SetBinContent(8,3.517254);
   totlinedijet_M19->SetBinContent(9,3.566097);
   totlinedijet_M19->SetBinContent(10,2.610353);
   totlinedijet_M19->SetBinContent(11,2.359168);
   totlinedijet_M19->SetBinContent(12,1.888073);
   totlinedijet_M19->SetBinContent(13,1.057668);
   totlinedijet_M19->SetBinContent(14,1.173403);
   totlinedijet_M19->SetBinContent(15,0.6832771);
   totlinedijet_M19->SetBinContent(16,0.6097208);
   totlinedijet_M19->SetBinContent(17,0.4068629);
   totlinedijet_M19->SetBinContent(18,0.6430566);
   totlinedijet_M19->SetBinContent(19,0.375665);
   totlinedijet_M19->SetBinContent(20,0.3696806);
   totlinedijet_M19->SetBinContent(21,1.80857);
   totlinedijet_M19->SetBinError(1,6.224176);
   totlinedijet_M19->SetBinError(2,4.866397);
   totlinedijet_M19->SetBinError(3,4.171362);
   totlinedijet_M19->SetBinError(4,2.869798);
   totlinedijet_M19->SetBinError(5,1.94295);
   totlinedijet_M19->SetBinError(6,1.299);
   totlinedijet_M19->SetBinError(7,1.118602);
   totlinedijet_M19->SetBinError(8,0.7959781);
   totlinedijet_M19->SetBinError(9,0.8070315);
   totlinedijet_M19->SetBinError(10,0.5907403);
   totlinedijet_M19->SetBinError(11,0.5338956);
   totlinedijet_M19->SetBinError(12,0.4272836);
   totlinedijet_M19->SetBinError(13,0.2393574);
   totlinedijet_M19->SetBinError(14,0.2655488);
   totlinedijet_M19->SetBinError(15,0.1546302);
   totlinedijet_M19->SetBinError(16,0.1379839);
   totlinedijet_M19->SetBinError(17,0.09207579);
   totlinedijet_M19->SetBinError(18,0.145528);
   totlinedijet_M19->SetBinError(19,0.0850155);
   totlinedijet_M19->SetBinError(20,0.08366119);
   totlinedijet_M19->SetBinError(21,0.4092914);
   totlinedijet_M19->SetEntries(147);
   totlinedijet_M19->SetDirectory(0);
   totlinedijet_M19->SetStats(0);
   totlinedijet_M19->SetFillColor(1);
   totlinedijet_M19->SetFillStyle(0);
   totlinedijet_M19->GetXaxis()->SetLabelFont(42);
   totlinedijet_M19->GetXaxis()->SetLabelSize(0.035);
   totlinedijet_M19->GetXaxis()->SetTitleSize(0.035);
   totlinedijet_M19->GetXaxis()->SetTitleFont(42);
   totlinedijet_M19->GetYaxis()->SetLabelFont(42);
   totlinedijet_M19->GetYaxis()->SetLabelSize(0.035);
   totlinedijet_M19->GetYaxis()->SetTitleSize(0.035);
   totlinedijet_M19->GetYaxis()->SetTitleFont(42);
   totlinedijet_M19->GetZaxis()->SetLabelFont(42);
   totlinedijet_M19->GetZaxis()->SetLabelSize(0.035);
   totlinedijet_M19->GetZaxis()->SetTitleSize(0.035);
   totlinedijet_M19->GetZaxis()->SetTitleFont(42);
   totlinedijet_M19->Draw("histsame");
   
   Double_t Graph_from_Data_fx3003[21] = {
   1172.5,
   1317.5,
   1462.5,
   1607.5,
   1752.5,
   1897.5,
   2042.5,
   2187.5,
   2332.5,
   2477.5,
   2622.5,
   2767.5,
   2912.5,
   3057.5,
   3202.5,
   3347.5,
   3492.5,
   3637.5,
   3782.5,
   3927.5,
   4072.5};
   Double_t Graph_from_Data_fy3003[21] = {
   33,
   23,
   17,
   15,
   9,
   6,
   3,
   5,
   3,
   3,
   1,
   0,
   1,
   3,
   3,
   0,
   1,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Data_felx3003[21] = {
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5};
   Double_t Graph_from_Data_fely3003[21] = {
   5.715412,
   4.760806,
   4.082258,
   3.829449,
   2.943511,
   2.379969,
   1.632727,
   2.159724,
   1.632727,
   1.632727,
   0.8272525,
   0,
   0.8272525,
   1.632727,
   1.632727,
   0,
   0.8272525,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Data_fehx3003[21] = {
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5};
   Double_t Graph_from_Data_fehy3003[21] = {
   6.802707,
   5.865355,
   5.203825,
   4.958839,
   4.110286,
   3.583712,
   2.918242,
   3.382539,
   2.918242,
   2.918242,
   2.29957,
   1.841055,
   2.29957,
   2.918242,
   2.918242,
   1.841055,
   2.29957,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_Data_fx3003,Graph_from_Data_fy3003,Graph_from_Data_felx3003,Graph_from_Data_fehx3003,Graph_from_Data_fely3003,Graph_from_Data_fehy3003);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_from_Data3003 = new TH1F("Graph_Graph_from_Data3003","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,795.5,4449.5);
   Graph_Graph_from_Data3003->SetMinimum(0);
   Graph_Graph_from_Data3003->SetMaximum(43.78298);
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
   
   TH1F *Signal20 = new TH1F("Signal20","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3) ) * (total_weight_lepveto*1.024*1)}",21,1100,4145);
   Signal20->SetBinContent(1,8.334653);
   Signal20->SetBinContent(2,8.277527);
   Signal20->SetBinContent(3,5.327394);
   Signal20->SetBinContent(4,5.833729);
   Signal20->SetBinContent(5,5.71898);
   Signal20->SetBinContent(6,5.4569);
   Signal20->SetBinContent(7,3.481935);
   Signal20->SetBinContent(8,2.303842);
   Signal20->SetBinContent(9,2.239268);
   Signal20->SetBinContent(10,1.643163);
   Signal20->SetBinContent(11,2.088463);
   Signal20->SetBinContent(12,1.233617);
   Signal20->SetBinContent(13,0.8056033);
   Signal20->SetBinContent(14,1.562205);
   Signal20->SetBinContent(15,0.9623361);
   Signal20->SetBinContent(16,0.4773813);
   Signal20->SetBinContent(17,0.661063);
   Signal20->SetBinContent(18,0.4471028);
   Signal20->SetBinContent(19,0.3896698);
   Signal20->SetBinContent(20,0.1852502);
   Signal20->SetBinContent(21,1.599003);
   Signal20->SetBinError(1,1.012238);
   Signal20->SetBinError(2,0.9707105);
   Signal20->SetBinError(3,0.6922871);
   Signal20->SetBinError(4,0.9463917);
   Signal20->SetBinError(5,0.8625779);
   Signal20->SetBinError(6,0.920547);
   Signal20->SetBinError(7,0.7352054);
   Signal20->SetBinError(8,0.4497425);
   Signal20->SetBinError(9,0.4532003);
   Signal20->SetBinError(10,0.3671373);
   Signal20->SetBinError(11,0.4375653);
   Signal20->SetBinError(12,0.3456228);
   Signal20->SetBinError(13,0.2500245);
   Signal20->SetBinError(14,0.5229882);
   Signal20->SetBinError(15,0.2914018);
   Signal20->SetBinError(16,0.1970457);
   Signal20->SetBinError(17,0.2316692);
   Signal20->SetBinError(18,0.1894494);
   Signal20->SetBinError(19,0.195121);
   Signal20->SetBinError(20,0.1028311);
   Signal20->SetBinError(21,0.3623444);
   Signal20->SetEntries(21);
   Signal20->SetDirectory(0);
   Signal20->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Signal20->SetLineColor(ci);
   Signal20->SetLineWidth(3);
   Signal20->GetXaxis()->SetLabelFont(42);
   Signal20->GetXaxis()->SetLabelSize(0.035);
   Signal20->GetXaxis()->SetTitleSize(0.035);
   Signal20->GetXaxis()->SetTitleFont(42);
   Signal20->GetYaxis()->SetLabelFont(42);
   Signal20->GetYaxis()->SetLabelSize(0.035);
   Signal20->GetYaxis()->SetTitleSize(0.035);
   Signal20->GetYaxis()->SetTitleFont(42);
   Signal20->GetZaxis()->SetLabelFont(42);
   Signal20->GetZaxis()->SetLabelSize(0.035);
   Signal20->GetZaxis()->SetTitleSize(0.035);
   Signal20->GetZaxis()->SetTitleFont(42);
   Signal20->Draw("samehisthist");
   
   Double_t Graph_from_Data_fx3004[21] = {
   1172.5,
   1317.5,
   1462.5,
   1607.5,
   1752.5,
   1897.5,
   2042.5,
   2187.5,
   2332.5,
   2477.5,
   2622.5,
   2767.5,
   2912.5,
   3057.5,
   3202.5,
   3347.5,
   3492.5,
   3637.5,
   3782.5,
   3927.5,
   4072.5};
   Double_t Graph_from_Data_fy3004[21] = {
   33,
   23,
   17,
   15,
   9,
   6,
   3,
   5,
   3,
   3,
   1,
   0,
   1,
   3,
   3,
   0,
   1,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Data_felx3004[21] = {
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5};
   Double_t Graph_from_Data_fely3004[21] = {
   5.715412,
   4.760806,
   4.082258,
   3.829449,
   2.943511,
   2.379969,
   1.632727,
   2.159724,
   1.632727,
   1.632727,
   0.8272525,
   0,
   0.8272525,
   1.632727,
   1.632727,
   0,
   0.8272525,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Data_fehx3004[21] = {
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5,
   72.5};
   Double_t Graph_from_Data_fehy3004[21] = {
   6.802707,
   5.865355,
   5.203825,
   4.958839,
   4.110286,
   3.583712,
   2.918242,
   3.382539,
   2.918242,
   2.918242,
   2.29957,
   1.841055,
   2.29957,
   2.918242,
   2.918242,
   1.841055,
   2.29957,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   grae = new TGraphAsymmErrors(21,Graph_from_Data_fx3004,Graph_from_Data_fy3004,Graph_from_Data_felx3004,Graph_from_Data_fehx3004,Graph_from_Data_fely3004,Graph_from_Data_fehy3004);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_Graph_from_Data30033004 = new TH1F("Graph_Graph_Graph_from_Data30033004","dijet_M {( (jet1_eta*jet2_eta<0 && abs(jet1_eta)<4.7 && abs(jet2_eta)<4.7 && dijet_M>1100&&jet1_pt>80&&dijet_deta>3.6&& jet2_pt>70&&metnomuons>200) && (nvetomuons==0&&nvetoelectrons==0&&metnomuons>200&&dijet_M>1100&&alljetsmetnomu_mindphi>=2.3&&(pass_sigtrigger==1)) ) * (weight_nolep*1)}",100,795.5,4449.5);
   Graph_Graph_Graph_from_Data30033004->SetMinimum(0);
   Graph_Graph_Graph_from_Data30033004->SetMaximum(43.78298);
   Graph_Graph_Graph_from_Data30033004->SetDirectory(0);
   Graph_Graph_Graph_from_Data30033004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_from_Data30033004->SetLineColor(ci);
   Graph_Graph_Graph_from_Data30033004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_Data30033004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_Data30033004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_Data30033004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_Data30033004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_Data30033004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_Data30033004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_Data30033004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_from_Data30033004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_Data30033004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_from_Data30033004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_from_Data30033004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_from_Data30033004);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.6,0.359,0.89,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("QCD W#rightarrow l#nu","QCD W#rightarrow l#nu","ff");

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
   entry=leg->AddEntry("EWK W#rightarrow l#nu","EWK W#rightarrow l#nu","ff");

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
   entry=leg->AddEntry("QCD Z#rightarrow#nu#nu","QCD Z#rightarrow#nu#nu","ff");

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
   entry=leg->AddEntry("EWK Z#rightarrow#nu#nu","EWK Z#rightarrow#nu#nu","ff");

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
   entry=leg->AddEntry("Signal","Signal","llll");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
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
