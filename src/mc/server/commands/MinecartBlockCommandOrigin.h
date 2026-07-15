#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/BlockCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseCommandBlock;
class BlockPos;
class BlockSource;
class CommandBlockActor;
class CommandOrigin;
class CompoundTag;
class Vec2;
class Vec3;
// clang-format on

class MinecartBlockCommandOrigin : public ::BlockCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mMinecartEntityID;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartBlockCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartBlockCommandOrigin() /*override*/ = default;

    virtual ::BlockPos getBlockPosition() const /*override*/;

    virtual ::Vec3 getWorldPosition() const /*override*/;

    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    virtual ::Actor* getEntity() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource& region) const /*override*/;

    virtual ::BaseCommandBlock* _getBaseCommandBlock(::BlockSource& region) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecartBlockCommandOrigin(::BlockSource& region, ::ActorUniqueID const& minecartId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region, ::ActorUniqueID const& minecartId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
