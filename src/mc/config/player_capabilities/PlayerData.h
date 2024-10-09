#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/IPlayerData.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace PlayerCapabilities { struct IPlayerData; }
// clang-format on

namespace PlayerCapabilities {

class PlayerData : public ::PlayerCapabilities::IPlayerData {
public:
    // prevent constructor by default
    PlayerData& operator=(PlayerData const&);
    PlayerData(PlayerData const&);
    PlayerData();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerData() = default;

    // vIndex: 1
    virtual bool isAbilityEnabled(::AbilitiesIndex ability) const;

    // vIndex: 2
    virtual bool isTeacher() const;

    // vIndex: 3
    virtual bool isOperator() const;

    MCAPI explicit PlayerData(class Player const& player);

    // NOLINTEND
};

}; // namespace PlayerCapabilities
