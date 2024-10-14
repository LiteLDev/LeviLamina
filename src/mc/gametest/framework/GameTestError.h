#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/gametest/framework/GameTestErrorType.h"

namespace gametest {

struct GameTestError {
public:
    // prevent constructor by default
    GameTestError& operator=(GameTestError const&);
    GameTestError();

public:
    // NOLINTBEGIN
    MCAPI GameTestError(struct gametest::GameTestError&&);

    MCAPI GameTestError(struct gametest::GameTestError const&);

    MCAPI GameTestError(::gametest::GameTestErrorType, std::string const&, std::vector<std::string>);

    MCAPI struct gametest::GameTestError& operator=(struct gametest::GameTestError&&);

    MCAPI ~GameTestError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct gametest::GameTestError> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace gametest
