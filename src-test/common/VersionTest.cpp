#include "gtest/gtest.h"

#include <functional>
#include <iterator>
#include <string_view>
#include <vector>

#include "ll/api/data/Version.h"
#include "ll/api/data/VersionRequirement.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Serialization.h"

#include "nlohmann/json.hpp"

namespace ll::data::test {

namespace {

constexpr bool supportsConstantEvaluation() {
    VersionRequirement requirement{"^1.2.3 || =2.0.0"};
    if (!requirement.matches(Version{"1.9.0"}) || !requirement.matches(Version{"2.0.0"})
        || requirement.matches(Version{"3.0.0"}) || requirement.to_string().empty()) {
        return false;
    }

    VersionRequirement unchanged{"^1.2.3"};
    if (unchanged.from_string_noexcept(">=")) {
        return false;
    }
    if (!unchanged.matches(Version{"1.5.0"}) || unchanged.matches(Version{"2.0.0"})) {
        return false;
    }

    return Version{"1.2.3-alpha.1+build.5"}.to_string() == "1.2.3-alpha.1+build.5";
}

static_assert(supportsConstantEvaluation());

} // namespace

TEST(VersionTest, ParsesStrictSemanticVersions) {
    struct TestCase {
        std::string_view value;
        bool             valid;
    };
    constexpr TestCase cases[]{
        {                    "0.0.0",  true},
        {"1.2.3-alpha.1+build.5-win",  true},
        {    "1.2.3+001.release-win",  true},
        {                      "1.2", false},
        {                  "1.2.3.4", false},
        {                   "01.2.3", false},
        {                   "1.02.3", false},
        {                   "1.2.03", false},
        {           "1.2.3-alpha..1", false},
        {           "1.2.3-alpha.01", false},
        {                   "1.2.3-", false},
        {                   "1.2.3+", false},
        {           "1.2.3+build..1", false},
        {            "1.2.3+build_1", false},
    };

    for (auto const& test : cases) {
        EXPECT_EQ(Version::valid(test.value), test.valid) << test.value;
    }
}

TEST(VersionTest, FailedParseDoesNotChangeValue) {
    Version version{"1.2.3-alpha+build.1"};
    EXPECT_FALSE(version.from_string_noexcept("2.0"));
    EXPECT_EQ(version.to_string(), "1.2.3-alpha+build.1");
}

TEST(VersionTest, UsesSemVerPrecedence) {
    constexpr std::string_view ordered[]{
        "1.0.0-alpha",
        "1.0.0-alpha.1",
        "1.0.0-alpha.beta",
        "1.0.0-beta",
        "1.0.0-beta.2",
        "1.0.0-beta.11",
        "1.0.0-rc.1",
        "1.0.0",
    };

    for (size_t i = 1; i < std::size(ordered); ++i) {
        EXPECT_LT(Version{ordered[i - 1]}, Version{ordered[i]});
    }
}

TEST(VersionTest, SeparatesPrecedenceFromIdentity) {
    Version first{"1.2.3+first"};
    Version second{"1.2.3+second"};

    EXPECT_EQ(first, second);
    EXPECT_EQ(std::hash<Version>{}(first), std::hash<Version>{}(second));
    EXPECT_FALSE(first.isIdenticalTo(second));
    EXPECT_TRUE(first.isIdenticalTo(Version{"1.2.3+first"}));
}

TEST(VersionTest, SerializesAndDeserializesWithBuildMetadata) {
    Version version{"1.2.3-alpha.1+build.5-win"};

    auto serialized = serialize<nlohmann::json>(version);
    ASSERT_TRUE(serialized);
    auto deserialized = reflection::deserialize_to<Version>(*serialized);
    ASSERT_TRUE(deserialized);
    EXPECT_TRUE(version.isIdenticalTo(*deserialized));
}

TEST(VersionRequirementTest, MatchesSupportedRangeSyntax) {
    struct TestCase {
        std::string_view requirement;
        std::string_view candidate;
        bool             matches;
    };
    constexpr TestCase cases[]{
        {             ">=1.2.0 <2.0.0",  "1.2.0",  true},
        {             ">=1.2.0 <2.0.0",  "2.0.0", false},
        {">= 1.2.0 < 2.0.0 || = 3.0.0",  "3.0.0",  true},
        {                     ">1.2.3",  "1.2.4",  true},
        {                    "<=1.2.3",  "1.2.4", false},
        {                     "^1.2.3",  "1.9.0",  true},
        {                     "^1.2.3",  "2.0.0", false},
        {                     "^0.2.3",  "0.2.9",  true},
        {                     "^0.2.3",  "0.3.0", false},
        {                     "^0.0.3",  "0.0.4", false},
        {                       "^0.0",  "0.0.9",  true},
        {                       "^0.0",  "0.1.0", false},
        {                         "^0",  "0.9.9",  true},
        {                         "^0",  "1.0.0", false},
        {                     "~1.2.3",  "1.2.9",  true},
        {                     "~1.2.3",  "1.3.0", false},
        {                         "~1",  "1.9.9",  true},
        {                         "~1",  "2.0.0", false},
        {                          "1",  "1.9.9",  true},
        {                          "1",  "2.0.0", false},
        {                        "1.2", "1.2.99",  true},
        {                        "1.2",  "1.3.0", false},
        {                      "1.2.x", "1.2.99",  true},
        {                      "1.2.x",  "1.3.0", false},
        {                      "1.2.X", "1.2.99",  true},
        {                          "*", "42.0.0",  true},
        {                          "x", "42.0.0",  true},
        {                          "X", "42.0.0",  true},
        {              "1.2.3 - 2.0.0",  "2.0.0",  true},
        {              "1.2.3 - 2.0.0",  "2.0.1", false},
        {                  "1.2 - 2.3", "2.3.99",  true},
        {                  "1.2 - 2.3",  "2.4.0", false},
    };

    for (auto const& test : cases) {
        EXPECT_EQ(VersionRequirement{test.requirement}.matches(Version{test.candidate}), test.matches)
            << test.requirement << " with " << test.candidate;
    }
}

TEST(VersionRequirementTest, PreservesLegacyBareVersionBehavior) {
    VersionRequirement requirement{"1.2.3"};

    EXPECT_TRUE(requirement.matches(Version{"1.2.3"}));
    EXPECT_TRUE(requirement.matches(Version{"1.9.9"}));
    EXPECT_FALSE(requirement.matches(Version{"2.0.0"}));
    EXPECT_TRUE(VersionRequirement{"=1.2.3"}.matches(Version{"1.2.3+other"}));
    EXPECT_FALSE(VersionRequirement{"=1.2.3"}.matches(Version{"1.2.4"}));
}

TEST(VersionRequirementTest, AppliesPrereleaseGatingPerAlternative) {
    struct TestCase {
        std::string_view requirement;
        std::string_view candidate;
        bool             matches;
    };
    constexpr TestCase cases[]{
        {                  ">=1.2.3 <2.0.0", "1.3.0-beta.1", false},
        {           ">=1.3.0-beta.1 <2.0.0", "1.3.0-beta.2",  true},
        {           ">=1.3.0-beta.1 <2.0.0", "1.4.0-beta.1", false},
        {       ">=1.3.0-beta.1 || >=2.0.0", "2.0.0-beta.1", false},
        {">=1.3.0-beta.1 || >=2.0.0-beta.1", "2.0.0-beta.2",  true},
        {                               "*",  "1.0.0-alpha", false},
    };

    for (auto const& test : cases) {
        EXPECT_EQ(VersionRequirement{test.requirement}.matches(Version{test.candidate}), test.matches)
            << test.requirement << " with " << test.candidate;
    }
}

TEST(VersionRequirementTest, RejectsInvalidRangesWithoutChangingValue) {
    VersionRequirement         requirement{"^1.2.3"};
    constexpr std::string_view invalid[]{
        "||",
        "1.2.3 ||",
        ">=",
        "> 1.2.3 <",
        "1.x.3",
        "1.2.3 -",
        "(>=1.0.0)",
        "^1.2-beta",
    };

    for (auto const& expression : invalid) {
        EXPECT_FALSE(VersionRequirement::valid(expression)) << expression;
        EXPECT_FALSE(requirement.from_string_noexcept(expression)) << expression;
        EXPECT_TRUE(requirement.matches(Version{"1.5.0"})) << expression;
        EXPECT_FALSE(requirement.matches(Version{"2.0.0"})) << expression;
    }
}

TEST(VersionRequirementTest, NormalizesEqualityHashAndSerialization) {
    VersionRequirement first{"<2.0.0 >=1.2.0 || =3.0.0"};
    VersionRequirement second{"=3.0.0 || >=1.2.0 <2.0.0"};
    EXPECT_EQ(first, second);
    EXPECT_EQ(std::hash<VersionRequirement>{}(first), std::hash<VersionRequirement>{}(second));

    auto serialized = serialize<nlohmann::json>(first);
    ASSERT_TRUE(serialized);
    auto deserialized = reflection::deserialize_to<VersionRequirement>(*serialized);
    ASSERT_TRUE(deserialized);
    EXPECT_EQ(*deserialized, first);
}

} // namespace ll::data::test
