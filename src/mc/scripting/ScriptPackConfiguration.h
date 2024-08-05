#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackConfiguration {
public:
    // prevent constructor by default
    ScriptPackConfiguration& operator=(ScriptPackConfiguration const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptPackConfiguration();

    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration&&);

    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration const&);

    MCAPI class ScriptPackPermissions const& getPermissions() const;

    MCAPI std::unordered_map<std::string, std::string> const& getSecrets() const;

    MCAPI std::unordered_map<std::string, class Json::Value> const& getVariables() const;

    MCAPI class ScriptPackConfiguration& operator=(class ScriptPackConfiguration&&);

    MCAPI ~ScriptPackConfiguration();

    // NOLINTEND
};
