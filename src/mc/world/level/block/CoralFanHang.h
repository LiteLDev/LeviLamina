#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CoralFan.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CoralFanHang : public ::CoralFan {
public:
    // prevent constructor by default
    CoralFanHang& operator=(CoralFanHang const&);
    CoralFanHang(CoralFanHang const&);
    CoralFanHang();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CoralFanHang() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 163
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI CoralFanHang(std::string const& nameId, int id);

    MCAPI static bool hasSupport(class Block const& supportingBlock, uchar face);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const&) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void checkAlive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class mce::Color
    getMapColor$(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool mayPlaceOn$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class Vec3 randomlyModifyPosition$(class BlockPos const& pos) const;

    // NOLINTEND
};
