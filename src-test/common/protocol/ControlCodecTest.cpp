#include "gtest/gtest.h"

#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/ControlCodec.h"
#include "ll/core/protocol/Transcript.h"

#include <limits>
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

void expectEveryTruncationAndTrailingByteRejected(detail::ControlMessage const& message) {
    auto encoded = detail::encodeControl(message, 1);
    ASSERT_TRUE(encoded) << encoded.error().message();

    auto const runtimeId = detail::controlRuntimeId(message);
    for (std::size_t size = 0; size < encoded->size(); ++size) {
        auto body = std::span<std::byte const>{reinterpret_cast<std::byte const*>(encoded->data()), size};
        EXPECT_FALSE(detail::decodeControl(runtimeId, body, 1)) << "accepted prefix of " << size << " bytes";
    }

    encoded->push_back('\0');
    auto body = std::span<std::byte const>{reinterpret_cast<std::byte const*>(encoded->data()), encoded->size()};
    EXPECT_FALSE(detail::decodeControl(runtimeId, body, 1));
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

TEST(ProtocolControlCodecTest, RejectsEveryTruncationAndTrailingByteForVariableAndFixedMessages) {
    expectEveryTruncationAndTrailingByteRejected(
        detail::ControlMessage{detail::Hello{
            header(),
            nonce(std::byte{1}),
            {1, 1},
            transportLimits(),
            {{featureName("core.delta"), {1, 2}, true}},
        }}
    );

    detail::TranscriptDigest digest{};
    digest.front() = std::byte{0x42};
    expectEveryTruncationAndTrailingByteRejected(
        detail::ControlMessage{detail::Ready{header(4), EndpointRole::Client, digest}}
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

    detail::DeclarationAssembler assembler{1, 180};
    for (auto& chunk : *chunks) ASSERT_TRUE(assembler.push(std::move(chunk)));
    auto complete = assembler.finish();
    ASSERT_TRUE(complete) << complete.error().message();
    EXPECT_EQ(complete->modules.size(), 6U);
    EXPECT_EQ(complete->payloads.size(), 6U);
}

TEST(ProtocolControlCodecTest, PacksTheLongestPrefixAtExactBodyBoundary) {
    auto firstModule  = module("example:one");
    auto secondModule = module("example:two");

    detail::Declaration oneEntry{header(2), EndpointRole::Server, 9, 0, 2, 2, 0, {firstModule}, {}};
    auto                oneEntryBody = detail::encodeControl(detail::ControlMessage{oneEntry}, 1);
    ASSERT_TRUE(oneEntryBody) << oneEntryBody.error().message();

    detail::Declaration twoEntries{
        header(2),
        EndpointRole::Server,
        9,
        0,
        2,
        2,
        0,
        {firstModule, secondModule},
        {}
    };
    auto twoEntryBody = detail::encodeControl(detail::ControlMessage{twoEntries}, 1);
    ASSERT_TRUE(twoEntryBody) << twoEntryBody.error().message();
    ASSERT_GT(twoEntryBody->size(), oneEntryBody->size());

    detail::DeclarationSource source{
        header(2),
        EndpointRole::Server,
        9,
        {std::move(firstModule), std::move(secondModule)},
        {}
    };
    auto chunks = detail::packDeclaration(std::move(source), 1, oneEntryBody->size());
    ASSERT_TRUE(chunks) << chunks.error().message();
    ASSERT_EQ(chunks->size(), 2U);
    ASSERT_EQ((*chunks)[0].modules.size(), 1U);
    ASSERT_EQ((*chunks)[1].modules.size(), 1U);

    auto firstChunkBody = detail::encodeControl(detail::ControlMessage{(*chunks)[0]}, 1, true, oneEntryBody->size());
    ASSERT_TRUE(firstChunkBody) << firstChunkBody.error().message();
    EXPECT_EQ(firstChunkBody->size(), oneEntryBody->size());
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

    detail::NegotiationResultAssembler assembler{1, 190};
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

TEST(ProtocolControlCodecTest, RejectsNonCanonicalUnderfilledChunks) {
    detail::DeclarationAssembler assembler;
    ASSERT_TRUE(
        assembler.push(detail::Declaration{header(2), EndpointRole::Server, 1, 0, 2, 2, 0, {module("example:one")}, {}})
    );
    ASSERT_TRUE(
        assembler.push(detail::Declaration{header(3), EndpointRole::Server, 1, 1, 2, 2, 0, {module("example:two")}, {}})
    );
    EXPECT_FALSE(assembler.finish());
}

TEST(ProtocolControlCodecTest, RejectsCumulativeChunkTotalsBeforeRetention) {
    detail::DeclarationAssembler declaration;
    ASSERT_TRUE(declaration.push(
        detail::Declaration{header(2), EndpointRole::Server, 1, 0, 2, 1, 0, {module("example:one")}, {}}
    ));
    EXPECT_FALSE(declaration.push(
        detail::Declaration{header(3), EndpointRole::Server, 1, 1, 2, 1, 0, {module("example:two")}, {}}
    ));

    detail::TranscriptDigest           digest{};
    detail::NegotiationResultAssembler result;
    ASSERT_TRUE(result.push(
        detail::NegotiationResult{
            header(2),
            1,
            1,
            1,
            0,
            2,
            1,
            0,
            {{moduleId("example:one"), detail::NegotiationStatus::Enabled, 1, detail::WireErrorCode::None, {}}},
            {},
            digest
        }
    ));
    EXPECT_FALSE(result.push(
        detail::NegotiationResult{
            header(3),
            1,
            1,
            1,
            1,
            2,
            1,
            0,
            {{moduleId("example:two"), detail::NegotiationStatus::Enabled, 1, detail::WireErrorCode::None, {}}},
            {},
            digest
        }
    ));
}

TEST(ProtocolControlCodecTest, RejectsImpossibleListBeforeEntryAllocation) {
    Encoder body{Limits::MaxControlBody};
    ASSERT_TRUE(body.writeU8(1));
    ASSERT_TRUE(body.writeU64(1));
    ASSERT_TRUE(body.writeU32(1));
    ASSERT_TRUE(body.writeBytes(nonce(std::byte{1})));
    ASSERT_TRUE(body.writeU16(1));
    ASSERT_TRUE(body.writeU16(1));
    auto limits = transportLimits();
    ASSERT_TRUE(body.writeU32(limits.maxControlBody));
    ASSERT_TRUE(body.writeU32(limits.maxPayloadBody));
    ASSERT_TRUE(body.writeU32(limits.packetsPerSecond));
    ASSERT_TRUE(body.writeU32(limits.bytesPerSecond));
    ASSERT_TRUE(body.writeU32(limits.burstPackets));
    ASSERT_TRUE(body.writeU32(limits.burstBytes));
    ASSERT_TRUE(body.writeVarUint(Limits::MaxDeclaredFeatures));

    auto decoded = detail::decodeControl(detail::HelloRuntimeId, body.bytes(), 1);
    ASSERT_FALSE(decoded);
    ASSERT_TRUE(decoded.error().isA<CodecErrorInfo>());
    EXPECT_EQ(decoded.error().as<CodecErrorInfo>().code, CodecErrc::Truncated);
}

TEST(ProtocolControlCodecTest, RejectsUnknownControlIdBeforeBodyParsing) {
    auto decoded = detail::decodeControl(0xFFFFFFFFFFFFFFFFULL, {}, 1);
    ASSERT_FALSE(decoded);
    ASSERT_TRUE(decoded.error().isA<ProtocolErrorInfo>());
    EXPECT_EQ(decoded.error().as<ProtocolErrorInfo>().code, ProtocolErrc::UnexpectedMessage);
}

TEST(ProtocolControlCodecTest, RejectsDanglingPayloadModuleReferences) {
    detail::DeclarationSource
        declaration{header(2), EndpointRole::Server, 1, {}, {payload("example:missing/state", 42)}};
    EXPECT_FALSE(detail::packDeclaration(std::move(declaration), 1, Limits::MaxControlBody));

    detail::TranscriptDigest        digest{};
    detail::NegotiationResultSource result{
        header(2),
        1,
        1,
        1,
        {},
        {{payloadId("example:missing/state"),
          42,
          PayloadDirection::ServerToClient,
          detail::NegotiationStatus::Disabled,
          detail::WireErrorCode::UnknownPayload,
          0,
          0}},
        digest
    };
    EXPECT_FALSE(detail::packNegotiationResult(std::move(result), 1, Limits::MaxControlBody));
}

TEST(ProtocolControlCodecTest, ClosesAssemblerAfterMalformedChunk) {
    detail::DeclarationAssembler assembler;
    auto                         first = detail::Declaration{
        header(std::numeric_limits<std::uint32_t>::max()),
        EndpointRole::Server,
        1,
        0,
        2,
        1,
        0,
        {module("example:one")},
        {}
    };
    EXPECT_FALSE(assembler.push(std::move(first)));

    auto replacement = detail::Declaration{header(2), EndpointRole::Server, 1, 0, 1, 1, 0, {module("example:one")}, {}};
    EXPECT_FALSE(assembler.push(std::move(replacement)));
    EXPECT_FALSE(assembler.finish());
}

TEST(ProtocolControlCodecTest, AcceptsChunkSequenceAtUint32Boundary) {
    auto oneEntry = detail::Declaration{
        header(std::numeric_limits<std::uint32_t>::max() - 1),
        EndpointRole::Server,
        1,
        0,
        2,
        2,
        0,
        {module("example:one")},
        {}
    };
    auto oneEntryBody = detail::encodeControl(detail::ControlMessage{oneEntry}, 1);
    ASSERT_TRUE(oneEntryBody);
    detail::DeclarationAssembler assembler{1, oneEntryBody->size()};
    ASSERT_TRUE(assembler.push(
        detail::Declaration{
            header(std::numeric_limits<std::uint32_t>::max() - 1),
            EndpointRole::Server,
            1,
            0,
            2,
            2,
            0,
            {module("example:one")},
            {}
        }
    ));
    ASSERT_TRUE(assembler.push(
        detail::Declaration{
            header(std::numeric_limits<std::uint32_t>::max()),
            EndpointRole::Server,
            1,
            1,
            2,
            2,
            0,
            {module("example:two")},
            {}
        }
    ));
    EXPECT_TRUE(assembler.finish());
}

TEST(ProtocolControlCodecTest, RejectsUseAfterAssemblerMove) {
    detail::DeclarationAssembler source;
    detail::DeclarationAssembler destination{std::move(source)};

    EXPECT_FALSE(
        source.push(detail::Declaration{header(2), EndpointRole::Server, 1, 0, 1, 1, 0, {module("example:one")}, {}})
    );
    EXPECT_FALSE(source.finish());

    ASSERT_TRUE(destination.push(
        detail::Declaration{header(2), EndpointRole::Server, 1, 0, 1, 1, 0, {module("example:one")}, {}}
    ));
    EXPECT_TRUE(destination.finish());
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
