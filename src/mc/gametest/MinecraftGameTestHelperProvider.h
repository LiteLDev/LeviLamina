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
    // vIndex: 0, symbol: __gen_??1MinecraftGameTestHelperProvider@@UEAA@XZ
    virtual ~MinecraftGameTestHelperProvider() = default;

    // vIndex: 1, symbol:
    // ?createGameTestHelper@MinecraftGameTestHelperProvider@@UEAA?AV?$unique_ptr@VBaseGameTestHelper@gametest@@U?$default_delete@VBaseGameTestHelper@gametest@@@std@@@std@@AEAVBaseGameTestInstance@gametest@@@Z
    virtual std::unique_ptr<class gametest::BaseGameTestHelper>
    createGameTestHelper(class gametest::BaseGameTestInstance&);

    // vIndex: 2, symbol:
    // ?clone@MinecraftGameTestHelperProvider@@UEAA?AV?$unique_ptr@VIGameTestHelperProvider@gametest@@U?$default_delete@VIGameTestHelperProvider@gametest@@@std@@@std@@XZ
    virtual std::unique_ptr<class gametest::IGameTestHelperProvider> clone();

    // NOLINTEND
};
