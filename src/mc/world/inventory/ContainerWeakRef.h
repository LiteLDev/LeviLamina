#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/inventory/ActorContainerType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Container;
struct ContainerRuntimeIdTag;
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
    MCNAPI explicit operator bool() const;

    MCNAPI ~ContainerWeakRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
