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

class MelonBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MelonBlock& operator=(MelonBlock const&);
    MelonBlock(MelonBlock const&);
    MelonBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MelonBlock() = default;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    MCAPI MelonBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canConnect$(class Block const&, uchar, class Block const&) const;

    // NOLINTEND
};
