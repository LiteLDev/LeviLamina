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

    public:
        // prevent constructor by default
        Error& operator=(Error const&) = delete;
        Error(Error const&)            = delete;
        Error()                        = delete;

    public:
        /**
         * @symbol ??1Error\@ScriptPluginResult\@\@QEAA\@XZ
         */
        MCAPI ~Error(); // NOLINT
    };

    struct Info {

    public:
        // prevent constructor by default
        Info& operator=(Info const&) = delete;
        Info(Info const&)            = delete;
        Info()                       = delete;

    public:
        /**
         * @symbol ??1Info\@ScriptPluginResult\@\@QEAA\@XZ
         */
        MCAPI ~Info(); // NOLINT
    };

    struct Warning {

    public:
        // prevent constructor by default
        Warning& operator=(Warning const&) = delete;
        Warning(Warning const&)            = delete;
        Warning()                          = delete;

    public:
        /**
         * @symbol ??1Warning\@ScriptPluginResult\@\@QEAA\@XZ
         */
        MCAPI ~Warning(); // NOLINT
    };

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&) = delete;
    ScriptPluginResult()                                     = delete;

public:
    /**
     * @symbol ??0ScriptPluginResult\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPluginResult(class ScriptPluginResult const&); // NOLINT
    /**
     * @symbol
     * ?addError\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addError(std::string const&); // NOLINT
    /**
     * @symbol
     * ?addInfo\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addInfo(std::string const&); // NOLINT
    /**
     * @symbol
     * ?addWarning\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addWarning(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getErrors\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UError\@ScriptPluginResult\@\@V?$allocator\@UError\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Error> const& getErrors() const; // NOLINT
    /**
     * @symbol ?getModuleDescriptor\@ScriptPluginResult\@\@QEBAAEBUModuleDescriptor\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const& getModuleDescriptor() const; // NOLINT
    /**
     * @symbol
     * ?getWarnings\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UWarning\@ScriptPluginResult\@\@V?$allocator\@UWarning\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Warning> const& getWarnings() const; // NOLINT
    /**
     * @symbol ??1ScriptPluginResult\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginResult(); // NOLINT
};
