#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct AsyncProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncProgressInfo& operator=(AsyncProgressInfo const&);
    AsyncProgressInfo(AsyncProgressInfo const&);
    AsyncProgressInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Settings::AsyncProgressInfo& operator=(::Settings::AsyncProgressInfo&&);
    // NOLINTEND
};

} // namespace Settings
