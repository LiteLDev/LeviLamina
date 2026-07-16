#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class IPacketSerializationController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPacketSerializationController() = default;

    virtual ::std::optional<::SerializationMode> getOverrideModeForPacket(::MinecraftPacketIds) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
