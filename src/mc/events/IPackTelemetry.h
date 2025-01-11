#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackReport;
// clang-format on

class IPackTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackTelemetry();

    // vIndex: 1
    virtual void fireEventPackUpgradeAttempt(::PackManifest const&, ::PackReport const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
