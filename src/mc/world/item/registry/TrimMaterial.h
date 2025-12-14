#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct TrimMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterialId;
    ::ll::TypedStorage<8, 32, ::std::string>  mColor;
    ::ll::TypedStorage<8, 48, ::HashedString> mItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    TrimMaterial& operator=(TrimMaterial const&);
    TrimMaterial();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrimMaterial(::TrimMaterial&&);

    MCAPI TrimMaterial(::TrimMaterial const&);

    MCAPI ~TrimMaterial();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TrimMaterial&&);

    MCAPI void* $ctor(::TrimMaterial const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
