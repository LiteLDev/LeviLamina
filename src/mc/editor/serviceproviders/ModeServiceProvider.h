#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/Mode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace Editor::Services {

class ModeServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ModeServiceProvider() = default;

    virtual ::Editor::Mode getMode() const = 0;

    virtual ::Scripting::Result_deprecated<void> trySetMode(::Editor::Mode) = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
