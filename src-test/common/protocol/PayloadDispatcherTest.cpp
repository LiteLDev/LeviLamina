#include "gtest/gtest.h"

#include <memory>
#include <string>

#include "ll/api/mod/Mod.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/PayloadDispatcher.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolSession.h"

namespace ll::protocol::test {

namespace {

class DispatcherTestMod final : public mod::Mod {
public:
    DispatcherTestMod(std::string name, std::string protocolNamespace)
    : Mod(mod::Manifest{
          .entry             = "dispatcher-test.dll",
          .name              = std::move(name),
          .type              = "native",
          .protocolNamespace = std::move(protocolNamespace),
      }) {}

    void enable() { setState(State::Enabled); }
};

struct InboundPayload {
    std::uint32_t value{};
};

struct HandlerlessPayload {
    std::uint32_t value{};
};

template <class T>
struct U32Codec {
    Expected<> encode(Encoder& out, T const& value, SchemaVersion schema) const {
        if (schema != 1) return makeCodecError(CodecErrc::UnsupportedSchema);
        return out.writeU32(value.value);
    }

    Expected<T> decode(Decoder& in, SchemaVersion schema) const {
        if (schema != 1) return makeCodecError(CodecErrc::UnsupportedSchema);
        auto value = in.readU32();
        if (!value) return forwardError(value.error());
        return T{*value};
    }
};

class DispatcherTransport final : public detail::SessionTransport {
public:
    [[nodiscard]] bool isOnEndpointThread() const noexcept override { return true; }
    Expected<>         send(std::unique_ptr<detail::ProtocolEnvelopePacket>) override { return {}; }
};

detail::TransportLimits dispatcherLimits() {
    return {
        Limits::MaxControlBody,
        Limits::DefaultPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        Limits::DefaultBurstPackets,
        Limits::DefaultBurstBytes,
    };
}

std::shared_ptr<detail::ProtocolSession> makeActiveSession(
    EndpointRole                                           role,
    std::shared_ptr<detail::RegistrySnapshot const> const& snapshot,
    PayloadDescriptor const&                               descriptor
) {
    auto session = std::make_shared<detail::ProtocolSession>(
        detail::SessionIdentity{
            {41, role, "dispatcher-peer", 0, 1},
            91
    },
        snapshot,
        std::make_shared<DispatcherTransport>(),
        dispatcherLimits()
    );
    EXPECT_TRUE(session->transition(SessionState::Handshaking, SessionState::Negotiating));

    detail::NegotiationPlan plan{
        .coreProtocol           = 1,
        .serverRegistryRevision = role == EndpointRole::Server ? snapshot->revision : 1,
        .clientRegistryRevision = role == EndpointRole::Client ? snapshot->revision : 1,
        .limits                 = dispatcherLimits(),
        .payloads               = {{
            descriptor.id(),
            descriptor.runtimeId(),
            descriptor.definition().direction,
            1,
            descriptor.definition().maxEncodedSize,
        }},
    };
    detail::TranscriptDigest digest{};
    digest.front() = std::byte{1};
    EXPECT_TRUE(session->installNegotiation(std::move(plan), digest));
    EXPECT_TRUE(session->acceptPeerReady(digest));
    EXPECT_TRUE(session->activate());
    return session;
}

Expected<std::unique_ptr<detail::ProtocolEnvelopePacket>>
packet(PayloadDescriptor const& descriptor, SchemaVersion schema = 1) {
    Encoder body{descriptor.definition().maxEncodedSize};
    if (auto written = body.writeU32(42); !written) return forwardError(written.error());
    return detail::ProtocolEnvelopePacket::create(
        descriptor.runtimeId(),
        1,
        schema,
        body.takeBuffer(),
        SubClientId::PrimaryClient,
        descriptor.definition().maxEncodedSize
    );
}

SessionErrc sessionCode(Error& error) {
    EXPECT_TRUE(error.isA<SessionErrorInfo>());
    return error.as<SessionErrorInfo>().code;
}

ProtocolErrc protocolCode(Error& error) {
    EXPECT_TRUE(error.isA<ProtocolErrorInfo>());
    return error.as<ProtocolErrorInfo>().code;
}

} // namespace

TEST(ProtocolPayloadDispatcherTest, GatesHandlerByStateDirectionSchemasAndGeneration) {
    auto owner = std::make_shared<DispatcherTestMod>("ProtocolDispatcher", "dispatcher_gate");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(
        ModuleDefinition{
            .name             = *ModuleName::parse("main"),
            .version          = {1, 0, 0},
            .protocolVersions = {1, 1},
    },
        owner
    );
    ASSERT_TRUE(module);

    std::size_t handled{};
    auto        registration = registry.registerPayload<InboundPayload>(
        *module,
        PayloadDefinition{
            .name           = *PayloadName::parse("message"),
            .direction      = PayloadDirection::ClientToServer,
            .schemas        = {1},
            .maxEncodedSize = 64,
        },
        U32Codec<InboundPayload>{},
        [&handled](PayloadContext const&, InboundPayload&& value) -> Expected<> {
            EXPECT_EQ(value.value, 42);
            ++handled;
            return {};
        }
    );
    ASSERT_TRUE(registration);

    auto snapshot   = detail::PayloadRegistryAccess::snapshot(registry);
    auto descriptor = registry.findPayload(registration->id());
    ASSERT_NE(descriptor, nullptr);

    auto activeServer = makeActiveSession(EndpointRole::Server, snapshot, *descriptor);

    auto unrelatedOwner = std::make_shared<DispatcherTestMod>("ProtocolDispatcherUnrelated", "dispatcher_unrelated");
    unrelatedOwner->enable();
    auto unrelatedModule = registry.registerModule(
        ModuleDefinition{
            .name             = *ModuleName::parse("main"),
            .version          = {1, 0, 0},
            .protocolVersions = {1, 1},
    },
        unrelatedOwner
    );
    ASSERT_TRUE(unrelatedModule);

    auto validPacket = packet(*descriptor);
    ASSERT_TRUE(validPacket);
    ASSERT_TRUE(detail::PayloadDispatcher{}.dispatch(activeServer, **validPacket));
    EXPECT_EQ(handled, 1);

    auto wrongPayloadSchema = packet(*descriptor, 2);
    ASSERT_TRUE(wrongPayloadSchema);
    auto schemaFailure = detail::PayloadDispatcher{}.dispatch(activeServer, **wrongPayloadSchema);
    ASSERT_FALSE(schemaFailure);
    EXPECT_EQ(protocolCode(schemaFailure.error()), ProtocolErrc::InvalidSchema);
    EXPECT_EQ(handled, 1);

    auto const* core = detail::findCoreProtocolDefinition(1);
    ASSERT_NE(core, nullptr);
    auto envelopeFailure = activeServer->validateInbound(
        descriptor->runtimeId(),
        static_cast<std::uint8_t>(core->payloadEnvelopeSchema + 1),
        1,
        sizeof(std::uint32_t)
    );
    ASSERT_FALSE(envelopeFailure);
    EXPECT_EQ(protocolCode(envelopeFailure.error()), ProtocolErrc::InvalidSchema);

    auto wrongDirection   = makeActiveSession(EndpointRole::Client, snapshot, *descriptor);
    auto directionFailure = detail::PayloadDispatcher{}.dispatch(wrongDirection, **validPacket);
    ASSERT_FALSE(directionFailure);
    EXPECT_EQ(sessionCode(directionFailure.error()), SessionErrc::WrongDirection);

    auto inactive = std::make_shared<detail::ProtocolSession>(
        detail::SessionIdentity{
            {42, EndpointRole::Server, "inactive-peer", 0, 1},
            92
    },
        snapshot,
        std::make_shared<DispatcherTransport>(),
        dispatcherLimits()
    );
    auto stateFailure = detail::PayloadDispatcher{}.dispatch(inactive, **validPacket);
    ASSERT_FALSE(stateFailure);
    EXPECT_EQ(sessionCode(stateFailure.error()), SessionErrc::WrongState);

    ASSERT_TRUE(registration->reset());
    auto generationFailure = detail::PayloadDispatcher{}.dispatch(activeServer, **validPacket);
    ASSERT_FALSE(generationFailure);
    EXPECT_EQ(sessionCode(generationFailure.error()), SessionErrc::RegistryChanged);
    EXPECT_EQ(handled, 1);
    EXPECT_TRUE(unrelatedModule->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolPayloadDispatcherTest, RejectsNegotiatedPayloadWithoutLocalHandler) {
    auto owner = std::make_shared<DispatcherTestMod>("ProtocolDispatcherHandlerless", "dispatcher_handlerless");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(
        ModuleDefinition{
            .name             = *ModuleName::parse("main"),
            .version          = {1, 0, 0},
            .protocolVersions = {1, 1},
    },
        owner
    );
    ASSERT_TRUE(module);

    auto registration = registry.registerPayload<HandlerlessPayload>(
        *module,
        PayloadDefinition{
            .name = *PayloadName::parse("message"),
#if defined(LL_PLAT_C)
            .direction = PayloadDirection::ServerToClient,
#else
            .direction = PayloadDirection::ClientToServer,
#endif
            .schemas        = {1},
            .maxEncodedSize = 64,
        },
        U32Codec<HandlerlessPayload>{}
    );
    ASSERT_FALSE(registration);
    ASSERT_TRUE(registration.error().isA<RegistrationErrorInfo>());
    EXPECT_EQ(registration.error().as<RegistrationErrorInfo>().code, RegistrationErrc::InvalidDirection);
    EXPECT_TRUE(module->reset());
}

} // namespace ll::protocol::test
