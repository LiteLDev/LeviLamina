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

class PressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // PressurePlateBlock inner types define
    enum class Sensitivity {};

public:
    // prevent constructor by default
    PressurePlateBlock& operator=(PressurePlateBlock const&);
    PressurePlateBlock(PressurePlateBlock const&);
    PressurePlateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PressurePlateBlock() = default;

    // vIndex: 164
    virtual int getSignalStrength(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 165
    virtual int getSignalForData(int data) const;

    // vIndex: 166
    virtual int getRedstoneSignal(int signal) const;

    MCAPI PressurePlateBlock(
        std::string const&                nameId,
        int                               id,
        class Material const&             material,
        ::PressurePlateBlock::Sensitivity sensitivity
    );

    // NOLINTEND
};
