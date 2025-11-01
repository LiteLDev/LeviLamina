#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class EndPortalFrameBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual void addAABBs(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const /*override*/;

    // vIndex: 7
    virtual bool addCollisionShapes(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes, ::optional_ref<::GetCollisionShapeInterface const> entity) const /*override*/;

    // vIndex: 135
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 104
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 105
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const /*override*/;

    // vIndex: 131
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~EndPortalFrameBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void createPortal(::BlockSource& region, ::BlockPos const& origin);

    MCAPI static void removePortal(::BlockSource& region, ::BlockPos const& origin);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addAABBs(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const;

    MCFOLD bool $addCollisionShapes(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes, ::optional_ref<::GetCollisionShapeInterface const> entity) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
