#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/gametest/framework/GameTestCompletedErrorReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace gametest {

struct GameTestCompletedError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk67b4d9;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestCompletedError& operator=(GameTestCompletedError const&);
    GameTestCompletedError(GameTestCompletedError const&);
    GameTestCompletedError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestCompletedError(
        ::gametest::GameTestCompletedErrorReason type_,
        ::std::string const&                     gameTestName_,
        ::std::string const&                     methodName_
    );

    MCNAPI ~GameTestCompletedError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gametest::GameTestCompletedErrorReason type_,
        ::std::string const&                     gameTestName_,
        ::std::string const&                     methodName_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
