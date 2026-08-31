#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Debug {

struct DevServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mHostName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mUrl;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mPaths;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
    // NOLINTEND
};

} // namespace OreUI::Debug
