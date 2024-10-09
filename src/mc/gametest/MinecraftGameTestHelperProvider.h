#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestHelperProvider.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestHelperProvider; }
// clang-format on

class MinecraftGameTestHelperProvider : public ::gametest::IGameTestHelperProvider {
public:
    // prevent constructor by default
    MinecraftGameTestHelperProvider& operator=(MinecraftGameTestHelperProvider const&);
    MinecraftGameTestHelperProvider(MinecraftGameTestHelperProvider const&);
    MinecraftGameTestHelperProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftGameTestHelperProvider() = default;

    // vIndex: 1
    virtual std::unique_ptr<class gametest::BaseGameTestHelper>
    createGameTestHelper(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 2
    virtual std::unique_ptr<class gametest::IGameTestHelperProvider> clone();

    // NOLINTEND
};
