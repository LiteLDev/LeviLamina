/**
 * @file  MC/TestSummaryDisplayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TestSummaryDisplayer.
 *
 */
class TestSummaryDisplayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTSUMMARYDISPLAYER
public:
    class TestSummaryDisplayer& operator=(class TestSummaryDisplayer const &) = delete;
    TestSummaryDisplayer(class TestSummaryDisplayer const &) = delete;
    TestSummaryDisplayer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TESTSUMMARYDISPLAYER
    /**
     * @hash   1721567412
     * @symbol ?onTestFailed@TestSummaryDisplayer@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     */
    MCVAPI void onTestFailed(class gametest::BaseGameTestInstance &);
    /**
     * @hash   1446042113
     * @symbol ?onTestPassed@TestSummaryDisplayer@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     */
    MCVAPI void onTestPassed(class gametest::BaseGameTestInstance &);
#endif
    /**
     * @hash   -1222691055
     * @symbol ??0TestSummaryDisplayer@@QEAA@AEAVLevel@@AEAVMultipleTestTracker@gametest@@@Z
     */
    MCAPI TestSummaryDisplayer(class Level &, class gametest::MultipleTestTracker &);

//private:
    /**
     * @hash   2137613548
     * @symbol ?_say@TestSummaryDisplayer@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI void _say(std::string const &, std::string const &) const;
    /**
     * @hash   1418472190
     * @symbol ?_showTestSummaryIfAllDone@TestSummaryDisplayer@@AEBAXXZ
     */
    MCAPI void _showTestSummaryIfAllDone() const;

private:

};