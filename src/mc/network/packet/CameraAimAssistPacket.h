#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec2;
// clang-format on

class CameraAimAssistPacket : public ::Packet {
public:
    // CameraAimAssistPacket inner types define
    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
        Count = 2,
    };

    enum class TargetMode : uchar {
        Angle    = 0,
        Distance = 1,
        Count    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mPresetId;
    ::ll::TypedStorage<4, 8, ::Vec2>                              mViewAngle;
    ::ll::TypedStorage<4, 4, float>                               mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacket::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacket::Action>     mAction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~CameraAimAssistPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CameraAimAssistPacket(::CameraAimAssistPacket::Action action);

    MCAPI CameraAimAssistPacket(
        ::std::string                       presetId,
        ::Vec2 const&                       viewAngle,
        float                               distance,
        ::CameraAimAssistPacket::TargetMode targetMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CameraAimAssistPacket::Action action);

    MCAPI void* $ctor(
        ::std::string                       presetId,
        ::Vec2 const&                       viewAngle,
        float                               distance,
        ::CameraAimAssistPacket::TargetMode targetMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
