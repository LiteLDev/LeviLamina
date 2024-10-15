#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestNetworkAdapter {
public:
    // GameTestNetworkAdapter inner types declare
    // clang-format off
    class GameTestNetworkListener;
    // clang-format on

    // GameTestNetworkAdapter inner types define
    class GameTestNetworkListener : public ::gametest::IGameTestListener {
    public:
        // prevent constructor by default
        GameTestNetworkListener& operator=(GameTestNetworkListener const&);
        GameTestNetworkListener(GameTestNetworkListener const&);
        GameTestNetworkListener();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~GameTestNetworkListener() = default;

        // vIndex: 1
        virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

        // vIndex: 2
        virtual void onTestPassed(class gametest::BaseGameTestInstance& testInstance);

        // vIndex: 3
        virtual void onTestFailed(class gametest::BaseGameTestInstance& testInstance);

        // vIndex: 4
        virtual void onTestStarted(class gametest::BaseGameTestInstance&);

        // vIndex: 5
        virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

        // vIndex: 6
        virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void onTestFailed$(class gametest::BaseGameTestInstance& testInstance);

        MCAPI void onTestPassed$(class gametest::BaseGameTestInstance& testInstance);

        MCAPI void onTestRetryFinished$(class gametest::BaseGameTestInstance&);

        MCAPI void onTestRetryStarted$(class gametest::BaseGameTestInstance&);

        MCAPI void onTestStarted$(class gametest::BaseGameTestInstance&);

        MCAPI void onTestStructureLoaded$(class gametest::BaseGameTestInstance&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameTestNetworkAdapter& operator=(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter();

public:
    // NOLINTBEGIN
    MCAPI explicit GameTestNetworkAdapter(class MinecraftGameTest& gameTest);

    MCAPI void rungametest(
        gsl::not_null<class PacketSender*>     packetSender,
        std::string const&                     testName,
        class Dimension&                       dimension,
        struct gametest::TestParameters const& params
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class MinecraftGameTest& gameTest);

    // NOLINTEND
};
