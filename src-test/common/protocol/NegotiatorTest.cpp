#include "gtest/gtest.h"

#include <algorithm>

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/Negotiator.h"
#include "ll/core/protocol/RuntimeIdentity.h"

namespace ll::protocol::test {

namespace {

detail::ModuleDeclaration
module(std::string_view id, VersionRange range = {1, 1}, ModuleRequirement requirement = ModuleRequirement::Optional) {
    return {
        *ModuleId::parse(id),
        {1, 0, 0},
        range,
        requirement,
        {}
    };
}

detail::PayloadDeclaration payload(
    std::string_view           id,
    PayloadDirection           direction   = PayloadDirection::ClientToServer,
    PayloadRequirement         requirement = PayloadRequirement::Required,
    std::vector<SchemaVersion> schemas     = {1}
) {
    auto parsed = *PayloadId::parse(id);
    return {parsed, detail::payloadRuntimeId(parsed), direction, requirement, std::move(schemas), 4096};
}

detail::DeclarationSource declaration(
    EndpointRole                            role,
    std::vector<detail::ModuleDeclaration>  modules,
    std::vector<detail::PayloadDeclaration> payloads,
    std::uint64_t                           revision
) {
    std::ranges::sort(modules, {}, [](auto const& value) { return value.id.value(); });
    std::ranges::sort(payloads, {}, [](auto const& value) { return value.id.value(); });

    return {
        {1, 7, 1},
        role,
        revision,
        std::move(modules),
        std::move(payloads)
    };
}

detail::TransportLimits limits() {
    return {
        Limits::MaxControlBody,
        Limits::DefaultPayloadBody,
        Limits::DefaultPacketsPerSecond,
        Limits::DefaultBytesPerSecond,
        Limits::DefaultBurstPackets,
        Limits::DefaultBurstBytes,
    };
}

ProtocolErrc protocolCode(Error& error) {
    EXPECT_TRUE(error.isA<ProtocolErrorInfo>());
    return error.as<ProtocolErrorInfo>().code;
}

} // namespace

TEST(ProtocolNegotiatorTest, SelectsHighestCommonVersionsInStableOrder) {
    auto serverModule = module("negotiator:alpha", {1, 4});
    serverModule.features.push_back({
        *FeatureName::parse("fast_path"),
        {1, 3},
        false
    });

    auto clientModule = module("negotiator:alpha", {2, 3});
    clientModule.features.push_back({
        *FeatureName::parse("fast_path"),
        {2, 5},
        false
    });

    auto server = declaration(
        EndpointRole::Server,
        {module("negotiator:zeta"), serverModule},
        {payload("negotiator:alpha/state", PayloadDirection::ServerToClient, PayloadRequirement::Required, {1, 2, 4})},
        11
    );
    auto client = declaration(
        EndpointRole::Client,
        {clientModule, module("negotiator:zeta")},
        {payload("negotiator:alpha/state", PayloadDirection::ServerToClient, PayloadRequirement::Required, {2, 3, 4})},
        17
    );

    auto result = detail::negotiate(server, client, 1, limits());
    ASSERT_TRUE(result) << result.error().message();
    ASSERT_EQ(result->modules.size(), 2);
    EXPECT_EQ(result->modules[0].id.str(), "negotiator:alpha");
    EXPECT_EQ(result->modules[0].protocolVersion, 3);
    ASSERT_EQ(result->modules[0].features.size(), 1);
    EXPECT_EQ(result->modules[0].features[0].version, 3);
    ASSERT_EQ(result->payloads.size(), 1);
    EXPECT_EQ(result->payloads[0].schema, 4);
    EXPECT_EQ(result->payloads[0].maxEncodedSize, 4096);
}

TEST(ProtocolNegotiatorTest, RejectsMissingRequiredRoleAndRuntimeIdentityMismatch) {
    auto requiredServer = declaration(
        EndpointRole::Server,
        {module("negotiator:required", {1, 1}, ModuleRequirement::RequiredOnClient)},
        {},
        1
    );
    auto emptyClient = declaration(EndpointRole::Client, {}, {}, 2);
    auto missing     = detail::negotiate(requiredServer, emptyClient, 1, limits());
    ASSERT_FALSE(missing);
    EXPECT_EQ(protocolCode(missing.error()), ProtocolErrc::RequirementUnsatisfied);

    auto invalidPayload = payload("negotiator:main/value");
    ++invalidPayload.runtimeId;

    auto invalidServer = declaration(EndpointRole::Server, {module("negotiator:main")}, {invalidPayload}, 3);
    auto validClient =
        declaration(EndpointRole::Client, {module("negotiator:main")}, {payload("negotiator:main/value")}, 4);

    auto collision = detail::negotiate(invalidServer, validClient, 1, limits());
    ASSERT_FALSE(collision);
    EXPECT_EQ(protocolCode(collision.error()), ProtocolErrc::IdentityCollision);
}

TEST(ProtocolNegotiatorTest, ServerPolicyTightensRequiredModulesWithoutRelaxingDescriptors) {
    // clang-format off
    detail::RegistrySnapshot snapshot;
    snapshot.revision = 9;
    snapshot.modules.emplace_back(std::make_shared<ModuleDescriptor>(
        *ModuleId::parse("negotiator:policy"),
        ModuleDefinition{
            .name             = *ModuleName::parse("policy"),
            .version          = {1, 0, 0},
            .protocolVersions = {1, 1},
            .requirement      = ModuleRequirement::Optional,
        },
        "NegotiatorPolicy",
        1
    ));
    // clang-format on

    std::vector required{*ModuleId::parse("negotiator:policy")};
    auto        server = detail::makeDeclaration(snapshot, EndpointRole::Server, {1, 7, 1}, required);
    ASSERT_TRUE(server) << server.error().message();
    ASSERT_EQ(server->modules.size(), 1);
    EXPECT_EQ(server->modules.front().requirement, ModuleRequirement::RequiredOnClient);

    auto missingClient = declaration(EndpointRole::Client, {}, {}, 10);
    auto negotiation   = detail::negotiate(*server, missingClient, 1, limits());
    ASSERT_FALSE(negotiation);
    EXPECT_EQ(protocolCode(negotiation.error()), ProtocolErrc::RequirementUnsatisfied);

    std::vector unknown{*ModuleId::parse("negotiator:unknown")};
    auto        absent = detail::makeDeclaration(snapshot, EndpointRole::Server, {1, 7, 1}, unknown);
    ASSERT_FALSE(absent);
    EXPECT_EQ(protocolCode(absent.error()), ProtocolErrc::RequirementUnsatisfied);
}

TEST(ProtocolNegotiatorTest, DisablesOptionalModuleWhenRequiredPayloadIsIncompatible) {
    auto server = declaration(
        EndpointRole::Server,
        {module("negotiator:optional")},
        {payload("negotiator:optional/value", PayloadDirection::ServerToClient, PayloadRequirement::Required, {1})},
        1
    );
    auto client = declaration(
        EndpointRole::Client,
        {module("negotiator:optional")},
        {payload("negotiator:optional/value", PayloadDirection::ServerToClient, PayloadRequirement::Required, {2})},
        2
    );

    auto result = detail::negotiate(server, client, 1, limits());
    ASSERT_TRUE(result) << result.error().message();
    EXPECT_TRUE(result->modules.empty());
    EXPECT_TRUE(result->payloads.empty());
    ASSERT_EQ(result->moduleResults.size(), 1);
    EXPECT_EQ(result->moduleResults[0].status, detail::NegotiationStatus::Disabled);
}

TEST(ProtocolNegotiatorTest, DetectsAuthoritativeResultDivergence) {
    auto server = declaration(EndpointRole::Server, {module("negotiator:main")}, {}, 1);
    auto client = declaration(EndpointRole::Client, {module("negotiator:main")}, {}, 2);
    auto plan   = detail::negotiate(server, client, 1, limits());
    ASSERT_TRUE(plan);

    detail::NegotiationResultSource received{
        .selectedCoreProtocol   = plan->coreProtocol,
        .serverRegistryRevision = plan->serverRegistryRevision,
        .clientRegistryRevision = plan->clientRegistryRevision,
        .modules                = plan->moduleResults,
        .payloads               = plan->payloadResults,
    };
    ASSERT_TRUE(detail::validateNegotiationResult(*plan, received));

    received.modules.front().selectedProtocol = 2;

    auto mismatch = detail::validateNegotiationResult(*plan, received);
    ASSERT_FALSE(mismatch);
    EXPECT_EQ(protocolCode(mismatch.error()), ProtocolErrc::DigestMismatch);
}

} // namespace ll::protocol::test
