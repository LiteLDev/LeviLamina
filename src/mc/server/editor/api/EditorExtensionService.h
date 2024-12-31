#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/editor/script/ServerScriptPackType.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/external/scripting/script_engine/Closure.h"
#include "mc/server/editor/api/EditorExtensionServiceProvider.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::API { class EditorExtension; }
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::API { struct EditorExtensionOptionalParameters; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor::API {

class EditorExtensionService : public ::Editor::Services::IEditorService,
                               public ::Editor::API::EditorExtensionServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk35849b;
    ::ll::UntypedStorage<8, 24> mUnkc7b66d;
    ::ll::UntypedStorage<8, 24> mUnk988000;
    ::ll::UntypedStorage<8, 48> mUnk618abb;
    ::ll::UntypedStorage<8, 48> mUnk54deb9;
    ::ll::UntypedStorage<8, 16> mUnkf82241;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtensionService& operator=(EditorExtensionService const&);
    EditorExtensionService(EditorExtensionService const&);
    EditorExtensionService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorExtensionService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::Bedrock::NonOwnerPointer<::Editor::API::EditorExtension>>
    registerExtension(
        ::std::string const&           extensionName,
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options,
        ::Editor::API::ServerScriptPackType                               packType
    ) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    getExtension(::std::string const& extensionName) /*override*/;

    // vIndex: 3
    virtual bool hasExtension(::std::string const& extensionName) /*override*/;

    // vIndex: 4
    virtual void
    forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    // vIndex: 5
    virtual void
    forEachExtensionOrdered(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    // vIndex: 6
    virtual void
    forEachExtensionReverse(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> registerForScriptSystemRebuildEvent(
        ::std::function<::Scripting::Result<void>(::std::optional<::Scripting::ContextId>)> handler
    ) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result<void>()> handler) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> destroyRegisteredExtensions() /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result<void>
    createExtensionContexts(::Scripting::ContextId contextId, bool finalEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorExtensionService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _sortExtensionListIntoExecutionOrder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result_deprecated<::Bedrock::NonOwnerPointer<::Editor::API::EditorExtension>> $registerExtension(
        ::std::string const&           extensionName,
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options,
        ::Editor::API::ServerScriptPackType                               packType
    );

    MCAPI ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    $getExtension(::std::string const& extensionName);

    MCAPI bool $hasExtension(::std::string const& extensionName);

    MCAPI void
    $forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCAPI void
    $forEachExtensionOrdered(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCAPI void
    $forEachExtensionReverse(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $registerForScriptSystemRebuildEvent(
        ::std::function<::Scripting::Result<void>(::std::optional<::Scripting::ContextId>)> handler
    );

    MCAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result<void>()> handler);

    MCAPI ::Scripting::Result<void> $destroyRegisteredExtensions();

    MCAPI ::Scripting::Result<void> $createExtensionContexts(::Scripting::ContextId contextId, bool finalEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForEditorExtensionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::API
