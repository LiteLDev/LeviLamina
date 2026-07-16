#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorManager; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class EditorManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorManagerServiceProvider() = default;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;

    virtual bool isEditorModeEnabled() const = 0;

    virtual ::Bedrock::PubSub::Subscription
    registerLevelInitializeSubscriber(::std::function<void(bool, ::Editor::EditorManager&)> func) = 0;

    virtual ::Bedrock::PubSub::Subscription
    registerLevelTickSubscriber(::std::function<void(::Editor::EditorManager&)> func) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
