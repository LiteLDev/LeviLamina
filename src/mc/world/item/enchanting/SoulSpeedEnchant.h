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
    // vIndex: 0, symbol: __gen_??1SoulSpeedEnchant@@UEAA@XZ
    virtual ~SoulSpeedEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@SoulSpeedEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@SoulSpeedEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@SoulSpeedEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 14, symbol: ?isTreasureOnly@SoulSpeedEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // vIndex: 15, symbol: ?isDiscoverable@SoulSpeedEnchant@@UEBA_NXZ
    virtual bool isDiscoverable() const;

    // symbol:
    // ??0SoulSpeedEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI SoulSpeedEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    // symbol: ?getLevel@SoulSpeedEnchant@@SAHAEBVActor@@@Z
    MCAPI static int getLevel(class Actor const& entity);

    // symbol: ?getSpeedBoost@SoulSpeedEnchant@@SAMH@Z
    MCAPI static float getSpeedBoost(int level);

    // symbol: ?shouldSpawnParticles@SoulSpeedEnchant@@SA_NAEBVActor@@@Z
    MCAPI static bool shouldSpawnParticles(class Actor const& entity);

    // symbol: ?SOUL_SPEED_BOOST_UUID@SoulSpeedEnchant@@2VUUID@mce@@B
    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;

    // NOLINTEND
};
