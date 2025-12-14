#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
// clang-format on

class BindingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactoryMap() = default;

    virtual ::BindingFactory const& getBindingFactory(int) const = 0;
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
