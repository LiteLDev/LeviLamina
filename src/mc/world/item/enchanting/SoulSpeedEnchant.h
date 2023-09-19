#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SoulSpeedEnchant : public ::Enchant {
public:
    // prevent constructor by default
    SoulSpeedEnchant& operator=(SoulSpeedEnchant const&);
    SoulSpeedEnchant(SoulSpeedEnchant const&);
    SoulSpeedEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getMinCost@SoulSpeedEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@SoulSpeedEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@SoulSpeedEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // symbol: ?isDiscoverable@SoulSpeedEnchant@@UEBA_NXZ
    MCVAPI bool isDiscoverable() const;

    // symbol: ?isTreasureOnly@SoulSpeedEnchant@@UEBA_NXZ
    MCVAPI bool isTreasureOnly() const;

    // symbol:
    // ??0SoulSpeedEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI SoulSpeedEnchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, int);

    // symbol: ?getLevel@SoulSpeedEnchant@@SAHAEBVActor@@@Z
    MCAPI static int getLevel(class Actor const&);

    // symbol: ?getSpeedBoost@SoulSpeedEnchant@@SAMH@Z
    MCAPI static float getSpeedBoost(int);

    // symbol: ?shouldSpawnParticles@SoulSpeedEnchant@@SA_NAEBVActor@@@Z
    MCAPI static bool shouldSpawnParticles(class Actor const&);

    // symbol: ?SOUL_SPEED_BOOST_UUID@SoulSpeedEnchant@@2VUUID@mce@@B
    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;

    // NOLINTEND
};
