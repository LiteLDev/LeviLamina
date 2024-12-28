#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class PacketSender;
class Vec3;
// clang-format on

class ServerParticleManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7feae8;
    ::ll::UntypedStorage<8, 24> mUnkda6790;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerParticleManager& operator=(ServerParticleManager const&);
    ServerParticleManager(ServerParticleManager const&);
    ServerParticleManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerParticleManager(bool isClientSide);

    MCAPI void setPacketSender(::PacketSender& packetSender);

    MCAPI void
    spawnParticleEffect(::std::string const& effectName, ::Vec3 const& spawnLocation, ::DimensionType dimensionType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isClientSide);
    // NOLINTEND
};
