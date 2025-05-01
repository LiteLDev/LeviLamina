#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/deps/scripting/runtime/Error.h"
#include "mc/gametest/framework/GameTestErrorType.h"

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
    GameTestError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestError(::gametest::GameTestError const&);

    MCNAPI GameTestError(::gametest::GameTestError&&);

    MCNAPI GameTestError(
        ::gametest::GameTestErrorType type_,
        ::std::string const&          message_,
        ::std::vector<::std::string>  params_
    );

    MCNAPI ~GameTestError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBindingBuilder<::gametest::GameTestError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestError const&);

    MCNAPI void* $ctor(::gametest::GameTestError&&);

    MCNAPI void*
    $ctor(::gametest::GameTestErrorType type_, ::std::string const& message_, ::std::vector<::std::string> params_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
