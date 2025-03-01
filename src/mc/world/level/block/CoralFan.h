#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class CoralFan : public ::BushBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd2b41a;
    // NOLINTEND

public:
    // prevent constructor by default
    CoralFan& operator=(CoralFan const&);
    CoralFan(CoralFan const&);
    CoralFan();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 48
    virtual bool isValidAuxValue(int value) const /*override*/;

    // vIndex: 15
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 75
    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    // vIndex: 31
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 151
    virtual void checkAlive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~CoralFan() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CoralFan(::std::string const& nameId, int id, ::HashedString const& deadVersion);

    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::HashedString const& deadVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidAuxValue(int value) const;

    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

    MCFOLD ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCFOLD ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCFOLD bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
