#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

namespace gametest {

class GameTestRuleHelper {

public:
    // prevent constructor by default
    GameTestRuleHelper& operator=(GameTestRuleHelper const&) = delete;
    GameTestRuleHelper(GameTestRuleHelper const&)            = delete;
    GameTestRuleHelper()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?addRuleToClear\@GameTestRuleHelper\@gametest\@\@UEAAXH\@Z
     */
    virtual void addRuleToClear(int); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?clearRules\@GameTestRuleHelper\@gametest\@\@UEAAXXZ
     */
    virtual void clearRules(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?restoreRules\@GameTestRuleHelper\@gametest\@\@UEAAXXZ
     */
    virtual void restoreRules(); // NOLINT
    /**
     * @symbol ??0GameTestRuleHelper\@gametest\@\@QEAA\@AEAVILevel\@\@\@Z
     */
    MCAPI GameTestRuleHelper(class ILevel&); // NOLINT
};

}; // namespace gametest
