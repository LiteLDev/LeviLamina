#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class CreativeItemEntry;
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkc18152;
    ::ll::UntypedStorage<8, 8>   mUnk4aef2e;
    ::ll::UntypedStorage<8, 48>  mUnke9d11f;
    ::ll::UntypedStorage<8, 128> mUnk3ab2ad;
    ::ll::UntypedStorage<4, 4>   mUnkff6fda;
    ::ll::UntypedStorage<8, 24>  mUnk75bb33;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&);
    CreativeGroupInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeGroupInfo() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeGroupInfo(::CreativeGroupInfo const&);

    MCAPI void addCreativeItem(::CreativeItemEntry* itemEntry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CreativeGroupInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
