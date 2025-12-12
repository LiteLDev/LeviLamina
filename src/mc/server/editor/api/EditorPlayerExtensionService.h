#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/api/EditorPlayerExtensionServiceProvider.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 64> mUnk5a7855;
    ::ll::UntypedStorage<8, 16> mUnkd0eb60;
    ::ll::UntypedStorage<8, 16> mUnk9e4b1b;
    ::ll::UntypedStorage<8, 16> mUnkf7f171;
    ::ll::UntypedStorage<8, 24> mUnkade424;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlayerExtensionService& operator=(EditorPlayerExtensionService const&);
    EditorPlayerExtensionService(EditorPlayerExtensionService const&);
    EditorPlayerExtensionService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerExtensionService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    startExtensions(::std::optional<::Scripting::ContextId> optionalContextId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> stopExtensions() /*override*/;

    virtual ::Scripting::Result_deprecated<void> forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    getInternalServiceContext(::Scripting::WeakLifetimeScope const& scope) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    _createAndStartExtensionContexts(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result_deprecated<void>
    _createExtensionContexts(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result_deprecated<void> _destroyExtensionContexts();

    MCNAPI ::Scripting::Result_deprecated<void>
    _handleStartExtensions(::std::optional<::Scripting::ContextId> optionalContextId);
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

    MCNAPI ::Scripting::Result_deprecated<void>
    $startExtensions(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result_deprecated<void> $stopExtensions();

    MCNAPI ::Scripting::Result_deprecated<void>
    $forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    $getInternalServiceContext(::Scripting::WeakLifetimeScope const& scope);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorPlayerExtensionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::API
