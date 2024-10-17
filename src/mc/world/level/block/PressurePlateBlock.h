#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BasePressurePlateBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::string const&                nameId,
        int                               id,
        class Material const&             material,
        ::PressurePlateBlock::Sensitivity sensitivity
    );

    MCAPI int getRedstoneSignal$(int signal) const;

    MCAPI int getSignalForData$(int data) const;

    MCAPI int getSignalStrength$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
