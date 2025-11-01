#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIconName;
    ::ll::TypedStorage<4, 4, int> mIconFrame;
    ::ll::TypedStorage<4, 4, ::ItemIconInfoType> mIconType;
    ::ll::TypedStorage<4, 4, uint> mRuntimeBlockID;
    ::ll::TypedStorage<4, 4, float> mU0;
    ::ll::TypedStorage<4, 4, float> mV0;
    ::ll::TypedStorage<4, 4, float> mU1;
    ::ll::TypedStorage<4, 4, float> mV1;
    ::ll::TypedStorage<2, 2, ushort> mTexSizeW;
    ::ll::TypedStorage<2, 2, ushort> mTexSizeH;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResolvedItemIconInfo();

    MCAPI ResolvedItemIconInfo(::std::string const& name, int frame, ::ItemIconInfoType type);

    MCAPI ~ResolvedItemIconInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string const& name, int frame, ::ItemIconInfoType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
