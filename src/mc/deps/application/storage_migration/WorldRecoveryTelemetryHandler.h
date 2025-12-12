#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
// clang-format on

namespace Bedrock {

class WorldRecoveryTelemetryHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&) = 0;

    // vIndex: 0
    virtual ~WorldRecoveryTelemetryHandler() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
