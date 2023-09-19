#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/IPlayerData.h"
#include "mc/enums/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace PlayerCapabilities { struct IPlayerData; }
// clang-format on

namespace PlayerCapabilities {

class PlayerData : public ::PlayerCapabilities::IPlayerData {
public:
    const Player* mPlayer;

    // prevent constructor by default
    PlayerData& operator=(PlayerData const&);
    PlayerData(PlayerData const&);
    PlayerData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isAbilityEnabled@PlayerData@PlayerCapabilities@@UEBA_NW4AbilitiesIndex@@@Z
    virtual bool isAbilityEnabled(::AbilitiesIndex) const;

    // vIndex: 2, symbol: ?isTeacher@PlayerData@PlayerCapabilities@@UEBA_NXZ
    virtual bool isTeacher() const;

    // vIndex: 3, symbol: ?isOperator@PlayerData@PlayerCapabilities@@UEBA_NXZ
    virtual bool isOperator() const;

    // symbol: ??0PlayerData@PlayerCapabilities@@QEAA@AEBVPlayer@@@Z
    MCAPI explicit PlayerData(class Player const&);

    // NOLINTEND
};

}; // namespace PlayerCapabilities
