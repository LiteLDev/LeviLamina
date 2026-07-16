#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/editor/script/ServerScriptPackType.h"
#include "mc/editor/services/IEditorService.h"
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
    ::ll::UntypedStorage<8, 64> mUnke526ae;
    ::ll::UntypedStorage<8, 24> mUnkc44169;
    ::ll::UntypedStorage<8, 24> mUnk1c2616;
    ::ll::UntypedStorage<8, 48> mUnk9d11de;
    ::ll::UntypedStorage<8, 48> mUnk74826b;
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
    virtual ~EditorExtensionService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

#ifdef LL_PLAT_S
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
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<::Bedrock::NonOwnerPointer<::Editor::API::EditorExtension>>
    registerExtension(
        ::std::string const&,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters>,
        ::Editor::API::ServerScriptPackType
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    getExtension(::std::string const& extensionName) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    getExtension(::std::string const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool hasExtension(::std::string const& extensionName) /*override*/;
#else // LL_PLAT_C
    virtual bool hasExtension(::std::string const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;
#else // LL_PLAT_C
    virtual void forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void forEachExtensionOrdered(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;
#else // LL_PLAT_C
    virtual void forEachExtensionOrdered(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void forEachExtensionReverse(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;
#else // LL_PLAT_C
    virtual void forEachExtensionReverse(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> registerForScriptSystemRebuildEvent(
        ::std::function<::Scripting::Result_deprecated<void>(::std::optional<::Scripting::ContextId>)> handler
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> registerForScriptSystemRebuildEvent(
        ::std::function<::Scripting::Result_deprecated<void>(::std::optional<::Scripting::ContextId>)>
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result_deprecated<void>()> handler) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result_deprecated<void>()>) /*override*/;
#endif

    virtual ::Scripting::Result_deprecated<void> destroyRegisteredExtensions() /*override*/;

    virtual ::Scripting::Result_deprecated<void> createExtensionContexts() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit EditorExtensionService(::Editor::ServiceProviderCollection& providers);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
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

    MCNAPI ::Scripting::Result_deprecated<void> $createExtensionContexts();
#endif


    // NOLINTEND
};

} // namespace Editor::API
