#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/StructureTemplateDataRequestPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StructureTemplateDataRequestPacket : public ::ll::PayloadPacket<::StructureTemplateDataRequestPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateDataRequestPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual ::SerializationMode getSerializationMode() const /*override*/;

#ifdef LL_PLAT_S
    virtual void setSerializationMode(::SerializationMode) /*override*/;
#else // LL_PLAT_C
    virtual void setSerializationMode(::SerializationMode mode) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void writeWithSerializationMode(
        ::BinaryStream&,
        ::cereal::ReflectionCtx const&,
        ::std::optional<::SerializationMode>
    ) const /*override*/;
#else // LL_PLAT_C
    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;
#else // LL_PLAT_C
    virtual void write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void write(::BinaryStream&) const /*override*/;
#else // LL_PLAT_C
    virtual void write(::BinaryStream& stream) const /*override*/;
#endif

    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    virtual bool disallowBatching() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual uint64 getMaxSize() const /*override*/;

    virtual ::std::string toString() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureTemplateDataRequestPacket(::StructureTemplateDataRequestPacketPayload payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureTemplateDataRequestPacketPayload payload);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string_view $getName() const;

    MCFOLD ::SerializationMode $getSerializationMode() const;

    MCFOLD void $setSerializationMode(::SerializationMode mode);

    MCAPI void $writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const;

    MCFOLD void $write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    MCFOLD bool $disallowBatching() const;

    MCFOLD bool $isValid() const;

    MCFOLD uint64 $getMaxSize() const;

    MCAPI ::std::string $toString() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
