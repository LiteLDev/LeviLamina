#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct ContainerDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk264b18;
    ::ll::UntypedStorage<1, 1> mUnkbb137e;
    ::ll::UntypedStorage<1, 1> mUnkd4a163;
    ::ll::UntypedStorage<1, 1> mUnkc20ac2;
    ::ll::UntypedStorage<4, 4> mUnkad1a97;
    ::ll::UntypedStorage<1, 1> mUnka8e38a;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerDescription& operator=(ContainerDescription const&);
    ContainerDescription(ContainerDescription const&);
    ContainerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~ContainerDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
