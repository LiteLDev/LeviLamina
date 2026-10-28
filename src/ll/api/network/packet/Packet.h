#pragma once

#include <memory>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/Meta.h"
#include "ll/api/network/packet/PacketRegistrar.h"
#include "ll/api/reflection/TypeName.h"
#include "ll/api/utils/HashUtils.h"
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

    static constexpr std::string_view CustomPacketId{};

    static constexpr uint PacketVersion{0};

    static constexpr PacketSide Side{PacketSide::Both};

    static constexpr bool Optional{false};

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

    LLNDAPI bool canSendTo(Player const& player) const;

    LLNDAPI bool canSendTo(NetworkIdentifier const& identifier) const;

    LLNDAPI bool canSendToServer() const;
};

class IPacketHandler {
public:
    virtual ~IPacketHandler() = default;
    virtual void handle(
        NetworkIdentifier const&   netId,
        NetEventCallback&          callback,
        PacketSide                 side,
        ll::network::Packet const& packet
    ) const = 0;
};

template <class T>
constexpr std::string_view getPacketId = []() -> std::string_view {
    using self = std::remove_cvref_t<T>;
    if constexpr (!self::CustomPacketId.empty()) {
        return self::CustomPacketId;
    } else {
        return reflection::type_unprefix_name_v<self>;
    }
}();

[[nodiscard]] constexpr PacketRuntimeId makePacketRuntimeId(std::string_view id, uint version = 0) {
    auto hash = hash_utils::doHash(id);
    return version == 0 ? hash : hash_utils::HashCombiner{hash}.add(version).hash();
}

namespace detail {
template <class Derived>
inline bool packetRegistration = [] {
    PacketRegistrar::getInstance().registerPacket(
        getPacketId<Derived>,
        makePacketRuntimeId(getPacketId<Derived>, Derived::PacketVersion),
        []() -> std::unique_ptr<Packet> { return std::make_unique<Derived>(); },
        Derived::Side,
        Derived::Optional
    );
    return true;
}();

template <class Derived, class PacketType, PacketSide Side>
inline bool packetHandlerRegistration = [] {
    static Derived instance;
    PacketRegistrar::getInstance().registerHandler(
        getPacketId<PacketType>,
        makePacketRuntimeId(getPacketId<PacketType>, PacketType::PacketVersion),
        instance,
        Side
    );
    return true;
}();
} // namespace detail

template <class Derived>
class PacketBase : public Packet, private meta::StaticRegistrationAnchor<detail::packetRegistration<Derived>> {
    static bool ensureRegistered() { return detail::packetRegistration<Derived>; }

protected:
    using Packet::Packet;

public:
    [[nodiscard]] ::std::string_view getName() const override { return getPacketId<Derived>; }
    [[nodiscard]] PacketRuntimeId    getRuntimeId() const override {
        constexpr PacketRuntimeId runtimeId = makePacketRuntimeId(getPacketId<Derived>, Derived::PacketVersion);
        return runtimeId;
    }

    inline static bool sRegistered = ensureRegistered();
};

template <class Derived, class PacketType, PacketSide Side = PacketType::Side>
class PacketHandlerBase
: public IPacketHandler,
  private meta::StaticRegistrationAnchor<detail::packetHandlerRegistration<Derived, PacketType, Side>> {
    static bool ensureRegistered() { return detail::packetHandlerRegistration<Derived, PacketType, Side>; }

    inline static bool sRegistered = ensureRegistered();

public:
    void handle(
        NetworkIdentifier const& netId,
        NetEventCallback&        callback,
        PacketSide               side,
        Packet const&            packet
    ) const final {
        static_cast<Derived const*>(this)->handlePacket(netId, callback, side, static_cast<PacketType const&>(packet));
    }
};

} // namespace ll::network
