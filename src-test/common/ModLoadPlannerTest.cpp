#include "gtest/gtest.h"

#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <utility>

#include "ll/api/base/Containers.h"
#include "ll/api/data/Version.h"
#include "ll/api/data/VersionRequirement.h"
#include "ll/api/mod/Manifest.h"
#include "ll/core/mod/ModLoadPlanner.h"

namespace ll::mod::test {

namespace {

Manifest makeManifest(std::string name) {
    Manifest manifest;
    manifest.name    = std::move(name);
    manifest.entry   = "test.dll";
    manifest.type    = "native";
    manifest.version = data::Version{"1.5.0"};
    return manifest;
}

Dependency dependency(std::string name, std::optional<std::string_view> requirement = std::nullopt) {
    return Dependency{std::move(name), requirement.transform([](std::string_view value) {
                          return data::VersionRequirement{value};
                      })};
}

} // namespace

TEST(ModLoadPlannerTest, SeparatesLoadBeforeFromLifecycleDependencies) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("A", makeManifest("A"));
    manifests.emplace("B", makeManifest("B"));
    manifests.at("A").loadBefore.emplace().emplace(dependency("B"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.order, (std::vector<std::string>{"A", "B"}));
    EXPECT_TRUE(plan.lifecycleDependencies.at("A").empty());
    EXPECT_TRUE(plan.lifecycleDependencies.at("B").empty());
}

TEST(ModLoadPlannerTest, ExpandsOnlyDependenciesOfExplicitRoots) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("Root", makeManifest("Root"));
    manifests.emplace("Required", makeManifest("Required"));
    manifests.emplace("Optional", makeManifest("Optional"));
    manifests.emplace("OrderedOnly", makeManifest("OrderedOnly"));
    manifests.emplace("Unrelated", makeManifest("Unrelated"));
    manifests.at("Root").dependencies.emplace().emplace(dependency("Required"));
    manifests.at("Root").optionalDependencies.emplace().emplace(dependency("Optional"));
    manifests.at("Root").loadBefore.emplace().emplace(dependency("OrderedOnly"));

    DenseSet<std::string> roots{"Root"};
    auto                  plan = ModLoadPlanner::resolve(manifests, roots, false);

    EXPECT_EQ(plan.order, (std::vector<std::string>{"Optional", "Required", "Root"}));
    EXPECT_FALSE(plan.lifecycleDependencies.contains("OrderedOnly"));
    EXPECT_FALSE(plan.lifecycleDependencies.contains("Unrelated"));
}

