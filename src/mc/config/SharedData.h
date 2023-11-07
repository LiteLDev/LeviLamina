#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ChatRestrictionLevel.h"

// auto generated forward declare list
// clang-format off
struct GameRuleId;
// clang-format on
class Level;

namespace PlayerCapabilities {

struct ISharedData {};

struct SharedData : public ISharedData {
public:
    const Level* mLevel;

    // prevent constructor by default
    SharedData& operator=(SharedData const&);
    SharedData(SharedData const&);
    SharedData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SharedData@@@UEAA@XZ
    virtual ~SharedData();

    // vIndex: 1, symbol: ?isGameRuleEnabled@SharedData@PlayerCapabilities@@UEBA?AV?$optional@_N@std@@UGameRuleId@@@Z
    virtual std::optional<bool> isGameRuleEnabled(struct GameRuleId) const;

    // vIndex: 2, symbol: ?getChatRestrictionLevel@SharedData@PlayerCapabilities@@UEBA?AW4ChatRestrictionLevel@@XZ
    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // NOLINTEND
};

}; // namespace PlayerCapabilities
