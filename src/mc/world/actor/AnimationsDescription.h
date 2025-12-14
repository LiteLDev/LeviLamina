#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct DeserializeDataParams;
// clang-format on

struct AnimationsDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mActorAnimationMap;
    // NOLINTEND

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
