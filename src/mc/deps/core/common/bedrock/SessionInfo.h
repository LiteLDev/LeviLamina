#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_SESSIONINFO
public:
    SessionInfo& operator=(SessionInfo const&) = delete;
    SessionInfo(SessionInfo const&)            = delete;
    SessionInfo()                              = delete;
#endif

public:
    /**
     * @symbol
     * ?getBranchId\@SessionInfo\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getBranchId() const;
    /**
     * @symbol
     * ?getBuildId\@SessionInfo\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getBuildId() const;
    /**
     * @symbol
     * ?getCommitId\@SessionInfo\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getCommitId() const;
    /**
     * @symbol ?getCrashTimestamp\@SessionInfo\@Bedrock\@\@QEBA_JXZ
     */
    MCAPI __int64 getCrashTimestamp() const;
    /**
     * @symbol
     * ?getSessionId\@SessionInfo\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getSessionId() const;
    /**
     * @symbol
     * ?getTags\@SessionInfo\@Bedrock\@\@QEAAAEAV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::map<
        std::string,
        std::string,
        struct std::less<std::string>,
        class std::allocator<struct std::pair<std::string const, std::string>>>&
    getTags();
};

}; // namespace Bedrock
