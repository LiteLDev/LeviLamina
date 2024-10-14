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

class BaseRailBlock : public ::BlockLegacy {
public:
    // BaseRailBlock inner types declare
    // clang-format off
    class Rail;
    // clang-format on

    // BaseRailBlock inner types define
    class Rail {
    public:
        // prevent constructor by default
        Rail& operator=(Rail const&);
        Rail(Rail const&);
        Rail();

    public:
        // NOLINTBEGIN
        MCAPI Rail(class BlockSource& region, class BlockPos const& pos);

        MCAPI void place(int signalStrength, bool first);

        MCAPI ~Rail();

        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        MCAPI void connectTo(class BaseRailBlock::Rail& rail);

        MCAPI bool connectsTo(class BaseRailBlock::Rail& rail);

        MCAPI std::shared_ptr<class BaseRailBlock::Rail> getRail(class BlockPos const& p);

        MCAPI bool hasNeighborRail(class BlockPos const& pos);

        MCAPI void removeSoftConnections();

        MCAPI void updateConnections(int direction);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BaseRailBlock& operator=(BaseRailBlock const&);
    BaseRailBlock(BaseRailBlock const&);
    BaseRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseRailBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 42
    virtual bool isRailBlock() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 156
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BaseRailBlock(std::string const& nameId, int id, bool usesDataBit);

    MCAPI static bool isCorner(class BlockSource const& region, class BlockPos const& pos);

    MCAPI static bool isFacingWestEast(class BlockSource const& region, class BlockPos const& pos);

    MCAPI static bool isRail(class Block const& block);

    MCAPI static bool isRail(class IConstBlockSource const& region, class BlockPos const& pos);

    MCAPI static bool isSlope(class Block const& block);

    MCAPI static bool isSlope(int railDirection);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updatePlacement(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI static void _createCircuitComponent(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI ::BlockRenderLayer
    getRenderLayer$(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isRailBlock$() const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onGraphicsModeChanged$(struct BlockGraphicsModeChangeContext const& context);

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
