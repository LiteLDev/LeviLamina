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
    MCNAPI ResolvedItemIconInfo();

    MCNAPI ResolvedItemIconInfo(::std::string const& name, int frame, ::ItemIconInfoType type);

    MCNAPI ~ResolvedItemIconInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::string const& name, int frame, ::ItemIconInfoType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
