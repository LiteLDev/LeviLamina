#include "gtest/gtest.h"

#include <algorithm>
#include <array>
#include <filesystem>
#include <fstream>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>
#include <unordered_set>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/mod/ModRegistrar.h"

#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/ServerCommandOrigin.h"
#include "mc/world/level/Level.h"

#include "nlohmann/json.hpp"

namespace ll::mod {
namespace {

constexpr std::string_view TestModType       = "ll-test-lifecycle";
constexpr std::string_view ScriptTestModType = "ll-test-script";

constexpr std::string_view LoadBeforeTarget = "LLTestLoadBeforeTarget";
constexpr std::string_view LoadBeforeSource = "LLTestLoadBeforeSource";
constexpr std::string_view Provider         = "LLTestProvider";
constexpr std::string_view RequiredConsumer = "LLTestRequiredConsumer";
constexpr std::string_view OptionalConsumer = "LLTestOptionalConsumer";
constexpr std::string_view LateProvider     = "LLTestLateProvider";
constexpr std::string_view LateConsumer     = "LLTestLateConsumer";
constexpr std::string_view MissingProvider  = "LLTestMissingProvider";
constexpr std::string_view MissingConsumer  = "LLTestMissingConsumer";
constexpr std::string_view LoadFailure      = "LLTestLoadFailure";
constexpr std::string_view UnloadFailure    = "LLTestUnloadFailure";
constexpr std::string_view ConflictSource   = "LLTestConflictSource";
constexpr std::string_view ConflictTarget   = "LLTestConflictTarget";
constexpr std::string_view ExistingTarget   = "LLTestExistingTarget";
constexpr std::string_view ConflictConsumer = "LLTestConflictConsumer";
constexpr std::string_view ClientOnly       = "LLTestClientOnly";
constexpr std::string_view DynamicConsumer  = "LLTestDynamicAConsumer";
constexpr std::string_view DynamicProvider  = "LLTestDynamicScriptProvider";
constexpr std::string_view DynamicLoader    = "LLTestDynamicZLoader";
constexpr std::string_view CascadeProvider  = "LLTestCascadeProvider";
constexpr std::string_view CascadeBranchB   = "LLTestCascadeBranchB";
constexpr std::string_view CascadeBranchC   = "LLTestCascadeBranchC";
constexpr std::string_view CascadeConsumer  = "LLTestCascadeConsumer";

constexpr std::array TestModNames{
    LoadBeforeTarget, LoadBeforeSource, Provider,         RequiredConsumer, OptionalConsumer, LateProvider,
    LateConsumer,     MissingProvider,  MissingConsumer,  LoadFailure,      UnloadFailure,    ConflictSource,
    ConflictTarget,   ExistingTarget,   ConflictConsumer, ClientOnly,       DynamicConsumer,  DynamicProvider,
    DynamicLoader,    CascadeProvider,  CascadeBranchB,   CascadeBranchC,   CascadeConsumer,
};

class TestMod final : public Mod {
public:
    using Mod::Mod;

    Expected<> load() noexcept { return onLoad(); }
    Expected<> unload() noexcept { return onUnload(); }
};

class TestModManager final : public ModManager {
    std::unordered_set<std::string>       loadFailures;
    std::unordered_set<std::string>       unloadFailures;
    std::function<bool(std::string_view)> loadCallback;

public:
    explicit TestModManager(std::string_view type = TestModType, std::filesystem::path loadDirectory = {})
    : ModManager(type, std::move(loadDirectory)) {}
    ~TestModManager() override = default;

    void failLoad(std::string_view name) { loadFailures.emplace(name); }
    void allowLoad(std::string_view name) { loadFailures.erase(std::string{name}); }
    void failUnload(std::string_view name) { unloadFailures.emplace(name); }
    void allowUnload(std::string_view name) { unloadFailures.erase(std::string{name}); }
    void setLoadCallback(std::function<bool(std::string_view)> callback) { loadCallback = std::move(callback); }

    void allowAll() {
        loadFailures.clear();
        unloadFailures.clear();
    }

protected:
    Expected<> load(Manifest manifest) override {
        auto        guard = lock();
        std::string name  = manifest.name;
        if (loadFailures.contains(name)) {
            return makeStringError("injected load failure");
        }

        auto mod = std::make_shared<TestMod>(std::move(manifest), getLoadDirectory());
        if (loadCallback) {
            mod->onLoad([this](Mod& loaded) { return loadCallback(loaded.getName()); });
        }
        return mod->load().transform([&, this] { addMod(name, mod); });
    }

