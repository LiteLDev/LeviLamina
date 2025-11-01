#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct SimulcastLayer; }
// clang-format on

namespace cricket {

class SimulcastLayerList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb6efe0;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastLayerList& operator=(SimulcastLayerList const&);
    SimulcastLayerList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddLayer(::cricket::SimulcastLayer const& layer);

    MCNAPI void AddLayerWithAlternatives(::std::vector<::cricket::SimulcastLayer> const& rids);

    MCNAPI ::std::vector<::cricket::SimulcastLayer> GetAllLayers() const;

    MCNAPI SimulcastLayerList(::cricket::SimulcastLayerList const&);

    MCNAPI ::cricket::SimulcastLayerList& operator=(::cricket::SimulcastLayerList&&);

    MCNAPI ~SimulcastLayerList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::SimulcastLayerList const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
