#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/UndyedShulkerBoxBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ShulkerBoxBlock : public ::UndyedShulkerBoxBlock {
public:
    // prevent constructor by default
    ShulkerBoxBlock& operator=(ShulkerBoxBlock const&);
    ShulkerBoxBlock(ShulkerBoxBlock const&);
    ShulkerBoxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerBoxBlock() = default;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 121
    virtual int getColor(class Block const& block) const;

    MCAPI ShulkerBoxBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI int getColor$(class Block const& block) const;

    // NOLINTEND
};
