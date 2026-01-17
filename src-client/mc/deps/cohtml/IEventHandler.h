#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ArgumentsBinder; }
// clang-format on

namespace cohtml {

class IEventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventHandler();

    virtual void Invoke(::cohtml::ArgumentsBinder*) = 0;

    virtual void const* GetTarget() = 0;

    virtual void SetTarget(void*) = 0;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cohtml
