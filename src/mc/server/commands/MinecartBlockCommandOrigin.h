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
class Level;
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
    MCNAPI MinecartBlockCommandOrigin(::BlockSource& region, ::ActorUniqueID const& minecartId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::MinecartBlockCommandOrigin> load(::CompoundTag const& tag, ::Level& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource& region, ::ActorUniqueID const& minecartId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos $getBlockPosition() const;

    MCNAPI ::Vec3 $getWorldPosition() const;

    MCNAPI ::std::optional<::Vec2> $getRotation() const;

    MCNAPI ::Actor* $getEntity() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;

    MCNAPI ::CommandBlockActor* $_getBlockEntity(::BlockSource& region) const;

    MCNAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource& region) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
