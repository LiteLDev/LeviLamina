#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/script/ServerScriptPackType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::API { class EditorExtension; }
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::API { struct EditorExtensionOptionalParameters; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor::API {

class EditorExtensionServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorExtensionServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::Bedrock::NonOwnerPointer<::Editor::API::EditorExtension>>
    registerExtension(
        ::std::string const&,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters>,
        ::Editor::API::ServerScriptPackType
    ) = 0;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>>
    getExtension(::std::string const&) = 0;

    // vIndex: 3
    virtual bool hasExtension(::std::string const&) = 0;

    // vIndex: 4
    virtual void
        forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>) = 0;

    // vIndex: 5
    virtual void forEachExtensionOrdered(::std::function<
                                         void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>) = 0;

    // vIndex: 6
    virtual void forEachExtensionReverse(::std::function<
                                         void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)>) = 0;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        registerForScriptSystemRebuildEvent(::std::function<
                                            ::Scripting::Result<void>(::std::optional<::Scripting::ContextId>)>) = 0;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        registerForScriptSystemTeardownEvent(::std::function<::Scripting::Result<void>()>) = 0;

    // vIndex: 9
    virtual ::Scripting::Result<void> destroyRegisteredExtensions() = 0;

    // vIndex: 10
    virtual ::Scripting::Result<void> createExtensionContexts(::Scripting::ContextId, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::API
