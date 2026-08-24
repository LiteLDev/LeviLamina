#include "ll/core/protocol/ProtocolSession.h"

#include <algorithm>
#include <iterator>
#include <limits>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/RegistrationLease.h"

NetherNet::NetworkID::NetworkID() = default;

NetherNet::P2P::NetworkID::NetworkID(NetherNet::P2P::NetworkID const&) = default;

NetherNet::P2P::NetworkID& NetherNet::P2P::NetworkID::operator=(NetherNet::P2P::NetworkID const&) = default;

NetherNet::Realms::NetworkID::NetworkID(NetherNet::Realms::NetworkID const&) = default;

NetherNet::Realms::NetworkID& NetherNet::Realms::NetworkID::operator=(NetherNet::Realms::NetworkID const&) = default;

namespace ll::protocol::detail {

ProtocolSession::ProtocolSession(
    SessionIdentity                         identity,
    std::shared_ptr<RegistrySnapshot const> registry,
    std::shared_ptr<SessionTransport>       transport,
    TransportLimits                         limits,
    std::chrono::steady_clock::time_point   now
)
: mIdentity(std::move(identity)),
  mRegistry(std::move(registry)),
  mTransport(std::move(transport)),
  mLimits(limits),
  mInboundBudget(limits, now),
  mOutboundBudget(limits, now) {}

std::shared_ptr<SessionSnapshot const> ProtocolSession::snapshotLocked() const {
    std::vector<NegotiatedPayload> payloads;
    payloads.reserve(mPayloads.size());

    std::ranges::transform(mPayloads, std::back_inserter(payloads), &NegotiatedPayloadBinding::payload);

    return std::make_shared<SessionSnapshot const>(SessionSnapshot{
        mIdentity,
        mState,
        mCoreProtocol,
        mRegistry ? mRegistry->revision : 0,
        mModules,
        std::move(payloads),
    });
}

SessionState ProtocolSession::state() const {
    std::scoped_lock lock{mMutex};
    return mState;
}

bool ProtocolSession::active(std::uint64_t generation) const {
    std::scoped_lock lock{mMutex};
    return generation == mIdentity.key.generation && mState == SessionState::Active;
}

std::shared_ptr<SessionSnapshot const> ProtocolSession::snapshot(std::uint64_t generation) const noexcept {
    try {
        std::scoped_lock lock{mMutex};
        if (generation != mIdentity.key.generation) return nullptr;

        return snapshotLocked();
    } catch (...) {
        return nullptr;
    }
}

Expected<> ProtocolSession::transition(SessionState expected, SessionState next) {
    std::scoped_lock lock{mMutex};
    if (mState != expected) return makeSessionError(SessionErrc::WrongState);

    bool valid = (expected == SessionState::Handshaking && next == SessionState::Negotiating)
              || (expected == SessionState::Negotiating && next == SessionState::ReadyLocal)
              || (expected == SessionState::ReadyLocal && next == SessionState::ProtocolReady)
              || (expected == SessionState::ProtocolReady && next == SessionState::Active)
              || (expected == SessionState::Closing && next == SessionState::Closed);
    if (!valid) {
        return makeProtocolError(ProtocolErrc::InvalidState, "invalid session transition");
    }

    mState = next;
    return {};
}

Expected<> ProtocolSession::validateInboundControl(ControlHeader const& header, std::size_t decodedBytes) {
    std::scoped_lock lock{mMutex};
    if (mState == SessionState::Closing || mState == SessionState::Closed) {
        return makeSessionError(SessionErrc::Closed);
    }
    if (header.handshakeId != mIdentity.handshakeId) {
        return makeProtocolError(ProtocolErrc::HandshakeIdMismatch);
    }
    if (header.messageSequence < mExpectedInboundSequence) {
        return makeProtocolError(ProtocolErrc::ReplayDetected);
    }
    if (header.messageSequence != mExpectedInboundSequence) {
        return makeProtocolError(ProtocolErrc::SequenceMismatch);
    }
    if (mHandshakeMessages >= Limits::MaxHandshakeMessages
        || decodedBytes > Limits::MaxHandshakeDecodedBytes
                              - std::min<std::size_t>(mHandshakeBytes, Limits::MaxHandshakeDecodedBytes)) {
        return makeProtocolError(ProtocolErrc::DeclarationMalformed, "handshake budget");
    }

    ++mExpectedInboundSequence;
    ++mHandshakeMessages;
    mHandshakeBytes += decodedBytes;
    return {};
}

Expected<ControlHeader> ProtocolSession::nextOutboundHeader(std::uint8_t schema) {
    auto headers = reserveOutboundHeaders(schema, 1);
    if (!headers) return forwardError(headers.error());

    return headers->front();
}

Expected<std::vector<ControlHeader>> ProtocolSession::reserveOutboundHeaders(std::uint8_t schema, std::size_t count) {
    std::scoped_lock lock{mMutex};
    if (mState == SessionState::Closing || mState == SessionState::Closed) {
        return makeSessionError(SessionErrc::Closed);
    }

    if (count == 0
        || count > Limits::MaxHandshakeMessages
                       - std::min<std::size_t>(mHandshakeMessages, Limits::MaxHandshakeMessages)) {
        return makeProtocolError(ProtocolErrc::DeclarationMalformed, "handshake message budget");
    }
    if (count - 1 > (std::numeric_limits<std::uint32_t>::max)() - mNextOutboundSequence) {
        return makeProtocolError(ProtocolErrc::SequenceMismatch, "outbound sequence exhausted");
    }

    std::vector<ControlHeader> headers;
    headers.reserve(count);
    for (std::size_t index = 0; index < count; ++index) {
        headers.push_back(ControlHeader{schema, mIdentity.handshakeId, mNextOutboundSequence++});
    }

    mHandshakeMessages += static_cast<std::uint32_t>(count);
    return headers;
}

Expected<> ProtocolSession::installNegotiation(NegotiationPlan plan, TranscriptDigest digest) noexcept {
    try {
        std::scoped_lock lock{mMutex};

        if (mState != SessionState::Negotiating) return makeSessionError(SessionErrc::WrongState);
        if (!mRegistry) return makeSessionError(SessionErrc::RegistryChanged);

        auto expectedRevision =
            role() == EndpointRole::Server ? plan.serverRegistryRevision : plan.clientRegistryRevision;
        if (mRegistry->revision != expectedRevision) return makeSessionError(SessionErrc::RegistryChanged);

        std::vector<NegotiatedPayloadBinding> payloads;
        payloads.reserve(plan.payloads.size());
        for (auto& payload : plan.payloads) {
            auto found = mRegistry->payloadsById.find(payload.id);
            if (found == mRegistry->payloadsById.end()) return makeSessionError(SessionErrc::RegistryChanged);

            payloads.push_back({std::move(payload), found->second->generation()});
        }

        mCoreProtocol = plan.coreProtocol;
        mLimits       = plan.limits;

        auto now = std::chrono::steady_clock::now();

        mInboundBudget  = DirectionBudget{mLimits, now};
        mOutboundBudget = DirectionBudget{mLimits, now};
        mDigest         = digest;
        mModules        = std::move(plan.modules);
        mPayloads       = std::move(payloads);
        mState          = SessionState::ReadyLocal;

        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ProtocolSession::acceptPeerReady(TranscriptDigest const& digest) {
    std::scoped_lock lock{mMutex};
    if (mState != SessionState::ReadyLocal) return makeSessionError(SessionErrc::WrongState);
    if (digest != mDigest) return makeProtocolError(ProtocolErrc::DigestMismatch);

    mState = SessionState::ProtocolReady;
    return {};
}

Expected<> ProtocolSession::activate() { return transition(SessionState::ProtocolReady, SessionState::Active); }

bool ProtocolSession::beginClosing() {
    std::scoped_lock lock{mMutex};
    if (mState == SessionState::Closing || mState == SessionState::Closed) return false;

    mState = SessionState::Closing;
    return true;
}

void ProtocolSession::close() {
    std::scoped_lock lock{mMutex};
    mState = SessionState::Closed;
    mTransport.reset();
}

std::optional<NegotiatedPayloadBinding> ProtocolSession::findNegotiated(std::uint64_t runtimeId) const noexcept {
    try {
        std::scoped_lock lock{mMutex};

        auto found = std::ranges::find(mPayloads, runtimeId, [](NegotiatedPayloadBinding const& binding) {
            return binding.payload.runtimeId;
        });

        if (found == mPayloads.end()) return std::nullopt;
        return *found;
    } catch (...) {
        return std::nullopt;
    }
}

Expected<> ProtocolSession::send(std::type_index type, void const* payload, std::uint64_t generation) noexcept {
    try {
        auto prepared = prepareOutbound(type, generation);
        if (!prepared) return forwardError(prepared.error());

        auto lease = RegistrationLease::acquire(prepared->state, prepared->binding.descriptorGeneration);
        if (!lease) return forwardError(lease.error());

        auto body = prepared->state
                        ->encode(payload, prepared->binding.payload.schema, prepared->binding.payload.maxEncodedSize);
        if (!body) return forwardError(body.error());

        return sendPrepared(*prepared, *body, generation);
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<PreparedOutbound> ProtocolSession::prepareOutbound(std::type_index type, std::uint64_t generation) noexcept {
    try {
        std::shared_ptr<SessionTransport> transport;
        {
            std::scoped_lock lock{mMutex};
            if (generation != mIdentity.key.generation) return makeSessionError(SessionErrc::WrongGeneration);

            if (mState == SessionState::Closing || mState == SessionState::Closed) {
                return makeSessionError(SessionErrc::Closed);
            }

            if (mState != SessionState::Active) return makeSessionError(SessionErrc::WrongState);
            if (!mTransport) return makeSessionError(SessionErrc::TransportUnavailable);

            transport = mTransport;
        }
        if (!transport->isOnEndpointThread()) return makeSessionError(SessionErrc::WrongThread);

        auto& registry = PayloadRegistry::getInstance();

        auto state = PayloadRegistryAccess::findState(registry, type);
        if (!state) return makeSessionError(SessionErrc::NotNegotiated);

        auto descriptor = state->descriptor();

        std::optional<NegotiatedPayloadBinding> negotiated;
        {
            std::scoped_lock lock{mMutex};

            auto found =
                std::ranges::find(mPayloads, descriptor->runtimeId(), [](NegotiatedPayloadBinding const& binding) {
                    return binding.payload.runtimeId;
                });

            if (found == mPayloads.end() || found->payload.id != descriptor->id()) {
                return makeSessionError(SessionErrc::NotNegotiated, descriptor->id().str());
            }

            negotiated = *found;
        }

        if (!canSend(role(), descriptor->definition().direction)) {
            return makeSessionError(SessionErrc::WrongDirection, descriptor->id().str());
        }
        if (negotiated->payload.direction != descriptor->definition().direction
            || negotiated->descriptorGeneration != descriptor->generation()
            || !std::ranges::contains(descriptor->definition().schemas, negotiated->payload.schema)) {
            return makeSessionError(SessionErrc::RegistryChanged, descriptor->id().str());
        }

        return PreparedOutbound{std::move(state), std::move(*negotiated)};
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ProtocolSession::sendPrepared(
    PreparedOutbound const& prepared,
    std::string const&      body,
    std::uint64_t           generation
) noexcept {
    try {
        if (!prepared.state) return makeSessionError(SessionErrc::NotNegotiated);

        auto descriptor = prepared.state->descriptor();
        if (descriptor->generation() != prepared.binding.descriptorGeneration
            || descriptor->runtimeId() != prepared.binding.payload.runtimeId
            || descriptor->id() != prepared.binding.payload.id) {
            return makeSessionError(SessionErrc::RegistryChanged, descriptor->id().str());
        }
        if (body.size() > prepared.binding.payload.maxEncodedSize) {
            return makeCodecError(CodecErrc::SizeLimitExceeded);
        }
        if (role() == EndpointRole::Client
            && body.size() + sizeof(std::uint64_t) + sizeof(std::uint8_t) + sizeof(std::uint16_t)
                       + sizeof(std::uint32_t)
                   > Limits::MinecraftServerboundPacketBytes) {
            return makeTransportError(TransportErrc::ReconstructedSizeExceeded);
        }

        std::shared_ptr<SessionTransport> transport;

        CoreVersion  coreProtocol{};
        std::uint8_t subClientId{};
        {
            std::scoped_lock lock{mMutex};

            if (generation != mIdentity.key.generation) return makeSessionError(SessionErrc::WrongGeneration);
            if (mState != SessionState::Active) return makeSessionError(SessionErrc::Closed);
            if (!mTransport) return makeSessionError(SessionErrc::TransportUnavailable);

            auto found = std::ranges::find(
                mPayloads,
                prepared.binding.payload.runtimeId,
                [](NegotiatedPayloadBinding const& binding) { return binding.payload.runtimeId; }
            );
            if (found == mPayloads.end() || *found != prepared.binding) {
                return makeSessionError(SessionErrc::RegistryChanged, descriptor->id().str());
            }

            transport    = mTransport;
            coreProtocol = mCoreProtocol;
            subClientId  = mIdentity.key.subClientId;

            if (!mOutboundBudget.consume(body.size(), std::chrono::steady_clock::now())) {
                return makeSessionError(SessionErrc::RateLimited);
            }
        }

        if (!transport->isOnEndpointThread()) return makeSessionError(SessionErrc::WrongThread);

        auto packet = ProtocolEnvelopePacket::create(
            prepared.binding.payload.runtimeId,
            coreProtocol,
            prepared.binding.payload.schema,
            body,
            static_cast<SubClientId>(subClientId),
            prepared.binding.payload.maxEncodedSize
        );

        if (!packet) return forwardError(packet.error());
        return transport->send(std::move(*packet));
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ProtocolSession::admitInbound(std::size_t packetSize, std::chrono::steady_clock::time_point now) {
    std::scoped_lock lock{mMutex};

    if (mState != SessionState::Active) return makeSessionError(SessionErrc::WrongState);
    if (!mInboundBudget.consume(packetSize, now)) {
        return makeProtocolError(ProtocolErrc::RateLimitExceeded);
    }

    return {};
}

Expected<> ProtocolSession::validateInbound(
    std::uint64_t                         runtimeId,
    std::uint8_t                          envelopeSchema,
    SchemaVersion                         schema,
    std::size_t                           bodySize,
    std::chrono::steady_clock::time_point now
) {
    std::scoped_lock lock{mMutex};

    if (mState != SessionState::Active) return makeSessionError(SessionErrc::WrongState);
    auto const* coreDefinition = findCoreProtocolDefinition(mCoreProtocol);
    if (!coreDefinition || envelopeSchema != coreDefinition->payloadEnvelopeSchema) {
        return makeProtocolError(ProtocolErrc::InvalidSchema, "payload envelope schema");
    }

    auto found = std::ranges::find(mPayloads, runtimeId, [](NegotiatedPayloadBinding const& binding) {
        return binding.payload.runtimeId;
    });

    if (found == mPayloads.end()) return makeProtocolError(ProtocolErrc::UnknownPayload);
    if (!canReceive(role(), found->payload.direction)) return makeSessionError(SessionErrc::WrongDirection);
    if (schema != found->payload.schema) return makeProtocolError(ProtocolErrc::InvalidSchema);
    if (bodySize > found->payload.maxEncodedSize) return makeProtocolError(ProtocolErrc::MalformedPayload);
    if (role() != EndpointRole::Server && !mInboundBudget.consume(bodySize, now)) {
        return makeProtocolError(ProtocolErrc::RateLimitExceeded);
    }

    return {};
}

Session SessionAccess::makeSession(std::shared_ptr<ProtocolSession> const& session) noexcept {
    return session ? Session{session, session->generation()} : Session{};
}

SessionView SessionAccess::makeView(std::shared_ptr<SessionSnapshot const> snapshot) noexcept {
    return SessionView{std::move(snapshot)};
}

PayloadContext SessionAccess::makeContext(std::shared_ptr<ProtocolSession> const& session) {
    auto handle = makeSession(session);
    return PayloadContext{handle, handle.view()};
}

std::shared_ptr<ProtocolSession> SessionAccess::lock(Session const& session) noexcept {
    return session.mSession.lock();
}

std::uint64_t SessionAccess::generation(Session const& session) noexcept { return session.mGeneration; }

} // namespace ll::protocol::detail

namespace ll::protocol {

Session::Session(std::weak_ptr<detail::ProtocolSession> session, std::uint64_t generation) noexcept
: mSession(std::move(session)),
  mGeneration(generation) {}

Expected<> Session::sendErased(std::type_index type, void const* payload) const noexcept {
    auto session = mSession.lock();
    if (!session) return makeSessionError(SessionErrc::Closed);

    return session->send(type, payload, mGeneration);
}

Session::operator bool() const {
    auto session = mSession.lock();
    return session && session->generation() == mGeneration && session->state() != SessionState::Closed;
}

bool Session::active() const {
    auto session = mSession.lock();
    return session && session->active(mGeneration);
}

SessionView Session::view() const noexcept {
    auto session = mSession.lock();
    return session ? detail::SessionAccess::makeView(session->snapshot(mGeneration)) : SessionView{};
}

SessionView::SessionView(std::shared_ptr<detail::SessionSnapshot const> snapshot) noexcept
: mSnapshot(std::move(snapshot)) {}

SessionView::operator bool() const noexcept { return mSnapshot != nullptr; }
SessionState SessionView::state() const noexcept { return mSnapshot ? mSnapshot->state : SessionState::Closed; }
EndpointRole SessionView::role() const noexcept {
    return mSnapshot ? mSnapshot->identity.key.role : EndpointRole::Client;
}
PeerIdentityView SessionView::peer() const& {
    if (!mSnapshot) return {};

    return {
        mSnapshot->identity.key.endpointInstanceId,
        mSnapshot->identity.key.generation,
        mSnapshot->identity.key.subClientId,
        mSnapshot->identity.key.connection,
        mSnapshot->identity.networkIdentifier,
    };
}
CoreVersion   SessionView::coreProtocol() const noexcept { return mSnapshot ? mSnapshot->coreProtocol : 0; }
std::uint64_t SessionView::registryRevision() const noexcept { return mSnapshot ? mSnapshot->registryRevision : 0; }
std::span<NegotiatedModule const> SessionView::modules() const& noexcept {
    return mSnapshot ? std::span<NegotiatedModule const>{mSnapshot->modules.data(), mSnapshot->modules.size()}
                     : std::span<NegotiatedModule const>{};
}
std::span<NegotiatedPayload const> SessionView::payloads() const& noexcept {
    return mSnapshot ? std::span<NegotiatedPayload const>{mSnapshot->payloads.data(), mSnapshot->payloads.size()}
                     : std::span<NegotiatedPayload const>{};
}
NegotiatedModule const* SessionView::findModule(ModuleId const& id) const& {
    if (!mSnapshot) return nullptr;

    auto found = std::ranges::find(mSnapshot->modules, id, &NegotiatedModule::id);
    return found == mSnapshot->modules.end() ? nullptr : &*found;
}
NegotiatedPayload const* SessionView::findPayload(PayloadId const& id) const& {
    if (!mSnapshot) return nullptr;

    auto found = std::ranges::find(mSnapshot->payloads, id, &NegotiatedPayload::id);
    return found == mSnapshot->payloads.end() ? nullptr : &*found;
}
NegotiatedPayload const* SessionView::findPayload(std::uint64_t runtimeId) const& {
    if (!mSnapshot) return nullptr;

    auto found = std::ranges::find(mSnapshot->payloads, runtimeId, &NegotiatedPayload::runtimeId);
    return found == mSnapshot->payloads.end() ? nullptr : &*found;
}

} // namespace ll::protocol
