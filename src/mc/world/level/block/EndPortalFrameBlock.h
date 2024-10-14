#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EndPortalFrameBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    EndPortalFrameBlock& operator=(EndPortalFrameBlock const&);
    EndPortalFrameBlock(EndPortalFrameBlock const&);
    EndPortalFrameBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndPortalFrameBlock() = default;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI EndPortalFrameBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void createPortal(class BlockSource& region, class BlockPos const& origin);

    MCAPI static void removePortal(class BlockSource& region, class BlockPos const& origin);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void addAABBs$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    MCAPI bool
    addCollisionShapes$(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
