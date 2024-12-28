#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct NavigationDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke021f4;
    ::ll::UntypedStorage<1, 1>  mUnke40bc7;
    ::ll::UntypedStorage<1, 1>  mUnk8233f5;
    ::ll::UntypedStorage<1, 1>  mUnk42c5ff;
    ::ll::UntypedStorage<1, 1>  mUnk3d7bfd;
    ::ll::UntypedStorage<1, 1>  mUnk11da91;
    ::ll::UntypedStorage<1, 1>  mUnk1b16eb;
    ::ll::UntypedStorage<1, 1>  mUnk535f70;
    ::ll::UntypedStorage<1, 1>  mUnk7da11c;
    ::ll::UntypedStorage<1, 1>  mUnkd41a21;
    ::ll::UntypedStorage<1, 1>  mUnkdca7bd;
    ::ll::UntypedStorage<1, 1>  mUnk1ba87c;
    ::ll::UntypedStorage<1, 1>  mUnkcf7d3d;
    ::ll::UntypedStorage<1, 1>  mUnkf18f3c;
    ::ll::UntypedStorage<1, 1>  mUnk2bb095;
    ::ll::UntypedStorage<1, 1>  mUnk5bb94f;
    ::ll::UntypedStorage<1, 1>  mUnk1d7ef1;
    ::ll::UntypedStorage<1, 1>  mUnkf1011a;
    ::ll::UntypedStorage<1, 1>  mUnkc042da;
    ::ll::UntypedStorage<1, 1>  mUnkb73240;
    ::ll::UntypedStorage<8, 24> mUnkbbdfa5;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationDescription& operator=(NavigationDescription const&);
    NavigationDescription(NavigationDescription const&);
    NavigationDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~NavigationDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
