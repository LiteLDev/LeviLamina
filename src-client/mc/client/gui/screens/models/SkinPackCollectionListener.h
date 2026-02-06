#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct SkinPackCollectionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                               mPackId;
    ::ll::TypedStorage<8, 64, ::std::function<void(::mce::UUID const&)>> mOnSkinPackCollectedCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SkinPackCollectionListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
