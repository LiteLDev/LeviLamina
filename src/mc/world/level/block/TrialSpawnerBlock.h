#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TrialSpawnerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    TrialSpawnerBlock& operator=(TrialSpawnerBlock const&);
    TrialSpawnerBlock(TrialSpawnerBlock const&);
    TrialSpawnerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TrialSpawnerBlock() = default;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    MCAPI TrialSpawnerBlock(std::string const&, int);

    // NOLINTEND
};
