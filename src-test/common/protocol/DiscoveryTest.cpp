#include "gtest/gtest.h"

#include <string>

#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/Discovery.h"

#include "mc/deps/json/Value.h"

namespace ll::protocol::test {

TEST(ProtocolDiscoveryTest, InjectsAndParsesExactFrozenMarker) {
    Json::Value root{Json::ValueType::ObjectValue};
    ASSERT_TRUE(detail::injectDiscoveryMarker(root, "1.2.3", "abc123"));

    auto parsed = detail::parseDiscoveryMarker(root);
    ASSERT_TRUE(parsed) << parsed.error().message();
    EXPECT_EQ(parsed->protocols, detail::SupportedCoreProtocolVersions);
    EXPECT_EQ(parsed->version, "1.2.3");
    EXPECT_EQ(parsed->build, "abc123");

    auto const& marker = root[detail::DiscoveryRootKey.data()];
    EXPECT_EQ(marker.size(), 5U);
    EXPECT_EQ(marker[detail::DiscoveryIdKey.data()].asString({}), detail::DiscoveryLoaderId);
}

TEST(ProtocolDiscoveryTest, RejectsMissingMalformedAndExtendedMarkers) {
    Json::Value missing{Json::ValueType::ObjectValue};
    EXPECT_FALSE(detail::parseDiscoveryMarker(missing));

    ASSERT_TRUE(detail::injectDiscoveryMarker(missing, "1.2.3", "abc123"));
    auto& marker = missing[detail::DiscoveryRootKey.data()];

    marker[detail::DiscoveryProtocolMinKey.data()] = 0;
    EXPECT_FALSE(detail::parseDiscoveryMarker(missing));

    marker[detail::DiscoveryProtocolMinKey.data()] = 1;
    marker["extension"]                            = true;
    EXPECT_FALSE(detail::parseDiscoveryMarker(missing));

    marker.removeMember("extension");
    marker[detail::DiscoveryVersionKey.data()] = std::string(Limits::MaxDiscoveryTextBytes + 1, 'v');
    EXPECT_FALSE(detail::parseDiscoveryMarker(missing));
}

TEST(ProtocolDiscoveryTest, EnforcesEveryFieldTypeAndBoundary) {
    Json::Value root{Json::ValueType::ObjectValue};
    ASSERT_TRUE(
        detail::injectDiscoveryMarker(
            root,
            std::string(Limits::MaxDiscoveryTextBytes, 'v'),
            std::string(Limits::MaxDiscoveryTextBytes, 'b')
        )
    );
    EXPECT_TRUE(detail::parseDiscoveryMarker(root));

    auto& marker                          = root[detail::DiscoveryRootKey.data()];
    marker[detail::DiscoveryIdKey.data()] = std::string(Limits::MaxDiscoveryTextBytes + 1, 'i');
    EXPECT_FALSE(detail::parseDiscoveryMarker(root));

    marker[detail::DiscoveryIdKey.data()]          = std::string{detail::DiscoveryLoaderId};
    marker[detail::DiscoveryProtocolMinKey.data()] = -1;
    EXPECT_FALSE(detail::parseDiscoveryMarker(root));

    marker[detail::DiscoveryProtocolMinKey.data()] = 2;
    marker[detail::DiscoveryProtocolMaxKey.data()] = 1;
    EXPECT_FALSE(detail::parseDiscoveryMarker(root));

    marker[detail::DiscoveryProtocolMinKey.data()] = 1;
    marker[detail::DiscoveryProtocolMaxKey.data()] = UINT16_MAX + 1U;
    EXPECT_FALSE(detail::parseDiscoveryMarker(root));

    marker[detail::DiscoveryProtocolMaxKey.data()] = 1;
    marker[detail::DiscoveryBuildKey.data()]       = "";
    EXPECT_FALSE(detail::parseDiscoveryMarker(root));
}

TEST(ProtocolDiscoveryTest, RejectsInvalidLocalInjectionWithoutMutatingRoot) {
    Json::Value root{Json::ValueType::ObjectValue};
    root["preserved"] = true;

    EXPECT_FALSE(detail::injectDiscoveryMarker(root, "", "build"));
    EXPECT_FALSE(root.isMember(detail::DiscoveryRootKey.data()));
    EXPECT_TRUE(root["preserved"].asBool(false));

    Json::Value nonObject{Json::ValueType::ArrayValue};
    EXPECT_FALSE(detail::injectDiscoveryMarker(nonObject, "1.0.0", "build"));
    EXPECT_TRUE(nonObject.isArray());
}

} // namespace ll::protocol::test
