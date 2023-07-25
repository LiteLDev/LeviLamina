#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct SharedData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCAPABILITIES_SHAREDDATA
public:
    SharedData& operator=(SharedData const&) = delete;
    SharedData(SharedData const&)            = delete;
    SharedData()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isGameRuleEnabled\@SharedData\@PlayerCapabilities\@\@UEBA?AV?$optional\@_N\@std\@\@UGameRuleId\@\@\@Z
     */
    virtual class std::optional<bool> isGameRuleEnabled(struct GameRuleId) const;
    /**
     * @vftbl 2
     * @symbol ?getChatRestrictionLevel\@SharedData\@PlayerCapabilities\@\@UEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    virtual enum class ChatRestrictionLevel getChatRestrictionLevel() const;
};

}; // namespace PlayerCapabilities
