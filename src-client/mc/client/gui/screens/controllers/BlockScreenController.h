#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

class BlockScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockEntityType;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mEntityUniqueID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockScreenController() /*override*/;

    virtual void setAssociatedBlockPos(::BlockPos const& pos) /*override*/;

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const uniqueID) /*override*/;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setAssociatedBlockPos(::BlockPos const& pos);

    MCAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const uniqueID);

    MCAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
