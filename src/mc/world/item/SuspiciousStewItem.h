#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SuspiciousStewItem : public ::Item {
public:
    // prevent constructor by default
    SuspiciousStewItem& operator=(SuspiciousStewItem const&);
    SuspiciousStewItem(SuspiciousStewItem const&);
    SuspiciousStewItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SuspiciousStewItem@@UEAA@XZ
    virtual ~SuspiciousStewItem() = default;

    // vIndex: 59, symbol: ?uniqueAuxValues@SuspiciousStewItem@@UEBA_NXZ
    virtual bool uniqueAuxValues() const;

    // vIndex: 74, symbol:
    // ?useTimeDepleted@SuspiciousStewItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // symbol: ??0SuspiciousStewItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI SuspiciousStewItem(std::string const& name, short id);

    // symbol: ?applyStewEffect@SuspiciousStewItem@@SAXAEBVItemStack@@AEAVActor@@@Z
    MCAPI static void applyStewEffect(class ItemStack const& inoutInstance, class Actor& actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getStewEffects@SuspiciousStewItem@@CAAEBV?$array@VMobEffectInstance@@$0L@@std@@XZ
    MCAPI static std::array<class MobEffectInstance, 11> const& _getStewEffects();

    // NOLINTEND
};
