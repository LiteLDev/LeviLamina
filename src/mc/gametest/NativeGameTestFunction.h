#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
namespace gametest { struct GameTestError; }
// clang-format on

class NativeGameTestFunction : public ::gametest::BaseGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk261efa;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeGameTestFunction& operator=(NativeGameTestFunction const&);
    NativeGameTestFunction(NativeGameTestFunction const&);
    NativeGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext> createContext(::gametest::BaseGameTestHelper&) const
        /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const /*override*/;

    // vIndex: 0
    virtual ~NativeGameTestFunction() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
