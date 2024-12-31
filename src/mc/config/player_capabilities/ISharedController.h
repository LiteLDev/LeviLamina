#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
// clang-format on

namespace PlayerCapabilities {

struct ISharedController {
public:
    // prevent constructor by default
    ISharedController& operator=(ISharedController const&);
    ISharedController(ISharedController const&);
    ISharedController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISharedController() = default;

    // vIndex: 1
    virtual bool canChat(::PlayerCapabilities::IPlayerData const&) const = 0;

    // vIndex: 2
    virtual bool canTell(::PlayerCapabilities::IPlayerData const&) const = 0;

    // vIndex: 3
    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayerCapabilities
