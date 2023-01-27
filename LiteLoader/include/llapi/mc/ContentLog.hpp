/**
 * @file  ContentLog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentLog.
 *
 */
class ContentLog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG
public:
    class ContentLog& operator=(class ContentLog const &) = delete;
    ContentLog(class ContentLog const &) = delete;
#endif

public:
    /**
     * @hash   -1431938601
     * @symbol  ??0ContentLog\@\@QEAA\@XZ
     */
    MCAPI ContentLog();
    /**
     * @hash   1346266280
     * @symbol  ?isEnabled\@ContentLog\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @hash   1040030857
     * @symbol  ?log\@ContentLog\@\@QEAAX_NW4LogLevel\@\@W4LogArea\@\@ZZ
     */
    MCAPI void log(bool, enum class LogLevel, enum class LogArea, ...);
    /**
     * @hash   585906449
     * @symbol  ?unregisterEndPoint\@ContentLog\@\@QEAAXV?$not_null\@PEAVContentLogEndPoint\@\@\@gsl\@\@\@Z
     */
    MCAPI void unregisterEndPoint(class gsl::not_null<class ContentLogEndPoint *>);
    /**
     * @hash   -1511025501
     * @symbol  ?updateEnabledStatus\@ContentLog\@\@QEAAXXZ
     */
    MCAPI void updateEnabledStatus();
    /**
     * @hash   -1978486668
     * @symbol  ?getLogAreaName\@ContentLog\@\@SAPEBDW4LogArea\@\@\@Z
     */
    MCAPI static char const * getLogAreaName(enum class LogArea);
    /**
     * @hash   1225378442
     * @symbol  ?getLogLevelName\@ContentLog\@\@SAPEBDW4LogLevel\@\@\@Z
     */
    MCAPI static char const * getLogLevelName(enum class LogLevel);

//private:
    /**
     * @hash   805143927
     * @symbol  ?_writeToLog\@ContentLog\@\@AEAAX_NW4LogArea\@\@W4LogLevel\@\@AEAPEAD\@Z
     */
    MCAPI void _writeToLog(bool, enum class LogArea, enum class LogLevel, char *&);

private:

};