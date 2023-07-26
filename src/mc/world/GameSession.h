#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class GameSession {

public:
    // prevent constructor by default
    GameSession& operator=(GameSession const&) = delete;
    GameSession(GameSession const&)            = delete;
    GameSession()                              = delete;

public:
    /**
     * @symbol
     * ??0GameSession\@\@QEAA\@AEAVNetworkSystem\@\@V?$unique_ptr\@VServerNetworkHandler\@\@U?$default_delete\@VServerNetworkHandler\@\@\@std\@\@\@std\@\@AEAVLoopbackPacketSender\@\@V?$unique_ptr\@VNetEventCallback\@\@U?$default_delete\@VNetEventCallback\@\@\@std\@\@\@3\@U?$pair\@V?$unique_ptr\@VLevel\@\@U?$default_delete\@VLevel\@\@\@std\@\@\@std\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@3\@W4SubClientId\@\@\@Z
     */
    MCAPI GameSession(
        class NetworkSystem&,
        std::unique_ptr<class ServerNetworkHandler>,
        class LoopbackPacketSender&,
        std::unique_ptr<class NetEventCallback>,
        struct std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>,
        enum class SubClientId
    ); // NOLINT
    /**
     * @symbol ?earlyShutdownMainthread\@GameSession\@\@QEAAXXZ
     */
    MCAPI void earlyShutdownMainthread(); // NOLINT
    /**
     * @symbol
     * ?getServerNetworkHandler\@GameSession\@\@QEAA?AV?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler(); // NOLINT
    /**
     * @symbol ?isLeaveGameDone\@GameSession\@\@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone(); // NOLINT
    /**
     * @symbol
     * ?setLevel\@GameSession\@\@QEAAXU?$pair\@V?$unique_ptr\@VLevel\@\@U?$default_delete\@VLevel\@\@\@std\@\@\@std\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@Z
     */
    MCAPI void
        setLevel(struct std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>); // NOLINT
    /**
     * @symbol ?startLeaveGame\@GameSession\@\@QEAAXXZ
     */
    MCAPI void startLeaveGame(); // NOLINT
    /**
     * @symbol ?tick\@GameSession\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ??1GameSession\@\@QEAA\@XZ
     */
    MCAPI ~GameSession(); // NOLINT
};
