#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
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
    GameTestBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestBatch(
        ::std::string                                                      name,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> testFunctions,
        ::std::function<void()>                                            beforeBatchFunction,
        ::std::function<void()>                                            afterBatchFunction
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string                                                      name,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> testFunctions,
        ::std::function<void()>                                            beforeBatchFunction,
        ::std::function<void()>                                            afterBatchFunction
    );
    // NOLINTEND
};

} // namespace gametest
