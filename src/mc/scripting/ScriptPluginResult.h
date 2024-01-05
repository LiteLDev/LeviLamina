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
        Error& operator=(Error const&);
        Error(Error const&);
        Error();

    public:
        // NOLINTBEGIN
        // symbol: ??1Error@ScriptPluginResult@@QEAA@XZ
        MCAPI ~Error();

        // NOLINTEND
    };

    struct Info {
    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info(Info const&);
        Info();

    public:
        // NOLINTBEGIN
        // symbol: ??1Info@ScriptPluginResult@@QEAA@XZ
        MCAPI ~Info();

        // NOLINTEND
    };

    struct Warning {
    public:
        // prevent constructor by default
        Warning& operator=(Warning const&);
        Warning(Warning const&);
        Warning();

    public:
        // NOLINTBEGIN
        // symbol: ??1Warning@ScriptPluginResult@@QEAA@XZ
        MCAPI ~Warning();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&);
    ScriptPluginResult();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPluginResult@@QEAA@AEBV0@@Z
    MCAPI ScriptPluginResult(class ScriptPluginResult const&);

    // symbol: ?addError@ScriptPluginResult@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addError(std::string const& error);

    // symbol: ?addInfo@ScriptPluginResult@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addInfo(std::string const& info);

    // symbol: ?addWarning@ScriptPluginResult@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addWarning(std::string const&);

    // symbol:
    // ?getErrors@ScriptPluginResult@@QEBAAEBV?$vector@UError@ScriptPluginResult@@V?$allocator@UError@ScriptPluginResult@@@std@@@std@@XZ
    MCAPI std::vector<struct ScriptPluginResult::Error> const& getErrors() const;

    // symbol: ?getModuleDescriptor@ScriptPluginResult@@QEBAAEBUModuleDescriptor@Scripting@@XZ
    MCAPI struct Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    // symbol:
    // ?getWarnings@ScriptPluginResult@@QEBAAEBV?$vector@UWarning@ScriptPluginResult@@V?$allocator@UWarning@ScriptPluginResult@@@std@@@std@@XZ
    MCAPI std::vector<struct ScriptPluginResult::Warning> const& getWarnings() const;

    // symbol: ??1ScriptPluginResult@@QEAA@XZ
    MCAPI ~ScriptPluginResult();

    // NOLINTEND
};
