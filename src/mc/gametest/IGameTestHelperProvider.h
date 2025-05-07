#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestHelperProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameTestHelperProvider() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::gametest::BaseGameTestHelper>
    createGameTestHelper(::gametest::BaseGameTestInstance&) = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::gametest::IGameTestHelperProvider> clone() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
