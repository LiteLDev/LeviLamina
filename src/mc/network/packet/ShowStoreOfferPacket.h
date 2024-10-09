#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
};
