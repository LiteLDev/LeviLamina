#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct TeleportDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk9b16a1;
    ::ll::UntypedStorage<4, 4>  mUnkd7f130;
    ::ll::UntypedStorage<4, 4>  mUnk50bb43;
    ::ll::UntypedStorage<4, 12> mUnkd0b638;
    ::ll::UntypedStorage<4, 4>  mUnkce79a1;
    ::ll::UntypedStorage<4, 4>  mUnk3c9360;
    ::ll::UntypedStorage<4, 4>  mUnkb3e45b;
    ::ll::UntypedStorage<4, 4>  mUnk5f2e62;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportDescription& operator=(TeleportDescription const&);
    TeleportDescription(TeleportDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~TeleportDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TeleportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;

    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