    Expected<> unload(std::string_view name) override {
        auto guard = lock();
        if (unloadFailures.contains(std::string{name})) {
            return makeStringError("injected unload failure");
        }

        auto mod = getMod(name);
        if (!mod) {
            return makeStringError("test mod not found");
        }
        return std::static_pointer_cast<TestMod>(mod)->unload().transform([&, this] { eraseMod(name); });
    }
};

nlohmann::json dependency(std::string_view name, std::string_view version = {}) {
    nlohmann::json result{
        {"name", name}
    };
    if (!version.empty()) {
        result["version"] = version;
    }
    return result;
}

CommandOutput executeLlCommand(std::string_view commandLine) {
    auto&               registrar = command::CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);
    return registrar.executeCommand(commandLine, origin);
}

class ModRegistrarLifecycleTest : public ::testing::Test {
protected:
    std::shared_ptr<TestModManager> manager;
    bool                            managerRegistered{};

    static std::filesystem::path modPath(std::string_view name) { return getModsRoot() / std::string{name}; }

    static std::filesystem::path scriptModsRoot() { return getModsRoot().parent_path() / "ll_test_plugins"; }

    static std::filesystem::path packagePath(std::filesystem::path const& root, std::string_view name) {
        auto            package = root / std::string{name};
        std::error_code ec;
        if (auto canonical = std::filesystem::canonical(package, ec); !ec) {
            return canonical;
        }
        return package.lexically_normal();
    }

    static void removeTestManifests() {
        for (auto const name : TestModNames) {
            std::error_code ec;
            std::filesystem::remove_all(modPath(name), ec);
            std::filesystem::remove_all(scriptModsRoot() / name, ec);
            if (scriptModsRoot().empty()) {
                std::filesystem::remove_all(scriptModsRoot(), ec);
            }
        }
    }

    static void writeManifestTo(
        std::filesystem::path const& root,
        std::string_view             name,
        std::string_view             type,
        nlohmann::json               fields  = nlohmann::json::object(),
        std::string_view             version = "1.2.3"
    ) {
        auto path = root / name;
        std::filesystem::create_directories(path);

        nlohmann::json manifest{
            {    "name",     name},
            {   "entry", "unused"},
            {    "type",     type},
            {"platform", "server"},
            { "version",  version},
        };
        for (auto const& [key, value] : fields.items()) {
            manifest[key] = value;
        }

        std::ofstream output(path / "manifest.json", std::ios::binary | std::ios::trunc);
        output << manifest.dump(2);
        if (!output) {
            throw std::runtime_error("failed to write test manifest");
        }
    }

    static void writeManifest(
        std::string_view name,
        nlohmann::json   fields  = nlohmann::json::object(),
        std::string_view version = "1.2.3"
    ) {
        writeManifestTo(getModsRoot(), name, TestModType, std::move(fields), version);
    }

    void SetUp() override {
        removeTestManifests();
        auto& registry = ModManagerRegistry::getInstance();
        ASSERT_FALSE(registry.hasManager(TestModType));
        ASSERT_FALSE(registry.hasManager(ScriptTestModType));
        manager = std::make_shared<TestModManager>();
        ASSERT_TRUE(registry.addManager(manager));
        managerRegistered = true;
    }

