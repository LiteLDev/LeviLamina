#pragma once

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <optional>
#include <typeindex>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/PayloadContext.h"
#include "ll/core/protocol/ConnectionKey.h"
#include "ll/core/protocol/Negotiator.h"
#include "ll/core/protocol/SessionState.h"

namespace ll::protocol::detail {

class ProtocolEnvelopePacket;
class DescriptorState;

struct NegotiatedPayloadBinding {
    NegotiatedPayload payload;
    std::uint64_t     descriptorGeneration{};

    bool operator==(NegotiatedPayloadBinding const&) const = default;
};

struct PreparedOutbound {
    std::shared_ptr<DescriptorState> state;
    NegotiatedPayloadBinding         binding;
};

class SessionTransport {
public:
    virtual ~SessionTransport() = default;

    [[nodiscard]] virtual bool       isOnEndpointThread() const                           = 0;
    [[nodiscard]] virtual Expected<> send(std::unique_ptr<ProtocolEnvelopePacket> packet) = 0;
};

struct SessionSnapshot {
    SessionIdentity                identity;
    SessionState                   state{SessionState::Handshaking};
    CoreVersion                    coreProtocol{};
    std::uint64_t                  registryRevision{};
    std::vector<NegotiatedModule>  modules;
    std::vector<NegotiatedPayload> payloads;
};

class ProtocolSession : public std::enable_shared_from_this<ProtocolSession> {
    mutable std::mutex mMutex;

    SessionIdentity                         mIdentity;
    SessionState                            mState{SessionState::Handshaking};
    std::shared_ptr<RegistrySnapshot const> mRegistry;
    std::shared_ptr<SessionTransport>       mTransport;
    TransportLimits                         mLimits;
    CoreVersion                             mCoreProtocol{};
    std::uint32_t                           mExpectedInboundSequence{1};
    std::uint32_t                           mNextOutboundSequence{1};
    std::uint32_t                           mHandshakeMessages{};
    std::size_t                             mHandshakeBytes{};
    TranscriptDigest                        mDigest{};
    std::vector<NegotiatedModule>           mModules;
    std::vector<NegotiatedPayloadBinding>   mPayloads;
    DirectionBudget                         mInboundBudget;
    DirectionBudget                         mOutboundBudget;

    [[nodiscard]] std::shared_ptr<SessionSnapshot const> snapshotLocked() const;

public:
    ProtocolSession(
        SessionIdentity                         identity,
        std::shared_ptr<RegistrySnapshot const> registry,
        std::shared_ptr<SessionTransport>       transport,
        TransportLimits                         limits,
        std::chrono::steady_clock::time_point   now = std::chrono::steady_clock::now()
    );

    [[nodiscard]] SessionIdentity const& identity() const noexcept { return mIdentity; }
    [[nodiscard]] std::uint64_t          generation() const noexcept { return mIdentity.key.generation; }
    [[nodiscard]] EndpointRole           role() const noexcept { return mIdentity.key.role; }
    [[nodiscard]] SessionState           state() const;
    [[nodiscard]] bool                   active(std::uint64_t generation) const;
    [[nodiscard]] std::shared_ptr<SessionSnapshot const> snapshot(std::uint64_t generation) const noexcept;

    [[nodiscard]] Expected<> transition(SessionState expected, SessionState next);

    [[nodiscard]] Expected<> validateInboundControl(ControlHeader const& header, std::size_t decodedBytes);

    [[nodiscard]] Expected<ControlHeader>              nextOutboundHeader(std::uint8_t schema);
    [[nodiscard]] Expected<std::vector<ControlHeader>> reserveOutboundHeaders(std::uint8_t schema, std::size_t count);
    [[nodiscard]] Expected<> installNegotiation(NegotiationPlan plan, TranscriptDigest digest) noexcept;
    [[nodiscard]] Expected<> acceptPeerReady(TranscriptDigest const& digest);
    [[nodiscard]] Expected<> activate();

    bool beginClosing();
    void close();

    [[nodiscard]] Expected<> send(std::type_index type, void const* payload, std::uint64_t generation) noexcept;
    [[nodiscard]] Expected<PreparedOutbound> prepareOutbound(std::type_index type, std::uint64_t generation) noexcept;
    [[nodiscard]] Expected<>
    sendPrepared(PreparedOutbound const& prepared, std::string const& body, std::uint64_t generation) noexcept;

    [[nodiscard]] Expected<>
    admitInbound(std::size_t packetSize, std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now());

    [[nodiscard]] Expected<> validateInbound(
        std::uint64_t                         runtimeId,
        std::uint8_t                          envelopeSchema,
        SchemaVersion                         schema,
        std::size_t                           bodySize,
        std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now()
    );

    [[nodiscard]] std::optional<NegotiatedPayloadBinding> findNegotiated(std::uint64_t runtimeId) const noexcept;
};

struct SessionAccess {
    [[nodiscard]] static Session        makeSession(std::shared_ptr<ProtocolSession> const& session) noexcept;
    [[nodiscard]] static SessionView    makeView(std::shared_ptr<SessionSnapshot const> snapshot) noexcept;
    [[nodiscard]] static PayloadContext makeContext(std::shared_ptr<ProtocolSession> const& session);

    [[nodiscard]] static std::shared_ptr<ProtocolSession> lock(Session const& session) noexcept;
    [[nodiscard]] static std::uint64_t                    generation(Session const& session) noexcept;
};

} // namespace ll::protocol::detail
