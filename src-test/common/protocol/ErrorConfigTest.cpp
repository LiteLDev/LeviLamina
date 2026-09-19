#include "gtest/gtest.h"

#include <stdexcept>
#include <string>

#include "nlohmann/json.hpp"

#include "ll/api/mod/Manifest.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/core/protocol/ProtocolConfig.h"

namespace ll::protocol::test {

namespace {

struct ThrowingEncodePayload {};

struct ThrowingEncodeCodec {
    Expected<> encode(Encoder&, ThrowingEncodePayload const&, SchemaVersion) const {
        throw std::runtime_error{"codec encode failure"};
    }

    Expected<ThrowingEncodePayload> decode(Decoder&, SchemaVersion) const { return ThrowingEncodePayload{}; }
};

} // namespace

static_assert(Limits::MaxDeclaredModules == 512);
static_assert(Limits::MaxDeclaredPayloads == 2048);
static_assert(Limits::MaxDeclaredFeatures == 512);
static_assert(Limits::MaxDeclarationChunks == 8);
static_assert(Limits::MaxNegotiationResultChunks == 8);
static_assert(Limits::MaxResultModules == 1024);
static_assert(Limits::MaxResultPayloads == 4096);
static_assert(Limits::MaxHandshakeDecodedBytes == 4 * 1024 * 1024);

TEST(ProtocolErrorTest, PreservesTypedCodeAndBoundsContext) {
    std::string longContext(Limits::MaxErrorContextBytes + 100, 'x');
    Expected<>  result = makeRegistrationError(RegistrationErrc::ReservedNamespace, longContext);

    ASSERT_FALSE(result);
    ASSERT_TRUE(result.error().isA<RegistrationErrorInfo>());
    auto& info = result.error().as<RegistrationErrorInfo>();
    EXPECT_EQ(info.code, RegistrationErrc::ReservedNamespace);
    EXPECT_EQ(info.context.size(), Limits::MaxErrorContextBytes);
    EXPECT_NE(info.message({}).find("reserved"), std::string::npos);
}

TEST(ProtocolErrorTest, UsesSeparateErrorFamilies) {
    Expected<> codec = makeCodecError(CodecErrc::Truncated, "body");
    Expected<> state = makeSessionError(SessionErrc::WrongState, "handshaking");
    Expected<> wire  = makeProtocolError(ProtocolErrc::ReplayDetected, "sequence=2");

    ASSERT_FALSE(codec);
    ASSERT_FALSE(state);
    ASSERT_FALSE(wire);
    EXPECT_TRUE(codec.error().isA<CodecErrorInfo>());
    EXPECT_TRUE(state.error().isA<SessionErrorInfo>());
    EXPECT_TRUE(wire.error().isA<ProtocolErrorInfo>());
}

TEST(ProtocolErrorTest, ClassifiesEscapedEncodeExceptionAtCodecBoundary) {
    auto callbacks = detail::makePayloadCallbacks<ThrowingEncodePayload>(
        ThrowingEncodeCodec{},
        PayloadHandler<ThrowingEncodePayload>{}
    );
    ASSERT_TRUE(callbacks);

    ThrowingEncodePayload payload;

    auto encoded = callbacks->encode(&payload, 1, 64);
    ASSERT_FALSE(encoded);
    ASSERT_TRUE(encoded.error().isA<CodecErrorInfo>());
    EXPECT_EQ(encoded.error().as<CodecErrorInfo>().code, CodecErrc::ExceptionEscaped);
}

TEST(ProtocolConfigTest, AcceptsDocumentedDefaults) {
    EXPECT_TRUE(detail::validateProtocolConfig(ClientProtocolConfig{}));
    EXPECT_TRUE(detail::validateProtocolConfig(ServerProtocolConfig{}));
}

TEST(ProtocolConfigTest, RejectsZeroAndValuesAboveHardCeilings) {
    ClientProtocolConfig config;

    config.limits.maxPayloadBody = 0;
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config                       = {};
    config.limits.maxPayloadBody = Limits::MaxPayloadBody + 1;
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config                            = {};
    config.limits.maxPacketsPerSecond = Limits::MaxPacketsPerSecond + 1;
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config                          = {};
    config.limits.maxBytesPerSecond = Limits::MaxBytesPerSecond + 1;
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config                     = {};
    config.limits.burstPackets = Limits::MaxBurstPackets + 1;
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config                   = {};
    config.limits.burstBytes = Limits::MaxBurstBytes + 1;
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config                                = {};
    config.limits.handshakeTimeoutSeconds = Limits::MaxHandshakeTimeoutSeconds + 1;
    EXPECT_FALSE(detail::validateProtocolConfig(config));
}

TEST(ProtocolConfigTest, ValidatesRequiredModuleIdsAndDuplicates) {
    ServerProtocolConfig config;
    config.requiredModules = {"example:one", "example:two"};
    EXPECT_TRUE(detail::validateProtocolConfig(config));

    config.requiredModules = {"Example:one"};
    EXPECT_FALSE(detail::validateProtocolConfig(config));

    config.requiredModules = {"example:one", "example:one"};
    EXPECT_FALSE(detail::validateProtocolConfig(config));
}

TEST(ProtocolManifestTest, SerializesProtocolNamespace) {
    mod::Manifest manifest;
    manifest.name              = "Example";
    manifest.entry             = "Example.dll";
    manifest.type              = "native";
    manifest.protocolNamespace = "example";

    auto serialized = reflection::serialize<nlohmann::json>(manifest);
    ASSERT_TRUE(serialized);
    EXPECT_EQ(serialized->at("protocolNamespace"), "example");

    auto deserialized = reflection::deserialize_to<mod::Manifest>(*serialized);
    ASSERT_TRUE(deserialized);
    ASSERT_TRUE(deserialized->protocolNamespace);
    EXPECT_EQ(*deserialized->protocolNamespace, "example");
}

} // namespace ll::protocol::test
