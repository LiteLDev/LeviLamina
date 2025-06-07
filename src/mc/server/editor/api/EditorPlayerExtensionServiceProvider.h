#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::API { class EditorExtension; }
namespace Editor::ScriptModule { class ScriptInternalPlayerServiceContext; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor::API {

class EditorPlayerExtensionServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerExtensionServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> startExtensions(::std::optional<::Scripting::ContextId>) = 0;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> stopExtensions() = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void>
        forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>) = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    getInternalServiceContext(::Scripting::WeakLifetimeScope const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::API