    void TearDown() override {
        if (!managerRegistered) {
            removeTestManifests();
            return;
        }

        manager->allowAll();
        auto& registry  = ModManagerRegistry::getInstance();
        auto& registrar = ModRegistrar::getInstance();

        for (size_t pass = 0; pass < TestModNames.size(); ++pass) {
            bool unloaded{};
            for (auto const name : TestModNames) {
                if (registry.hasMod(name) && registrar.unloadMod(name)) {
                    unloaded = true;
                }
            }
            if (!unloaded) {
                break;
            }
        }

        registry.eraseManager(TestModType);
        registry.eraseManager(ScriptTestModType);
        std::vector<std::string> enumValues;
        enumValues.reserve(TestModNames.size());
        for (auto const name : TestModNames) {
            enumValues.emplace_back(name);
        }
        command::CommandRegistrar::getServerInstance().removeSoftEnumValues(
            std::string{modsEnumName},
            std::move(enumValues)
        );
        removeTestManifests();
    }
};

TEST_F(ModRegistrarLifecycleTest, LoadBeforeDoesNotProtectLifecycleAndCommandsRemainUsable) {
    writeManifest(LoadBeforeTarget);
    writeManifest(
        LoadBeforeSource,
        {
            {"loadBefore", nlohmann::json::array({dependency(LoadBeforeTarget, ">=1.0.0")})}
    }
    );

    auto output = executeLlCommand("ll load LLTestLoadBeforeTarget");
    ASSERT_GT(output.mSuccessCount, 0);
    output = executeLlCommand("ll load LLTestLoadBeforeSource");
    ASSERT_GT(output.mSuccessCount, 0);

    auto const order          = ModRegistrar::getInstance().getSortedModNames();
    auto const targetPosition = std::ranges::find(order, LoadBeforeTarget);
    auto const sourcePosition = std::ranges::find(order, LoadBeforeSource);
    ASSERT_NE(targetPosition, order.end());
    ASSERT_NE(sourcePosition, order.end());
    EXPECT_LT(targetPosition, sourcePosition);

    output = executeLlCommand("ll reload LLTestLoadBeforeSource");
    EXPECT_GT(output.mSuccessCount, 0);
    output = executeLlCommand("ll disable LLTestLoadBeforeTarget");
    EXPECT_GT(output.mSuccessCount, 0);
    EXPECT_TRUE(ModManagerRegistry::getInstance().getMod(LoadBeforeTarget)->isDisabled());
    output = executeLlCommand("ll enable LLTestLoadBeforeTarget");
    EXPECT_GT(output.mSuccessCount, 0);
    EXPECT_TRUE(ModManagerRegistry::getInstance().getMod(LoadBeforeTarget)->isEnabled());

    output = executeLlCommand("ll unload LLTestLoadBeforeTarget");
    EXPECT_GT(output.mSuccessCount, 0);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(LoadBeforeTarget));
    EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(LoadBeforeSource));

    output = executeLlCommand("ll unload LLTestLoadBeforeSource");
    EXPECT_GT(output.mSuccessCount, 0);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(LoadBeforeSource));
}

TEST_F(ModRegistrarLifecycleTest, BoundRequiredAndOptionalDependenciesProtectLifecycle) {
    writeManifest(Provider);
    writeManifest(
        RequiredConsumer,
        {
            {"dependencies", nlohmann::json::array({dependency(Provider, ">=1.0.0 <2.0.0")})}
    }
    );
    writeManifest(
        OptionalConsumer,
        {
            {"optionalDependencies", nlohmann::json::array({dependency(Provider, "^1.0.0")})}
    }
    );

    auto& registrar = ModRegistrar::getInstance();
    auto  result    = registrar.loadMod(Provider);
    ASSERT_TRUE(result) << result.error().message();
    result = registrar.loadMod(RequiredConsumer);
    ASSERT_TRUE(result) << result.error().message();
    result = registrar.loadMod(OptionalConsumer);
    ASSERT_TRUE(result) << result.error().message();

    EXPECT_FALSE(registrar.disableMod(Provider));
    EXPECT_FALSE(registrar.unloadMod(Provider));

    EXPECT_TRUE(registrar.disableMod(RequiredConsumer));
    EXPECT_TRUE(registrar.disableMod(OptionalConsumer));
    EXPECT_TRUE(registrar.disableMod(Provider));
    EXPECT_FALSE(registrar.unloadMod(Provider));

    EXPECT_TRUE(registrar.enableMod(Provider));
    EXPECT_TRUE(registrar.enableMod(RequiredConsumer));
    EXPECT_TRUE(registrar.enableMod(OptionalConsumer));
    EXPECT_TRUE(registrar.unloadMod(RequiredConsumer));
    EXPECT_FALSE(registrar.unloadMod(Provider));
    EXPECT_TRUE(registrar.unloadMod(OptionalConsumer));
    EXPECT_TRUE(registrar.unloadMod(Provider));
}

