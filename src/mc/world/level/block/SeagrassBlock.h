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

class SeagrassBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SeagrassBlock& operator=(SeagrassBlock const&);
    SeagrassBlock(SeagrassBlock const&);
    SeagrassBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SeagrassBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 121
    virtual int getColor(class Block const&) const;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI SeagrassBlock(std::string const& nameId, int id);

    MCAPI static bool trySpawnSeaGrass(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI std::string buildDescriptionId$(class Block const&) const;

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getColor$(class Block const&) const;

    MCAPI int getColor$(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI bool isValidAuxValue$(int value) const;

    MCAPI bool mayConsumeFertilizer$(class BlockSource&) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
