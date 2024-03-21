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
    // vIndex: 0, symbol: __gen_??1TrialSpawnerBlock@@UEAA@XZ
    virtual ~TrialSpawnerBlock() = default;

    // vIndex: 56, symbol: ?canContainLiquid@TrialSpawnerBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 128, symbol: ?getVariant@TrialSpawnerBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 136, symbol: ?getLightEmission@TrialSpawnerBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@TrialSpawnerBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // symbol: ??0TrialSpawnerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TrialSpawnerBlock(std::string const&, int);

    // NOLINTEND
};
