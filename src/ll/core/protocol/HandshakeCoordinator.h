#pragma once

#include <cstddef>
#include <memory>
#include <optional>
#include <span>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/core/protocol/ControlCodec.h"
#include "ll/core/protocol/ProtocolSession.h"
#include "ll/core/protocol/Transcript.h"

namespace ll::protocol::detail {

struct HandshakeProgress {
    std::vector<ControlMessage> outbound;
    bool                        protocolReady{};
};

class HandshakeCoordinator final {
    enum class Step : std::uint8_t {
        Initial,
        HelloAck,
        ServerDeclaration,
        ClientDeclaration,
        NegotiationResult,
        ClientReady,
        ServerReady,
        ProtocolReady,
        Failed,
    };

    EndpointRole                            mRole;
    std::shared_ptr<ProtocolSession>        mSession;
    std::shared_ptr<RegistrySnapshot const> mRegistry;
    CoreVersion                             mCoreProtocol{};
    TransportLimits                         mLimits{};
    Nonce                                   mServerNonce{};
    Nonce                                   mClientNonce{};
    Step                                    mStep{Step::Initial};
    Transcript                              mTranscript;
    DeclarationAssembler                    mDeclarationAssembler;
    NegotiationResultAssembler              mResultAssembler;
    std::optional<DeclarationSource>        mServerDeclaration;
    std::optional<DeclarationSource>        mClientDeclaration;

    [[nodiscard]] Expected<std::vector<ControlMessage>> makeLocalDeclaration();
    [[nodiscard]] Expected<std::vector<ControlMessage>> makeNegotiationResult();
    [[nodiscard]] Expected<>                            reservePackedHeaders(std::span<ControlMessage const> messages);
    [[nodiscard]] Expected<>                            addTranscript(std::span<ControlMessage const> messages);
    [[nodiscard]] Expected<HandshakeProgress>           fail(Error error);

public:
    HandshakeCoordinator(
        EndpointRole                            role,
        std::shared_ptr<ProtocolSession>        session,
        std::shared_ptr<RegistrySnapshot const> registry,
        TransportLimits                         limits
    );

    HandshakeCoordinator(HandshakeCoordinator const&)            = delete;
    HandshakeCoordinator& operator=(HandshakeCoordinator const&) = delete;

    [[nodiscard]] Expected<HandshakeProgress> startServer(CoreVersion selectedProtocol, Nonce serverNonce);

    [[nodiscard]] Expected<HandshakeProgress>
    acceptServerHello(Hello hello, Nonce clientNonce, std::size_t decodedBytes);

    [[nodiscard]] Expected<HandshakeProgress> receive(ControlMessage message, std::size_t decodedBytes);

    [[nodiscard]] CoreVersion            coreProtocol() const noexcept { return mCoreProtocol; }
    [[nodiscard]] TransportLimits const& limits() const noexcept { return mLimits; }
};

[[nodiscard]] bool            validTransportLimits(TransportLimits const& limits) noexcept;
[[nodiscard]] TransportLimits intersectTransportLimits(TransportLimits const& first, TransportLimits const& second);

} // namespace ll::protocol::detail
