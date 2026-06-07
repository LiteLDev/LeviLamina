#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Config;
// clang-format on

class IConfigListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IConfigListener() = default;

    virtual void onConfigChanged(::Config const& c) = 0;
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
