#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/external/scripting/runtime/IDependencyLoader.h"
#include "mc/scripting/PluginExecutionGroup.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
class MinEngineVersion;
struct PackIdVersion;
namespace Scripting { class ScriptContext; }
namespace Scripting { struct Capabilities; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptData; }
namespace mce { class UUID; }
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk677bbf;
    ::ll::UntypedStorage<8, 104> mUnk510e2b;
    ::ll::UntypedStorage<8, 16>  mUnka5fd90;
    ::ll::UntypedStorage<8, 24>  mUnkde6a3d;
    ::ll::UntypedStorage<1, 1>   mUnk1dd446;
    ::ll::UntypedStorage<8, 120> mUnk67c5dc;
    ::ll::UntypedStorage<8, 136> mUnk55c0d6;
    ::ll::UntypedStorage<8, 32>  mUnk210ffe;
    ::ll::UntypedStorage<4, 4>   mUnkedd7b3;
    ::ll::UntypedStorage<8, 32>  mUnkfa4080;
    ::ll::UntypedStorage<8, 32>  mUnk9b4f34;
    ::ll::UntypedStorage<8, 24>  mUnk6cbe98;
    ::ll::UntypedStorage<8, 32>  mUnk553bc3;
    ::ll::UntypedStorage<1, 1>   mUnk48ffe9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlugin& operator=(ScriptPlugin const&);
    ScriptPlugin(ScriptPlugin const&);
    ScriptPlugin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlugin() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(
        ::std::string const&                                       name,
        ::std::optional<::std::vector<::Scripting::ModuleBinding>> moduleBindings
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlugin(::ScriptPlugin&&);

    MCAPI ScriptPlugin(
        ::std::shared_ptr<::IScriptPluginSource>       pluginSource,
        ::Scripting::ModuleDescriptor&&                moduleDesc,
        ::std::vector<::Scripting::ModuleDescriptor>&& moduleDependencies,
        ::Scripting::Capabilities&&                    capabilities,
        ::MinEngineVersion const&                      minEngineVersion,
        ::PackIdVersion const&                         packId,
        ::std::string const&                           runtimeName,
        ::std::string const&                           mainScriptFilePath,
        ::ResourceInformation::ResourceType            pluginType,
        ::PluginExecutionGroup                         executionGroup
    );

    MCAPI ::std::optional<::Scripting::ScriptData> _loadScript(::std::string const& fileName);

    MCFOLD ::Scripting::Capabilities const& getCapabilities() const;

    MCFOLD ::PluginExecutionGroup getExecutionGroup() const;

    MCFOLD ::std::string const& getMainScriptFilePath() const;

    MCFOLD ::MinEngineVersion const& getMinEngineVersion() const;

    MCFOLD ::std::vector<::Scripting::ModuleDescriptor> const& getModuleDependencies() const;

    MCFOLD ::Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCAPI ::mce::UUID getModuleUUID() const;

    MCFOLD ::PackIdVersion const& getPackId() const;

    MCAPI ::std::string const& getRuntimeName() const;

    MCAPI ::Scripting::ScriptContext& getScriptContext();

    MCFOLD ::std::vector<::std::string> const& getScriptFilePaths() const;

    MCAPI bool hasValidScriptContext() const;

    MCAPI ::std::optional<::Scripting::ScriptData> loadScriptMain();

    MCAPI void setScriptContext(::Scripting::ScriptContext&& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptPlugin&&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::IScriptPluginSource>       pluginSource,
        ::Scripting::ModuleDescriptor&&                moduleDesc,
        ::std::vector<::Scripting::ModuleDescriptor>&& moduleDependencies,
        ::Scripting::Capabilities&&                    capabilities,
        ::MinEngineVersion const&                      minEngineVersion,
        ::PackIdVersion const&                         packId,
        ::std::string const&                           runtimeName,
        ::std::string const&                           mainScriptFilePath,
        ::ResourceInformation::ResourceType            pluginType,
        ::PluginExecutionGroup                         executionGroup
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::ScriptData>
    $onLoadScript(::std::string const& name, ::std::optional<::std::vector<::Scripting::ModuleBinding>> moduleBindings);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
