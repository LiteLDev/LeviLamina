#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/network/Compressibility.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class IPacketHandlerDispatcher;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class Player;
class Actor;
class BlockPos;
class NetworkIdentifier;
struct NetworkIdentifierWithSubId;

#ifndef MC_NETWORK_PACKET_DECALARE

#define MC_NETWORK_PACKET_DECALARE(packetClassName)                                                                    \
    class packetClassName : public ::PayloadPacket<::packetClassName##Payload>

#endif

#ifndef MC_NETWORK_PACKET_DECALARE_END
#define MC_NETWORK_PACKET_DECALARE_END ;
#endif

// class (.*?) : public ::Packet \{\npublic:\n    // member variables\n    // NOLINTBEGIN\n *
// ::ll::TypedStorage<.*?::\1Payload> mPayload;\n.*\n.*
// MC_NETWORK_PACKET_DECALARE($1)

class Packet {
public:
    [[nodiscard]] constexpr explicit Packet(
        PacketPriority           priority    = PacketPriority::MediumPriority,
        NetworkPeer::Reliability reliability = NetworkPeer::Reliability::ReliableOrdered,
        SubClientId              clientSubId = SubClientId::PrimaryClient,
        bool                     compress    = true
    )
    : mPriority(priority),
      mReliability(reliability),
      mSenderSubId(clientSubId),
      mCompressible(compress ? Compressibility::Compressible : Compressibility::Incompressible) {}

    /**
     * Send the packet to a specific server player.
     *
     * @param player The server player to send the packet to.
     */
    LLAPI void sendTo(Player const& player) const;

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
    // member variables
    // NOLINTBEGIN
    ::PacketPriority                        mPriority;
    ::NetworkPeer::Reliability              mReliability;
    ::SubClientId                           mSenderSubId;
    bool                                    mIsHandled;
    ::std::chrono::steady_clock::time_point mReceiveTimepoint;
    ::IPacketHandlerDispatcher const*       mHandler;
    ::Compressibility                       mCompressible;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Packet();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const = 0;

    // vIndex: 2
    virtual ::std::string getName() const = 0;

    // vIndex: 3
    virtual uint64 getMaxSize() const;

    // vIndex: 4
    virtual ::Bedrock::Result<void> checkSize(uint64 packetSize, bool receiverIsServer) const;

    // vIndex: 5
    virtual void writeWithSerializationMode(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx, ::std::optional<::SerializationMode>) const;

    // vIndex: 7
    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    // vIndex: 6
    virtual void write(::BinaryStream&) const = 0;

    // vIndex: 9
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    // vIndex: 8
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream);

    // vIndex: 10
    virtual bool disallowBatching() const;

    // vIndex: 11
    virtual bool isValid() const;

    // vIndex: 12
    virtual ::SerializationMode getSerializationMode() const;

    // vIndex: 13
    virtual void setSerializationMode(::SerializationMode);

    // vIndex: 14
    virtual ::std::string toString() const;

    // vIndex: 16
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> readNoHeader(::ReadOnlyBinaryStream& bitstream, ::cereal::ReflectionCtx const& reflectionCtx, ::SubClientId const& subid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint64 $getMaxSize() const;

    MCAPI ::Bedrock::Result<void> $checkSize(uint64 packetSize, bool receiverIsServer) const;

    MCAPI void $writeWithSerializationMode(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx, ::std::optional<::SerializationMode>) const;

    MCAPI void $write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCFOLD ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCFOLD bool $disallowBatching() const;

    MCFOLD bool $isValid() const;

    MCFOLD ::SerializationMode $getSerializationMode() const;

    MCFOLD void $setSerializationMode(::SerializationMode);

    MCFOLD ::std::string $toString() const;

    MCFOLD ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

template <class PacketPayloadT>
class PayloadPacket : public ::Packet, public PacketPayloadT {
public:
    ::SerializationMode mSerializationMode;

    using PayloadType = PacketPayloadT;

    template <typename... Args>
    PayloadPacket(Args&&... args) : Packet(),
                                    PacketPayloadT(std::forward<Args>(args)...) {}
};
