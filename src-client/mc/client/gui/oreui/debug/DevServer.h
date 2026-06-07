#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

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

public:
    // prevent constructor by default
    DevServer& operator=(DevServer const&);
    DevServer(DevServer const&);
    DevServer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::DevServer& operator=(::OreUI::DevServer&&);

    MCAPI ~DevServer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
