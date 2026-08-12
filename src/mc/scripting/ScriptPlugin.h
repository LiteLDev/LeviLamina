#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/script_core/runtime/scripting/IDependencyLoader.h"
#include "mc/deps/script_core/runtime/scripting/IPrinter.h"
#include "mc/deps/script_core/script_engine/scripting/Capabilities.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptContext.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/ScriptRuntimeType.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
class ScriptPluginHandleCounter;
class ScriptSentryLogger;
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ScriptData; }
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader, public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IScriptPluginSource>>       mPluginSource;
    ::ll::TypedStorage<8, 96, ::Scripting::ModuleDescriptor>                  mModuleDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ModuleDescriptor>>   mModuleDependencies;
    ::ll::TypedStorage<1, 1, ::Scripting::Capabilities>                       mCapabilities;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion const>                       mMinEngineVersion;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                                mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mRuntimeName;
    ::ll::TypedStorage<4, 4, ::ScriptRuntimeType>                             mRuntimeType;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mRuntimeFileExt;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mMainScriptFilePath;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                   mScriptPaths;
    ::ll::TypedStorage<8, 32, ::Scripting::ScriptContext>                     mContext;
    ::ll::TypedStorage<1, 1, ::PluginExecutionGroup const>                    mExecutionGroup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPluginHandleCounter>> mHandleCounter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::IPrinter>>        mPrintLogger;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptSentryLogger>>         mSentryLogger;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPlugin() /*override*/ = default;

    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(::std::string const& name) /*override*/;

    virtual void onInfo(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;

    virtual void onWarn(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;

    virtual void onError(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;

    virtual void onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const /*override*/;

    virtual bool shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const /*override*/;

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
    MCAPI ::std::optional<::Scripting::ScriptData> _loadScript(::std::string const& fileName);

    MCAPI void enableHandleCounter(bool enabled);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::ScriptData> $onLoadScript(::std::string const& name);

    MCAPI void $onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCAPI void $onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCAPI void $onError(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCAPI void $onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    MCAPI bool $shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    MCAPI void $onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const;


    // NOLINTEND
};
