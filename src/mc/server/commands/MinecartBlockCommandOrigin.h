#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
struct ActorUniqueID;
// clang-format on

class MinecartBlockCommandOrigin : public ::BlockCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5eec5b;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartBlockCommandOrigin& operator=(MinecartBlockCommandOrigin const&);
    MinecartBlockCommandOrigin(MinecartBlockCommandOrigin const&);
    MinecartBlockCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecartBlockCommandOrigin() /*override*/ = default;

    // vIndex: 3
    virtual ::BlockPos getBlockPosition() const /*override*/;

    // vIndex: 4
    virtual ::Vec3 getWorldPosition() const /*override*/;

    // vIndex: 5
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    // vIndex: 8
    virtual ::Actor* getEntity() const /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;

    // vIndex: 34
    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource& region) const /*override*/;

    // vIndex: 33
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCAPI ::Actor* $getEntity() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI ::CompoundTag $serialize() const;

    MCFOLD bool $isValid() const;

    MCFOLD ::CommandBlockActor* $_getBlockEntity(::BlockSource& region) const;

    MCAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource& region) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
