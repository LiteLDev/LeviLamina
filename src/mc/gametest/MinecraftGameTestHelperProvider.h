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
    virtual ::std::unique_ptr<::gametest::BaseGameTestHelper>
    createGameTestHelper(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    virtual ::std::unique_ptr<::gametest::IGameTestHelperProvider> clone() /*override*/;

    virtual ~MinecraftGameTestHelperProvider() /*override*/ = default;
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
