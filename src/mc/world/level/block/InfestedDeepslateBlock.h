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
#include "mc/world/level/block/RotatedPillarInfestedBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class InfestedDeepslateBlock : public ::RotatedPillarInfestedBlock {
public:
    // prevent constructor by default
    InfestedDeepslateBlock& operator=(InfestedDeepslateBlock const&);
    InfestedDeepslateBlock(InfestedDeepslateBlock const&);
    InfestedDeepslateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InfestedDeepslateBlock() = default;

    // vIndex: 141
    virtual class Block const* tryGetUninfested(class Block const& block) const;

    MCAPI InfestedDeepslateBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI class Block const* tryGetUninfested$(class Block const& block) const;

    // NOLINTEND
};
