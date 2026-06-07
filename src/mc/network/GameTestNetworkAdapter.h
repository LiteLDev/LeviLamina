#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class MinecraftGameTest;
class PacketSender;
namespace gametest { class BaseGameTestInstance; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk84f3b7;
        // NOLINTEND

    public:
        // prevent constructor by default
        GameTestNetworkListener& operator=(GameTestNetworkListener const&);
        GameTestNetworkListener(GameTestNetworkListener const&);
        GameTestNetworkListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance) /*override*/;

        virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);

        MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8aa503;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestNetworkAdapter& operator=(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameTestNetworkAdapter(::MinecraftGameTest& gameTest);

    MCNAPI void rungametest(
        ::gsl::not_null<::PacketSender*>  packetSender,
        ::std::string const&              testName,
        ::Dimension&                      dimension,
        ::gametest::TestParameters const& params
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGameTest& gameTest);
    // NOLINTEND
};
