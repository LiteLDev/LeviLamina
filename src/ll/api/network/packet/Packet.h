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

class BinaryStream;
class IPacketHandlerDispatcher;
class ReadOnlyBinaryStream;
class NetworkIdentifier;
class NetEventCallback;
class UserEntityIdentifierComponent;
struct NetworkIdentifierWithSubId;

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

    virtual void                    write(::BinaryStream&) const   = 0;
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;
    virtual ::std::string           getName() const                = 0;

    LLAPI void sendToServer() const;
    LLAPI void sendToClient(::NetworkIdentifier const& identifier, ::SubClientId clientId) const;
    LLAPI void sendToClient(::UserEntityIdentifierComponent const*);
    LLAPI void sendToClients(::std::vector<::NetworkIdentifierWithSubId> const&);
    LLAPI void sendBroadcast();
    LLAPI void sendBroadcast(::NetworkIdentifier const&, ::SubClientId);
};

class IPacketHandler {
public:
    virtual ~IPacketHandler() = default;
    virtual void
    handle(const NetworkIdentifier& netId, NetEventCallback& callback, const ll::network::Packet& packet) const = 0;
};

template <class Derived>
class PacketBase : public Packet {
    static bool ensureRegistered() {
        PacketRegistrar::getInstance().registerPacket(
            reflection::type_unprefix_name_v<Derived>,
            []() -> std::shared_ptr<Packet> { return std::make_shared<Derived>(); }
        );
        return true;
    }

protected:
    using Packet::Packet;

public:
    [[nodiscard]] ::std::string getName() const override {
        return ::std::string(reflection::type_unprefix_name_v<Derived>);
    }

    inline static bool sRegistered = ensureRegistered();
};

template <class Derived, class PacketType>
class PacketHandlerBase : public IPacketHandler {
    static bool ensureRegistered() {
        static Derived instance;
        PacketRegistrar::getInstance().registerHandler(
            reflection::type_unprefix_name_v<PacketType>,
            std::shared_ptr<IPacketHandler>(std::shared_ptr<void>{}, &instance)
        );
        return true;
    }

    inline static bool sRegistered = ensureRegistered();

public:
    void handle(const NetworkIdentifier& netId, NetEventCallback& callback, const Packet& packet) const final {
        static_cast<const Derived*>(this)->handlePacket(netId, callback, static_cast<const PacketType&>(packet));
    }
};

} // namespace ll::network