cd /vols/cms04/pjd12/invcmssws/CMSSW_5_3_7/src/UserCode/ICHiggsTauTau/Analysis/HiggsNuNu/LightTreeAna
source /vols/cms/grid/setup.sh
export SCRAM_ARCH=slc5_amd64_gcc462
eval `scramv1 runtime -sh`
source /vols/cms04/pjd12/invcmssws/CMSSW_5_3_7/src/UserCode/ICHiggsTauTau/Analysis/HiggsNuNu/LightTreeAna/scripts/setup_libs.sh
eval ./bin/LTAnalysis --cfg=scripts/DefaultConfig.cfg --channel=nunu -o output_contplots_alljets10topalljets5/nunu.root &> jobs_contplots_alljets10topalljets5//nunu.log
