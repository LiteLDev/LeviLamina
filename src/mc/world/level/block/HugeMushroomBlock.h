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

class HugeMushroomBlock : public ::BlockLegacy {
public:
    // HugeMushroomBlock inner types define
    enum class Type {};

public:
    // prevent constructor by default
    HugeMushroomBlock& operator=(HugeMushroomBlock const&);
    HugeMushroomBlock(HugeMushroomBlock const&);
    HugeMushroomBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HugeMushroomBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& source, class BlockPos const& pos, class Block const& block) const;

    MCAPI HugeMushroomBlock(
        std::string const&        nameId,
        int                       id,
        class Material const&     material,
        ::HugeMushroomBlock::Type type
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(std::string const& nameId, int id, class Material const& material, ::HugeMushroomBlock::Type type);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI class mce::Color
    getMapColor$(class BlockSource& source, class BlockPos const& pos, class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    // NOLINTEND
};
