#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class IGameTestFunctionRunResult {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameTestFunctionRunResult() = default;

    virtual bool isComplete() const = 0;

    virtual ::std::optional<::gametest::GameTestError> getError() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
