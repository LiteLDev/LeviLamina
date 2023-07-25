#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLog {
public:
    // ContentLog inner types declare
    // clang-format off
    class ContentLogEndPointData;
    class ContentLogScope;
    class ThreadSpecificData;
    // clang-format on

    // ContentLog inner types define
    class ContentLogEndPointData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG_CONTENTLOGENDPOINTDATA
    public:
        ContentLogEndPointData& operator=(ContentLogEndPointData const&) = delete;
        ContentLogEndPointData(ContentLogEndPointData const&)            = delete;
        ContentLogEndPointData()                                         = delete;
#endif

    public:
        /**
         * @symbol ??0ContentLogEndPointData\@ContentLog\@\@QEAA\@V?$not_null\@PEAVContentLogEndPoint\@\@\@gsl\@\@\@Z
         */
        MCAPI ContentLogEndPointData(class gsl::not_null<class ContentLogEndPoint*>);
    };

    class ContentLogScope {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG_CONTENTLOGSCOPE
    public:
        ContentLogScope& operator=(ContentLogScope const&) = delete;
        ContentLogScope(ContentLogScope const&)            = delete;
        ContentLogScope()                                  = delete;
#endif

    public:
        /**
         * @symbol
         * ??0ContentLogScope\@ContentLog\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI ContentLogScope(std::string);
        /**
         * @symbol ??1ContentLogScope\@ContentLog\@\@QEAA\@XZ
         */
        MCAPI ~ContentLogScope();
    };

    class ThreadSpecificData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG_THREADSPECIFICDATA
    public:
        ThreadSpecificData& operator=(ThreadSpecificData const&) = delete;
        ThreadSpecificData(ThreadSpecificData const&)            = delete;
        ThreadSpecificData()                                     = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG
public:
    ContentLog& operator=(ContentLog const&) = delete;
    ContentLog(ContentLog const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ContentLog\@\@QEAA\@XZ
     */
    MCAPI ContentLog();
    /**
     * @symbol ?isEnabled\@ContentLog\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?log\@ContentLog\@\@QEAAX_NW4LogLevel\@\@W4LogArea\@\@ZZ
     */
    MCAPI void log(bool, enum class LogLevel, enum class LogArea, ...);
    /**
     * @symbol ?updateEnabledStatus\@ContentLog\@\@QEAAXXZ
     */
    MCAPI void updateEnabledStatus();
    /**
     * @symbol ?getBedrockLogAreaFromContentLogArea\@ContentLog\@\@SA?BW4LogAreaID\@\@W4LogArea\@\@\@Z
     */
    MCAPI static enum class LogAreaID const getBedrockLogAreaFromContentLogArea(enum class LogArea);
    /**
     * @symbol ?getLogAreaName\@ContentLog\@\@SAPEBDW4LogArea\@\@\@Z
     */
    MCAPI static char const* getLogAreaName(enum class LogArea);

    // private:
    /**
     * @symbol ?_writeToLog\@ContentLog\@\@AEAAX_NW4LogArea\@\@W4LogLevel\@\@AEAPEAD\@Z
     */
    MCAPI void _writeToLog(bool, enum class LogArea, enum class LogLevel, char*&);

private:
};
