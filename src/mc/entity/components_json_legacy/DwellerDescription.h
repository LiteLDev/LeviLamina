#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct DwellerDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf036a4;
    ::ll::UntypedStorage<8, 32> mUnk3529fc;
    ::ll::UntypedStorage<8, 32> mUnkfe2924;
    ::ll::UntypedStorage<4, 4>  mUnk8fd1ac;
    ::ll::UntypedStorage<4, 4>  mUnkaa8e91;
    ::ll::UntypedStorage<4, 4>  mUnkf76660;
    ::ll::UntypedStorage<4, 4>  mUnk9a8b16;
    ::ll::UntypedStorage<1, 1>  mUnk10f73f;
    ::ll::UntypedStorage<1, 1>  mUnked0174;
    // NOLINTEND

public:
    // prevent constructor by default
    DwellerDescription& operator=(DwellerDescription const&);
    DwellerDescription(DwellerDescription const&);
    DwellerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~DwellerDescription() /*override*/;
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
