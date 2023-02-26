/**
 * @file  DedicatedServerGameTestRunner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DedicatedServerGameTestRunner.
 *
 */
class DedicatedServerGameTestRunner {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVERGAMETESTRUNNER
public:
    class DedicatedServerGameTestRunner& operator=(class DedicatedServerGameTestRunner const &) = delete;
    DedicatedServerGameTestRunner(class DedicatedServerGameTestRunner const &) = delete;
    DedicatedServerGameTestRunner() = delete;
#endif

public:
    /**
     * @symbol  ??0DedicatedServerGameTestRunner\@\@QEAA\@AEBVTestConfig\@\@AEAVMinecraftGameTest\@\@AEAVServerInstance\@\@AEAVLevel\@\@\@Z
     */
    MCAPI DedicatedServerGameTestRunner(class TestConfig const &, class MinecraftGameTest &, class ServerInstance &, class Level &);
    /**
     * @symbol  ?isDone\@DedicatedServerGameTestRunner\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @symbol  ?tick\@DedicatedServerGameTestRunner\@\@QEAAXXZ
     */
    MCAPI void tick();

//private:
    /**
     * @symbol  ?_ensureDimension\@DedicatedServerGameTestRunner\@\@AEAAPEAVDimension\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class Dimension * _ensureDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?_runTestGroup\@DedicatedServerGameTestRunner\@\@AEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _runTestGroup(std::vector<std::string> const &);
    /**
     * @symbol  ?_saveReport\@DedicatedServerGameTestRunner\@\@AEAA_NXZ
     */
    MCAPI bool _saveReport();
    /**
     * @symbol  ?_writeFile\@DedicatedServerGameTestRunner\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool _writeFile(std::string const &, std::string const &);

private:

};