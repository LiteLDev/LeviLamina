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
    // vIndex: 0
    virtual ~SoulSpeedEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // vIndex: 15
    virtual bool isDiscoverable() const;

    MCAPI SoulSpeedEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI static int getLevel(class Actor const& entity);

    MCAPI static float getSpeedBoost(int level);

    MCAPI static bool shouldSpawnParticles(class Actor const& entity);

    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;

    // NOLINTEND
};
