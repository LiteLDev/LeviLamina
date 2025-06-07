#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class EditorPlayerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerServiceProvider() = default;

    // vIndex: 1
    virtual ::Player* getPlayer() const = 0;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
