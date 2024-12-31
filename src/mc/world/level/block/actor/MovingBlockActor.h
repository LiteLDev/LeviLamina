#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class Level;
class PistonBlockActor;
class SaveContext;
class Vec3;
// clang-format on

class MovingBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb715ef;
    ::ll::UntypedStorage<8, 8>  mUnk30f66c;
    ::ll::UntypedStorage<8, 16> mUnkc0238e;
    ::ll::UntypedStorage<4, 12> mUnkb6138e;
    ::ll::UntypedStorage<1, 1>  mUnke5bfc7;
    ::ll::UntypedStorage<4, 24> mUnk4f2b79;
    ::ll::UntypedStorage<1, 1>  mUnke9379f;
    ::ll::UntypedStorage<4, 4>  mUnk940a33;
    // NOLINTEND

public:
    // prevent constructor by default
    MovingBlockActor& operator=(MovingBlockActor const&);
    MovingBlockActor(MovingBlockActor const&);
    MovingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MovingBlockActor() /*override*/ = default;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 31
    virtual ::PistonBlockActor* getOwningPiston(::BlockSource& region) /*override*/;

    // vIndex: 30
    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource& region) const /*override*/;

    // vIndex: 22
    virtual ::AABB getCollisionShape(::IConstBlockSource const& region) const /*override*/;

    // vIndex: 14
    virtual bool isPreserved(::BlockSource& region) const /*override*/;

    // vIndex: 15
    virtual bool shouldPreserve(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MovingBlockActor(::BlockPos const& pos);

    MCAPI ::std::pair<::AABB, ::AABB> _getWrappedBlockCollisionShapes(::IConstBlockSource const& region) const;

    MCAPI ::Vec3 getDrawPos(::IConstBlockSource const& region, float a) const;

    MCAPI ::Block const& getWrappedBlock() const;

    MCAPI void moveCollidedEntities(::PistonBlockActor& pistonBlock, ::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI ::PistonBlockActor* $getOwningPiston(::BlockSource& region);

    MCAPI ::PistonBlockActor const* $getOwningPiston(::BlockSource& region) const;

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const& region) const;

    MCAPI bool $isPreserved(::BlockSource& region) const;

    MCAPI bool $shouldPreserve(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
