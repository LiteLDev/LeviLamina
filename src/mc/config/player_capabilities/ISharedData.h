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
    // prevent constructor by default
    ISharedData& operator=(ISharedData const&);
    ISharedData(ISharedData const&);
    ISharedData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISharedData() = default;

    // vIndex: 1
    virtual ::std::optional<bool> isGameRuleEnabled(::GameRuleId) const = 0;

    // vIndex: 2
    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const = 0;
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
