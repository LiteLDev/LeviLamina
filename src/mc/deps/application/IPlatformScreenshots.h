#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ScreenshotOptions;
// clang-format on

class IPlatformScreenshots {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlatformScreenshots() = default;

    virtual ::std::optional<::ScreenshotOptions> getExtraLevelSaveDataIconParams(::std::string const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
