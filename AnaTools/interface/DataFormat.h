#ifndef DATA_FORMAT

#define  BEAN      0
#define  MINI_AOD  1
#define  AOD       2

#define DATA_FORMAT MINI_AOD

#define INVALID_TYPE void *

#if DATA_FORMAT == BEAN
  #define  beamspots_TYPE       INVALID_TYPE
  #define  bxlumis_TYPE         BNbxlumi
  #define  bxlumis_TYPE         BNbxlumi
  #define  electrons_TYPE       BNelectron
  #define  events_TYPE          BNevent
  #define  genjets_TYPE         BNgenjet
  #define  basicjets_TYPE       INVALID_TYPE
  #define  jets_TYPE            BNjet
  #define  mcparticles_TYPE     BNmcparticle
  #define  mets_TYPE            BNmet
  #define  muons_TYPE           BNmuon
  #define  photons_TYPE         BNphoton
  #define  primaryvertexs_TYPE  BNprimaryvertex
  #define  superclusters_TYPE   BNsupercluster
  #define  taus_TYPE            BNtau
  #define  tracks_TYPE          BNtrack
  #define  trigobjs_TYPE        BNtrigobj
  #define  uservariables_TYPE   VariableProducerPayload
  #define  eventvariables_TYPE  EventVariableProducerPayload

  #define  triggers_TYPE        BNtriggerCollection

  #define  basicjets_INVALID
  #define  beamspots_INVALID

  #include "BEAN/Collections/interface/BNbxlumi.h"
  #include "BEAN/Collections/interface/BNelectron.h"
  #include "BEAN/Collections/interface/BNevent.h"
  #include "BEAN/Collections/interface/BNgenjet.h"
  #include "BEAN/Collections/interface/BNjet.h"
  #include "BEAN/Collections/interface/BNmcparticle.h"
  #include "BEAN/Collections/interface/BNmet.h"
  #include "BEAN/Collections/interface/BNmuon.h"
  #include "BEAN/Collections/interface/BNphoton.h"
  #include "BEAN/Collections/interface/BNprimaryvertex.h"
  #include "BEAN/Collections/interface/BNsupercluster.h"
  #include "BEAN/Collections/interface/BNtau.h"
  #include "BEAN/Collections/interface/BNtrack.h"
  #include "BEAN/Collections/interface/BNtrigger.h"
  #include "BEAN/Collections/interface/BNtrigobj.h"

#elif DATA_FORMAT == MINI_AOD
  #define  beamspots_TYPE       reco::BeamSpot
  #define  bxlumis_TYPE         INVALID_TYPE
  #define  electrons_TYPE       pat::Electron
  #define  events_TYPE          INVALID_TYPE
  #define  genjets_TYPE         reco::GenJet
  #define  basicjets_TYPE       pat::Jet
  #define  jets_TYPE            pat::Jet
  #define  mcparticles_TYPE     pat::PackedGenParticle
  #define  mets_TYPE            pat::MET
  #define  muons_TYPE           pat::Muon
  #define  photons_TYPE         pat::Photon
  #define  primaryvertexs_TYPE  reco::Vertex
  #define  superclusters_TYPE   reco::SuperCluster
  #define  taus_TYPE            pat::Tau
  #define  tracks_TYPE          INVALID_TYPE
  #define  trigobjs_TYPE        pat::TriggerObjectStandAlone
  #define  uservariables_TYPE   VariableProducerPayload
  #define  eventvariables_TYPE  EventVariableProducerPayload

  #define  triggers_TYPE        edm::TriggerResults

  #define  bxlumis_INVALID
  #define  events_INVALID
  #define  tracks_INVALID

  #include "DataFormats/BeamSpot/interface/BeamSpot.h"
  #include "DataFormats/Common/interface/TriggerResults.h"
  #include "DataFormats/EgammaReco/interface/SuperCluster.h"
  #include "DataFormats/JetReco/interface/BasicJet.h"
  #include "DataFormats/JetReco/interface/GenJet.h"
  #include "DataFormats/PatCandidates/interface/Electron.h"
  #include "DataFormats/PatCandidates/interface/Jet.h"
  #include "DataFormats/PatCandidates/interface/MET.h"
  #include "DataFormats/PatCandidates/interface/Muon.h"
  #include "DataFormats/PatCandidates/interface/PackedGenParticle.h"
  #include "DataFormats/PatCandidates/interface/Photon.h"
  #include "DataFormats/PatCandidates/interface/Tau.h"
  #include "DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h"
  #include "DataFormats/VertexReco/interface/Vertex.h"

