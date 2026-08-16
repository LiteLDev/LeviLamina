#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
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
    virtual ~ModeServiceProvider();

    virtual ::Editor::Mode getMode() const = 0;

    virtual ::Scripting::Result_deprecated<void> trySetMode(::Editor::Mode newMode) = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)> func) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
