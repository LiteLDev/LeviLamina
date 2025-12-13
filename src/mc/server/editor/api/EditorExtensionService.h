#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/script/ServerScriptPackType.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/api/EditorExtensionServiceProvider.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
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
    ::ll::UntypedStorage<8, 48> mUnkf52108;
    ::ll::UntypedStorage<8, 48> mUnkdbb512;
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
    virtual ~EditorExtensionService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

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

    virtual ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    getExtension(::std::string const& extensionName) /*override*/;

    virtual bool hasExtension(::std::string const& extensionName) /*override*/;

    virtual void forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    virtual void forEachExtensionOrdered(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    virtual void forEachExtensionReverse(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> registerForScriptSystemRebuildEvent(
        ::std::function<::Scripting::Result_deprecated<void>(::std::optional<::Scripting::ContextId>)> handler
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result_deprecated<void>()> handler) /*override*/;

    virtual ::Scripting::Result_deprecated<void> destroyRegisteredExtensions() /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    createExtensionContexts(::Scripting::ContextId contextId, bool finalEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sortExtensionListIntoExecutionOrder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::NonOwnerPointer<::Editor::API::EditorExtension>>
    $registerExtension(
        ::std::string const&           extensionName,
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options,
        ::Editor::API::ServerScriptPackType                               packType
    );

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    $getExtension(::std::string const& extensionName);

    MCNAPI bool $hasExtension(::std::string const& extensionName);

    MCNAPI void
    $forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCNAPI void
    $forEachExtensionOrdered(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCNAPI void
    $forEachExtensionReverse(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $registerForScriptSystemRebuildEvent(
        ::std::function<::Scripting::Result_deprecated<void>(::std::optional<::Scripting::ContextId>)> handler
    );

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result_deprecated<void>()> handler);

    MCNAPI ::Scripting::Result_deprecated<void> $destroyRegisteredExtensions();

    MCNAPI ::Scripting::Result_deprecated<void>
    $createExtensionContexts(::Scripting::ContextId contextId, bool finalEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorExtensionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::API
