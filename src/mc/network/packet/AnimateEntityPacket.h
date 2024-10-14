#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AnimateEntityPacket : public ::Packet {
public:
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

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& s);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& s) const;

    // NOLINTEND
};
