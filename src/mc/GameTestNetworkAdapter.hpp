/**
 * @file  GameTestNetworkAdapter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestNetworkAdapter.
 *
 */
class GameTestNetworkAdapter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTNETWORKADAPTER
public:
    class GameTestNetworkAdapter& operator=(class GameTestNetworkAdapter const &) = delete;
    GameTestNetworkAdapter(class GameTestNetworkAdapter const &) = delete;
    GameTestNetworkAdapter() = delete;
#endif

public:
    /**
     * @symbol  ??0GameTestNetworkAdapter\@\@QEAA\@AEAVMinecraftGameTest\@\@\@Z
     */
    MCAPI GameTestNetworkAdapter(class MinecraftGameTest &);
    /**
     * @symbol  ?rungametest\@GameTestNetworkAdapter\@\@QEAAXV?$not_null\@PEAVPacketSender\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVDimension\@\@AEBUTestParameters\@gametest\@\@\@Z
     */
    MCAPI void rungametest(class gsl::not_null<class PacketSender *>, std::string const &, class Dimension &, struct gametest::TestParameters const &);

};