#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting {

class ILifetimeScopeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILifetimeScopeListener() = default;

    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;

    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;
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

} // namespace Scripting
