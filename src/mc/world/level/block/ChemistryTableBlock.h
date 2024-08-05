#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ChemistryTableType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

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
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI ChemistryTableBlock(std::string const& nameId, int id);

    MCAPI static class ItemInstance getItemForType(::ChemistryTableType type, int stackCount);

    MCAPI static bool isUIValidForPlayer(
        class BlockPos const& pos,
        class Player&         player,
        float                 pickRange,
        ::ChemistryTableType  expectedType
    );

    // NOLINTEND
};
