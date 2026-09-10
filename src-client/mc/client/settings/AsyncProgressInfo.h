#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/AsyncProgressCancelInfo.h"

namespace Settings {

struct AsyncProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mDescription;
    ::ll::TypedStorage<8, 104, ::std::optional<::Settings::AsyncProgressCancelInfo>> mCancelInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncProgressInfo& operator=(AsyncProgressInfo const&);
    AsyncProgressInfo(AsyncProgressInfo const&);
    AsyncProgressInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Settings::AsyncProgressInfo& operator=(::Settings::AsyncProgressInfo&&);

    MCAPI ~AsyncProgressInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings
