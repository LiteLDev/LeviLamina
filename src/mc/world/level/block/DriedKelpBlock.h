#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DriedKelpBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DriedKelpBlock& operator=(DriedKelpBlock const&);
    DriedKelpBlock(DriedKelpBlock const&);
    DriedKelpBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DriedKelpBlock() = default;

    MCAPI DriedKelpBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
