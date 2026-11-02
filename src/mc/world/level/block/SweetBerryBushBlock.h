#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
namespace BlockEvents { class ActorInternalEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class SweetBerryBushBlock : public ::FoliageBlock {
public:
    // SweetBerryBushBlock inner types define
    enum class BerryStage : int {
        Sapling     = 0,
        NoBerries   = 1,
        SomeBerries = 2,
        FullBerries = 3,
    };

public:
    // prevent constructor by default
    SweetBerryBushBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const /*override*/;

    virtual bool
    hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const
        /*override*/;

    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SweetBerryBushBlock(::std::string const& nameId, int id);

    MCNAPI void onEvent(::BlockEvents::ActorInternalEvent& event) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    _growBush(::BlockSource& region, ::BlockPos const& pos, bool forceFullGrowth, ::Actor* sourceEntity);

    MCNAPI static bool
    _pickBerries(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor& sourceEntity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;

    MCNAPI bool
    $hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    MCFOLD bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
