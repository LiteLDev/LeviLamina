#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/packet/PacketViolationSeverity.h"
#include "mc/network/packet/PacketViolationType.h"

struct PacketViolationWarningPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PacketViolationType>     mViolationType;
    ::ll::TypedStorage<4, 4, ::PacketViolationSeverity> mViolationSeverity;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>      mViolatingPacketId;
    ::ll::TypedStorage<8, 32, ::std::string>            mViolationContext;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationWarningPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketViolationWarningPacketPayload(
        ::std::error_code const&  error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );

#ifdef LL_PLAT_C
    MCAPI PacketViolationWarningPacketPayload(
        ::PacketViolationSeverity violationSeverity,
        ::PacketViolationType     violationType,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );
#endif

    MCAPI ~PacketViolationWarningPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::error_code const&  error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::PacketViolationSeverity violationSeverity,
        ::PacketViolationType     violationType,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
