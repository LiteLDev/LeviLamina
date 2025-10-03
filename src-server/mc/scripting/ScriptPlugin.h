#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/scripting/runtime/IDependencyLoader.h"
#include "mc/deps/scripting/runtime/IPrinter.h"
#include "mc/scripting/PluginExecutionGroup.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
class MinEngineVersion;
struct PackIdVersion;
namespace Scripting { struct BaseError; }
namespace Scripting { struct Capabilities; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptData; }
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader, public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk677bbf;
    ::ll::UntypedStorage<8, 96> mUnk510e2b;
    ::ll::UntypedStorage<8, 24> mUnkde6a3d;
    ::ll::UntypedStorage<1, 1>  mUnk1dd446;
    ::ll::UntypedStorage<8, 32> mUnk67c5dc;
    ::ll::UntypedStorage<8, 48> mUnk55c0d6;
    ::ll::UntypedStorage<8, 32> mUnk210ffe;
    ::ll::UntypedStorage<4, 4>  mUnkedd7b3;
    ::ll::UntypedStorage<8, 32> mUnkfa4080;
    ::ll::UntypedStorage<8, 32> mUnk9b4f34;
    ::ll::UntypedStorage<8, 24> mUnk6cbe98;
    ::ll::UntypedStorage<8, 32> mUnk553bc3;
    ::ll::UntypedStorage<1, 1>  mUnk48ffe9;
    ::ll::UntypedStorage<8, 16> mUnkbf81fb;
    ::ll::UntypedStorage<8, 8>  mUnk4bd1bf;
    ::ll::UntypedStorage<8, 8>  mUnkba4497;
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
    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(::std::string const& name) /*override*/;

    // vIndex: 1
    virtual void onInfo(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;

    // vIndex: 2
    virtual void onWarn(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;

    // vIndex: 3
    virtual void onError(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;

    // vIndex: 4
    virtual void onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const /*override*/;

    // vIndex: 5
    virtual bool shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const /*override*/;

    // vIndex: 6
    virtual void onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlugin(
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

    MCNAPI ::std::optional<::Scripting::ScriptData> _loadScript(::std::string const& fileName);

    MCNAPI void enableHandleCounter(bool enabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Scripting::ScriptData> $onLoadScript(::std::string const& name);

    MCNAPI void $onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCNAPI void $onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCNAPI void $onError(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCNAPI void $onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    MCNAPI bool $shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    MCNAPI void $onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDependencyLoader();

    MCNAPI static void** $vftableForIPrinter();
    // NOLINTEND
};
