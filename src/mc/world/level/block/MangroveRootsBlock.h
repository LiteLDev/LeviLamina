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

class MangroveRootsBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MangroveRootsBlock& operator=(MangroveRootsBlock const&);
    MangroveRootsBlock(MangroveRootsBlock const&);
    MangroveRootsBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveRootsBlock() = default;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    MCAPI MangroveRootsBlock(std::string const& nameId, int id, class Material const& material);

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

    // NOLINTEND
};
