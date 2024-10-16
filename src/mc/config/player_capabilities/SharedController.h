#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/config/player_capabilities/SharedData.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/ISharedController.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

namespace PlayerCapabilities {

class SharedController : public ::PlayerCapabilities::ISharedController {
public:
    std::unique_ptr<struct PlayerCapabilities::ISharedData> mShared;

    // prevent constructor by default
    SharedController& operator=(SharedController const&);
    SharedController(SharedController const&);
    SharedController();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedController() = default;

    // vIndex: 1
    virtual bool canChat(struct PlayerCapabilities::IPlayerData const& player) const;

    // vIndex: 2
    virtual bool canTell(struct PlayerCapabilities::IPlayerData const& player) const;

    // vIndex: 3
    virtual bool canOpenChat(struct PlayerCapabilities::IPlayerData const& player) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool canChat$(struct PlayerCapabilities::IPlayerData const& player) const;

    MCAPI bool canOpenChat$(struct PlayerCapabilities::IPlayerData const& player) const;

    MCAPI bool canTell$(struct PlayerCapabilities::IPlayerData const& player) const;

    // NOLINTEND
};

}; // namespace PlayerCapabilities
