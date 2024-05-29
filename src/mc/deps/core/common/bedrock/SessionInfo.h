#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {
public:
    // prevent constructor by default
    SessionInfo& operator=(SessionInfo const&);
    SessionInfo(SessionInfo const&);
    SessionInfo();

public:
    // NOLINTBEGIN
    // symbol: ?getBranchId@SessionInfo@Bedrock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getBranchId() const;

    // symbol: ?getBuildId@SessionInfo@Bedrock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getBuildId() const;

    // symbol: ?getCommitId@SessionInfo@Bedrock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCommitId() const;

    // symbol: ?getCrashTimestamp@SessionInfo@Bedrock@@QEBA_JXZ
    MCAPI int64 getCrashTimestamp() const;

    // symbol: ?getErrorCode@SessionInfo@Bedrock@@QEBAAEBV?$optional@I@std@@XZ
    MCAPI std::optional<uint> const& getErrorCode() const;

    // symbol:
    // ?getErrorMessage@SessionInfo@Bedrock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getErrorMessage() const;

    // symbol:
    // ?getSessionId@SessionInfo@Bedrock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getSessionId() const;

    // symbol:
    // ?getTags@SessionInfo@Bedrock@@QEAAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    MCAPI std::map<std::string, std::string>& getTags();

    // NOLINTEND
};

}; // namespace Bedrock
