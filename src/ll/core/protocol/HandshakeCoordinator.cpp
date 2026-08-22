#include "ll/core/protocol/HandshakeCoordinator.h"

#include <algorithm>
#include <iterator>
#include <ranges>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/Negotiator.h"

namespace ll::protocol::detail {

namespace handshake_detail {

ControlHeader const& header(ControlMessage const& message) {
    return std::visit([](auto const& value) -> ControlHeader const& { return value.header; }, message);
}

Unexpected unexpected(std::string_view context) {
    return makeProtocolError(ProtocolErrc::UnexpectedMessage, std::string{context});
}

bool limitsWithin(TransportLimits const& accepted, TransportLimits const& offered) noexcept {
    return validTransportLimits(accepted) && accepted.maxControlBody <= offered.maxControlBody
        && accepted.maxPayloadBody <= offered.maxPayloadBody && accepted.packetsPerSecond <= offered.packetsPerSecond
        && accepted.bytesPerSecond <= offered.bytesPerSecond && accepted.burstPackets <= offered.burstPackets
        && accepted.burstBytes <= offered.burstBytes;
}

bool validNonce(Nonce const& nonce) noexcept { return nonce != Nonce{}; }

template <class T>
std::vector<ControlMessage> toMessages(std::vector<T> values) {
    std::vector<ControlMessage> messages;
    messages.reserve(values.size());

    std::ranges::move(values, std::back_inserter(messages));
    return messages;
}

} // namespace handshake_detail

bool validTransportLimits(TransportLimits const& limits) noexcept {
    return limits.maxControlBody != 0 && limits.maxControlBody <= Limits::MaxControlBody && limits.maxPayloadBody != 0
        && limits.maxPayloadBody <= Limits::MaxPayloadBody && limits.packetsPerSecond != 0
        && limits.packetsPerSecond <= Limits::MaxPacketsPerSecond && limits.bytesPerSecond != 0
        && limits.bytesPerSecond <= Limits::MaxBytesPerSecond && limits.burstPackets != 0
        && limits.burstPackets <= Limits::MaxBurstPackets && limits.burstBytes != 0
        && limits.burstBytes <= Limits::MaxBurstBytes;
}

TransportLimits intersectTransportLimits(TransportLimits const& first, TransportLimits const& second) {
    return {
        std::min(first.maxControlBody, second.maxControlBody),
        std::min(first.maxPayloadBody, second.maxPayloadBody),
        std::min(first.packetsPerSecond, second.packetsPerSecond),
        std::min(first.bytesPerSecond, second.bytesPerSecond),
        std::min(first.burstPackets, second.burstPackets),
        std::min(first.burstBytes, second.burstBytes),
    };
}

HandshakeCoordinator::HandshakeCoordinator(
    EndpointRole                            role,
    std::shared_ptr<ProtocolSession>        session,
    std::shared_ptr<RegistrySnapshot const> registry,
    TransportLimits                         limits
)
: mRole(role),
  mSession(std::move(session)),
  mRegistry(std::move(registry)),
  mLimits(limits),
  mDeclarationAssembler(1, limits.maxControlBody),
  mResultAssembler(1, limits.maxControlBody) {}

Expected<HandshakeProgress> HandshakeCoordinator::fail(Error error) {
    mStep = Step::Failed;
    return Unexpected{std::move(error)};
}

Expected<> HandshakeCoordinator::addTranscript(std::span<ControlMessage const> messages) {
    for (auto const& message : messages) {
        if (auto added = mTranscript.add(message, mCoreProtocol); !added) {
            return added;
        }
    }

    return {};
}

Expected<> HandshakeCoordinator::reservePackedHeaders(std::span<ControlMessage const> messages) {
    if (messages.empty()) return makeProtocolError(ProtocolErrc::InternalFailure, "empty packed control stream");
    if (messages.size() == 1) return {};

    auto const& first = handshake_detail::header(messages.front());

    auto headers = mSession->reserveOutboundHeaders(first.schema, messages.size() - 1);
    if (!headers) {
        return forwardError(headers.error());
    }

    for (std::size_t index = 1; index < messages.size(); ++index) {
        if ((*headers)[index - 1] != handshake_detail::header(messages[index])) {
            return makeProtocolError(ProtocolErrc::SequenceMismatch, "packed outbound sequence");
        }
    }

    return {};
}

Expected<std::vector<ControlMessage>> HandshakeCoordinator::makeLocalDeclaration() {
    auto const* definition = findCoreProtocolDefinition(mCoreProtocol);
    if (!definition || !mRegistry) return makeProtocolError(ProtocolErrc::InternalFailure, "missing registry snapshot");

    auto firstHeader = mSession->nextOutboundHeader(definition->controlSchema);
    if (!firstHeader) return forwardError(firstHeader.error());

    auto declaration = makeDeclaration(*mRegistry, mRole, *firstHeader);
    if (!declaration) return forwardError(declaration.error());

    auto chunks = packDeclaration(*declaration, mCoreProtocol, mLimits.maxControlBody);
    if (!chunks) return forwardError(chunks.error());

    if (mRole == EndpointRole::Server) mServerDeclaration = *declaration;
    else mClientDeclaration = *declaration;

    auto messages = handshake_detail::toMessages(std::move(*chunks));
    if (auto reserved = reservePackedHeaders(messages); !reserved) return forwardError(reserved.error());
    if (auto added = addTranscript(messages); !added) return forwardError(added.error());

    return messages;
}

Expected<std::vector<ControlMessage>> HandshakeCoordinator::makeNegotiationResult() {
    if (!mServerDeclaration || !mClientDeclaration) {
        return makeProtocolError(ProtocolErrc::InvalidState, "missing declarations");
    }

    auto plan = negotiate(*mServerDeclaration, *mClientDeclaration, mCoreProtocol, mLimits);
    if (!plan) return forwardError(plan.error());

    auto const* definition = findCoreProtocolDefinition(mCoreProtocol);

    auto firstHeader = mSession->nextOutboundHeader(definition->controlSchema);
    if (!firstHeader) return forwardError(firstHeader.error());

    NegotiationResultSource source{
        *firstHeader,
        mCoreProtocol,
        plan->serverRegistryRevision,
        plan->clientRegistryRevision,
        plan->moduleResults,
        plan->payloadResults,
        {},
    };
    auto chunks = packNegotiationResult(source, mCoreProtocol, mLimits.maxControlBody);
    if (!chunks) return forwardError(chunks.error());

    auto messages = handshake_detail::toMessages(std::move(*chunks));
    if (auto reserved = reservePackedHeaders(messages); !reserved) return forwardError(reserved.error());
    if (auto added = addTranscript(messages); !added) return forwardError(added.error());

    auto digest = mTranscript.finish();
    for (auto& message : messages) std::get<NegotiationResult>(message).transcriptDigest = digest;

    if (auto installed = mSession->installNegotiation(std::move(*plan), digest); !installed) {
        return forwardError(installed.error());
    }

    return messages;
}

Expected<HandshakeProgress> HandshakeCoordinator::startServer(CoreVersion selectedProtocol, Nonce serverNonce) {
    try {
        if (mRole != EndpointRole::Server || mStep != Step::Initial || !mSession || !mRegistry
            || !validTransportLimits(mLimits) || !findCoreProtocolDefinition(selectedProtocol)
            || !handshake_detail::validNonce(serverNonce)) {
            return fail(Error{makeProtocolError(ProtocolErrc::InvalidState, "invalid server handshake start")});
        }

        mCoreProtocol          = selectedProtocol;
        mServerNonce           = serverNonce;
        auto const* definition = findCoreProtocolDefinition(mCoreProtocol);

        auto header = mSession->nextOutboundHeader(definition->controlSchema);
        if (!header) return fail(std::move(header.error()));

        HandshakeProgress progress;
        progress.outbound.emplace_back(Hello{*header, mServerNonce, SupportedCoreProtocolVersions, mLimits, {}});
        if (auto added = addTranscript(progress.outbound); !added) return fail(std::move(added.error()));

        mDeclarationAssembler = DeclarationAssembler{mCoreProtocol, mLimits.maxControlBody};
        mResultAssembler      = NegotiationResultAssembler{mCoreProtocol, mLimits.maxControlBody};
        mStep                 = Step::HelloAck;
        return progress;
    } catch (...) {
        return fail(Error{makeExceptionError()});
    }
}

Expected<HandshakeProgress>
HandshakeCoordinator::acceptServerHello(Hello hello, Nonce clientNonce, std::size_t decodedBytes) {
    try {
        if (mRole != EndpointRole::Client || mStep != Step::Initial || !mSession || !mRegistry
            || !validTransportLimits(mLimits) || !handshake_detail::validNonce(clientNonce)) {
            return fail(Error{makeProtocolError(ProtocolErrc::InvalidState, "invalid client handshake start")});
        }

        auto selected = hello.coreProtocols.highestCommon(SupportedCoreProtocolVersions);
        if (!selected || !validTransportLimits(hello.limits)) {
            return fail(Error{makeProtocolError(ProtocolErrc::VersionIncompatible)});
        }

        mCoreProtocol         = *selected;
        mServerNonce          = hello.serverNonce;
        mClientNonce          = clientNonce;
        mLimits               = intersectTransportLimits(mLimits, hello.limits);
        mDeclarationAssembler = DeclarationAssembler{mCoreProtocol, mLimits.maxControlBody};
        mResultAssembler      = NegotiationResultAssembler{mCoreProtocol, mLimits.maxControlBody};

        ControlMessage initial{std::move(hello)};

        auto const& initialHeader = handshake_detail::header(initial);
        auto const* definition    = findCoreProtocolDefinition(mCoreProtocol);
        if (initialHeader.schema != definition->controlSchema) {
            return fail(Error{makeProtocolError(ProtocolErrc::InvalidControlSchema, "hello schema")});
        }

        if (auto valid = mSession->validateInboundControl(initialHeader, decodedBytes); !valid) {
            return fail(std::move(valid.error()));
        }
        if (auto added = mTranscript.add(initial, mCoreProtocol); !added) {
            return fail(std::move(added.error()));
        }
        if (auto transitioned = mSession->transition(SessionState::Handshaking, SessionState::Negotiating);
            !transitioned) {
            return fail(std::move(transitioned.error()));
        }

        auto header = mSession->nextOutboundHeader(definition->controlSchema);
        if (!header) return fail(std::move(header.error()));

        HandshakeProgress progress;
        progress.outbound.emplace_back(HelloAck{*header, mServerNonce, mClientNonce, mCoreProtocol, mLimits, {}});

        if (auto added = addTranscript(progress.outbound); !added) {
            return fail(std::move(added.error()));
        }

        mStep = Step::ServerDeclaration;
        return progress;
    } catch (...) {
        return fail(Error{makeExceptionError()});
    }
}

Expected<HandshakeProgress> HandshakeCoordinator::receive(ControlMessage message, std::size_t decodedBytes) {
    try {
        if (mStep == Step::Failed || mStep == Step::ProtocolReady || !mSession || mCoreProtocol == 0) {
            return fail(Error{makeProtocolError(ProtocolErrc::UnexpectedMessage)});
        }

        auto const& header = handshake_detail::header(message);
        if (auto valid = mSession->validateInboundControl(header, decodedBytes); !valid) {
            return fail(std::move(valid.error()));
        }
        if (std::holds_alternative<ProtocolErrorMessage>(message)) {
            return fail(Error{makeProtocolError(ProtocolErrc::UnexpectedMessage, "peer protocol error")});
        }

        HandshakeProgress progress;
        switch (mStep) {
        case Step::HelloAck: {
            auto* ack = std::get_if<HelloAck>(&message);
            if (!ack || mRole != EndpointRole::Server || ack->echoedServerNonce != mServerNonce
                || ack->selectedCoreProtocol != mCoreProtocol
                || !handshake_detail::limitsWithin(ack->acceptedLimits, mLimits) || !ack->features.empty()) {
                return fail(Error{makeProtocolError(ProtocolErrc::UnexpectedMessage, "invalid hello acknowledgement")});
            }

            mClientNonce          = ack->clientNonce;
            mLimits               = ack->acceptedLimits;
            mDeclarationAssembler = DeclarationAssembler{mCoreProtocol, mLimits.maxControlBody};
            mResultAssembler      = NegotiationResultAssembler{mCoreProtocol, mLimits.maxControlBody};

            if (auto added = mTranscript.add(message, mCoreProtocol); !added) {
                return fail(std::move(added.error()));
            }

            auto declaration = makeLocalDeclaration();
            if (!declaration) {
                return fail(std::move(declaration.error()));
            }

            progress.outbound = std::move(*declaration);

            if (auto transitioned = mSession->transition(SessionState::Handshaking, SessionState::Negotiating);
                !transitioned) {
                return fail(std::move(transitioned.error()));
            }

            mStep = Step::ClientDeclaration;
            return progress;
        }
        case Step::ServerDeclaration:
        case Step::ClientDeclaration: {
            auto* chunk = std::get_if<Declaration>(&message);

            auto expectedRole = mStep == Step::ServerDeclaration ? EndpointRole::Server : EndpointRole::Client;
            if (!chunk || chunk->senderRole != expectedRole || expectedRole == mRole) {
                return fail(Error{makeProtocolError(ProtocolErrc::UnexpectedMessage, "unexpected declaration")});
            }

            if (auto added = mTranscript.add(message, mCoreProtocol); !added) {
                return fail(std::move(added.error()));
            }
            auto const finalChunk = chunk->chunkIndex + 1 == chunk->chunkCount;

            if (auto pushed = mDeclarationAssembler.push(std::move(*chunk)); !pushed) {
                return fail(std::move(pushed.error()));
            }

            if (!finalChunk) return progress;

            auto declaration = mDeclarationAssembler.finish();
            if (!declaration) return fail(std::move(declaration.error()));
            if (expectedRole == EndpointRole::Server) mServerDeclaration = std::move(*declaration);
            else mClientDeclaration = std::move(*declaration);

            if (mRole == EndpointRole::Client) {
                auto local = makeLocalDeclaration();
                if (!local) return fail(std::move(local.error()));

                progress.outbound = std::move(*local);
                mStep             = Step::NegotiationResult;
            } else {
                auto result = makeNegotiationResult();
                if (!result) return fail(std::move(result.error()));

                progress.outbound = std::move(*result);
                mStep             = Step::ClientReady;
            }

            return progress;
        }
        case Step::NegotiationResult: {
            auto* chunk = std::get_if<NegotiationResult>(&message);
            if (!chunk || mRole != EndpointRole::Client) {
                return fail(Error{makeProtocolError(ProtocolErrc::UnexpectedMessage, "unexpected negotiation result")});
            }

            if (auto added = mTranscript.add(message, mCoreProtocol); !added) return fail(std::move(added.error()));

            auto const finalChunk = chunk->chunkIndex + 1 == chunk->chunkCount;
            if (auto pushed = mResultAssembler.push(std::move(*chunk)); !pushed) {
                return fail(std::move(pushed.error()));
            }

            if (!finalChunk) return progress;

            auto received = mResultAssembler.finish();
            if (!received) return fail(std::move(received.error()));
            if (!mServerDeclaration || !mClientDeclaration) {
                return fail(Error{makeProtocolError(ProtocolErrc::InvalidState, "missing client declarations")});
            }

            auto expected = negotiate(*mServerDeclaration, *mClientDeclaration, mCoreProtocol, mLimits);
            if (!expected) return fail(std::move(expected.error()));
            if (auto valid = validateNegotiationResult(*expected, *received); !valid) {
                return fail(std::move(valid.error()));
            }

            auto digest = mTranscript.finish();
            if (received->transcriptDigest != digest) {
                return fail(Error{makeProtocolError(ProtocolErrc::DigestMismatch)});
            }
            if (auto installed = mSession->installNegotiation(std::move(*expected), digest); !installed) {
                return fail(std::move(installed.error()));
            }

            auto const* definition = findCoreProtocolDefinition(mCoreProtocol);

            auto readyHeader = mSession->nextOutboundHeader(definition->controlSchema);
            if (!readyHeader) {
                return fail(std::move(readyHeader.error()));
            }

            progress.outbound.emplace_back(Ready{*readyHeader, EndpointRole::Client, digest});

            mStep = Step::ServerReady;
            return progress;
        }
        case Step::ClientReady:
        case Step::ServerReady: {
            auto* ready = std::get_if<Ready>(&message);

            auto expectedRole = mStep == Step::ClientReady ? EndpointRole::Client : EndpointRole::Server;
            if (!ready || ready->senderRole != expectedRole || expectedRole == mRole) {
                return fail(Error{makeProtocolError(ProtocolErrc::UnexpectedMessage, "unexpected ready")});
            }
            if (auto accepted = mSession->acceptPeerReady(ready->transcriptDigest); !accepted) {
                return fail(std::move(accepted.error()));
            }

            if (mRole == EndpointRole::Server) {
                auto const* definition = findCoreProtocolDefinition(mCoreProtocol);

                auto readyHeader = mSession->nextOutboundHeader(definition->controlSchema);
                if (!readyHeader) {
                    return fail(std::move(readyHeader.error()));
                }

                progress.outbound.emplace_back(Ready{*readyHeader, EndpointRole::Server, ready->transcriptDigest});
            }

            progress.protocolReady = true;

            mStep = Step::ProtocolReady;
            return progress;
        }
        default:
            return fail(Error{handshake_detail::unexpected("unexpected handshake step")});
        }
    } catch (...) {
        return fail(Error{makeExceptionError()});
    }
}

} // namespace ll::protocol::detail
