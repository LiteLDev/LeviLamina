#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPackLoadScoped {
public:
    // prevent constructor by default
    IPackLoadScoped& operator=(IPackLoadScoped const&);
    IPackLoadScoped(IPackLoadScoped const&);
    IPackLoadScoped();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackLoadScoped() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
