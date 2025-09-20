#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

class IPacketLimitAlgorithm {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPacketLimitAlgorithm() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const = 0;

    // vIndex: 2
    virtual uint checkPacket(::MinecraftPacketIds) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