TEST_F(ModRegistrarLifecycleTest, RescansNewManagerBeforeLoadingCrossTypeDependents) {
    writeManifest(DynamicLoader);
    writeManifest(
        DynamicConsumer,
        {
            {"dependencies", nlohmann::json::array({dependency(DynamicProvider)})}
    }
    );
    writeManifestTo(scriptModsRoot(), DynamicProvider, ScriptTestModType);

    auto&                           registry = ModManagerRegistry::getInstance();
    std::shared_ptr<TestModManager> scriptManager;
    std::vector<std::string>        loadOrder;
    manager->setLoadCallback([&](std::string_view name) {
        loadOrder.emplace_back(name);
        if (name == DynamicLoader) {
            scriptManager = std::make_shared<TestModManager>(ScriptTestModType, scriptModsRoot());
            scriptManager->setLoadCallback([&](std::string_view scriptName) {
                loadOrder.emplace_back(scriptName);
                return true;
            });
            return registry.addManager(scriptManager);
        }
        if (name == DynamicConsumer) {
            return registry.hasMod(DynamicProvider);
        }
        return true;
    });

    ModRegistrar::getInstance().loadAllMods();
    manager->setLoadCallback({});
    if (scriptManager) {
        scriptManager->setLoadCallback({});
    }

    ASSERT_TRUE(registry.hasMod(DynamicLoader));
    ASSERT_TRUE(registry.hasMod(DynamicProvider));
    ASSERT_TRUE(registry.hasMod(DynamicConsumer));
    auto const providerPath = packagePath(scriptModsRoot(), DynamicProvider);
    EXPECT_EQ(registry.getMod(DynamicProvider)->getModDir(), providerPath);
    EXPECT_EQ(
        loadOrder,
        (std::vector<std::string>{
            std::string{DynamicLoader},
            std::string{DynamicProvider},
            std::string{DynamicConsumer},
        })
    );
}

TEST_F(ModRegistrarLifecycleTest, CascadeLoadsDependentsWithSharedDependencies) {
    writeManifest(CascadeProvider);
    writeManifest(
        CascadeBranchB,
        {
            {"dependencies", nlohmann::json::array({dependency(CascadeProvider)})}
    }
    );
    writeManifest(
        CascadeBranchC,
        {
            {"dependencies", nlohmann::json::array({dependency(CascadeProvider)})}
    }
    );
    writeManifest(
        CascadeConsumer,
        {
            {"dependencies", nlohmann::json::array({dependency(CascadeBranchB), dependency(CascadeBranchC)})}
    }
    );

    auto& registrar = ModRegistrar::getInstance();
    auto  output    = executeLlCommand("ll load LLTestCascadeProvider cascade");
    ASSERT_GT(output.mSuccessCount, 0);

    auto const order = registrar.getSortedModNames();
    for (auto const name : {CascadeProvider, CascadeBranchB, CascadeBranchC, CascadeConsumer}) {
        EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(name));
        EXPECT_NE(std::ranges::find(order, name), order.end());
    }

    auto const providerPosition = std::ranges::find(order, CascadeProvider);
    auto const branchBPosition  = std::ranges::find(order, CascadeBranchB);
    auto const branchCPosition  = std::ranges::find(order, CascadeBranchC);
    auto const consumerPosition = std::ranges::find(order, CascadeConsumer);
    EXPECT_LT(providerPosition, branchBPosition);
    EXPECT_LT(providerPosition, branchCPosition);
    EXPECT_LT(branchBPosition, consumerPosition);
    EXPECT_LT(branchCPosition, consumerPosition);
}

TEST_F(ModRegistrarLifecycleTest, CascadeReloadAndUnloadHandleMissingLifecycleCallbacks) {
    writeManifest(Provider);
    writeManifest(
        RequiredConsumer,
        {
            {"dependencies", nlohmann::json::array({dependency(Provider)})}
    }
    );

    auto& registrar = ModRegistrar::getInstance();
    auto  result    = registrar.loadMod(Provider);
    ASSERT_TRUE(result) << result.error().message();
    result = registrar.loadMod(RequiredConsumer);
    ASSERT_TRUE(result) << result.error().message();

    auto const loadedOrder = registrar.getSortedModNames();
    auto       p           = std::ranges::find(loadedOrder, Provider);
    auto       c           = std::ranges::find(loadedOrder, RequiredConsumer);
    EXPECT_NE(p, loadedOrder.end());
    EXPECT_NE(c, loadedOrder.end());
    EXPECT_LT(p, c);

    // TestMod does not register disable or unload callbacks.
    EXPECT_TRUE(registrar.reloadMod(Provider, true));
    EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(Provider));
    EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(RequiredConsumer));
    EXPECT_EQ(registrar.getSortedModNames(), loadedOrder);

    EXPECT_TRUE(registrar.unloadMod(Provider, true));
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(Provider));
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(RequiredConsumer));
}

