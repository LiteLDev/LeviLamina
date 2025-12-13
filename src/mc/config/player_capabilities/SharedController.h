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
    virtual bool canChat(::PlayerCapabilities::IPlayerData const& player) const /*override*/;

    virtual bool canTell(::PlayerCapabilities::IPlayerData const& player) const /*override*/;

    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const& player) const /*override*/;

    virtual ~SharedController() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canChat(::PlayerCapabilities::IPlayerData const& player) const;

    MCNAPI bool $canTell(::PlayerCapabilities::IPlayerData const& player) const;

    MCNAPI bool $canOpenChat(::PlayerCapabilities::IPlayerData const& player) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
