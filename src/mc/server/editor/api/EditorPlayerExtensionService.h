#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/api/EditorPlayerExtensionServiceProvider.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::API { class EditorExtension; }
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::ScriptModule { class ScriptInternalPlayerServiceContext; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor::API {

class EditorPlayerExtensionService : public ::Editor::Services::IEditorService,
                                     public ::Editor::API::EditorPlayerExtensionServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5a25cf;
    ::ll::UntypedStorage<8, 16> mUnkd0eb60;
    ::ll::UntypedStorage<8, 16> mUnk9e4b1b;
    ::ll::UntypedStorage<8, 16> mUnkf7f171;
    ::ll::UntypedStorage<8, 24> mUnk69aec8;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlayerExtensionService& operator=(EditorPlayerExtensionService const&);
    EditorPlayerExtensionService(EditorPlayerExtensionService const&);
    EditorPlayerExtensionService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerExtensionService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::Scripting::Result_deprecated<void>
    startExtensions(::std::optional<::Scripting::ContextId> optionalContextId) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<void> startExtensions(::std::optional<::Scripting::ContextId>) /*override*/;
#endif

    virtual ::Scripting::Result_deprecated<void> stopExtensions() /*override*/;

#ifdef LL_PLAT_S
    virtual ::Scripting::Result_deprecated<void> forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<void> forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    getInternalServiceContext(::Scripting::WeakLifetimeScope const& scope) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    getInternalServiceContext(::Scripting::WeakLifetimeScope const&) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit EditorPlayerExtensionService(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI ::Scripting::Result_deprecated<void>
    $startExtensions(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result_deprecated<void> $stopExtensions();

    MCNAPI ::Scripting::Result_deprecated<void>
    $forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    $getInternalServiceContext(::Scripting::WeakLifetimeScope const& scope);
#endif


    // NOLINTEND
};

} // namespace Editor::API
