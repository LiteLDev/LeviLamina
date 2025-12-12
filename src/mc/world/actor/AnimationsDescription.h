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
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual char const* getJsonName() const /*override*/;

    virtual ~AnimationsDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);

    MCNAPI char const* $getJsonName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