#elif DATA_FORMAT == AOD
  #define  beamspots_TYPE       reco::BeamSpot
  #define  bxlumis_TYPE         INVALID_TYPE
  #define  electrons_TYPE       reco::GsfElectron
  #define  events_TYPE          INVALID_TYPE
  #define  genjets_TYPE         INVALID_TYPE
  #define  jets_TYPE            reco::PFJet
  #define  basicjets_TYPE       reco::BasicJet
  #define  mcparticles_TYPE     INVALID_TYPE
  #define  mets_TYPE            reco::PFMET
  #define  muons_TYPE           reco::Muon
  #define  photons_TYPE         reco::Photon
  #define  primaryvertexs_TYPE  reco::Vertex
  #define  superclusters_TYPE   INVALID_TYPE
  #define  taus_TYPE            reco::PFTau
  #define  tracks_TYPE          reco::Track
  #define  trigobjs_TYPE        INVALID_TYPE
  #define  uservariables_TYPE   VariableProducerPayload
  #define  eventvariables_TYPE  EventVariableProducerPayload

  #define  triggers_TYPE        edm::TriggerResults

  #define  bxlumis_INVALID
  #define  events_INVALID
  #define  genjets_INVALID
  #define  mcparticles_INVALID
  #define  superclusters_INVALID
  #define  trigobjs_INVALID

  #include "DataFormats/BeamSpot/interface/BeamSpot.h"
  #include "DataFormats/Common/interface/TriggerResults.h"
  #include "DataFormats/VertexReco/interface/Vertex.h"
  #include "DataFormats/EgammaCandidates/interface/GsfElectron.h"
  #include "DataFormats/JetReco/interface/PFJet.h"
  #include "DataFormats/JetReco/interface/BasicJet.h"
  #include "DataFormats/METReco/interface/PFMET.h"
  #include "DataFormats/MuonReco/interface/Muon.h"
  #include "DataFormats/EgammaCandidates/interface/Photon.h"
  #include "DataFormats/TauReco/interface/PFTau.h"
  #include "DataFormats/TrackReco/interface/Track.h"

#else
  #error "Data format is not valid."
#endif

#define XSTR(x) STR(x)
#define STR(x) #x
#define IS_VALID(x) !(defined (x##_INVALID))
#define EQ_VALID(s,x) (string (XSTR(x##_TYPE)) != XSTR(INVALID_TYPE) && string (s) == XSTR(x))

#define TYPE(x) x##_TYPE
#define TYPE_STR(x) XSTR(x##_TYPE)

#include <string>
#include "boost/config.hpp"
#include "RVersion.h"

#if ROOT_VERSION_CODE >= ROOT_VERSION(6,0,0)
  #define ROOT6
  #warning "ROOT 6 is currently barely supported and many features may not work. Proceed at your own risk."
#elif ROOT_VERSION_CODE >= ROOT_VERSION(5,0,0)
  #define ROOT5
#else
  #error "Only ROOT 5 and 6 are supported."
#endif

#define SUPPORTED_VERSION "CMSSW_7_4_5_ROOT5"
#if !defined(BOOST_NO_CXX11_STATIC_ASSERT)
  static_assert (strcmp (PROJECT_VERSION, SUPPORTED_VERSION) == 0, SUPPORTED_VERSION " is the currently supported release. Please switch.");
#endif

using namespace std;

#endif
