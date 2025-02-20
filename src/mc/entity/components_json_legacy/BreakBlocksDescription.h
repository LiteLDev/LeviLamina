#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct BreakBlocksDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk25213d;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakBlocksDescription& operator=(BreakBlocksDescription const&);
    BreakBlocksDescription(BreakBlocksDescription const&);
    BreakBlocksDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~BreakBlocksDescription() /*override*/;
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
