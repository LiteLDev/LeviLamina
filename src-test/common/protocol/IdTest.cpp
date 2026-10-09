#include "gtest/gtest.h"

#include <functional>
#include <string>
#include <string_view>

#include "ll/api/protocol/Direction.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Id.h"
#include "ll/api/protocol/Limits.h"
#include "ll/api/protocol/Version.h"

namespace ll::protocol::test {

static_assert(!noexcept(FeatureName::parse(std::string_view{})));

TEST(ProtocolIdTest, ParsesCanonicalLocalValues) {
    auto protocolNamespace = ProtocolNamespace::parse("example.mod-1");
    auto moduleName        = ModuleName::parse("world_sync");
    auto payloadName       = PayloadName::parse("player/state-v1");
    auto featureName       = FeatureName::parse("delta_updates.v2");

    ASSERT_TRUE(protocolNamespace);
    ASSERT_TRUE(moduleName);
    ASSERT_TRUE(payloadName);
    ASSERT_TRUE(featureName);
    EXPECT_EQ(protocolNamespace->value(), "example.mod-1");
    EXPECT_EQ(moduleName->value(), "world_sync");
    EXPECT_EQ(payloadName->value(), "player/state-v1");
    EXPECT_EQ(featureName->value(), "delta_updates.v2");
}

TEST(ProtocolIdTest, RejectsNonCanonicalLocalValues) {
    EXPECT_FALSE(ProtocolNamespace::parse("Example"));
    EXPECT_FALSE(ProtocolNamespace::parse("-example"));
    EXPECT_FALSE(ModuleName::parse(""));
    EXPECT_FALSE(ModuleName::parse("module/name"));
    EXPECT_FALSE(PayloadName::parse("/payload"));
    EXPECT_FALSE(PayloadName::parse("payload:name"));
    EXPECT_FALSE(FeatureName::parse("1feature"));
    EXPECT_FALSE(FeatureName::parse("feature/name"));
}

TEST(ProtocolIdTest, EnforcesFrozenLengthBounds) {
    std::string validNamespace(Limits::MaxProtocolNamespaceBytes, 'a');
    std::string longNamespace(Limits::MaxProtocolNamespaceBytes + 1, 'a');
    std::string validModule(Limits::MaxModuleNameBytes, 'm');
    std::string validPayload(Limits::MaxPayloadNameBytes, 'p');

    EXPECT_TRUE(ProtocolNamespace::parse(validNamespace));
    auto tooLong = ProtocolNamespace::parse(longNamespace);
    ASSERT_FALSE(tooLong);
    ASSERT_TRUE(tooLong.error().isA<IdentityErrorInfo>());
    EXPECT_EQ(tooLong.error().as<IdentityErrorInfo>().code, IdentityErrc::TooLong);

    auto module = ModuleId::parse(validNamespace + ":" + validModule);
    ASSERT_TRUE(module);
    EXPECT_EQ(module->value().size(), Limits::MaxModuleIdBytes);

    auto payload = PayloadId::parse(module->str() + "/" + validPayload);
    ASSERT_TRUE(payload);
    EXPECT_EQ(payload->value().size(), Limits::MaxPayloadIdBytes);
}

TEST(ProtocolIdTest, ParsesAndBuildsStableIds) {
    auto protocolNamespace = ProtocolNamespace::parse("example");
    auto moduleName        = ModuleName::parse("world_sync");
    auto payloadName       = PayloadName::parse("player_state");
    ASSERT_TRUE(protocolNamespace && moduleName && payloadName);

    auto module = makeModuleId(*protocolNamespace, *moduleName);
    ASSERT_TRUE(module);
    EXPECT_EQ(module->value(), "example:world_sync");
    EXPECT_EQ(module->protocolNamespace(), "example");
    EXPECT_EQ(module->name(), "world_sync");

    auto payload = makePayloadId(*module, *payloadName);
    ASSERT_TRUE(payload);
    EXPECT_EQ(payload->value(), "example:world_sync/player_state");
    EXPECT_EQ(payload->protocolNamespace(), "example");
    EXPECT_EQ(payload->module(), "example:world_sync");
    EXPECT_EQ(payload->name(), "player_state");

    auto reparsed = PayloadId::parse(payload->value());
    ASSERT_TRUE(reparsed);
    EXPECT_EQ(*payload, *reparsed);
    EXPECT_EQ(std::hash<PayloadId>{}(*payload), std::hash<PayloadId>{}(*reparsed));
}

TEST(ProtocolIdTest, RejectsMalformedStableIds) {
    EXPECT_FALSE(ModuleId::parse("example"));
    EXPECT_FALSE(ModuleId::parse("example:module:extra"));
    EXPECT_FALSE(ModuleId::parse("Example:module"));
    EXPECT_FALSE(PayloadId::parse("example:module"));
    EXPECT_FALSE(PayloadId::parse("example:/payload"));
    EXPECT_FALSE(PayloadId::parse("example:module/"));
    EXPECT_FALSE(PayloadId::parse("example:module/payload:extra"));
}

TEST(ProtocolIdTest, InvalidStableIdsAreEmptyAndCannotBeParsed) {
    auto const& module = ModuleId::INVALID();
    EXPECT_TRUE(module.value().empty());
    EXPECT_TRUE(module.protocolNamespace().empty());
    EXPECT_TRUE(module.name().empty());
    EXPECT_FALSE(ModuleId::parse(module.value()));
    EXPECT_EQ(&module, &ModuleId::INVALID());

    auto const& payload = PayloadId::INVALID();
    EXPECT_TRUE(payload.value().empty());
    EXPECT_TRUE(payload.protocolNamespace().empty());
    EXPECT_TRUE(payload.module().empty());
    EXPECT_TRUE(payload.name().empty());
    EXPECT_FALSE(PayloadId::parse(payload.value()));
    EXPECT_EQ(&payload, &PayloadId::INVALID());
}

TEST(ProtocolVersionTest, SelectsHighestCommonVersion) {
    VersionRange local{1, 5};
    VersionRange peer{3, 7};
    ASSERT_TRUE(local.highestCommon(peer));
    EXPECT_EQ(*local.highestCommon(peer), 5);
    EXPECT_FALSE(local.highestCommon({6, 9}));
    EXPECT_FALSE((VersionRange{0, 1}.valid()));
    EXPECT_FALSE((VersionRange{3, 2}.valid()));
}

TEST(ProtocolDirectionTest, DerivesLegalEndpointDirection) {
    EXPECT_TRUE(canSend(EndpointRole::Client, PayloadDirection::ClientToServer));
    EXPECT_TRUE(canReceive(EndpointRole::Server, PayloadDirection::ClientToServer));
    EXPECT_TRUE(canSend(EndpointRole::Server, PayloadDirection::ServerToClient));
    EXPECT_FALSE(canSend(EndpointRole::Client, PayloadDirection::ServerToClient));
}

} // namespace ll::protocol::test
