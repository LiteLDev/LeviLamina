#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorManagerServer; }
// clang-format on

namespace Editor::Services {

class EditorManagerServerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorManagerServerServiceProvider() = default;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Subscription
        registerLevelInitializeSubscriber(::std::function<void(bool, ::Editor::EditorManagerServer&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
