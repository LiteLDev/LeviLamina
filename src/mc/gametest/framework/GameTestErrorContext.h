#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace gametest {

struct GameTestErrorContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdcbc69;
    ::ll::UntypedStorage<4, 12> mUnk144395;
    ::ll::UntypedStorage<4, 4>  mUnk2a25a2;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestErrorContext& operator=(GameTestErrorContext const&);
    GameTestErrorContext(GameTestErrorContext const&);
    GameTestErrorContext();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::gametest::GameTestErrorContext> bind();
    // NOLINTEND
};

} // namespace gametest
