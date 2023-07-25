#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "mc/external/nonstd/expected.h"

class PacketViolationHandler {
public:
    // PacketViolationHandler inner types declare
    // clang-format off
    struct PacketViolation;
    // clang-format on

    // PacketViolationHandler inner types define
    struct PacketViolation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONHANDLER_PACKETVIOLATION
    public:
        PacketViolation& operator=(PacketViolation const&) = delete;
        PacketViolation(PacketViolation const&)            = delete;
        PacketViolation()                                  = delete;
#endif

    public:
        /**
         * @symbol
         * ?ToString\@PacketViolation\@PacketViolationHandler\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string ToString() const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONHANDLER
public:
    PacketViolationHandler& operator=(PacketViolationHandler const&) = delete;
    PacketViolationHandler(PacketViolationHandler const&)            = delete;
#endif

public:
    /**
     * @symbol ??0PacketViolationHandler\@\@QEAA\@XZ
     */
    MCAPI PacketViolationHandler();
    /**
     * @symbol
     * ?checkForViolation\@PacketViolationHandler\@\@QEAA?AW4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBV?$expected\@XU?$ErrorInfo\@Verror_code\@std\@\@\@Bedrock\@\@\@expected_lite\@nonstd\@\@AEBVNetworkIdentifier\@\@PEA_N\@Z
     */
    MCAPI enum class PacketViolationResponse
    checkForViolation(enum class MinecraftPacketIds, class nonstd::expected_lite::expected<void, struct Bedrock::ErrorInfo<class std::error_code>> const&, class NetworkIdentifier const&, bool*);

    // private:
    /**
     * @symbol
     * ?_handleViolation\@PacketViolationHandler\@\@AEAA?AW4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVerror_code\@std\@\@AEBVNetworkIdentifier\@\@PEA_N\@Z
     */
    MCAPI enum class PacketViolationResponse
    _handleViolation(enum class MinecraftPacketIds, class std::error_code const&, class NetworkIdentifier const&, bool*);

private:
};
