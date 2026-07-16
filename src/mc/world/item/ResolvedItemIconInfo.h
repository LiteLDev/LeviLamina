#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>     mIconName;
    ::ll::TypedStorage<4, 4, int>                mIconFrame;
    ::ll::TypedStorage<4, 4, ::ItemIconInfoType> mIconType;
    ::ll::TypedStorage<4, 4, uint>               mRuntimeBlockID;
    ::ll::TypedStorage<4, 4, float>              mU0;
    ::ll::TypedStorage<4, 4, float>              mV0;
    ::ll::TypedStorage<4, 4, float>              mU1;
    ::ll::TypedStorage<4, 4, float>              mV1;
    ::ll::TypedStorage<2, 2, ushort>             mTexSizeW;
    ::ll::TypedStorage<2, 2, ushort>             mTexSizeH;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedItemIconInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ResolvedItemIconInfo(::std::string const& name, int frame, ::ItemIconInfoType type);
#endif

    MCAPI ResolvedItemIconInfo(
        ::std::string const& name,
        float                u0,
        float                u1,
        float                v0,
        float                v1,
        ushort               texSizeW,
        ushort               texSizeH
    );

    MCAPI ~ResolvedItemIconInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& name, int frame, ::ItemIconInfoType type);
#endif

    MCAPI void*
    $ctor(::std::string const& name, float u0, float u1, float v0, float v1, ushort texSizeW, ushort texSizeH);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