TEST(ModLoadPlannerTest, BindsRequiredAndAvailableOptionalDependencies) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("Required", makeManifest("Required"));
    manifests.emplace("Optional", makeManifest("Optional"));
    manifests.emplace("Consumer", makeManifest("Consumer"));
    manifests.at("Consumer").dependencies.emplace().emplace(dependency("Required", "^1.0.0"));
    manifests.at("Consumer").optionalDependencies.emplace().emplace(dependency("Optional", "1.x"));
    manifests.at("Consumer").optionalDependencies->emplace(dependency("Absent"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_TRUE(plan.rejected.empty());
    EXPECT_TRUE(plan.lifecycleDependencies.at("Consumer").contains("Required"));
    EXPECT_TRUE(plan.lifecycleDependencies.at("Consumer").contains("Optional"));
    EXPECT_FALSE(plan.lifecycleDependencies.at("Consumer").contains("Absent"));
    EXPECT_LT(std::ranges::find(plan.order, "Required"), std::ranges::find(plan.order, "Consumer"));
    EXPECT_LT(std::ranges::find(plan.order, "Optional"), std::ranges::find(plan.order, "Consumer"));
}

TEST(ModLoadPlannerTest, PropagatesMissingAndIncompatibleDependencies) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("Broken", makeManifest("Broken"));
    manifests.emplace("Dependent", makeManifest("Dependent"));
    manifests.at("Broken").dependencies.emplace().emplace(dependency("Missing"));
    manifests.at("Dependent").dependencies.emplace().emplace(dependency("Broken"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    ASSERT_TRUE(plan.rejected.contains("Broken"));
    ASSERT_TRUE(plan.rejected.contains("Dependent"));
    EXPECT_EQ(plan.rejected.at("Broken").kind, ModLoadIssueKind::MissingDependency);
    EXPECT_EQ(plan.rejected.at("Dependent").kind, ModLoadIssueKind::DependencyUnavailable);
    EXPECT_TRUE(plan.order.empty());
}

TEST(ModLoadPlannerTest, RejectsVersionedDependencyOnUnversionedMod) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("Target", makeManifest("Target"));
    manifests.emplace("Consumer", makeManifest("Consumer"));
    manifests.at("Target").version.reset();
    manifests.at("Consumer").dependencies.emplace().emplace(dependency("Target", "*"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    ASSERT_TRUE(plan.rejected.contains("Consumer"));
    EXPECT_EQ(plan.rejected.at("Consumer").kind, ModLoadIssueKind::IncompatibleDependencyVersion);
    EXPECT_FALSE(plan.rejected.at("Consumer").actualVersion);
    ASSERT_TRUE(plan.rejected.at("Consumer").requiredVersion);
    EXPECT_EQ(plan.rejected.at("Consumer").requiredVersion->to_string(), "*");
}

TEST(ModLoadPlannerTest, DoesNotPropagateOptionalDependencyFailure) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("ClientOnly", makeManifest("ClientOnly"));
    manifests.emplace("Consumer", makeManifest("Consumer"));
    manifests.at("ClientOnly").platform = "client";
    manifests.at("Consumer").optionalDependencies.emplace().emplace(dependency("ClientOnly"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.rejected.at("ClientOnly").kind, ModLoadIssueKind::IncompatiblePlatform);
    EXPECT_FALSE(plan.rejected.contains("Consumer"));
    EXPECT_EQ(plan.order, (std::vector<std::string>{"Consumer"}));
    EXPECT_TRUE(plan.lifecycleDependencies.at("Consumer").empty());
}

TEST(ModLoadPlannerTest, PropagatesPlatformRejections) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("ClientOnly", makeManifest("ClientOnly"));
    manifests.emplace("ServerConsumer", makeManifest("ServerConsumer"));
    manifests.at("ClientOnly").platform = "client";
    manifests.at("ServerConsumer").dependencies.emplace().emplace(dependency("ClientOnly"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.rejected.at("ClientOnly").kind, ModLoadIssueKind::IncompatiblePlatform);
    EXPECT_EQ(plan.rejected.at("ServerConsumer").kind, ModLoadIssueKind::DependencyUnavailable);
}

TEST(ModLoadPlannerTest, RejectsDeclaredConflicts) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("A", makeManifest("A"));
    manifests.emplace("B", makeManifest("B"));
    manifests.at("A").conflicts.emplace().emplace(dependency("B", ">=1.0.0"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.rejected.at("A").kind, ModLoadIssueKind::Conflict);
    EXPECT_FALSE(plan.rejected.contains("B"));
    EXPECT_EQ(plan.order, (std::vector<std::string>{"B"}));
}

TEST(ModLoadPlannerTest, RejectsBothSidesOfBidirectionalConflicts) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("A", makeManifest("A"));
    manifests.emplace("B", makeManifest("B"));
    manifests.at("A").conflicts.emplace().emplace(dependency("B"));
    manifests.at("B").conflicts.emplace().emplace(dependency("A"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.rejected.at("A").kind, ModLoadIssueKind::Conflict);
    EXPECT_EQ(plan.rejected.at("B").kind, ModLoadIssueKind::Conflict);
    EXPECT_TRUE(plan.order.empty());
}

TEST(ModLoadPlannerTest, PropagatesIncompatibleVersionFailures) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("Target", makeManifest("Target"));
    manifests.emplace("Consumer", makeManifest("Consumer"));
    manifests.emplace("Dependent", makeManifest("Dependent"));
    manifests.at("Consumer").dependencies.emplace().emplace(dependency("Target", ">=2.0.0"));
    manifests.at("Dependent").dependencies.emplace().emplace(dependency("Consumer"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.rejected.at("Consumer").kind, ModLoadIssueKind::IncompatibleDependencyVersion);
    EXPECT_EQ(plan.rejected.at("Dependent").kind, ModLoadIssueKind::DependencyUnavailable);
    EXPECT_EQ(plan.order, (std::vector<std::string>{"Target"}));
}

TEST(ModLoadPlannerTest, RejectsOnlyCyclesAndRequiredDependents) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("A", makeManifest("A"));
    manifests.emplace("B", makeManifest("B"));
    manifests.emplace("Independent", makeManifest("Independent"));
    manifests.emplace("RequiredDependent", makeManifest("RequiredDependent"));
    manifests.at("A").loadBefore.emplace().emplace(dependency("B"));
    manifests.at("B").loadBefore.emplace().emplace(dependency("A"));
    manifests.at("RequiredDependent").dependencies.emplace().emplace(dependency("A"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.rejected.at("A").kind, ModLoadIssueKind::DependencyCycle);
    EXPECT_EQ(plan.rejected.at("B").kind, ModLoadIssueKind::DependencyCycle);
    EXPECT_EQ(plan.rejected.at("RequiredDependent").kind, ModLoadIssueKind::DependencyUnavailable);
    EXPECT_EQ(plan.order, (std::vector<std::string>{"Independent"}));
}

TEST(ModLoadPlannerTest, DiagnosesRequiredOptionalAndOrderingCycles) {
    DenseMap<std::string, Manifest> manifests;
    for (std::string_view name : {"HardA", "HardB", "OptionalA", "OptionalB", "BeforeA", "BeforeB", "Independent"}) {
        manifests.emplace(std::string{name}, makeManifest(std::string{name}));
    }
    manifests.at("HardA").dependencies.emplace().emplace(dependency("HardB"));
    manifests.at("HardB").dependencies.emplace().emplace(dependency("HardA"));
    manifests.at("OptionalA").optionalDependencies.emplace().emplace(dependency("OptionalB"));
    manifests.at("OptionalB").optionalDependencies.emplace().emplace(dependency("OptionalA"));
    manifests.at("BeforeA").loadBefore.emplace().emplace(dependency("BeforeB"));
    manifests.at("BeforeB").loadBefore.emplace().emplace(dependency("BeforeA"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    for (std::string_view name : {"HardA", "HardB", "OptionalA", "OptionalB", "BeforeA", "BeforeB"}) {
        ASSERT_TRUE(plan.rejected.contains(name)) << name;
        EXPECT_EQ(plan.rejected.at(name).kind, ModLoadIssueKind::DependencyCycle) << name;
    }
    EXPECT_EQ(plan.order, (std::vector<std::string>{"Independent"}));
}

TEST(ModLoadPlannerTest, ProducesDeterministicOrder) {
    DenseMap<std::string, Manifest> manifests;
    manifests.emplace("Zulu", makeManifest("Zulu"));
    manifests.emplace("Alpha", makeManifest("Alpha"));
    manifests.emplace("Mike", makeManifest("Mike"));

    auto plan = ModLoadPlanner::resolve(manifests, false);

    EXPECT_EQ(plan.order, (std::vector<std::string>{"Alpha", "Mike", "Zulu"}));
}

} // namespace ll::mod::test
