#include "gtest/gtest.h"

#include "ll/core/protocol/ControlCodec.h"
#include "ll/core/protocol/Transcript.h"

#include <string_view>

namespace ll::protocol::test {

detail::ControlHeader header(std::uint32_t sequence = 1) { return {1, 0x123456789ABCDEF0ULL, sequence}; }

detail::Nonce nonce(std::byte first) {
    detail::Nonce result{};
    result[0] = first;
    return result;
}

detail::TransportLimits transportLimits() {
    return {
        .maxControlBody   = Limits::MaxControlBody,
        .maxPayloadBody   = Limits::DefaultPayloadBody,
        .packetsPerSecond = Limits::DefaultPacketsPerSecond,
        .bytesPerSecond   = Limits::DefaultBytesPerSecond,
        .burstPackets     = Limits::DefaultBurstPackets,
        .burstBytes       = Limits::DefaultBurstBytes,
    };
}

FeatureName featureName(std::string_view value) { return *FeatureName::parse(value); }
ModuleId    moduleId(std::string_view value) { return *ModuleId::parse(value); }
PayloadId   payloadId(std::string_view value) { return *PayloadId::parse(value); }

detail::ModuleDeclaration module(std::string_view value) {
    return {
        moduleId(value),
        {1, 2, 3},
        {1, 2},
        ModuleRequirement::Optional,
        {{featureName("delta"), {1, 3}, false}},
    };
}

detail::PayloadDeclaration payload(std::string_view value, std::uint64_t runtimeId) {
    return {
        payloadId(value),
        runtimeId,
        PayloadDirection::ServerToClient,
        PayloadRequirement::Optional,
        {1, 2},
        4096
    };
}

template <class T>
void expectRoundTrip(T message, std::uint64_t runtimeId) {
    detail::ControlMessage source{std::move(message)};
    auto                   encoded = detail::encodeControl(source, 1);

    ASSERT_TRUE(encoded) << encoded.error().message();
    auto decoded =
        detail::decodeControl(runtimeId, {reinterpret_cast<std::byte const*>(encoded->data()), encoded->size()}, 1);

    ASSERT_TRUE(decoded) << decoded.error().message();
    EXPECT_EQ(*decoded, source);
}

TEST(ProtocolControlCodecTest, RoundTripsEveryControlMessage) {
    expectRoundTrip(
        detail::Hello{
            header(),
            nonce(std::byte{1}
            ),
            {1, 1},
            transportLimits(),
            {{featureName("core.delta"), {1, 2}, true}}
    },
        detail::HelloRuntimeId
    );
    expectRoundTrip(
        detail::HelloAck{
            header(),
            nonce(std::byte{1}),
            nonce(std::byte{2}),
            1,
            transportLimits(),
            {{featureName("core.delta"), 2}}
        },
        detail::HelloAckRuntimeId
    );
    expectRoundTrip(
        detail::Declaration{
            header(2),
            EndpointRole::Server,
            7,
            0,
            1,
            1,
            1,
            {module("example:world")},
            {payload("example:world/state", 42)}
        },
        detail::DeclarationRuntimeId
    );
    detail::TranscriptDigest digest{};
    digest[0] = std::byte{0x42};
    expectRoundTrip(
        detail::NegotiationResult{
            header(3),
            1,
            7,
            8,
            0,
            1,
            1,
            1,
            {{moduleId("example:world"),
              detail::NegotiationStatus::Enabled,
              2,
              detail::WireErrorCode::None,
              {{featureName("delta"), 2}}}},
            {{payloadId("example:world/state"),
              42,
              PayloadDirection::ServerToClient,
              detail::NegotiationStatus::Enabled,
              detail::WireErrorCode::None,
              2,
              4096}},
            digest
        },
        detail::NegotiationResultRuntimeId
    );
    expectRoundTrip(detail::Ready{header(4), EndpointRole::Client, digest}, detail::ReadyRuntimeId);
    expectRoundTrip(
        detail::ProtocolErrorMessage{header(4), detail::WireErrorCode::InvalidState, true, 3, "bad state"},
        detail::ProtocolErrorRuntimeId
    );
}

TEST(ProtocolControlCodecTest, PacksAndReassemblesDeclarationDeterministically) {
    detail::DeclarationSource source{header(2), EndpointRole::Server, 9, {}, {}};
    for (int index = 0; index < 6; ++index) {
        source.modules.emplace_back(module("example:module" + std::to_string(index)));
        source.payloads.emplace_back(payload("example:module" + std::to_string(index) + "/state", 100 + index));
    }
    auto chunks = detail::packDeclaration(std::move(source), 1, 180);
    ASSERT_TRUE(chunks) << chunks.error().message();
    ASSERT_GT(chunks->size(), 1U);

    for (auto const& chunk : *chunks) {
        auto encoded = detail::encodeControl(detail::ControlMessage{chunk}, 1, true, 180);
        EXPECT_TRUE(encoded);
        EXPECT_LE(encoded->size(), 180U);
    }

    detail::DeclarationAssembler assembler;
    for (auto& chunk : *chunks) ASSERT_TRUE(assembler.push(std::move(chunk)));
    auto complete = assembler.finish();
    ASSERT_TRUE(complete) << complete.error().message();
    EXPECT_EQ(complete->modules.size(), 6U);
    EXPECT_EQ(complete->payloads.size(), 6U);
}

TEST(ProtocolControlCodecTest, PacksAndReassemblesNegotiationResult) {
    detail::TranscriptDigest digest{};
    digest[3] = std::byte{0x77};
    detail::NegotiationResultSource source{header(5), 1, 10, 11, {}, {}, digest};
    for (int index = 0; index < 6; ++index) {
        auto moduleValue = "example:module" + std::to_string(index);
        source.modules.push_back(
            {moduleId(moduleValue), detail::NegotiationStatus::Enabled, 1, detail::WireErrorCode::None, {}}
        );
        source.payloads.push_back(
            {payloadId(moduleValue + "/state"),
             static_cast<std::uint64_t>(200 + index),
             PayloadDirection::ServerToClient,
             detail::NegotiationStatus::Enabled,
             detail::WireErrorCode::None,
             1,
             1024}
        );
    }
    auto chunks = detail::packNegotiationResult(std::move(source), 1, 190);
    ASSERT_TRUE(chunks) << chunks.error().message();
    ASSERT_GT(chunks->size(), 1U);

    detail::NegotiationResultAssembler assembler;
    for (auto& chunk : *chunks) ASSERT_TRUE(assembler.push(std::move(chunk)));
    auto complete = assembler.finish();
    ASSERT_TRUE(complete) << complete.error().message();
    EXPECT_EQ(complete->modules.size(), 6U);
    EXPECT_EQ(complete->payloads.size(), 6U);
    EXPECT_EQ(complete->transcriptDigest, digest);
}

TEST(ProtocolControlCodecTest, RejectsMissingReorderedAndTrailingControlData) {
    detail::DeclarationAssembler missing;
    auto chunk = detail::Declaration{header(2), EndpointRole::Server, 1, 0, 2, 1, 0, {module("example:world")}, {}};
    ASSERT_TRUE(missing.push(std::move(chunk)));
    EXPECT_FALSE(missing.finish());

    detail::DeclarationAssembler reordered;
    auto                         wrong = detail::Declaration{header(2), EndpointRole::Server, 1, 1, 2, 0, 0, {}, {}};
    EXPECT_FALSE(reordered.push(std::move(wrong)));

    detail::DeclarationAssembler noncanonical;
    ASSERT_TRUE(noncanonical.push(
        detail::Declaration{header(2), EndpointRole::Server, 1, 0, 2, 1, 1, {}, {payload("example:world/state", 42)}}
    ));
    EXPECT_FALSE(noncanonical.push(
        detail::Declaration{header(3), EndpointRole::Server, 1, 1, 2, 1, 1, {module("example:world")}, {}}
    ));

    detail::Ready ready{header(), EndpointRole::Server, {}};
    auto          encoded = detail::encodeControl(detail::ControlMessage{ready}, 1);
    ASSERT_TRUE(encoded);
    encoded->push_back('\0');
    EXPECT_FALSE(
        detail::decodeControl(
            detail::ReadyRuntimeId,
            {reinterpret_cast<std::byte const*>(encoded->data()), encoded->size()},
            1
        )
    );
}

TEST(ProtocolTranscriptTest, IsDeterministicAndSensitiveToChunkBytes) {
    detail::Hello hello{
        header(),
        nonce(std::byte{1}
        ),
        {1, 1},
        transportLimits(),
        {}
    };
    detail::Transcript first;
    detail::Transcript second;
    ASSERT_TRUE(first.add(detail::ControlMessage{hello}, 1));
    ASSERT_TRUE(second.add(detail::ControlMessage{hello}, 1));
    EXPECT_EQ(first.finish(), second.finish());

    hello.header.messageSequence = 2;
    detail::Transcript changed;
    ASSERT_TRUE(changed.add(detail::ControlMessage{hello}, 1));
    EXPECT_NE(first.finish(), changed.finish());

    detail::Transcript excludesRuntimeMessages;
    EXPECT_FALSE(excludesRuntimeMessages.add(
        detail::ControlMessage{
            detail::Ready{header(), EndpointRole::Server, {}}
    },
        1
    ));
}

TEST(ProtocolTranscriptTest, OmitsOnlyNegotiationDigest) {
    detail::NegotiationResult result{header(), 1, 1, 2, 0, 1, 0, 0, {}, {}, {}};
    detail::Transcript        first;
    ASSERT_TRUE(first.add(detail::ControlMessage{result}, 1));
    result.transcriptDigest[0] = std::byte{0xFF};
    detail::Transcript second;
    ASSERT_TRUE(second.add(detail::ControlMessage{result}, 1));
    EXPECT_EQ(first.finish(), second.finish());
}

} // namespace ll::protocol::test
