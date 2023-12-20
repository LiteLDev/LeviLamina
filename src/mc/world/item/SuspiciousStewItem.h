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

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 72, symbol:
    // ?useTimeDepleted@SuspiciousStewItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // symbol: ?uniqueAuxValues@SuspiciousStewItem@@UEBA_NXZ
    MCVAPI bool uniqueAuxValues() const;

    // symbol: ?applyStewEffect@SuspiciousStewItem@@SAXAEBVItemStack@@AEAVActor@@@Z
    MCAPI static void applyStewEffect(class ItemStack const&, class Actor&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getStewEffects@SuspiciousStewItem@@CAAEBV?$array@VMobEffectInstance@@$0L@@std@@XZ
    MCAPI static std::array<class MobEffectInstance, 11> const& _getStewEffects();

    // NOLINTEND
};
