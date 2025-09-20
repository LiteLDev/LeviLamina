#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Material;
class MobSpawnerData;
class SpawnConditions;
// clang-format on

class SlabBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mIsDouble;
    ::ll::TypedStorage<8, 48, ::HashedString> mOtherSlab;
    // NOLINTEND

public:
    // prevent constructor by default
    SlabBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 36
    virtual bool isSlabBlock() const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 14
    virtual bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const
        /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 101
    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const
        /*override*/;

    // vIndex: 18
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~SlabBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SlabBlock(
        ::std::string const&  nameId,
        int                   id,
        bool                  isDouble,
        ::Material const&     mat,
        ::HashedString const& otherSlab
    );

    MCNAPI ::Block const& getDoubleSlab() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& nameId, int id, bool isDouble, ::Material const& mat, ::HashedString const& otherSlab);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSlabBlock() const;

    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI bool $isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
