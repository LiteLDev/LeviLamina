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

class BarrierBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BarrierBlock& operator=(BarrierBlock const&);
    BarrierBlock(BarrierBlock const&);
    BarrierBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BarrierBlock() = default;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 127
    virtual float getShadeBrightness(class Block const&) const;

    MCAPI BarrierBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canConnect$(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI float getShadeBrightness$(class Block const&) const;

    // NOLINTEND
};
