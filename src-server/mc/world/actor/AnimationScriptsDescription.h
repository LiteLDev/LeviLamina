#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
struct NamedMolangScript;
// clang-format on

struct AnimationScriptsDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::NamedMolangScript>> mAnimateScript;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams nonConstDeserializeDataParams) /*override*/;

    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 1
    virtual ~AnimationScriptsDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $deserializeData(::DeserializeDataParams nonConstDeserializeDataParams);

    MCAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
