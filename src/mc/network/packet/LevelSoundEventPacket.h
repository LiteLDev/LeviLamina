#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LevelSoundEventPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct LevelSoundEventPacketInfo;
// clang-format on

class LevelSoundEventPacket
: public ::SerializedPayloadPacket<::LevelSoundEventPacketInfo, ::LevelSoundEventPacketPayload> {
public:
    // LevelSoundEventPacket inner types define
    using PayloadType = ::LevelSoundEventPacketPayload;

    using PacketInfo = ::LevelSoundEventPacketInfo;

public:
    // prevent constructor by default
    LevelSoundEventPacket& operator=(LevelSoundEventPacket const&);
    LevelSoundEventPacket(LevelSoundEventPacket const&);
    LevelSoundEventPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelSoundEventPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSoundEventPacket(::LevelSoundEventPacket&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelSoundEventPacket&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
