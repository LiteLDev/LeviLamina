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
    // vIndex: 0
    virtual ~IConfigListener() = default;

    // vIndex: 1
    virtual void onConfigChanged(::Config const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
