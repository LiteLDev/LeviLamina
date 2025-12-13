#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct SpawnParticleEffectPacketPayload;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SpawnParticleEffectPacket : public ::ll::PayloadPacket<::SpawnParticleEffectPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6e6d22;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnParticleEffectPacket& operator=(SpawnParticleEffectPacket const&);
    SpawnParticleEffectPacket(SpawnParticleEffectPacket const&);
    SpawnParticleEffectPacket();

public:
    template <typename... Args>
    SpawnParticleEffectPacket(Args&&... args) : PayloadPacket(std::forward<Args>(args)...) {}

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::SerializationMode getSerializationMode() const /*override*/;

    virtual void setSerializationMode(::SerializationMode mode) /*override*/;

    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;

    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    virtual bool disallowBatching() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual uint64 getMaxSize() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    virtual ~SpawnParticleEffectPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpawnParticleEffectPacket(::SpawnParticleEffectPacketPayload payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpawnParticleEffectPacketPayload payload);
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

    MCFOLD ::SerializationMode $getSerializationMode() const;

    MCAPI void $setSerializationMode(::SerializationMode mode);

    MCAPI void $writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const;

    MCFOLD void $write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    MCFOLD bool $disallowBatching() const;

    MCFOLD bool $isValid() const;

    MCFOLD uint64 $getMaxSize() const;

    MCAPI ::std::string $toString() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);

    MCAPI ::Bedrock::Result<void>
    $_read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};