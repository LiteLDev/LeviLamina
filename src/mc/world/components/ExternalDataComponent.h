#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataComponent {

public:
    // prevent constructor by default
    ExternalDataComponent& operator=(ExternalDataComponent const&) = delete;
    ExternalDataComponent(ExternalDataComponent const&)            = delete;
    ExternalDataComponent()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ExternalDataComponent\@\@QEAA\@XZ
     */
    MCAPI ~ExternalDataComponent();
    // NOLINTEND
};
