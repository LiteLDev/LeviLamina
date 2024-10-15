#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/UUID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShowStoreOfferPacket : public ::Packet {
public:
    enum class RedirectType : uchar {
        Marketplace,
        DressingRoom,
        ThirdPartyServerPage,
    };
    mce::UUID    mOfferId;      // this+0x30
    RedirectType mRedirectType; // this+0x40

    // prevent constructor by default
    ShowStoreOfferPacket& operator=(ShowStoreOfferPacket const&);
    ShowStoreOfferPacket(ShowStoreOfferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShowStoreOfferPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ShowStoreOfferPacket();

    MCAPI ShowStoreOfferPacket(class mce::UUID const& offerId, ::ShowStoreOfferRedirectType redirectType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class mce::UUID const& offerId, ::ShowStoreOfferRedirectType redirectType);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
