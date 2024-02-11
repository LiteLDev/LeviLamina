#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class Vec3;
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class PlayerTelemetry {
public:
    // prevent constructor by default
    PlayerTelemetry& operator=(PlayerTelemetry const&);
    PlayerTelemetry(PlayerTelemetry const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddBiomeVisited@PlayerTelemetry@Events@Social@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void AddBiomeVisited(std::string biome);

    // symbol:
    // ?BlockBroken@PlayerTelemetry@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z
    MCAPI void BlockBroken(std::string const&, std::string const& blockName, std::string const&, bool);

    // symbol:
    // ?BlockPlaced@PlayerTelemetry@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z
    MCAPI void BlockPlaced(std::string const&, std::string const& blockName, std::string const&, bool);

    // symbol:
    // ?ItemUsed@PlayerTelemetry@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void ItemUsed(std::string const& itemName, std::string const& useMethod);

    // symbol: ??0PlayerTelemetry@Events@Social@@QEAA@XZ
    MCAPI PlayerTelemetry();

    // symbol: ?PopulateEvent@PlayerTelemetry@Events@Social@@QEBAXAEAVEvent@23@@Z
    MCAPI void PopulateEvent(class Social::Events::Event& event) const;

    // symbol:
    // ?SetPosition@PlayerTelemetry@Events@Social@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@N@Z
    MCAPI void SetPosition(std::string dimension, class Vec3 pos, double metersTravelled);

    // symbol: ?ShouldSendEvent@PlayerTelemetry@Events@Social@@QEBA_NXZ
    MCAPI bool ShouldSendEvent() const;

    // symbol: ?UpdatePlayerLoadout@PlayerTelemetry@Events@Social@@QEAAXAEAVPlayer@@@Z
    MCAPI void UpdatePlayerLoadout(class Player& player);

    // symbol: ??1PlayerTelemetry@Events@Social@@QEAA@XZ
    MCAPI ~PlayerTelemetry();

    // NOLINTEND
};

}; // namespace Social::Events
