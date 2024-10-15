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
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 100
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 102
    virtual bool
    shouldTriggerEntityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void dtor$();

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI void entityInside$(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const getSensitiveAABB$(class BlockPos const& pos) const;

    MCAPI int getTickDelay$() const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isAttachedTo$(class BlockSource&, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    MCAPI bool isSignalSource$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI bool
    shouldTriggerEntityInside$(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
