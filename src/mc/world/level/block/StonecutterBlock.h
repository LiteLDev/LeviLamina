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

class StonecutterBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StonecutterBlock& operator=(StonecutterBlock const&);
    StonecutterBlock(StonecutterBlock const&);
    StonecutterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StonecutterBlock() = default;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    MCAPI StonecutterBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI class BlockLegacy& init$();

    MCAPI bool isCraftingBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool use$(class Player&, class BlockPos const&, uchar) const;

    // NOLINTEND
};
