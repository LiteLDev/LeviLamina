#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptPropertyComponents {

struct PropertyComponentRegistration {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPROPERTYCOMPONENTS_PROPERTYCOMPONENTREGISTRATION
public:
    PropertyComponentRegistration& operator=(PropertyComponentRegistration const&) = delete;
    PropertyComponentRegistration(PropertyComponentRegistration const&)            = delete;
    PropertyComponentRegistration()                                                = delete;
#endif

public:
    /**
     * @symbol ??1PropertyComponentRegistration\@ScriptPropertyComponents\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~PropertyComponentRegistration();
};

}; // namespace ScriptModuleMinecraft::ScriptPropertyComponents
