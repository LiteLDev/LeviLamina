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
    MCAPI void AddLayer(::cricket::SimulcastLayer const&);

    MCAPI void AddLayerWithAlternatives(::std::vector<::cricket::SimulcastLayer> const&);

    MCAPI ::std::vector<::cricket::SimulcastLayer> GetAllLayers() const;

    MCAPI SimulcastLayerList(::cricket::SimulcastLayerList const&);

    MCAPI ::cricket::SimulcastLayerList& operator=(::cricket::SimulcastLayerList&&);

    MCAPI ~SimulcastLayerList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::SimulcastLayerList const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
