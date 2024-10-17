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

class TntBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TntBlock& operator=(TntBlock const&);
    TntBlock(TntBlock const&);
    TntBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TntBlock() = default;

    // vIndex: 63
    virtual bool shouldDispense(class BlockSource& region, class Container& container) const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 91
    virtual void
    destroy(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 144
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI TntBlock(std::string const& nameId, int id);

    MCAPI void _setAllowUnderwater(class Actor* e) const;

    MCAPI bool _shouldAllowUnderwater(class Block const& block) const;

    MCAPI static bool tryLightTnt(class Player& player, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI void
    destroy$(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI void onExploded$(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldDispense$(class BlockSource& region, class Container& container) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
