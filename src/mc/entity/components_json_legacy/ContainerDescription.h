#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct ContainerDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mSize;
    ::ll::TypedStorage<1, 1, bool>                                 mCanBesiphonedFrom;
    ::ll::TypedStorage<1, 1, bool>                                 mPrivate;
    ::ll::TypedStorage<1, 1, bool>                                 mRestrictToOwner;
    ::ll::TypedStorage<4, 4, int>                                  mSlotsPerStrength;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

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
