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
    virtual ~IEventHandler() = default;

    virtual void Invoke(::cohtml::ArgumentsBinder* binder) = 0;

    virtual void const* GetTarget() = 0;

    virtual void SetTarget(void* target) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
