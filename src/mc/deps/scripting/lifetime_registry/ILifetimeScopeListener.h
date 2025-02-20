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
    // vIndex: 0
    virtual ~ILifetimeScopeListener() = default;

    // vIndex: 1
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;

    // vIndex: 2
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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

} // namespace Scripting
