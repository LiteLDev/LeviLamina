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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GameTestBatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
