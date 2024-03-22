#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ColoredTorchColor.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ColoredTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    ColoredTorchBlock& operator=(ColoredTorchBlock const&);
    ColoredTorchBlock(ColoredTorchBlock const&);
    ColoredTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ColoredTorchBlock@@UEAA@XZ
    virtual ~ColoredTorchBlock() = default;

    // vIndex: 60, symbol: ?canBeUsedInCommands@ColoredTorchBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 95, symbol: ?asItemInstance@ColoredTorchBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97, symbol: ?getPlacementBlock@ColoredTorchBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@ColoredTorchBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@ColoredTorchBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 128, symbol: ?getVariant@ColoredTorchBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@ColoredTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol:
    // ??0ColoredTorchBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ColoredTorchColor@@@Z
    MCAPI ColoredTorchBlock(std::string const& nameId, int id, ::ColoredTorchColor baseColor);

    // symbol: ?getItemForColor@ColoredTorchBlock@@SA?AVItemInstance@@W4ColoredTorchColor@@@Z
    MCAPI static class ItemInstance getItemForColor(::ColoredTorchColor color);

    // NOLINTEND
};
