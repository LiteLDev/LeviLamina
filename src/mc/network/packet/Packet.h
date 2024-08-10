#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/Compressibility.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/NetworkPeer.h"
#include "mc/resources/PacketPriority.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SubClientId.h"

class BinaryStream;
class ReadOnlyBinaryStream;
class Player;
class ServerPlayer;
class Actor;
class BlockPos;

class Packet {
public:
    static const bool                SHARE_WITH_HANDLER = false;                                     // constant
    PacketPriority                   mPriority          = PacketPriority::Medium;                    // this+0x8
    NetworkPeer::Reliability         mReliability       = NetworkPeer::Reliability::ReliableOrdered; // this+0xC
    SubClientId                      mClientSubId       = SubClientId::PrimaryClient;                // this+0x10
    bool                             mIsHandled         = false;                                     // this+0x11
    NetworkPeer::PacketRecvTimepoint mReceiveTimepoint;                                              // this+0x18
    IPacketHandlerDispatcher const*  mHandler      = nullptr;                                        // this+0x20
    Compressibility                  mCompressible = Compressibility::Compressible;                  // this+0x28

    [[nodiscard]] constexpr explicit Packet(
        PacketPriority           priority    = PacketPriority::Medium,
        NetworkPeer::Reliability reliability = NetworkPeer::Reliability::ReliableOrdered,
        SubClientId              clientSubId = SubClientId::PrimaryClient,
        bool                     compress    = true
    )
    : mPriority(priority),
      mReliability(reliability),
      mClientSubId(clientSubId),
      mCompressible(compress ? Compressibility::Compressible : Compressibility::Incompressible) {}

    /**
     * Send the packet to a specific server player.
     *
     * @param player The server player to send the packet to.
     */
    LLAPI void sendTo(ServerPlayer const& player) const;

    /**
     * Send the packet to all relevant players in a 2D plane at a position in a given dimension.
     * @param pos The position to send the packet to.
     * @param dimId The type of dimension to send the packet in.
     * @param except exclude this player.
     */
    LLAPI void sendTo(BlockPos const& pos, DimensionType dimId, optional_ref<Player const> except = std::nullopt) const;

    /**
     * Send the packet to all relevant players within a specific actor.
     *
     * @param actor The actor to send the packet to.
     * @param except exclude this player.
     */
    LLAPI void sendTo(Actor const& actor, optional_ref<Player const> except = std::nullopt) const;

    /**
     * Send the packet to a specific client identified by network identifier and sub-client ID.
     *
     * @param id The network identifier of the client to send the packet to.
     * @param clientId The sub-client ID of the client to send the packet to.
     */
    LLAPI void sendToClient(NetworkIdentifier const& identifier, ::SubClientId clientId) const;

    LLAPI void sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const;

    /**
     * Send the packet to all clients connected to the server.
     */
    LLAPI void sendToClients() const;

    LLAPI void sendToClients(NetworkIdentifier const& exceptId, ::SubClientId exceptSubid) const;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Packet();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const = 0;

    // vIndex: 2
    virtual std::string getName() const = 0;

    // vIndex: 3
    virtual class Bedrock::Result<void> checkSize(uint64, bool) const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const = 0;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& bitStream);

    // vIndex: 6
    virtual bool disallowBatching() const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream) = 0;

    MCAPI void handle(
        class NetworkIdentifier const& source,
        class NetEventCallback&        callback,
        std::shared_ptr<class Packet>& packet
    );

    MCAPI class Bedrock::Result<void> readNoHeader(class ReadOnlyBinaryStream&, ::SubClientId const&);

    MCAPI void writeWithHeader(::SubClientId subClientId, class BinaryStream& bitstream) const;

    // NOLINTEND
};
