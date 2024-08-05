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

class MobSpawnerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    MobSpawnerBlock& operator=(MobSpawnerBlock const&);
    MobSpawnerBlock(MobSpawnerBlock const&);
    MobSpawnerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobSpawnerBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    MCAPI MobSpawnerBlock(std::string const& nameId, int id);

    // NOLINTEND
};
