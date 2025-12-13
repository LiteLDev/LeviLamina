#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class PistonBlockActor;
class SaveContext;
class Vec3;
// clang-format on

class MovingBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>                   mWrappedBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                   mWrappedExtraBlock;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockActor>> mWrappedBlockActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPistonBlockPos;
    ::ll::TypedStorage<1, 1, bool>                             mPistonBlockExpanding;
    ::ll::TypedStorage<4, 24, ::AABB>                          mCollisionShape;
    ::ll::TypedStorage<1, 1, bool>                             mPreserved;
    ::ll::TypedStorage<4, 4, int>                              mPreservedLifespan;
    // NOLINTEND

public:
    // prevent constructor by default
    MovingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovingBlockActor() /*override*/ = default;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual ::PistonBlockActor* getOwningPiston(::BlockSource& region) /*override*/;

    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource& region) const /*override*/;

    virtual ::AABB getCollisionShape(::IConstBlockSource const& region) const /*override*/;

    virtual bool isPreserved(::BlockSource& region) const /*override*/;

    virtual bool shouldPreserve(::BlockSource& region) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MovingBlockActor(::BlockPos const& pos);

    MCAPI ::std::pair<::AABB, ::AABB> _getWrappedBlockCollisionShapes(::IConstBlockSource const& region) const;

    MCAPI ::Vec3 getDrawPos(::IConstBlockSource const& region, float a) const;

    MCAPI void moveCollidedEntities(::PistonBlockActor& pistonBlock, ::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCFOLD ::PistonBlockActor* $getOwningPiston(::BlockSource& region);

    MCFOLD ::PistonBlockActor const* $getOwningPiston(::BlockSource& region) const;

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const& region) const;

    MCAPI bool $isPreserved(::BlockSource& region) const;

    MCAPI bool $shouldPreserve(::BlockSource& region);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
