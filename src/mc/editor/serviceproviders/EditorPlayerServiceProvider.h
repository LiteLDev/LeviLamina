#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor {

class EditorPlayerServiceProvider {
public:
    // prevent constructor by default
    EditorPlayerServiceProvider& operator=(EditorPlayerServiceProvider const&);
    EditorPlayerServiceProvider(EditorPlayerServiceProvider const&);
    EditorPlayerServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerServiceProvider();

    // vIndex: 1
    virtual ::Player* getPlayer() const = 0;

    // vIndex: 2
    virtual ::Scripting::Result<::Bedrock::PubSub::Subscription, ::Scripting::Error>
        registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
