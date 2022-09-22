/**
 * @file  PacketViolationHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -361450599
     * @symbol ??0PacketViolationHandler@@QEAA@XZ
     */
    MCAPI PacketViolationHandler();
    /**
     * @hash   820298270
     * @symbol ?checkForViolation@PacketViolationHandler@@QEAA?AW4PacketViolationResponse@@W4MinecraftPacketIds@@W4StreamReadResult@@AEBVNetworkIdentifier@@PEA_N@Z
     */
    MCAPI enum PacketViolationResponse checkForViolation(enum MinecraftPacketIds, enum StreamReadResult, class NetworkIdentifier const &, bool *);

//private:
    /**
     * @hash   1615645955
     * @symbol ?_handleViolation@PacketViolationHandler@@AEAA?AW4PacketViolationResponse@@W4MinecraftPacketIds@@W4StreamReadResult@@AEBVNetworkIdentifier@@PEA_N@Z
     */
    MCAPI enum PacketViolationResponse _handleViolation(enum MinecraftPacketIds, enum StreamReadResult, class NetworkIdentifier const &, bool *);

private:

};