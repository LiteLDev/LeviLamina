#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {
public:
    // GameTestBatch inner types define
    using BeforeGameTestBatchFunction = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                            mBeforeBatchFunction;
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
    MCAPI ~GameTestBatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
