#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/scripting/ScriptPackConfiguration.h"
#include "mc/server/commands/CommandsRegistryConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptPackConfigurationManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::Core::PathBuffer<::std::string>> const>       mConfigDirectory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ScriptPackConfiguration>> mPackConfigurations;
    ::ll::TypedStorage<8, 224, ::ScriptPackConfiguration>                                     mDefaultPackConfiguration;
    ::ll::TypedStorage<8, 104, ::std::optional<::CommandsRegistryConfiguration>> mCommandsRegistryConfiguration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&);
    ScriptPackConfigurationManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPackConfigurationManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager&&);

    MCNAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager const&);

    MCNAPI explicit ScriptPackConfigurationManager(::std::optional<::Core::PathBuffer<::std::string>> configDirectory);

    MCNAPI ::ScriptPackConfiguration const& getPackConfiguration(::std::string const& packIdentifier) const;

    MCNAPI_S void loadConfigs(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& sDefaultConfigurationName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPackConfigurationManager&&);

    MCNAPI void* $ctor(::ScriptPackConfigurationManager const&);

    MCNAPI void* $ctor(::std::optional<::Core::PathBuffer<::std::string>> configDirectory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
