/**
 * @file  PacketViolationHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
     * @symbol ??0PacketViolationHandler\@\@QEAA\@XZ
     */
    MCAPI PacketViolationHandler();
    /**
     * @symbol ?checkForViolation\@PacketViolationHandler\@\@QEAA?AW4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBV?$expected\@XU?$ErrorInfo\@Verror_code\@std\@\@\@Bedrock\@\@\@expected_lite\@nonstd\@\@AEBVNetworkIdentifier\@\@PEA_N\@Z
     */
    MCAPI enum class PacketViolationResponse checkForViolation(enum class MinecraftPacketIds, class nonstd::expected_lite::expected<void, struct Bedrock::ErrorInfo<class std::error_code>> const &, class NetworkIdentifier const &, bool *);

//private:
    /**
     * @symbol ?_handleViolation\@PacketViolationHandler\@\@AEAA?AW4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVerror_code\@std\@\@AEBVNetworkIdentifier\@\@PEA_N\@Z
     */
    MCAPI enum class PacketViolationResponse _handleViolation(enum class MinecraftPacketIds, class std::error_code const &, class NetworkIdentifier const &, bool *);

private:

};
