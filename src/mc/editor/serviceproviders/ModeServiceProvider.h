#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/Mode.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace Editor::Services {

class ModeServiceProvider {
public:
    // prevent constructor by default
    ModeServiceProvider& operator=(ModeServiceProvider const&);
    ModeServiceProvider(ModeServiceProvider const&);
    ModeServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModeServiceProvider();

    // vIndex: 1
    virtual ::Editor::Mode getMode() const = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> trySetMode(::Editor::Mode) = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)>) = 0;
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

} // namespace Editor::Services
