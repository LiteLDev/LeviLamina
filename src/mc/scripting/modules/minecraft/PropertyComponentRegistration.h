#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptPropertyComponents {

struct PropertyComponentRegistration {

public:
    // prevent constructor by default
    PropertyComponentRegistration& operator=(PropertyComponentRegistration const&) = delete;
    PropertyComponentRegistration(PropertyComponentRegistration const&)            = delete;
    PropertyComponentRegistration()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1PropertyComponentRegistration\@ScriptPropertyComponents\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~PropertyComponentRegistration();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft::ScriptPropertyComponents
