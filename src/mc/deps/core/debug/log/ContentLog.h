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

    public:
        // prevent constructor by default
        ContentLogEndPointData& operator=(ContentLogEndPointData const&) = delete;
        ContentLogEndPointData(ContentLogEndPointData const&)            = delete;
        ContentLogEndPointData()                                         = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0ContentLogEndPointData\@ContentLog\@\@QEAA\@V?$not_null\@PEAVContentLogEndPoint\@\@\@gsl\@\@\@Z
         */
        MCAPI ContentLogEndPointData(class gsl::not_null<class ContentLogEndPoint*>);
        // NOLINTEND
    };

    class ContentLogScope {

    public:
        // prevent constructor by default
        ContentLogScope& operator=(ContentLogScope const&) = delete;
        ContentLogScope(ContentLogScope const&)            = delete;
        ContentLogScope()                                  = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0ContentLogScope\@ContentLog\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI ContentLogScope(std::string);
        /**
         * @symbol ??1ContentLogScope\@ContentLog\@\@QEAA\@XZ
         */
        MCAPI ~ContentLogScope();
        // NOLINTEND
    };

    class ThreadSpecificData {

    public:
        // prevent constructor by default
        ThreadSpecificData& operator=(ThreadSpecificData const&) = delete;
        ThreadSpecificData(ThreadSpecificData const&)            = delete;
        ThreadSpecificData()                                     = delete;
    };

public:
    // prevent constructor by default
    ContentLog& operator=(ContentLog const&) = delete;
    ContentLog(ContentLog const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ContentLog\@\@QEAA\@XZ
     */
    MCAPI ContentLog();
    /**
     * @symbol
     * ?getScope\@ContentLog\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getScope();
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_writeToLog\@ContentLog\@\@AEAAX_NW4LogArea\@\@W4LogLevel\@\@AEAPEAD\@Z
     */
    MCAPI void _writeToLog(bool, enum class LogArea, enum class LogLevel, char*&);
    // NOLINTEND
};
