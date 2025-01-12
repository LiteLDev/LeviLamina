#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72a31a;
    ::ll::UntypedStorage<4, 4>  mUnkbc21cb;
    ::ll::UntypedStorage<4, 4>  mUnkaabce0;
    ::ll::UntypedStorage<4, 4>  mUnkaaa17d;
    ::ll::UntypedStorage<4, 4>  mUnkda55e4;
    ::ll::UntypedStorage<4, 4>  mUnk85a3e6;
    ::ll::UntypedStorage<4, 4>  mUnk37ec2f;
    ::ll::UntypedStorage<4, 4>  mUnk9002db;
    ::ll::UntypedStorage<2, 2>  mUnkad9f85;
    ::ll::UntypedStorage<2, 2>  mUnka09ad3;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&);
    ResolvedItemIconInfo(ResolvedItemIconInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResolvedItemIconInfo();

    MCAPI ResolvedItemIconInfo(uint legacyID, int frame);

    MCAPI ResolvedItemIconInfo(::std::string const& name, int frame, ::ItemIconInfoType type);

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
    MCAPI void* $ctor();

    MCAPI void* $ctor(uint legacyID, int frame);

    MCAPI void* $ctor(::std::string const& name, int frame, ::ItemIconInfoType type);

    MCAPI void*
    $ctor(::std::string const& name, float u0, float u1, float v0, float v1, ushort texSizeW, ushort texSizeH);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
