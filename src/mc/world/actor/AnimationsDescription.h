#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct AnimationsDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk649197;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationsDescription& operator=(AnimationsDescription const&);
    AnimationsDescription(AnimationsDescription const&);
    AnimationsDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 1
    virtual ~AnimationsDescription() /*override*/;
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

    MCAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
