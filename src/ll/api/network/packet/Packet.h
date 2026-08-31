#pragma once

#include <memory>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/network/packet/PacketRegistrar.h"
#include "ll/api/reflection/TypeName.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"
#include "mc/platform/Result.h"

class Player;
class Actor;
class BlockPos;
class BinaryStream;
class IPacketHandlerDispatcher;
class ReadOnlyBinaryStream;
class NetworkIdentifier;
class NetEventCallback;
class UserEntityIdentifierComponent;
struct NetworkIdentifierWithSubId;
struct DimensionType;

namespace ll::network {

class IPacketHandler;
class PacketRegistrar;

class Packet {
public:
    PacketPriority           mPriority;
    NetworkPeer::Reliability mReliability;
    SubClientId              mSenderSubId;
    Compressibility          mCompressible;

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

    virtual ~Packet() = default;

    virtual void                                  write(::BinaryStream&) const  = 0;
    [[nodiscard]] virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream&) = 0;
    [[nodiscard]] virtual ::std::string_view      getName() const               = 0;

    [[nodiscard]] LLNDAPI virtual PacketRuntimeId getRuntimeId() const;

    LLAPI void sendTo(Player const& player) const;
    LLAPI void sendTo(BlockPos const& pos, DimensionType dimId, optional_ref<Player const> except = std::nullopt) const;
    LLAPI void sendTo(Actor const& actor, optional_ref<Player const> except = std::nullopt) const;

    LLAPI void sendToClient(NetworkIdentifier const& identifier, ::SubClientId clientId) const;
    LLAPI void sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const;

    LLAPI void sendToClients() const;
    LLAPI void sendToClients(NetworkIdentifier const& exceptId, ::SubClientId exceptSubid) const;

    LLAPI void sendToServer() const;
};

class IPacketHandler {
public:
    virtual ~IPacketHandler() = default;
    virtual void
    handle(NetworkIdentifier const& netId, NetEventCallback& callback, ll::network::Packet const& packet) const = 0;
};

namespace detail {
template <bool&>
struct StaticRegistrationAnchor {};

template <class Derived>
inline bool packetRegistration = [] {
    PacketRegistrar::getInstance().registerPacket(
        reflection::type_unprefix_name_v<Derived>,
        ll::hash_utils::doHash(reflection::type_unprefix_name_v<Derived>),
        []() -> std::unique_ptr<Packet> { return std::make_unique<Derived>(); }
    );
    return true;
}();

template <class Derived, class PacketType>
inline bool packetHandlerRegistration = [] {
    static Derived instance;
    PacketRegistrar::getInstance().registerHandler(
        reflection::type_unprefix_name_v<PacketType>,
        ll::hash_utils::doHash(reflection::type_unprefix_name_v<PacketType>),
        instance
    );
    return true;
}();
} // namespace detail

template <class Derived>
class PacketBase : public Packet, private detail::StaticRegistrationAnchor<detail::packetRegistration<Derived>> {
    static bool ensureRegistered() { return detail::packetRegistration<Derived>; }

protected:
    using Packet::Packet;

public:
    [[nodiscard]] ::std::string_view getName() const override { return reflection::type_unprefix_name_v<Derived>; }
    [[nodiscard]] PacketRuntimeId    getRuntimeId() const override {
        constexpr PacketRuntimeId runtimeId = ll::hash_utils::doHash(reflection::type_unprefix_name_v<Derived>);
        return runtimeId;
    }

    inline static bool sRegistered = ensureRegistered();
};

template <class Derived, class PacketType>
class PacketHandlerBase
: public IPacketHandler,
  private detail::StaticRegistrationAnchor<detail::packetHandlerRegistration<Derived, PacketType>> {
    static bool ensureRegistered() { return detail::packetHandlerRegistration<Derived, PacketType>; }

    inline static bool sRegistered = ensureRegistered();

public:
    void handle(NetworkIdentifier const& netId, NetEventCallback& callback, Packet const& packet) const final {
        static_cast<Derived const*>(this)->handlePacket(netId, callback, static_cast<PacketType const&>(packet));
    }
};

} // namespace ll::network
