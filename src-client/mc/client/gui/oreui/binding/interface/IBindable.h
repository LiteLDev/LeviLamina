#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Detail {

class IBindable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindable() = default;

    virtual void onReadyForBindings() = 0;

    virtual void onSuspend() = 0;

    virtual void onBindingsReleased() = 0;

    virtual void update(double const timestampMs) = 0;
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

} // namespace OreUI::Detail
