#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BasePressurePlateBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WeightedPressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // prevent constructor by default
    WeightedPressurePlateBlock& operator=(WeightedPressurePlateBlock const&);
    WeightedPressurePlateBlock(WeightedPressurePlateBlock const&);
    WeightedPressurePlateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeightedPressurePlateBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 163
    virtual int getTickDelay() const;

    // vIndex: 164
    virtual int getSignalStrength(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // vIndex: 169
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 171
    virtual int getAlternateSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 172
    virtual int getOutputSignal(class Block const& block) const;

    // vIndex: 173
    virtual int getTurnOffDelay(class Block const& block) const;

    // vIndex: 174
    virtual int getTurnOnDelay(class Block const& block) const;

    // vIndex: 175
    virtual class Block const* getOnBlock(class Block const* block) const;

    // vIndex: 176
    virtual class Block const* getOffBlock(class Block const* block) const;

    MCVAPI int getRedstoneSignal(int signal) const;

    MCVAPI int getSignalForData(int data) const;

    MCAPI WeightedPressurePlateBlock(std::string const& nameId, int id, class Material const& material, int maxWeight);

    MCAPI static int const MAX_WEIGHT_HEAVY;

    MCAPI static int const MAX_WEIGHT_LIGHT;

    // NOLINTEND
};
