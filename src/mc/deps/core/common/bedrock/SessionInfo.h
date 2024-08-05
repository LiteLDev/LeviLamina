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
    MCAPI std::string const& getBranchId() const;

    MCAPI std::string const& getBuildId() const;

    MCAPI std::string const& getCommitId() const;

    MCAPI int64 getCrashTimestamp() const;

    MCAPI std::optional<uint> const& getErrorCode() const;

    MCAPI std::string const& getErrorMessage() const;

    MCAPI std::string const& getSessionId() const;

    MCAPI std::map<std::string, std::string>& getTags();

    // NOLINTEND
};

}; // namespace Bedrock
