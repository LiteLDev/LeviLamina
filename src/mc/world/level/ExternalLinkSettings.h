#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalLinkSettings {

public:
    // prevent constructor by default
    ExternalLinkSettings& operator=(ExternalLinkSettings const&) = delete;
    ExternalLinkSettings(ExternalLinkSettings const&)            = delete;
    ExternalLinkSettings()                                       = delete;

public:
    /**
     * @symbol ??1ExternalLinkSettings\@\@QEAA\@XZ
     */
    MCAPI ~ExternalLinkSettings(); // NOLINT
};
