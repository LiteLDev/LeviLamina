#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/scripting/ScriptPackConfiguration.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ScriptPackConfigurationManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    std::unordered_map<std::string, ScriptPackConfiguration> mPackConfigurations;
    ScriptPackConfiguration                                  mDefaultPackConfiguration;

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&);
    ScriptPackConfigurationManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPackConfigurationManager();

    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager&&);

    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const&);

    MCAPI explicit ScriptPackConfigurationManager(std::optional<class Core::PathBuffer<std::string>> configDirectory);

    MCAPI std::optional<class Core::PathBuffer<std::string>> const& getConfigPath() const;

    MCAPI class ScriptPackConfiguration const& getPackConfiguration(std::string const& packIdentifier) const;

    MCAPI void loadPackConfigs();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const sDefaultConfigurationName;

    // NOLINTEND
};
