////////////////////////////////////////////////////////////////////////
// Class:       bb
// Plugin Type: producer (art v2_05_00)
// File:        bb_module.cc
//
// Generated at Mon Feb 20 16:03:26 2017 by yifanch using cetskelgen
// from cetlib version v1_21_00.
////////////////////////////////////////////////////////////////////////

#include "art/Framework/Core/EDProducer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "canvas/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"

#include <memory>

class bb;


class bb : public art::EDProducer {
public:
  explicit bb(fhicl::ParameterSet const & p);
  // The compiler-generated destructor is fine for non-base
  // classes without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  bb(bb const &) = delete;
  bb(bb &&) = delete;
  bb & operator = (bb const &) = delete;
  bb & operator = (bb &&) = delete;

  // Required functions.
  void produce(art::Event & e) override;

  // Selected optional functions.
  void beginJob() override;
  void beginRun(art::Run & r) override;
  void beginSubRun(art::SubRun & sr) override;
  void endJob() override;
  void endRun(art::Run & r) override;
  void endSubRun(art::SubRun & sr) override;
  void reconfigure(fhicl::ParameterSet const & p) override;
  void respondToCloseInputFile(art::FileBlock const & fb) override;
  void respondToCloseOutputFiles(art::FileBlock const & fb) override;
  void respondToOpenInputFile(art::FileBlock const & fb) override;
  void respondToOpenOutputFiles(art::FileBlock const & fb) override;

private:

  // Declare member data here.

};


bb::bb(fhicl::ParameterSet const & p)
// :
// Initialize member data here.
{
  // Call appropriate produces<>() functions here.
}

void bb::produce(art::Event & e)
{
 std::cout<<"Event_ID"<<e.id().event()<<std::endl;
  // Implementation of required member function here.
}

void bb::beginJob()
{
  // Implementation of optional member function here.
}

void bb::beginRun(art::Run & r)
{
  // Implementation of optional member function here.
}

void bb::beginSubRun(art::SubRun & sr)
{
  // Implementation of optional member function here.
}

void bb::endJob()
{
  // Implementation of optional member function here.
}

void bb::endRun(art::Run & r)
{
  // Implementation of optional member function here.
}

void bb::endSubRun(art::SubRun & sr)
{
  // Implementation of optional member function here.
}

void bb::reconfigure(fhicl::ParameterSet const & p)
{
  // Implementation of optional member function here.
}

void bb::respondToCloseInputFile(art::FileBlock const & fb)
{
  // Implementation of optional member function here.
}

void bb::respondToCloseOutputFiles(art::FileBlock const & fb)
{
  // Implementation of optional member function here.
}

void bb::respondToOpenInputFile(art::FileBlock const & fb)
{
  // Implementation of optional member function here.
}

void bb::respondToOpenOutputFiles(art::FileBlock const & fb)
{
  // Implementation of optional member function here.
}

DEFINE_ART_MODULE(bb)
