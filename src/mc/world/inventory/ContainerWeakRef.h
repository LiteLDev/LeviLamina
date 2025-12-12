#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/inventory/ActorContainerType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
struct ContainerRuntimeIdTag;
struct ContainerWeakRefData;
// clang-format on

class ContainerWeakRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mContainerActor;
    ::ll::TypedStorage<4, 4, ::ActorContainerType>          mActorContainerType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPosition;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId>          mContainerRuntimeId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>> mWeakContainer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit operator bool() const;

    MCAPI_C ::ContainerWeakRefData tryGetContainer(::BlockSource& region) const;

    MCAPI ~ContainerWeakRef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Container* tryGetActorContainer(::Actor& actor, ::ActorContainerType containerType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
