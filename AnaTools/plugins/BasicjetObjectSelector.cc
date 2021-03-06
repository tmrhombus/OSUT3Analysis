#include "OSUT3Analysis/AnaTools/interface/ObjectSelector.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#if IS_VALID(basicjets)
typedef ObjectSelector<osu::Basicjet, TYPE(basicjets)> BasicjetObjectSelector;
  DEFINE_FWK_MODULE(BasicjetObjectSelector);
#endif
