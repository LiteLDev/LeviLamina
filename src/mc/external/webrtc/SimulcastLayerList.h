#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct SimulcastLayer; }
// clang-format on

namespace webrtc {

class SimulcastLayerList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc945f2;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastLayerList& operator=(SimulcastLayerList const&);
    SimulcastLayerList(SimulcastLayerList const&);
    SimulcastLayerList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddLayer(::webrtc::SimulcastLayer const& layer);

    MCNAPI void AddLayerWithAlternatives(::std::vector<::webrtc::SimulcastLayer> const& rids);

    MCNAPI ::std::vector<::webrtc::SimulcastLayer> GetAllLayers() const;

    MCNAPI ::webrtc::SimulcastLayerList& operator=(::webrtc::SimulcastLayerList&&);

    MCNAPI ~SimulcastLayerList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
