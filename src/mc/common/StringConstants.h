#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BuildInfo.h"

namespace Common {

struct StringConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mGameVersionStringNet;
    ::ll::TypedStorage<8, 32, ::std::string>                  mBuildIdString;
    ::ll::TypedStorage<8, 32, ::std::string>                  mGameVersionString;
    ::ll::TypedStorage<8, 32, ::std::string>                  mGameSemVerString;
    ::ll::TypedStorage<8, 32, ::std::string>                  mServerVersionString;
    ::ll::TypedStorage<8, 32, ::std::string>                  mGameDisplayVersionString;
    ::ll::TypedStorage<8, 32, ::std::string>                  mGameDisplayVersionStringNet;
    ::ll::TypedStorage<8, 32, ::std::string>                  mBuildFlavor;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mGameDevGitShaString;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mGameDevGitBranchString;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mMergeBaseShaString;
    ::ll::TypedStorage<8, 192, ::Common::BuildInfo>           mBuildInfo;
    // NOLINTEND
};

} // namespace Common
