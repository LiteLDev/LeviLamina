#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                            mBeforeBatchFunction;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                            mAfterBatchFunction;
    ::ll::TypedStorage<8, 32, ::std::string const>                                                mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>>> mTestFunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestBatch& operator=(GameTestBatch const&);
    GameTestBatch(GameTestBatch const&);
    GameTestBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestBatch(::gametest::GameTestBatch&&);

    MCNAPI GameTestBatch(
        ::std::string                                                      name,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> testFunctions,
        ::std::function<void()>                                            beforeBatchFunction,
        ::std::function<void()>                                            afterBatchFunction
    );

    MCNAPI ~GameTestBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestBatch&&);

    MCNAPI void* $ctor(
        ::std::string                                                      name,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> testFunctions,
        ::std::function<void()>                                            beforeBatchFunction,
        ::std::function<void()>                                            afterBatchFunction
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
