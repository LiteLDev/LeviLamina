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
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0GameSession\@\@QEAA\@AEAVNetworkSystem\@\@V?$unique_ptr\@VServerNetworkHandler\@\@U?$default_delete\@VServerNetworkHandler\@\@\@std\@\@\@std\@\@AEAVLoopbackPacketSender\@\@V?$unique_ptr\@VNetEventCallback\@\@U?$default_delete\@VNetEventCallback\@\@\@std\@\@\@3\@U?$pair\@V?$unique_ptr\@VLevel\@\@U?$default_delete\@VLevel\@\@\@std\@\@\@std\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@3\@W4SubClientId\@\@\@Z
     */
    MCAPI GameSession(
        class NetworkSystem&,
        std::unique_ptr<class ServerNetworkHandler>,
        class LoopbackPacketSender&,
        std::unique_ptr<class NetEventCallback>,
        std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>,
        enum class SubClientId
    );
    /**
     * @symbol ?earlyShutdownMainthread\@GameSession\@\@QEAAXXZ
     */
    MCAPI void earlyShutdownMainthread();
    /**
     * @symbol
     * ?getServerNetworkHandler\@GameSession\@\@QEAA?AV?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();
    /**
     * @symbol ?isLeaveGameDone\@GameSession\@\@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone();
    /**
     * @symbol
     * ?setLevel\@GameSession\@\@QEAAXU?$pair\@V?$unique_ptr\@VLevel\@\@U?$default_delete\@VLevel\@\@\@std\@\@\@std\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@Z
     */
    MCAPI void setLevel(std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>);
    /**
     * @symbol ?startLeaveGame\@GameSession\@\@QEAAXXZ
     */
    MCAPI void startLeaveGame();
    /**
     * @symbol ?tick\@GameSession\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol ??1GameSession\@\@QEAA\@XZ
     */
    MCAPI ~GameSession();
    // NOLINTEND
};
