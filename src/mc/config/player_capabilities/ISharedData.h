#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"

// auto generated forward declare list
// clang-format off
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct ISharedData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISharedData() = default;

    virtual ::std::optional<bool> isGameRuleEnabled(::GameRuleId) const = 0;

    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayerCapabilities
