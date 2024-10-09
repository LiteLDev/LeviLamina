#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"

// auto generated forward declare list
// clang-format off
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct SharedData {
public:
    // prevent constructor by default
    SharedData& operator=(SharedData const&);
    SharedData(SharedData const&);
    SharedData();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedData() = default;

    // vIndex: 1
    virtual std::optional<bool> isGameRuleEnabled(struct GameRuleId rule) const;

    // vIndex: 2
    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // NOLINTEND
};

}; // namespace PlayerCapabilities
