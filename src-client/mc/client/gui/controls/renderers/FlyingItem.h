#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

namespace ui {

struct FlyingItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> item;
    ::ll::TypedStorage<8, 8, double>        startTime;
    ::ll::TypedStorage<4, 4, float>         animationTime;
    ::ll::TypedStorage<4, 4, float>         sourcex;
    ::ll::TypedStorage<4, 4, float>         sourcey;
    ::ll::TypedStorage<4, 4, float>         destx;
    ::ll::TypedStorage<4, 4, float>         desty;
    ::ll::TypedStorage<4, 4, float>         sourceScale;
    ::ll::TypedStorage<4, 4, float>         destScale;
    ::ll::TypedStorage<1, 1, bool>          forceFoil;
    // NOLINTEND

public:
    // prevent constructor by default
    FlyingItem& operator=(FlyingItem const&);
    FlyingItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlyingItem(::ui::FlyingItem const&);

    MCAPI ~FlyingItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ui::FlyingItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ui
