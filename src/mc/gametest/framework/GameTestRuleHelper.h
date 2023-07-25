#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class GameTestRuleHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_GAMETESTRULEHELPER
public:
    GameTestRuleHelper& operator=(GameTestRuleHelper const&) = delete;
    GameTestRuleHelper(GameTestRuleHelper const&)            = delete;
    GameTestRuleHelper()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?addRuleToClear\@GameTestRuleHelper\@gametest\@\@UEAAXH\@Z
     */
    virtual void addRuleToClear(int);
    /**
     * @vftbl 2
     * @symbol ?clearRules\@GameTestRuleHelper\@gametest\@\@UEAAXXZ
     */
    virtual void clearRules();
    /**
     * @vftbl 3
     * @symbol ?restoreRules\@GameTestRuleHelper\@gametest\@\@UEAAXXZ
     */
    virtual void restoreRules();
    /**
     * @symbol ??0GameTestRuleHelper\@gametest\@\@QEAA\@AEAVILevel\@\@\@Z
     */
    MCAPI GameTestRuleHelper(class ILevel&);
};

}; // namespace gametest
