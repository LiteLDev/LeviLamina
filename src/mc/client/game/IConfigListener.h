#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Config;
// clang-format on

class IConfigListener {
public:
    // prevent constructor by default
    IConfigListener& operator=(IConfigListener const&);
    IConfigListener(IConfigListener const&);
    IConfigListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IConfigListener();

    // vIndex: 1
    virtual void onConfigChanged(::Config const&) = 0;
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
};
