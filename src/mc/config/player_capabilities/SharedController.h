#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/ISharedController.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedData; }
// clang-format on

namespace PlayerCapabilities {

class SharedController : public ::PlayerCapabilities::ISharedController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerCapabilities::ISharedData>> mShared;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canChat(::PlayerCapabilities::IPlayerData const& player) const /*override*/;

    // vIndex: 2
    virtual bool canTell(::PlayerCapabilities::IPlayerData const& player) const /*override*/;

    // vIndex: 3
    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const& player) const /*override*/;

    // vIndex: 0
    virtual ~SharedController() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canChat(::PlayerCapabilities::IPlayerData const& player) const;

    MCAPI bool $canTell(::PlayerCapabilities::IPlayerData const& player) const;

    MCAPI bool $canOpenChat(::PlayerCapabilities::IPlayerData const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
