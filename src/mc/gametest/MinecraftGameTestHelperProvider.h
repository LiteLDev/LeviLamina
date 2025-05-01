#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/IGameTestHelperProvider.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class MinecraftGameTestHelperProvider : public ::gametest::IGameTestHelperProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::gametest::BaseGameTestHelper>
    createGameTestHelper(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::gametest::IGameTestHelperProvider> clone() /*override*/;

    // vIndex: 0
    virtual ~MinecraftGameTestHelperProvider() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::gametest::BaseGameTestHelper>
    $createGameTestHelper(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI ::std::unique_ptr<::gametest::IGameTestHelperProvider> $clone();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
