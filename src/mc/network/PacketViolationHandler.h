#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/external/nonstd/expected.h"
#include "mc/resources/PacketViolationResponse.h"

class PacketViolationHandler {
public:
    // PacketViolationHandler inner types declare
    // clang-format off
    struct PacketViolation;
    // clang-format on

    // PacketViolationHandler inner types define
    struct PacketViolation {
    public:
        // prevent constructor by default
        PacketViolation& operator=(PacketViolation const&);
        PacketViolation(PacketViolation const&);
        PacketViolation();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?ToString@PacketViolation@PacketViolationHandler@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string ToString() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PacketViolationHandler& operator=(PacketViolationHandler const&);
    PacketViolationHandler(PacketViolationHandler const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacketViolationHandler@@QEAA@XZ
    MCAPI PacketViolationHandler();

    // symbol:
    // ?checkForViolation@PacketViolationHandler@@QEAA?AW4PacketViolationResponse@@W4MinecraftPacketIds@@AEBV?$expected@XU?$ErrorInfo@Verror_code@std@@@Bedrock@@@expected_lite@nonstd@@AEBVNetworkIdentifier@@PEA_N@Z
    MCAPI ::PacketViolationResponse
    checkForViolation(::MinecraftPacketIds, class nonstd::expected_lite::expected<void, struct Bedrock::ErrorInfo<std::error_code>> const&, class NetworkIdentifier const&, bool*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleViolation@PacketViolationHandler@@AEAA?AW4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVerror_code@std@@AEBVNetworkIdentifier@@PEA_N@Z
    MCAPI ::PacketViolationResponse
    _handleViolation(::MinecraftPacketIds, std::error_code const&, class NetworkIdentifier const&, bool*);

    // NOLINTEND
};
