#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalLinkSettings {
public:
    std::string mUrl;
    std::string mDisplayName;

    // prevent constructor by default
    ExternalLinkSettings& operator=(ExternalLinkSettings const&);
    ExternalLinkSettings(ExternalLinkSettings const&);
    ExternalLinkSettings();

public:
    // NOLINTBEGIN
    MCAPI ~ExternalLinkSettings();

    // NOLINTEND
};
