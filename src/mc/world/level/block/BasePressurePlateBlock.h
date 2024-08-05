#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BasePressurePlateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BasePressurePlateBlock& operator=(BasePressurePlateBlock const&);
    BasePressurePlateBlock(BasePressurePlateBlock const&);
    BasePressurePlateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasePressurePlateBlock();

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 100
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 102
    virtual bool
    shouldTriggerEntityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 163
    virtual int getTickDelay() const;

    // vIndex: 167
    virtual class AABB const getSensitiveAABB(class BlockPos const& pos) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI BasePressurePlateBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void checkPressed(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          sourceEntity,
        int                   oldSignal,
        int                   newSignal
    ) const;

    // NOLINTEND
};
