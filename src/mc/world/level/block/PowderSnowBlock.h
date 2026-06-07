#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Level;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class PowderSnowBlock : public ::BlockType {
public:
    // prevent constructor by default
    PowderSnowBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&          entity,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool causesFreezeEffect() const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PowderSnowBlock(::std::string const& nameId, int id, ::Material const& material);

    MCFOLD void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canWalkOnTop(::GetCollisionShapeInterface const& actor);

    MCAPI static void clearFire(::BlockSource& region, ::BlockPos const& pos, ::Block const& block);

    MCAPI static void spawnPowderSnowParticles(::Level& level, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&          entity,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD bool $causesFreezeEffect() const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCFOLD bool $isLavaBlocking() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
