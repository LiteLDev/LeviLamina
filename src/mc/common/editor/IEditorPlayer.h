#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class IEditorPlayer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IEditorPlayer inner types define
    enum class InitializationState : int {
        Uninitialized  = 0,
        Initializing   = 1,
        Initialized    = 2,
        Readying       = 3,
        Ready          = 4,
        Started        = 5,
        Deinitializing = 6,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEditorPlayer() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() = 0;

    virtual ::Scripting::Result_deprecated<void> ready() = 0;

    virtual ::Scripting::Result_deprecated<void> start() = 0;

    virtual ::Scripting::Result_deprecated<void> quit() = 0;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;

    virtual bool isClientSide() const = 0;

    virtual bool canStart() const = 0;

    virtual bool isStarted() const = 0;

    virtual ::Bedrock::PubSub::Subscription registerInitializationStateChanged(
        ::std::function<
            void(::Editor::IEditorPlayer::InitializationState, ::Editor::IEditorPlayer::InitializationState)> fn
    ) = 0;

    virtual void _onTick() = 0;
    // NOLINTEND
};

} // namespace Editor
