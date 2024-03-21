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

class WebBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WebBlock& operator=(WebBlock const&);
    WebBlock(WebBlock const&);
    WebBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WebBlock@@UEAA@XZ
    virtual ~WebBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@WebBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@WebBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@WebBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // symbol: ??0WebBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WebBlock(std::string const& nameId, int id);

    // NOLINTEND
};
