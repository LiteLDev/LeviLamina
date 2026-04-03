#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/IPlayerData.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace PlayerCapabilities {

class PlayerData : public ::PlayerCapabilities::IPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player const&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerData& operator=(PlayerData const&);
    PlayerData(PlayerData const&);
    PlayerData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isAbilityEnabled(::AbilitiesIndex ability) const /*override*/;

    virtual bool isTeacher() const /*override*/;

    virtual bool isOperator() const /*override*/;

    virtual ~PlayerData() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI bool $isAbilityEnabled(::AbilitiesIndex ability) const;
#endif

    MCNAPI bool $isTeacher() const;

    MCNAPI bool $isOperator() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
