#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    class GameTestNetworkListener {

    public:
        // prevent constructor by default
        GameTestNetworkListener& operator=(GameTestNetworkListener const&) = delete;
        GameTestNetworkListener(GameTestNetworkListener const&)            = delete;
        GameTestNetworkListener()                                          = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol __unk_vfn_1
         */
        virtual void __unk_vfn_1();
        /**
         * @vftbl 2
         * @symbol
         * ?onTestPassed\@GameTestNetworkListener\@GameTestNetworkAdapter\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
         */
        virtual void onTestPassed(class gametest::BaseGameTestInstance&);
        /**
         * @vftbl 3
         * @symbol
         * ?onTestFailed\@GameTestNetworkListener\@GameTestNetworkAdapter\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
         */
        virtual void onTestFailed(class gametest::BaseGameTestInstance&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameTestNetworkAdapter& operator=(GameTestNetworkAdapter const&) = delete;
    GameTestNetworkAdapter(GameTestNetworkAdapter const&)            = delete;
    GameTestNetworkAdapter()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0GameTestNetworkAdapter\@\@QEAA\@AEAVMinecraftGameTest\@\@\@Z
     */
    MCAPI GameTestNetworkAdapter(class MinecraftGameTest&);
    /**
     * @symbol
     * ?rungametest\@GameTestNetworkAdapter\@\@QEAAXV?$not_null\@PEAVPacketSender\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVDimension\@\@AEBUTestParameters\@gametest\@\@\@Z
     */
    MCAPI void
    rungametest(class gsl::not_null<class PacketSender*>, std::string const&, class Dimension&, struct gametest::TestParameters const&);
    // NOLINTEND
};
