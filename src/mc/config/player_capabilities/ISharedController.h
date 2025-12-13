#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
// clang-format on

namespace PlayerCapabilities {

struct ISharedController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISharedController() = default;

    virtual bool canChat(::PlayerCapabilities::IPlayerData const&) const = 0;

    virtual bool canTell(::PlayerCapabilities::IPlayerData const&) const = 0;

    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayerCapabilities
