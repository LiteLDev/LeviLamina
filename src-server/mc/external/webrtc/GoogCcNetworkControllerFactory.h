#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetworkControllerFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class NetworkStatePredictorFactoryInterface; }
namespace webrtc { class TimeDelta; }
namespace webrtc { struct NetworkControllerConfig; }
// clang-format on

namespace webrtc {

class GoogCcNetworkControllerFactory : public ::webrtc::NetworkControllerFactoryInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk647ace;
    ::ll::UntypedStorage<8, 24> mUnk8703af;
    // NOLINTEND

public:
    // prevent constructor by default
    GoogCcNetworkControllerFactory& operator=(GoogCcNetworkControllerFactory const&);
    GoogCcNetworkControllerFactory(GoogCcNetworkControllerFactory const&);
    GoogCcNetworkControllerFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::NetworkControllerInterface> Create(::webrtc::NetworkControllerConfig config) /*override*/;

    // vIndex: 2
    virtual ::webrtc::TimeDelta GetProcessInterval() const /*override*/;

    // vIndex: 0
    virtual ~GoogCcNetworkControllerFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GoogCcNetworkControllerFactory(::webrtc::NetworkStatePredictorFactoryInterface* network_state_predictor_factory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::NetworkStatePredictorFactoryInterface* network_state_predictor_factory);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::NetworkControllerInterface> $Create(::webrtc::NetworkControllerConfig config);

    MCNAPI ::webrtc::TimeDelta $GetProcessInterval() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
