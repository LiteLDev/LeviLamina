#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct EnchantingScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                mPlaceAllToInputSlot;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&()>> mGetInputItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EnchantingScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
