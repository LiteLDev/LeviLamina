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

class ReinforcedDeepslateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ReinforcedDeepslateBlock& operator=(ReinforcedDeepslateBlock const&);
    ReinforcedDeepslateBlock(ReinforcedDeepslateBlock const&);
    ReinforcedDeepslateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReinforcedDeepslateBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    MCAPI ReinforcedDeepslateBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canBeOriginalSurface$() const;

    // NOLINTEND
};
