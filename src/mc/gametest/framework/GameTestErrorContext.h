#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace gametest {

struct GameTestErrorContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_GAMETESTERRORCONTEXT
public:
    GameTestErrorContext& operator=(GameTestErrorContext const&) = delete;
    GameTestErrorContext(GameTestErrorContext const&)            = delete;
    GameTestErrorContext()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@GameTestErrorContext\@gametest\@\@SA?AV?$InterfaceBindingBuilder\@UGameTestErrorContext\@gametest\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct gametest::GameTestErrorContext> bind();
};

}; // namespace gametest
