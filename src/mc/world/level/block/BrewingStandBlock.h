#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class BrewingStandBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 8
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    // vIndex: 7
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 29
    virtual bool isContainerBlock() const /*override*/;

    // vIndex: 30
    virtual bool isCraftingBlock() const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BrewingStandBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCNAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const&
    $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $isContainerBlock() const;

    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