TEST_F(ModRegistrarLifecycleTest, OptionalDependencyFailuresDoNotBlockOrRetroactivelyBind) {
    writeManifest(
        LateConsumer,
        {
            {"optionalDependencies", nlohmann::json::array({dependency(LateProvider, "^1.0.0")})}
    }
    );
    writeManifest(LateProvider);

    auto& registrar = ModRegistrar::getInstance();
    auto  result    = registrar.loadMod(LateConsumer);
    ASSERT_TRUE(result) << result.error().message();

    auto const beforeFailure = registrar.getSortedModNames();
    manager->failLoad(LateProvider);
    result = registrar.loadMod(LateProvider);
    EXPECT_FALSE(result);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(LateProvider));
    EXPECT_EQ(registrar.getSortedModNames(), beforeFailure);
    EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(LateConsumer));

    manager->allowLoad(LateProvider);
    result = registrar.loadMod(LateProvider);
    ASSERT_TRUE(result) << result.error().message();
    EXPECT_TRUE(registrar.unloadMod(LateProvider));
    EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(LateConsumer));
    EXPECT_TRUE(registrar.unloadMod(LateConsumer));
}

TEST_F(ModRegistrarLifecycleTest, DynamicValidationAndRegistryFailuresAreTransactional) {
    writeManifest(MissingProvider);
    writeManifest(
        MissingConsumer,
        {
            {"dependencies", nlohmann::json::array({dependency(MissingProvider, ">=1.0.0")})}
    }
    );
    writeManifest(LoadFailure);
    writeManifest(UnloadFailure, {}, "1.7.3+test.1");
    writeManifest(
        ConflictSource,
        {
            {"conflicts", nlohmann::json::array({dependency(ConflictTarget, ">=1.0.0")})}
    }
    );
    writeManifest(ConflictTarget);
    writeManifest(ExistingTarget);
    writeManifest(
        ConflictConsumer,
        {
            {"conflicts", nlohmann::json::array({dependency(ExistingTarget, "=1.2.3")})}
    }
    );
    writeManifest(
        ClientOnly,
        {
            {"platform", "client"}
    }
    );

    auto& registrar = ModRegistrar::getInstance();
    auto  baseline  = registrar.getSortedModNames();
    auto  result    = registrar.loadMod(MissingConsumer);
    EXPECT_FALSE(result);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(MissingProvider));
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(MissingConsumer));
    EXPECT_EQ(registrar.getSortedModNames(), baseline);

    manager->failLoad(LoadFailure);
    result = registrar.loadMod(LoadFailure);
    EXPECT_FALSE(result);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(LoadFailure));
    EXPECT_EQ(registrar.getSortedModNames(), baseline);

    result = registrar.loadMod(UnloadFailure);
    ASSERT_TRUE(result) << result.error().message();
    auto const loadedOrder = registrar.getSortedModNames();
    auto const loadedMod   = ModManagerRegistry::getInstance().getMod(UnloadFailure);
    ASSERT_NE(loadedMod, nullptr);
    EXPECT_EQ(loadedMod->getManifest().name, UnloadFailure);
    ASSERT_TRUE(loadedMod->getManifest().version);
    EXPECT_TRUE(loadedMod->getManifest().version->isIdenticalTo(data::Version{"1.7.3+test.1"}));

    manager->failUnload(UnloadFailure);
    result = registrar.unloadMod(UnloadFailure);
    EXPECT_FALSE(result);
    EXPECT_TRUE(ModManagerRegistry::getInstance().hasMod(UnloadFailure));
    EXPECT_EQ(registrar.getSortedModNames(), loadedOrder);
    manager->allowUnload(UnloadFailure);
    EXPECT_TRUE(registrar.unloadMod(UnloadFailure));

    result = registrar.loadMod(ConflictSource);
    ASSERT_TRUE(result) << result.error().message();
    baseline = registrar.getSortedModNames();
    result   = registrar.loadMod(ConflictTarget);
    EXPECT_FALSE(result);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(ConflictTarget));
    EXPECT_EQ(registrar.getSortedModNames(), baseline);

    result = registrar.loadMod(ExistingTarget);
    ASSERT_TRUE(result) << result.error().message();
    baseline = registrar.getSortedModNames();
    result   = registrar.loadMod(ConflictConsumer);
    EXPECT_FALSE(result);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(ConflictConsumer));
    EXPECT_EQ(registrar.getSortedModNames(), baseline);

    result = registrar.loadMod(ClientOnly);
    EXPECT_FALSE(result);
    EXPECT_FALSE(ModManagerRegistry::getInstance().hasMod(ClientOnly));
    EXPECT_EQ(registrar.getSortedModNames(), baseline);
}

} // namespace
} // namespace ll::mod
