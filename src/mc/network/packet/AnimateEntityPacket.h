#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AnimateEntityPacket : public ::Packet {
public:
    std::vector<ActorRuntimeID> mRuntimeIds;            // this+0x30
    std::string                 mAnimation;             // this+0x48
    std::string                 mNextState;             // this+0x68
    std::string                 mStopExpression;        // this+0x88
    MolangVersion               mStopExpressionVersion; // this+0xa8
    std::string                 mController;            // this+0xb0
    float                       mBlendOutTime;          // this+0xd0

    // prevent constructor by default
    AnimateEntityPacket& operator=(AnimateEntityPacket const&);
    AnimateEntityPacket(AnimateEntityPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnimateEntityPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& s) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& s);

    MCAPI AnimateEntityPacket();

    MCAPI AnimateEntityPacket(
        std::vector<class ActorRuntimeID> const& runtimeIds,
        std::string const&                       animation,
        std::string const&                       nextState,
        float                                    blendOutTime,
        std::string const&                       stopExpression,
        ::MolangVersion                          stopExpressionVersion,
        std::string const&                       controller
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        std::vector<class ActorRuntimeID> const& runtimeIds,
        std::string const&                       animation,
        std::string const&                       nextState,
        float                                    blendOutTime,
        std::string const&                       stopExpression,
        ::MolangVersion                          stopExpressionVersion,
        std::string const&                       controller
    );

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& s);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& s) const;

    // NOLINTEND
};
