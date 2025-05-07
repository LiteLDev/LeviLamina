#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class AnimateEntityPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> mRuntimeIds;
    ::ll::TypedStorage<8, 32, ::std::string>                   mAnimation;
    ::ll::TypedStorage<8, 32, ::std::string>                   mNextState;
    ::ll::TypedStorage<8, 32, ::std::string>                   mStopExpression;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                  mStopExpressionVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                   mController;
    ::ll::TypedStorage<4, 4, float>                            mBlendOutTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& s) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& s) /*override*/;

    // vIndex: 0
    virtual ~AnimateEntityPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimateEntityPacket(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        controller,
        ::std::string const&                   stopExpressionVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        controller,
        ::std::string const&                   stopExpressionVersion
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

    MCAPI void $write(::BinaryStream& s) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& s);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
