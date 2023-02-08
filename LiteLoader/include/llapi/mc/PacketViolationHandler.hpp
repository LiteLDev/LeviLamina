/**
 * @file  PacketViolationHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PacketViolationHandler.
 *
 */
class PacketViolationHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONHANDLER
public:
    class PacketViolationHandler& operator=(class PacketViolationHandler const &) = delete;
    PacketViolationHandler(class PacketViolationHandler const &) = delete;
#endif

public:
    /**
     * @hash   -1233531191
     * @symbol  ??0PacketViolationHandler\@\@QEAA\@XZ
     */
    MCAPI PacketViolationHandler();
    /**
     * @hash   -51597810
     * @symbol  ?checkForViolation\@PacketViolationHandler\@\@QEAA?AW4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@W4StreamReadResult\@\@AEBVNetworkIdentifier\@\@PEA_N\@Z
     */
    MCAPI enum class PacketViolationResponse checkForViolation(enum class MinecraftPacketIds, enum class StreamReadResult, class NetworkIdentifier const &, bool *);

//private:
    /**
     * @hash   743749875
     * @symbol  ?_handleViolation\@PacketViolationHandler\@\@AEAA?AW4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@W4StreamReadResult\@\@AEBVNetworkIdentifier\@\@PEA_N\@Z
     */
    MCAPI enum class PacketViolationResponse _handleViolation(enum class MinecraftPacketIds, enum class StreamReadResult, class NetworkIdentifier const &, bool *);

private:

};