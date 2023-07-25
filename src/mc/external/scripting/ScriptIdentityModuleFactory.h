#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ScriptIdentityModuleFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTIDENTITYMODULEFACTORY
public:
    ScriptIdentityModuleFactory& operator=(ScriptIdentityModuleFactory const&) = delete;
    ScriptIdentityModuleFactory(ScriptIdentityModuleFactory const&)            = delete;
    ScriptIdentityModuleFactory()                                              = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?ModuleName\@ScriptIdentityModuleFactory\@\@0PEBDEB
     */
    MCAPI static char const* ModuleName;
    /**
     * @symbol ?ModuleUUID\@ScriptIdentityModuleFactory\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ModuleUUID;
};
