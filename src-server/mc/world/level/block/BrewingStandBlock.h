#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

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
    // vIndex: 122
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 111
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 8
    virtual void addAABBs(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const /*override*/;

    // vIndex: 7
    virtual bool addCollisionShapes(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes, ::optional_ref<::GetCollisionShapeInterface const> entity) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const /*override*/;

    // vIndex: 131
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 135
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 28
    virtual bool isContainerBlock() const /*override*/;

    // vIndex: 29
    virtual bool isCraftingBlock() const /*override*/;

    // vIndex: 104
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 105
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BrewingStandBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD ::std::string $buildDescriptionId(::Block const&) const;

    MCAPI void $addAABBs(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const;

    MCFOLD bool $addCollisionShapes(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes, ::optional_ref<::GetCollisionShapeInterface const> entity) const;

    MCAPI ::AABB $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>) const;

    MCAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isContainerBlock() const;

    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $hasComparatorSignal() const;

    MCFOLD int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
