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
        MCAPI ~Error();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~Info();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~Warning();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&);
    ScriptPluginResult();

public:
    // NOLINTBEGIN
    MCAPI ScriptPluginResult(class ScriptPluginResult const&);

    MCAPI void addError(std::string const& error);

    MCAPI void addInfo(std::string const& info);

    MCAPI void addWarning(std::string const& warning);

    MCAPI std::vector<struct ScriptPluginResult::Error> const& getErrors() const;

    MCAPI struct Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCAPI std::vector<struct ScriptPluginResult::Warning> const& getWarnings() const;

    MCAPI ~ScriptPluginResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
