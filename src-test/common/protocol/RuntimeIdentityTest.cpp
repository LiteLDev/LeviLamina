#include "gtest/gtest.h"

#include "ll/api/mod/Manifest.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Id.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ProtocolError.h"
#include "ll/core/protocol/RuntimeIdentity.h"

namespace ll::protocol::test {

static_assert(detail::HelloRuntimeId == 0xBAB45BFAE9A575F9ULL);
static_assert(detail::HelloAckRuntimeId == 0x466BDEACD3500B2FULL);
static_assert(detail::DeclarationRuntimeId == 0x02B09F30EFCF8B6DULL);
static_assert(detail::NegotiationResultRuntimeId == 0x129FDB850BAD8974ULL);
static_assert(detail::ReadyRuntimeId == 0x62A192B4BA003592ULL);
static_assert(detail::ProtocolErrorRuntimeId == 0xC3809B6B86FB9956ULL);

static_assert(detail::SupportedCoreProtocolVersions == VersionRange{1, 1});
static_assert(detail::findCoreProtocolDefinition(0) == nullptr);
static_assert(detail::findCoreProtocolDefinition(1) != nullptr);
static_assert(detail::findCoreProtocolDefinition(1)->controlSchema == 1);
static_assert(detail::findCoreProtocolDefinition(1)->payloadEnvelopeSchema == 1);
static_assert(detail::findCoreProtocolDefinition(2) == nullptr);

TEST(ProtocolRuntimeIdentityTest, FreezesPayloadHashVector) {
    auto payload = PayloadId::parse("example:world_sync/player_state");
    ASSERT_TRUE(payload);
    EXPECT_EQ(detail::payloadRuntimeId(*payload), 0x007336958D1B8E18ULL);
}

TEST(ProtocolRuntimeIdentityTest, ResolvesManifestNamespace) {
    mod::Manifest explicitManifest;
    explicitManifest.name              = "ExampleMod";
    explicitManifest.protocolNamespace = "example";
    auto explicitNamespace             = detail::resolveModProtocolNamespace(explicitManifest);
    ASSERT_TRUE(explicitNamespace);
    EXPECT_EQ(explicitNamespace->value(), "example");

    mod::Manifest fallbackManifest;
    fallbackManifest.name  = "fallback.mod";
    auto fallbackNamespace = detail::resolveModProtocolNamespace(fallbackManifest);
    ASSERT_TRUE(fallbackNamespace);
    EXPECT_EQ(fallbackNamespace->value(), "fallback.mod");

    auto moduleName = ModuleName::parse("world_sync");
    ASSERT_TRUE(moduleName);
    auto module = makeModuleId(*explicitNamespace, *moduleName);
    ASSERT_TRUE(module);
    EXPECT_EQ(module->value(), "example:world_sync");

    auto payloadName = PayloadName::parse("player_state");
    ASSERT_TRUE(payloadName);
    auto payload = makePayloadId(*module, *payloadName);
    ASSERT_TRUE(payload);
    EXPECT_EQ(payload->value(), "example:world_sync/player_state");
}

TEST(ProtocolRuntimeIdentityTest, KeepsInvalidFallbackOutOfProtocolWithoutRejectingManifest) {
    mod::Manifest manifest;
    manifest.name = "OrdinaryModName";

    EXPECT_TRUE(detail::validateManifestProtocolNamespace(manifest));
    auto resolved = detail::resolveModProtocolNamespace(manifest);
    ASSERT_FALSE(resolved);
    EXPECT_TRUE(resolved.error().isA<IdentityErrorInfo>());
}

TEST(ProtocolRuntimeIdentityTest, ReservesLeviLaminaForCoreAuthority) {
    mod::Manifest manifest;
    manifest.name              = "ThirdParty";
    manifest.protocolNamespace = "levilamina";

    auto validated = detail::validateManifestProtocolNamespace(manifest);
    ASSERT_FALSE(validated);
    ASSERT_TRUE(validated.error().isA<RegistrationErrorInfo>());
    EXPECT_EQ(validated.error().as<RegistrationErrorInfo>().code, RegistrationErrc::ReservedNamespace);

    auto resolved = detail::resolveModProtocolNamespace(manifest);
    ASSERT_FALSE(resolved);
    EXPECT_TRUE(resolved.error().isA<RegistrationErrorInfo>());

    auto const& coreNamespace = detail::resolveCoreProtocolNamespace(detail::getCoreProtocolOwner());
    EXPECT_EQ(coreNamespace.value(), "levilamina");
    EXPECT_TRUE(detail::isReservedProtocolNamespace(coreNamespace.value()));

    mod::Manifest fallbackManifest;
    fallbackManifest.name = "levilamina";
    EXPECT_FALSE(detail::validateManifestProtocolNamespace(fallbackManifest));
}

TEST(ProtocolRuntimeIdentityTest, MapsProtocolErrorsToFrozenWireCodes) {
    EXPECT_EQ(detail::toWireErrorCode(ProtocolErrc::InvalidState), detail::WireErrorCode::InvalidState);
    EXPECT_EQ(detail::toWireErrorCode(ProtocolErrc::UnknownPayload), detail::WireErrorCode::UnknownPayload);
    EXPECT_EQ(detail::toWireErrorCode(ProtocolErrc::InternalFailure), detail::WireErrorCode::InternalFailure);
    EXPECT_EQ(detail::toPayloadWireErrorCode(CodecErrc::Truncated), detail::WireErrorCode::MalformedPayload);
    EXPECT_EQ(detail::toPayloadWireErrorCode(CodecErrc::SizeLimitExceeded), detail::WireErrorCode::SizeLimitExceeded);
    EXPECT_EQ(detail::toWireErrorCode(SessionErrc::WrongDirection), detail::WireErrorCode::WrongDirection);
    EXPECT_EQ(detail::toWireErrorCode(SessionErrc::RegistryChanged), detail::WireErrorCode::RegistryChanged);
    EXPECT_EQ(detail::toWireErrorCode(TransportErrc::EndpointGone), detail::WireErrorCode::EndpointGone);
}

TEST(ProtocolRuntimeIdentityTest, ClassifiesLocalIngressFailuresAsInternal) {
    Expected<> escaped = makeCodecError(CodecErrc::ExceptionEscaped, "payload codec decode");
    EXPECT_EQ(
        detail::classifyProtocolError(escaped.error(), ProtocolErrc::MalformedPayload),
        ProtocolErrc::InternalFailure
    );

    Expected<> malformed = makeCodecError(CodecErrc::InvalidValue, "payload field");
    EXPECT_EQ(
        detail::classifyProtocolError(malformed.error(), ProtocolErrc::MalformedPayload),
        ProtocolErrc::MalformedPayload
    );

    Expected<> local = makeStringError("payload handler failed");
    EXPECT_EQ(
        detail::classifyProtocolError(local.error(), ProtocolErrc::MalformedPayload),
        ProtocolErrc::InternalFailure
    );
}

} // namespace ll::protocol::test
