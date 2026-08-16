#include "gtest/gtest.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <utility>

#include "ll/api/network/packet/PacketRegistrar.h"
#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlPackets.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolRuntime.h"
#include "ll/core/protocol/RuntimeIdentity.h"
#include "ll/core/protocol/RuntimePacketAdapter.h"

#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

namespace ll::protocol::test {

namespace {

std::string serialize(network::Packet const& packet) {
    BinaryStream stream;
    packet.write(stream);
    return stream.getAndReleaseData();
}

Bedrock::Result<void> deserialize(network::Packet& packet, std::string bytes) {
    ReadOnlyBinaryStream stream{std::move(bytes)};
    return packet.read(stream);
}

detail::Hello hello() {
    detail::Nonce nonce{};
    nonce.front() = std::byte{0x42};
    return {
        .header        = {.schema = 1, .handshakeId = 7, .messageSequence = 1},
        .serverNonce   = nonce,
        .coreProtocols = {1, 1},
        .limits =
            {
                          .maxControlBody   = Limits::MaxControlBody,
                          .maxPayloadBody   = Limits::DefaultPayloadBody,
                          .packetsPerSecond = Limits::DefaultPacketsPerSecond,
                          .bytesPerSecond   = Limits::DefaultBytesPerSecond,
                          .burstPackets     = Limits::DefaultBurstPackets,
                          .burstBytes       = Limits::DefaultBurstBytes,
                          },
        .features = {},
    };
}

RegistrationErrc registrationCode(Error& error) {
    EXPECT_TRUE(error.isA<RegistrationErrorInfo>());
    return error.as<RegistrationErrorInfo>().code;
}

} // namespace

TEST(ProtocolRuntimePacketTransportTest, WritesExactApplicationEnvelopeBytes) {
    std::string body{"\xAA\xBB", 2};
    auto        packet = detail::ProtocolEnvelopePacket::create(0x1122334455667788ULL, 1, 0x1234, std::move(body));
    ASSERT_TRUE(packet) << packet.error().message();

    auto             encoded = serialize(**packet);
    std::array const expected{
        '\x01',
        '\x34',
        '\x12',
        '\x02',
        '\x00',
        '\x00',
        '\x00',
        static_cast<char>(0xAA),
        static_cast<char>(0xBB),
    };
    EXPECT_EQ(encoded, std::string(expected.data(), expected.size()));
}

TEST(ProtocolRuntimePacketTransportTest, RoundTripsBoundedApplicationEnvelope) {
    auto outbound = detail::ProtocolEnvelopePacket::create(
        0x8877665544332211ULL,
        1,
        3,
        std::string{"payload"},
        SubClientId::Client3,
        64
    );
    ASSERT_TRUE(outbound) << outbound.error().message();

    detail::ProtocolEnvelopePacket inbound{0x8877665544332211ULL, 64};
    ASSERT_TRUE(deserialize(inbound, serialize(**outbound)));
    EXPECT_EQ(inbound.envelopeSchema(), 1);
    EXPECT_EQ(inbound.payloadSchema(), 3);
    EXPECT_EQ(std::string_view(reinterpret_cast<char const*>(inbound.body().data()), inbound.body().size()), "payload");
}

TEST(ProtocolRuntimePacketTransportTest, RejectsInvalidSchemaLengthAndTrailingBytesBeforeBodyUse) {
    detail::ProtocolEnvelopePacket packet{1, 4};

    EXPECT_FALSE(deserialize(packet, std::string{"\x02\x01\x00\x00\x00\x00\x00", 7}));
    EXPECT_FALSE(deserialize(packet, std::string{"\x01\x00\x00\x00\x00\x00\x00", 7}));
    EXPECT_FALSE(deserialize(packet, std::string{"\x01\x01\x00\x05\x00\x00\x00", 7}));
    EXPECT_FALSE(deserialize(packet, std::string{"\x01\x01\x00\x01\x00\x00\x00xy", 9}));
}

TEST(ProtocolRuntimePacketTransportTest, EnforcesPermanentPayloadSlotCap) {
    auto outbound = detail::ProtocolEnvelopePacket::create(1, 1, 1, std::string{"ab"}, SubClientId::PrimaryClient, 2);
    ASSERT_TRUE(outbound);

    detail::ProtocolEnvelopePacket inbound{1, 1};
    EXPECT_FALSE(deserialize(inbound, serialize(**outbound)));
}

TEST(ProtocolRuntimePacketTransportTest, RejectsInvalidOutboundApplicationEnvelope) {
    auto invalidSchema = detail::ProtocolEnvelopePacket::create(1, 1, 0, std::string{});
    ASSERT_FALSE(invalidSchema);
    ASSERT_TRUE(invalidSchema.error().isA<CodecErrorInfo>());
    EXPECT_EQ(invalidSchema.error().as<CodecErrorInfo>().code, CodecErrc::InvalidValue);

    auto oversized = detail::ProtocolEnvelopePacket::create(1, 1, 1, std::string{"ab"}, SubClientId::PrimaryClient, 1);
    ASSERT_FALSE(oversized);
    ASSERT_TRUE(oversized.error().isA<CodecErrorInfo>());
    EXPECT_EQ(oversized.error().as<CodecErrorInfo>().code, CodecErrc::SizeLimitExceeded);
}

TEST(ProtocolRuntimePacketTransportTest, ControlPacketCarriesOnlyCanonicalControlBody) {
    detail::ControlMessage source{hello()};
    auto                   packet = detail::ControlPacket::create(source, 1, SubClientId::Client2);
    ASSERT_TRUE(packet) << packet.error().message();
    EXPECT_EQ((*packet)->getRuntimeId(), detail::HelloRuntimeId);

    detail::ControlPacket inbound{detail::HelloRuntimeId};
    ASSERT_TRUE(deserialize(inbound, serialize(**packet)));
    auto decoded = inbound.decode(1);
    ASSERT_TRUE(decoded) << decoded.error().message();
    EXPECT_EQ(*decoded, source);
}

TEST(ProtocolRuntimePacketTransportTest, ControlPacketRejectsBodyAboveItsReadCap) {
    detail::ControlPacket packet{detail::HelloRuntimeId, 4};
    EXPECT_FALSE(deserialize(packet, std::string(5, '\0')));
}

TEST(ProtocolRuntimePacketTransportTest, OwnedRuntimePacketPreservesLogicalPacketLifetimeAndMetadata) {
    auto logical =
        detail::ProtocolEnvelopePacket::create(0x1020304050607080ULL, 1, 1, std::string{"owned"}, SubClientId::Client2);
    ASSERT_TRUE(logical);

    network::RuntimePacket runtime{std::move(*logical)};
    EXPECT_TRUE(runtime.isOwned());
    EXPECT_TRUE(runtime.hasPacket());
    EXPECT_EQ(runtime.getRuntimeId(), 0x1020304050607080ULL);
    EXPECT_EQ(runtime.mSenderSubId, SubClientId::Client2);
    EXPECT_EQ(runtime.getPacket()->mSenderSubId, SubClientId::Client2);

    runtime.mSenderSubId                   = SubClientId::Client4;
    runtime.getOwnedPacket()->mSenderSubId = runtime.mSenderSubId;
    EXPECT_EQ(runtime.getPacket()->mSenderSubId, SubClientId::Client4);
}

TEST(ProtocolRuntimePacketTransportTest, RegistersPermanentControlAndPayloadSlots) {
    auto& runtime = detail::ProtocolRuntime::getInstance();
    ASSERT_TRUE(runtime.initialize());
    EXPECT_TRUE(runtime.initialized());

    auto& registrar = network::PacketRegistrar::getInstance();
    for (auto runtimeId : {
             detail::HelloRuntimeId,
             detail::HelloAckRuntimeId,
             detail::DeclarationRuntimeId,
             detail::NegotiationResultRuntimeId,
             detail::ReadyRuntimeId,
             detail::ProtocolErrorRuntimeId,
         }) {
        EXPECT_NE(registrar.createPacket(runtimeId), nullptr);
        EXPECT_TRUE(registrar.getHandler(runtimeId));
    }

    auto id        = *PayloadId::parse("transport_test:main/message");
    auto runtimeId = detail::payloadRuntimeId(id);
    ASSERT_TRUE(runtime.installPayloadSlot(id, runtimeId));
    ASSERT_TRUE(runtime.installPayloadSlot(id, runtimeId));
    EXPECT_TRUE(runtime.adapter().hasPayloadSlot(id, runtimeId));

    auto packet = registrar.createPacket(runtimeId);
    ASSERT_NE(packet, nullptr);
    EXPECT_EQ(packet->getRuntimeId(), runtimeId);
    EXPECT_EQ(packet->getName(), "LeviLaminaProtocolEnvelopePacket");
    EXPECT_TRUE(registrar.getHandler(runtimeId));

    auto collision = runtime.installPayloadSlot(*PayloadId::parse("transport_test:main/other"), runtimeId);
    ASSERT_FALSE(collision);
    EXPECT_EQ(registrationCode(collision.error()), RegistrationErrc::RuntimeIdCollision);

    EXPECT_EQ(registrar.createPacket(0xD4E3C2B1A0908070ULL), nullptr);
}

} // namespace ll::protocol::test
