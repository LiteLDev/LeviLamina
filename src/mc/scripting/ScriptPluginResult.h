#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginResult {
public:
    // ScriptPluginResult inner types declare
    // clang-format off
    struct Error;
    struct Info;
    struct Warning;
    // clang-format on

    // ScriptPluginResult inner types define
    struct Error {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINRESULT_ERROR
    public:
        Error& operator=(Error const&) = delete;
        Error(Error const&)            = delete;
        Error()                        = delete;
#endif

    public:
        /**
         * @symbol ??1Error\@ScriptPluginResult\@\@QEAA\@XZ
         */
        MCAPI ~Error();
    };

    struct Info {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINRESULT_INFO
    public:
        Info& operator=(Info const&) = delete;
        Info(Info const&)            = delete;
        Info()                       = delete;
#endif

    public:
        /**
         * @symbol ??1Info\@ScriptPluginResult\@\@QEAA\@XZ
         */
        MCAPI ~Info();
    };

    struct Warning {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINRESULT_WARNING
    public:
        Warning& operator=(Warning const&) = delete;
        Warning(Warning const&)            = delete;
        Warning()                          = delete;
#endif

    public:
        /**
         * @symbol ??1Warning\@ScriptPluginResult\@\@QEAA\@XZ
         */
        MCAPI ~Warning();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINRESULT
public:
    ScriptPluginResult& operator=(ScriptPluginResult const&) = delete;
    ScriptPluginResult()                                     = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPluginResult\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPluginResult(class ScriptPluginResult const&);
    /**
     * @symbol
     * ?addError\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addError(std::string const&);
    /**
     * @symbol
     * ?addInfo\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addInfo(std::string const&);
    /**
     * @symbol
     * ?addWarning\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addWarning(std::string const&);
    /**
     * @symbol
     * ?getErrors\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UError\@ScriptPluginResult\@\@V?$allocator\@UError\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Error> const& getErrors() const;
    /**
     * @symbol ?getModuleDescriptor\@ScriptPluginResult\@\@QEBAAEBUModuleDescriptor\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const& getModuleDescriptor() const;
    /**
     * @symbol
     * ?getWarnings\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UWarning\@ScriptPluginResult\@\@V?$allocator\@UWarning\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Warning> const& getWarnings() const;
    /**
     * @symbol ??1ScriptPluginResult\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginResult();
};
