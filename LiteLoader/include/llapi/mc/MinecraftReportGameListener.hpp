/**
 * @file  MinecraftReportGameListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftReportGameListener.
 *
 */
class MinecraftReportGameListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTREPORTGAMELISTENER
public:
    class MinecraftReportGameListener& operator=(class MinecraftReportGameListener const &) = delete;
    MinecraftReportGameListener(class MinecraftReportGameListener const &) = delete;
    MinecraftReportGameListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MinecraftReportGameListener();
    /**
     * @hash   949225079
     * @vftbl  1
     * @symbol  ?onTestStructureLoaded\@MinecraftReportGameListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /**
     * @hash   -1791226115
     * @vftbl  2
     * @symbol  ?onTestPassed\@MinecraftReportGameListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestPassed(class gametest::BaseGameTestInstance &);
    /**
     * @hash   189715184
     * @vftbl  3
     * @symbol  ?onTestFailed\@MinecraftReportGameListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestFailed(class gametest::BaseGameTestInstance &);
    /**
     * @hash   1321814431
     * @symbol  ??0MinecraftReportGameListener\@\@QEAA\@AEAVMinecraftGameTestInstance\@\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI MinecraftReportGameListener(class MinecraftGameTestInstance &, class gametest::GameTestTicker &);

//private:
    /**
     * @hash   225048194
     * @symbol  ?_generateErrorDescription\@MinecraftReportGameListener\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUGameTestError\@gametest\@\@\@Z
     */
    MCAPI std::string _generateErrorDescription(struct gametest::GameTestError const &) const;
    /**
     * @hash   -1577872092
     * @symbol  ?_reportFailure\@MinecraftReportGameListener\@\@AEAAXAEBUGameTestError\@gametest\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _reportFailure(struct gametest::GameTestError const &, class BlockSource &);
    /**
     * @symbol  ?_reportPassed\@MinecraftReportGameListener\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _reportPassed(std::string const &, class BlockSource &);
    /**
     * @hash   -1352985151
     * @symbol  ?_say\@MinecraftReportGameListener\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void _say(std::string const &, std::string const &);
    /**
     * @hash   -1519410985
     * @symbol  ?_spawnBeacon\@MinecraftReportGameListener\@\@AEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void _spawnBeacon(class Block const &);
    /**
     * @hash   -1462605604
     * @symbol  ?_spawnLectern\@MinecraftReportGameListener\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _spawnLectern(std::string const &);
    /**
     * @hash   -1890875967
     * @symbol  ?_visualizeFailedTest\@MinecraftReportGameListener\@\@AEAAXAEBUGameTestError\@gametest\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _visualizeFailedTest(struct gametest::GameTestError const &, class BlockSource &);

private:

};