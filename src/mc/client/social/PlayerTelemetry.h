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
    MCAPI void AddBiomeVisited(std::string biome);

    MCAPI void BlockBroken(std::string const&, std::string const& blockName, std::string const&, bool);

    MCAPI void BlockPlaced(std::string const&, std::string const& blockName, std::string const&, bool);

    MCAPI void ItemUsed(std::string const& itemName, std::string const& useMethod);

    MCAPI PlayerTelemetry();

    MCAPI void PopulateEvent(class Social::Events::Event& event) const;

    MCAPI void SetPosition(std::string dimension, class Vec3 pos, double metersTravelled);

    MCAPI bool ShouldSendEvent() const;

    MCAPI void UpdatePlayerLoadout(class Player& player);

    MCAPI ~PlayerTelemetry();

    // NOLINTEND
};

}; // namespace Social::Events
