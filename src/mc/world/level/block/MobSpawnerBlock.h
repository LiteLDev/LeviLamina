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
    // vIndex: 0, symbol: __gen_??1MobSpawnerBlock@@UEAA@XZ
    virtual ~MobSpawnerBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@MobSpawnerBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@MobSpawnerBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 56, symbol: ?canContainLiquid@MobSpawnerBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 149, symbol: ?isInteractiveBlock@MobSpawnerBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // symbol: ??0MobSpawnerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MobSpawnerBlock(std::string const& nameId, int id);

    // NOLINTEND
};
