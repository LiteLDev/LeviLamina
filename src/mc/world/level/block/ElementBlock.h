#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ElementType.h"
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

class ElementBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ElementBlock& operator=(ElementBlock const&);
    ElementBlock(ElementBlock const&);
    ElementBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ElementBlock() = default;

    // vIndex: 61
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 138
    virtual class Block const* tryLegacyUpgrade(ushort extraData) const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    MCAPI ElementBlock(std::string const& nameId, int id, ::ElementType type);

    MCAPI static struct ElementInfo getElementInfo(::ElementType e);

    MCAPI static class RecipeIngredient getIngredientForElement(::ElementType e, int stackCount);

    MCAPI static class ItemInstance getItemForElement(::ElementType e, int stackCount);

    MCAPI static void initElements();

    MCAPI static bool isElement(class ItemStackBase const& item);

    MCAPI static void shutdownElements();

    MCAPI static class BlockLegacy const* tryGetBlockLegacyForElement(::ElementType e);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<class BlockLegacy const*> mElements;

    // NOLINTEND
};
