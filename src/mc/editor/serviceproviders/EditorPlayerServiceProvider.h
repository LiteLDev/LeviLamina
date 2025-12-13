#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class EditorPlayerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerServiceProvider() = default;

    virtual ::Player* getPlayer() const = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription
        registerDimensionChange(::std::function<void(::DimensionType, ::DimensionType)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
