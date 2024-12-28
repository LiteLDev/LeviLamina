#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace gametest {

struct GameTestError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7154fb;
    ::ll::UntypedStorage<8, 24> mUnka9c735;
    ::ll::UntypedStorage<4, 32> mUnk5e1f8c;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestError& operator=(GameTestError const&);
    GameTestError(GameTestError const&);
    GameTestError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameTestError(::gametest::GameTestError&&);

    MCAPI ~GameTestError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::gametest::GameTestError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gametest::GameTestError&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
