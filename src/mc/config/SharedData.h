#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
enum class ChatRestrictionLevel;
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct SharedData {

public:
    // prevent constructor by default
    SharedData& operator=(SharedData const&) = delete;
    SharedData(SharedData const&)            = delete;
    SharedData()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isGameRuleEnabled\@SharedData\@PlayerCapabilities\@\@UEBA?AV?$optional\@_N\@std\@\@UGameRuleId\@\@\@Z
     */
    virtual std::optional<bool> isGameRuleEnabled(struct GameRuleId) const;
    /**
     * @vftbl 2
     * @symbol ?getChatRestrictionLevel\@SharedData\@PlayerCapabilities\@\@UEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    virtual enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    // NOLINTEND
};

}; // namespace PlayerCapabilities
