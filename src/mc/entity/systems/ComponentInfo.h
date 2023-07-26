#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentInfo {

public:
    // prevent constructor by default
    ComponentInfo(ComponentInfo const&) = delete;
    ComponentInfo()                     = delete;

public:
    /**
     * @symbol ??4ComponentInfo\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ComponentInfo& operator=(struct ComponentInfo const&); // NOLINT
    /**
     * @symbol ??4ComponentInfo\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ComponentInfo& operator=(struct ComponentInfo&&); // NOLINT
    /**
     * @symbol ??1ComponentInfo\@\@QEAA\@XZ
     */
    MCAPI ~ComponentInfo(); // NOLINT
    /**
     * @symbol ?bindType\@ComponentInfo\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};
