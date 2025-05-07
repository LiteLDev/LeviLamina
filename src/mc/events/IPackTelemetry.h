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
    virtual ~IPackTelemetry() = default;

    // vIndex: 1
    virtual void fireEventPackUpgradeAttempt(::PackManifest const&, ::PackReport const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
