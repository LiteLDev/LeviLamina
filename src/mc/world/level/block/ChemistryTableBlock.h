#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/ChemistryTableType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChemistryTableBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ChemistryTableBlock& operator=(ChemistryTableBlock const&);
    ChemistryTableBlock(ChemistryTableBlock const&);
    ChemistryTableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemistryTableBlock() = default;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 53
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 61
    virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    MCAPI ChemistryTableBlock(std::string const& nameId, int id);

    MCAPI static class ItemInstance getItemForType(::ChemistryTableType type, int stackCount);

    MCAPI static bool isUIValidForPlayer(
        class BlockPos const& pos,
        class Player&         player,
        float                 pickRange,
        ::ChemistryTableType  expectedType
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI bool canBeUsedInCommands$(class BaseGameVersion const&) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool isCraftingBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool isValidAuxValue$(int value) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI void onFillBlock$(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool use$(class Player&, class BlockPos const&, uchar) const;

    // NOLINTEND
};
