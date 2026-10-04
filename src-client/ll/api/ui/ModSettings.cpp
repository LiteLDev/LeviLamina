#include "ll/api/ui/ModSettings.h"

#include <algorithm>
#include <chrono>
#include <cstring>
#include <deque>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>

#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Signature.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/service/TargetedBedrock.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/input/InputSettingsHandler.h"
#include "mc/client/input/KeyboardRemappingLayout.h"
#include "mc/client/input/Keymapping.h"
#include "mc/client/input/RemappingLayout.h"
#include "mc/client/options/IOptionRegistry.h"
#include "mc/client/settings/ActionComponent.h"
#include "mc/client/settings/BooleanComponent.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/FactoryUtil.h"
#include "mc/client/settings/GroupInfoComponent.h"
#include "mc/client/settings/IActionDataProvider.h"
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/client/settings/IBuilderContext.h"
#include "mc/client/settings/INumberDataProvider.h"
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/IStringDataProvider.h"
#include "mc/client/settings/InputBindingGroup.h"
#include "mc/client/settings/InputBindingGroupData.h"
#include "mc/client/settings/InputControlsSettingsHelper.h"
#include "mc/client/settings/KeyboardAndMouseSettingsDetails.h"
#include "mc/client/settings/Registry.h"
#include "mc/client/settings/RegistryBuilder.h"
#include "mc/client/settings/TextComponent.h"
#include "mc/common/GameVersion.h"
#include "mc/common/Globals.h"
#include "mc/locale/I18n.h"
#include "mc/options/option_types/BoolOption.h"
#include "mc/options/option_types/EnumOption.h"
#include "mc/options/option_types/InputModeFloatOption.h"
#include "mc/options/option_types/IntOption.h"
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#include "mc/options/option_types/OptionType.h"

#include "nlohmann/json.hpp"

namespace ll::ui {

namespace {

// Layout of the settings component variant (1.26.51): the component is stored inline at
// offset 0 and the variant discriminator at offset 0x3C8; total size 0x3D0. Components
// are always constructed through the game's own constructors, so only these two constants
// are needed. Version specific: re-check on game updates.
constexpr size_t kComponentStorageSize = 0x3D0;
constexpr size_t kComponentWhichOffset = 0x3C8;

enum ComponentWhich : uint8_t {
    ActionWhich    = 5,
    TextWhich      = 6,
    GroupInfoWhich = 7,
};

using ComponentVariant = std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>;
using ComponentList = std::vector<std::unique_ptr<ComponentVariant>>;

// Constructs a settings component inside a variant allocated exactly like the game does
// (see SettingsTabsFactoryAnon::addTabGroup). The resulting pointer must only ever be
// moved into a component list; destroying it outside the game would run the wrong
// destructor.
template <typename T, typename... Args>
std::unique_ptr<ComponentVariant> makeComponent(ComponentWhich which, Args&&... args) {
    void* storage = ::operator new(kComponentStorageSize);
    new (storage) T(std::forward<Args>(args)...);
    reinterpret_cast<uint8_t*>(storage)[kComponentWhichOffset] = static_cast<uint8_t>(which);
    return std::unique_ptr<ComponentVariant>(static_cast<ComponentVariant*>(storage));
}

constexpr std::string_view kModsTabId    = "ll.mods";
constexpr std::string_view kTabsGroupKey = "settings-tabs-groups";

std::string modGroupId(std::string_view modName) { return "ll.mods." + std::string{modName}; }

std::string entryId(std::string_view modName, std::string_view key) {
    return "ll.mod." + std::string{modName} + "." + std::string{key};
}

std::string entrySaveTag(std::string_view modName, std::string_view key) {
    return "ll_mod_" + std::string{modName} + "_" + std::string{key};
}

// ---- temporary signature-resolved symbols (1.26.51), pending mcapi whitelist ----
// See docs/design/settings_registry.md section 7.5 for the symbol list these stand in for.

using BuilderHeadCtorFn = void (*)(void* builder, std::string_view id, std::string_view name);
using BuilderBuildFn    = void (*)(void* builder, std::optional<std::unique_ptr<ComponentVariant>>* result);
using BuilderDtorFn     = void (*)(void* builder);

void* resolveCallSiteTarget(ll::memory::SignatureView sig) {
    auto* site = static_cast<uint8_t*>(sig.resolve(true));
    if (site == nullptr || *site != 0xE8) {
        return nullptr;
    }
    return site + 5 + *reinterpret_cast<int32_t*>(site + 1);
}

BuilderHeadCtorFn builderHeadCtor() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<BuilderHeadCtorFn>(
            ("55 41 57 41 56 41 55 41 54 56 57 53 48 83 EC 58 48 8D 6C 24 ? 48 C7 45 ? ? ? ? ? 0F 57 C0 0F 11 41 ? 0F "
             "11 01"_sig)
                .resolve(true)
        );
    }();
    return fn;
}

BuilderBuildFn stringComponentBuild() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<BuilderBuildFn>(
            ("55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC 68 02 00 00 48 8D AC 24 ? ? ? ? 0F 29 B5 ? ? ? ? 48 C7 85 "
             "? ? ? ? ? ? ? ? 49 89 D5 48 8B B1"_sig)
                .resolve(true)
        );
    }();
    return fn;
}

BuilderDtorFn stringComponentBuilderDtor() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<BuilderDtorFn>(
            ("41 56 56 57 53 48 83 EC 28 48 89 CE 48 8B B9 ? ? ? ? 48 85 FF 0F 84 ? ? ? ? 48 8D 9E ? ? ? ? 4C 8B B6 "
             "? ? ? ? 4C 39 F7 75 ? EB ? 66 66 66 66 66 66 2E 0F 1F 84 00 ? ? ? ? 48 83 C7 40 4C 39 F7 74 ? 48 8B 4F "
             "? 48 85 C9 74 ? 48 39 CF 0F 95 C2 48 8B 01 48 8B 40 ? FF 15 ? ? ? ? 48 C7 47 ? ? ? ? ? EB ? 48 8B 3B 48 "
             "8B 96 ? ? ? ? 48 29 FA 48 81 FA 00 10 00 00 72 ? 48 8B 47 ? 48 83 C7 F8 48 29 C7 48 83 FF 20 0F 83"_sig)
                .resolve(true)
        );
    }();
    return fn;
}

BuilderBuildFn bannerComponentBuild() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<BuilderBuildFn>(
            ("55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC B8 02 00 00 48 8D AC 24 ? ? ? ? 0F 29 B5 ? ? ? ? 48 C7 85 "
             "? ? ? ? ? ? ? ? 48 89 CF 48 83 79"_sig)
                .resolve(true)
        );
    }();
    return fn;
}

BuilderDtorFn bannerComponentBuilderDtor() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<BuilderDtorFn>(
            ("56 48 83 EC 30 48 89 CE 80 B9 ? ? ? ? ? 75 ? 48 8D 8E ? ? ? ? E8 ? ? ? ? 48 8B 8E ? ? ? ? 48 85 C9 74 "
             "? 48 8B 01"_sig)
                .resolve(true)
        );
    }();
    return fn;
}

BuilderBuildFn intNumberComponentBuild() {
    static auto fn = [] {
        using namespace ll::literals;
        // call-site signature: Builder<NumberComponent<int>>::build shares its prologue
        // with the float instantiation, so resolve through a call site instead.
        return static_cast<BuilderBuildFn>(
            resolveCallSiteTarget("E8 ? ? ? ? 4D 85 FF 48 8B B5 ? ? ? ? 74 ? 48 8B 85"_sig)
        );
    }();
    return fn;
}

BuilderDtorFn intNumberComponentBuilderDtor() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<BuilderDtorFn>(
            ("41 56 56 57 53 48 83 EC 28 48 89 CE 48 8B B9 ? ? ? ? 48 85 FF 0F 84 ? ? ? ? 48 8D 9E ? ? ? ? 4C 8B B6 "
             "? ? ? ? 4C 39 F7 75 ? EB ? 66 66 66 66 66 66 2E 0F 1F 84 00 ? ? ? ? 48 83 C7 40 4C 39 F7 74 ? 48 8B 4F "
             "? 48 85 C9 74 ? 48 39 CF 0F 95 C2 48 8B 01 48 8B 40 ? FF 15 ? ? ? ? 48 C7 47 ? ? ? ? ? EB ? 48 8B 3B 48 "
             "8B 96 ? ? ? ? 48 29 FA 48 81 FA 00 10 00 00 72 ? 48 8B 47 ? 48 83 C7 F8 48 29 C7 48 83 FF 20 73"_sig)
                .resolve(true)
        );
    }();
    return fn;
}

// Settings::DataProvider::createNumberDataProvider<int>(OptionID, IOptionRegistry&, int),
// resolved through a call site.
using CreateIntNumberProviderFn = void (*)(
    std::optional<std::unique_ptr<::Settings::INumberDataProvider<int>>>* result,
    ::OptionID,
    ::IOptionRegistry&,
    int
);

CreateIntNumberProviderFn createIntNumberProvider() {
    static auto fn = [] {
        using namespace ll::literals;
        return static_cast<CreateIntNumberProviderFn>(resolveCallSiteTarget(
            "E8 ? ? ? ? 48 89 F0 48 83 C4 20 5E C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC 48 8D 05 ? ? ? ? C3 CC CC "
            "CC CC CC CC CC CC 55 56 57 53 48 81 EC 98"_sig
        ));
    }();
    return fn;
}

// Layout of Settings::Builder<T> (1.26.51, from the per-T destructors; BaseBuilder head is
// 0x178 bytes): mId @0x00, mName @0x20, mDescription @0x40 (has_value @0x60).
// Tail offsets differ per component type:
//   Builder<StringComponent>:       unique_ptr<IStringDataProvider> @0x178,
//                                   optional<string> placeholder @0x180 (has_value @0x1A0)
//   Builder<BannerComponent>:       (all tail members optional; zeroed = static banner)
//   Builder<NumberComponent<int>>:  unique_ptr<INumberDataProvider<int>> @0x178
constexpr size_t kBuilderBufferSize     = 0x400;
constexpr size_t kBuilderHeadDescOffset = 0x40;
constexpr size_t kBuilderTailOffset     = 0x178;

// Runs a game's Settings::Builder<T> pipeline: shared BaseBuilder head constructor, custom
// tail initialization, then the game's build() and destructor. All heavy lifting
// (allocation, component constructor, subscriptions, variant packing) stays game-side.
template <typename F>
std::optional<std::unique_ptr<ComponentVariant>> buildWithGameBuilder(
    std::string_view                  id,
    std::string_view                  name,
    std::optional<std::string> const& description,
    BuilderBuildFn                    buildFn,
    BuilderDtorFn                     dtorFn,
    F&&                               tailInit
) {
    auto headCtor = builderHeadCtor();
    if (headCtor == nullptr || buildFn == nullptr || dtorFn == nullptr) {
        getLogger().warn("ModSettings: builder symbols not resolved for '{}'", id);
        return std::nullopt;
    }
    void* builder = ::operator new(kBuilderBufferSize);
    memset(builder, 0, kBuilderBufferSize);
    headCtor(builder, id, name);
    if (description.has_value()) {
        new (static_cast<char*>(builder) + kBuilderHeadDescOffset) std::string(*description);
        *(static_cast<uint8_t*>(builder) + kBuilderHeadDescOffset + 0x20) = 1;
    }
    tailInit(builder);
    std::optional<std::unique_ptr<ComponentVariant>> result;
    buildFn(builder, &result);
    dtorFn(builder);
    ::operator delete(builder);
    if (!result.has_value() || !result->get()) {
        getLogger().warn("ModSettings: builder produced no component for '{}'", id);
        return std::nullopt;
    }
    return result;
}

struct Entry {
    enum class Type { Toggle, Dropdown, IntSlider, FloatSlider, Button, TextInput, Text, Banner, Keybind };

    Type                       type;
    std::string                key;
    std::string                displayName;
    std::optional<std::string> description;

    bool                      boolValue = false;
    std::function<void(bool)> onToggle;
    std::vector<std::string>  valueNames;
    int                       intValue = 0;
    std::function<void(int)>  onDropdown;
    std::string               buttonLabel;
    std::function<void()>     onClick;

    int                        minInt     = 0;
    int                        maxInt     = 0;
    int                        intStep    = 1;
    float                      floatValue = 0;
    float                      minFloat   = 0;
    float                      maxFloat   = 0;
    float                      stepFloat  = 0;
    std::function<void(float)> onFloatSlider;

    std::string                      stringValue;
    std::optional<std::string>       placeholder;
    std::optional<int>               maxLength;
    std::function<void(std::string)> onTextInput;

    std::string              action;
    int                      defaultKey  = 0;
    int                      keyValue    = 0;
    size_t                   layoutIndex = ~size_t(0);
    bool                     showReset   = true;
    std::function<void(int)> onKeybind;

    int optionId = -1;
};

struct ModPage {
    std::string        modName;
    std::vector<Entry> entries;
    // deque: Subscription has no move constructor, so elements must never be relocated.
    std::deque<::Bedrock::PubSub::Subscription> subscriptions;
    nlohmann::json                              stored;
    std::filesystem::path                       storePath;
};

class ModSettingsManager;

// Backs text inputs with LeviLamina's own storage instead of an Option (no OptionID slot
// needed). Owned (and deleted) by the game together with the component.
class ModStringDataProvider : public ::Settings::IStringDataProvider {
    ModPage&    mPage;
    std::string mKey;

    Entry* entry() const {
        auto it =
            std::find_if(mPage.entries.begin(), mPage.entries.end(), [&](Entry const& e) { return e.key == mKey; });
        return it == mPage.entries.end() ? nullptr : &*it;
    }

public:
    ModStringDataProvider(ModPage& page, std::string key) : mPage(page), mKey(std::move(key)) {}

    std::string getValue() const override {
        if (auto* e = entry()) {
            return e->stringValue;
        }
        return {};
    }

    void setValue(std::string_view value) override;

    // The game-side defaults are not exported; apply-on-set makes them unnecessary.
    void commitValue() override {}

    bool flush() override { return true; }

    bool canModify() const override { return true; }
};

// Reads the component id out of a settings component variant. Component layout
// (1.26.51): vftable @0, mId (std::string) @8. Version specific: re-check on updates.
std::string_view componentIdOf(ComponentVariant const& component) {
    auto*  base = reinterpret_cast<char const*>(&component);
    size_t size = *reinterpret_cast<size_t const*>(base + 24);
    size_t res  = *reinterpret_cast<size_t const*>(base + 32);
    auto*  data = res >= 0x10 ? *reinterpret_cast<char* const*>(base + 8) : base + 8;
    return {data, size};
}

// Inserts the "Mods" tab after the given vanilla tab, or appends it when the anchor is
// absent. Anchor order encodes placement: in a world the "game" tab (世界) exists and comes
// right after core; pre-game there is no game tab, so the tab lands after core (可访问性).
void insertModsTab(ComponentList& tabs) {
    auto modsTab = makeComponent<Settings::GroupInfoComponent>(GroupInfoWhich, kModsTabId, "Mods", std::nullopt);
    for (auto anchor : {"settings-game-group", "settings-realms-group", "settings-core-group"}) {
        for (size_t i = 0; i < tabs.size(); ++i) {
            if (componentIdOf(*tabs[i]) == anchor) {
                tabs.insert(tabs.begin() + static_cast<ptrdiff_t>(i) + 1, std::move(modsTab));
                return;
            }
        }
    }
    tabs.push_back(std::move(modsTab));
}

class ModSettingsManager {
public:
    std::mutex                                                    mMutex;
    std::shared_ptr<::Settings::RegistryBuilder::IBuilderContext> mBuilderContext;

    static ModSettingsManager& getInstance() {
        static ModSettingsManager instance;
        return instance;
    }

    // Called from the KeyboardRemappingLayout::$setMappingWithRawInput hook.
    void onKeyRemapped(std::string const& action) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        bool changed = false;
        {
            std::lock_guard lock{mMutex};
            auto            layout = client->getOptions().getCurrentKeyboardRemapping();
            if (!layout) {
                return;
            }
            for (auto& [mod, page] : mPages) {
                for (auto& entry : page->entries) {
                    if (entry.type != Entry::Type::Keybind || entry.action != action) {
                        continue;
                    }
                    // 只要绑定动作落在我们的条目上就刷新时间戳（即使键值没变）——
                    // 重新捕获的抑制窗口依赖它，绑定同一键时值不变但循环仍会发生。
                    mLastKeybindChange = std::chrono::steady_clock::now();
                    auto& keys         = layout->getKeymappingByAction(entry.action).mKeys.get();
                    int   current      = keys.empty() ? entry.defaultKey : keys.front();
                    if (current == entry.keyValue) {
                        continue;
                    }
                    entry.keyValue          = current;
                    page->stored[entry.key] = current;
                    saveStored(*page);
                    if (entry.onKeybind) {
                        entry.onKeybind(current);
                    }
                    changed = true;
                }
            }
        }
        // Apply the remap the way vanilla does: refreshClientInputConfig reruns
        // ClientInputHandler::onConfigChanged, which rebuilds the input mappings from the
        // live layout (and thereby re-reads the new binding).
        if (changed) {
            std::shared_ptr<::Settings::RegistryBuilder::IBuilderContext> context;
            {
                std::lock_guard lock{mMutex};
                context = mBuilderContext;
            }
            if (context) {
                context->refreshClientInputConfig();
            }
        }
    }

    // OreUI buttons fire on release: rebinding with a mouse click on the row's button binds
    // on press, then the release clicks the button again and restarts capture. The vanilla
    // keyboard page avoids this by disabling the row while capturing (front-end logic the
    // generic settings page does not have), so suppress capture starts in a short window
    // after a successful rebind of one of our entries.
    bool shouldSuppressCaptureStart() {
        std::lock_guard lock{mMutex};
        return std::chrono::steady_clock::now() - mLastKeybindChange < std::chrono::milliseconds(500);
    }

    // Drops our keybind actions from a vanilla keyboard-settings index list so they only
    // show up under the Mods tab. Indices are ordinals among remappable keymappings
    // (see RemappingLayout::defaultKeyAtIndex).
    void filterVanillaKeysIndex(::KeyboardRemappingLayout const& layout, std::vector<uint64>& indices) {
        std::lock_guard lock{mMutex};
        std::erase_if(indices, [&](uint64 ordinal) {
            uint64 current = 0;
            for (auto& keymapping : layout.mKeymappings.get()) {
                if (!keymapping.mAllowRemap) {
                    continue;
                }
                if (current == ordinal) {
                    auto const& action = keymapping.mAction.get();
                    for (auto& [mod, page] : mPages) {
                        for (auto& entry : page->entries) {
                            if (entry.type == Entry::Type::Keybind && entry.action == action) {
                                return true;
                            }
                        }
                    }
                    return false;
                }
                ++current;
            }
            return false;
        });
    }

    ModPage& pageForMod(::ll::mod::Mod const& mod) {
        std::call_once(mHookOnce, [] { installHook(); });
        ModPage* page  = nullptr;
        bool     added = false;
        {
            std::lock_guard lock{mMutex};
            auto            it = mPages.find(&mod);
            if (it == mPages.end()) {
                auto newPage       = std::make_unique<ModPage>();
                newPage->modName   = mod.getName();
                newPage->storePath = mod.getDataDir() / "settings.json";
                if (auto content = file_utils::readFile(newPage->storePath)) {
                    newPage->stored = nlohmann::json::parse(*content, nullptr, false);
                }
                if (!newPage->stored.is_object()) {
                    newPage->stored = nlohmann::json::object();
                }
                it    = mPages.emplace(&mod, std::move(newPage)).first;
                added = true;
            }
            page = it->second.get();
        }
        if (added) {
            onPageAdded(*page);
        }
        return *page;
    }

    // Refreshes a live registry so entries added after the settings screen was built
    // still show up without waiting for a rebuild.
    void onEntryAdded(ModPage& page) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto registry = client->getSettingsRegistry();
        if (!registry) {
            return;
        }
        std::lock_guard lock{mMutex};
        apply(*registry);
        auto& materialized = static_cast<Settings::Registry&>(*registry).mSettingsMap.get();
        auto  groupId      = modGroupId(page.modName);
        auto  it           = materialized.find(groupId);
        if (it == materialized.end() || page.entries.empty()) {
            return;
        }
        if (appendEntry(page, page.entries.back(), it->second)) {
            static_cast<Settings::Registry&>(*registry).refresh(groupId);
        }
    }

    // Injects the "Mods" tab and one group factory per mod into a (re)built registry.
    // Must be called with mMutex held.
    void apply(Settings::IRegistry& iregistry) {
        auto& registry = static_cast<Settings::Registry&>(iregistry);
        if (mAppliedRegistries.insert(&registry).second) {
            auto& factories = registry.mSettingsFactories.get();
            factories.emplace(std::string{kModsTabId}, [] {
                ComponentList components;
                for (auto& page : getInstance().mPages) {
                    components.push_back(
                        makeComponent<Settings::GroupInfoComponent>(
                            GroupInfoWhich,
                            modGroupId(page.second->modName),
                            page.second->modName,
                            std::nullopt
                        )
                    );
                }
                return components;
            });
            if (auto it = factories.find(std::string{kTabsGroupKey}); it != factories.end()) {
                Settings::Registry::SettingsFactory oldFactory = std::move(it->second);
                it->second                                     = [oldFactory = std::move(oldFactory)]() mutable {
                    auto components = oldFactory();
                    insertModsTab(components);
                    return components;
                };
            }
            auto& materialized = registry.mSettingsMap.get();
            if (auto it = materialized.find(std::string{kTabsGroupKey}); it != materialized.end()) {
                insertModsTab(it->second);
                registry.refresh(kTabsGroupKey);
            }
        }
        auto& factories = registry.mSettingsFactories.get();
        for (auto& [mod, page] : mPages) {
            auto groupId = modGroupId(page->modName);
            if (!factories.contains(groupId)) {
                auto* pagePtr = page.get();
                factories.emplace(std::move(groupId), [pagePtr] { return getInstance().buildPage(*pagePtr); });
            }
        }
    }

private:
    std::unordered_map<::ll::mod::Mod const*, std::unique_ptr<ModPage>> mPages;
    std::unordered_set<void*>                                           mAppliedRegistries;
    // EnumOption name maps are held by const reference inside the option; keep them alive
    // at a stable address for the whole session.
    std::deque<std::unordered_map<int, std::string>> mEnumNameMaps;
    std::once_flag                                   mHookOnce;
    int                                              mNextOptionId = 821;
    std::chrono::steady_clock::time_point            mLastKeybindChange{};

    static void installHook();

    int allocateOptionId(::IOptionRegistry& options) {
        while (mNextOptionId >= 0) {
            int id = mNextOptionId--;
            if (!options.getIfValid(::OptionID{id}).has_value()) {
                return id;
            }
        }
        return -1;
    }

    // Creates the backing Option objects, restores stored values and subscribes observers.
    // Idempotent; runs lazily because the option registry may not exist at declaration time.
    void ensureOptions(ModPage& page, ::IOptionRegistry& options) {
        for (auto& entry : page.entries) {
            if (entry.type == Entry::Type::Keybind) {
                ensureKeybind(page, entry, options);
                continue;
            }
            bool needsOption = entry.type == Entry::Type::Toggle || entry.type == Entry::Type::Dropdown
                            || entry.type == Entry::Type::IntSlider || entry.type == Entry::Type::FloatSlider;
            if (entry.optionId >= 0 || !needsOption) {
                continue;
            }
            int id = allocateOptionId(options);
            if (id < 0) {
                continue;
            }
            entry.optionId = id;
            switch (entry.type) {
            case Entry::Type::Toggle:
                options._registerOption(
                    std::make_unique<::BoolOption>(
                        ::OptionID{id},
                        ::OptionOwnerType::User,
                        ::OptionResetFlags::None,
                        entry.displayName,
                        entrySaveTag(page.modName, entry.key),
                        entry.boolValue
                    )
                );
                break;
            case Entry::Type::Dropdown: {
                // EnumOption stores the name map by const reference; the map must outlive
                // the option, so it is kept in the manager (never relocated, never freed).
                auto&            valueNameMap = mEnumNameMaps.emplace_back();
                std::vector<int> values;
                for (size_t i = 0; i < entry.valueNames.size(); ++i) {
                    values.push_back(static_cast<int>(i));
                    valueNameMap.emplace(static_cast<int>(i), entry.valueNames[i]);
                }
                options._registerOption(
                    std::make_unique<::EnumOption>(
                        ::OptionID{id},
                        ::OptionOwnerType::User,
                        ::OptionResetFlags::None,
                        entry.displayName,
                        entrySaveTag(page.modName, entry.key),
                        entry.intValue,
                        values,
                        valueNameMap,
                        ::GameVersion{0, 0, 0, 0, 0}
                    )
                );
                break;
            }
            case Entry::Type::IntSlider:
                options._registerOption(
                    std::make_unique<::IntOption>(
                        ::OptionID{id},
                        ::OptionOwnerType::User,
                        ::OptionResetFlags::None,
                        entry.displayName,
                        entrySaveTag(page.modName, entry.key),
                        entry.intValue,
                        true,
                        entry.minInt,
                        entry.maxInt,
                        ::GameVersion{0, 0, 0, 0, 0}
                    )
                );
                break;
            case Entry::Type::FloatSlider: {
                // addInputFloatComponent requires an InputModeFloatOption (its provider
                // factory checks OptionType::InputModeFloat); a plain FloatOption fails.
                auto option = std::make_unique<::InputModeFloatOption>(
                    ::OptionID{id},
                    ::OptionOwnerType::User,
                    ::OptionResetFlags::None,
                    entry.displayName,
                    entrySaveTag(page.modName, entry.key),
                    entry.floatValue,
                    entry.minFloat,
                    entry.maxFloat
                );
                // DELTA is the change-detection epsilon in InputModeFloatOption::set.
                const_cast<float&>(option->DELTA) = 0.001f;
                options._registerOption(std::move(option));
                break;
            }
            default:
                break;
            }
            auto option = options.getIfValid(::OptionID{id});
            if (!option.has_value() || *option == nullptr) {
                continue;
            }
            // Restore the stored value; the observer skips it because the cache matches.
            switch (entry.type) {
            case Entry::Type::Toggle:
                static_cast<::BoolOption*>(*option)->set(entry.boolValue, false);
                break;
            case Entry::Type::Dropdown:
            case Entry::Type::IntSlider:
                static_cast<::IntOption*>(*option)->set(entry.intValue, false);
                break;
            case Entry::Type::FloatSlider:
                static_cast<::InputModeFloatOption*>(*option)->set(::InputMode::Mouse, entry.floatValue, false);
                break;
            default:
                break;
            }
            auto& slot = page.subscriptions.emplace_back();
            if (entry.type == Entry::Type::FloatSlider) {
                // InputModeFloatOption::set only publishes to mInputModeChangedPublisher.
                slot = (*option)->mImpl.get()->mInputModeChangedPublisher.get().connect(
                    [pagePtr = &page, key = entry.key](::Option const& opt, ::InputMode) {
                        getInstance().onOptionChanged(*pagePtr, key, opt);
                    },
                    ::Bedrock::PubSub::ConnectPosition::AtBack,
                    nullptr
                );
            } else {
                slot = (*option)->registerObserver([pagePtr = &page, key = entry.key](::Option const& opt) {
                    getInstance().onOptionChanged(*pagePtr, key, opt);
                });
            }
        }
    }

    // Registers the keybind action into the keyboard remapping layout (once), restores the
    // stored binding and subscribes to layout changes.
    void ensureKeybind(ModPage& page, Entry& entry, ::IOptionRegistry& options) {
        if (entry.layoutIndex != ~size_t(0)) {
            return;
        }
        auto layout = options.getCurrentKeyboardRemapping();
        if (!layout) {
            return;
        }
        auto&  mappings = layout->mKeymappings.get();
        size_t index    = mappings.size();
        for (size_t i = 0; i < mappings.size(); ++i) {
            if (mappings[i].mAction.get() == entry.action) {
                index = i;
                break;
            }
        }
        if (index == mappings.size()) {
            mappings.push_back(::Keymapping(entry.action, {entry.defaultKey}, true, false));
            layout->mDefaultMappings.get().push_back(::Keymapping(entry.action, {entry.defaultKey}, true, false));
        }
        entry.layoutIndex = index;
        entry.keyValue    = entry.defaultKey;
        if (auto it = page.stored.find(entry.key); it != page.stored.end() && it->is_number_integer()) {
            entry.keyValue = it->get<int>();
            if (entry.keyValue != entry.defaultKey) {
                layout->setMapping(entry.action, {entry.keyValue});
            }
        }
    }


    // The game's InputBindingGroupData has no usable constructor; mirror its layout.
    struct InputBindingGroupDataMirror {
        ::InputMode                                                                   mInputMode{};
        std::function<std::optional<std::string>()>                                   mBindDescriptionCallback;
        std::optional<::KeyboardType>                                                 mKeyboardType;
        std::function<std::optional<std::string>(::Settings::ActionComponent const&)> mBindActionLabelProvider;
        std::function<void()>                                                         mResetActionCallback;
        std::function<
            bool(::Settings::RegistryBuilder::IBuilderContext const&, std::string_view, std::optional<::KeyboardType>)>
            mGetterCaptureStateCallback;
    };
    static_assert(
        sizeof(InputBindingGroupDataMirror) == sizeof(::Settings::InputControlsSettingsHelper::InputBindingGroupData)
    );

    // Builds the vanilla keybind row through the game's own factory; the capture-state
    // component of the binding group is filtered out (see below).
    bool buildKeybindEntry(ModPage& page, Entry& entry, ComponentList& group) {
        auto client = service::getClientInstance();
        if (!client || !mBuilderContext || entry.layoutIndex == ~size_t(0)) {
            return false;
        }
        auto layout = client->getOptions().getCurrentKeyboardRemapping();
        if (!layout) {
            return false;
        }
        InputBindingGroupDataMirror data{};
        data.mInputMode = ::InputMode::Mouse;
        // mBindDescriptionCallback 提供行左侧的标题文本（构建期即被求值）
        data.mBindDescriptionCallback = [name = entry.displayName]() -> std::optional<std::string> { return name; };
        // 与原版键位页一致（KeyboardAndMouseSettingsDetails.cpp:303）：拼接全部绑定键、
        // 取未本地化的键名后整体过 I18n（鼠标键等特殊键才能显示为“按钮1”这类文本）。
        // 待输入状态显示 ">_<"（原版由 OreUI 前端读 {action}.captureState 绘制，我们页面上
        // 该组件已被过滤，改由 label 直接给出；捕获开始/结束都会触发组件变更通知，label 会
        // 被重新求值）。
        data.mBindActionLabelProvider =
            [layout, index = entry.layoutIndex, action = entry.action, context = mBuilderContext](
                ::Settings::ActionComponent const&
            ) -> std::optional<std::string> {
            if (context) {
                auto& capturing = context->getInputSettingsHandler().mCapturingKeymapping.get();
                if (capturing.has_value() && capturing->action.get() == action) {
                    return std::string(">_<");
                }
            }
            auto& mappings = layout->mKeymappings.get();
            if (index >= mappings.size()) {
                return std::nullopt;
            }
            auto& keys = mappings[index].mKeys.get();
            if (keys.empty()) {
                return std::nullopt;
            }
            std::string joined;
            for (int key : keys) {
                if (!joined.empty()) {
                    joined += ", ";
                }
                joined += layout->getMappedKeyName(key, false);
            }
            return getI18n().get(joined, nullptr);
        };
        // 与原版重置一致（KeyboardAndMouseSettingsDetails.cpp:307）：恢复默认键并取消冲突键，
        // 随后走 onKeyRemapped 同步 settings.json、触发 onChange 并重建输入映射。
        data.mResetActionCallback = [layout, index = entry.layoutIndex, action = entry.action] {
            layout->defaultKeyAtIndex(index);
            layout->unassignDuplicateKeys(index);
            getInstance().onKeyRemapped(action);
        };
        data.mGetterCaptureStateCallback = [](::Settings::RegistryBuilder::IBuilderContext const& ctx,
                                              std::string_view                                    action,
                                              std::optional<::KeyboardType>) {
            auto& capturing = ctx.getInputSettingsHandler().mCapturingKeymapping.get();
            return capturing.has_value() && capturing->action.get() == action;
        };
        auto bindingGroup = ::Settings::InputControlsSettingsHelper::createInputBindingGroup(
            reinterpret_cast<::Settings::InputControlsSettingsHelper::InputBindingGroupData const&>(data),
            *mBuilderContext,
            *layout,
            entry.action,
            static_cast<uint64>(entry.layoutIndex)
        );
        // The group holds three components: "{action}.bind" (the rebind row),
        // "{action}.reset" (a standalone reset button) and "{action}.captureState" (a
        // capture flag the OreUI frontend consumes by id — it disables the row while
        // capturing so the releasing click doesn't restart capture). Keep all three, but
        // force the capture flag hidden: the generic renderer would draw it as a stray
        // toggle. The reset button is dropped when the entry opts out of it.
        std::string const captureId = entry.action + ".captureState";
        std::string const resetId   = entry.action + ".reset";
        for (auto& component : bindingGroup.mGroup.get()) {
            auto id = componentIdOf(*component);
            if (id == captureId) {
                // Component<T> base layout (1.26.51, from the base destructor):
                // mStateOverrideProvider (optional<std::function<ComponentState(T const&,
                // ComponentState)>>) @0xF8. Version specific: re-check on updates.
                using StateOverride = std::function<
                    ::Settings::ComponentState(::Settings::BooleanComponent const&, ::Settings::ComponentState)>;
                auto* slot =
                    reinterpret_cast<std::optional<StateOverride>*>(reinterpret_cast<char*>(component.get()) + 0xF8);
                slot->emplace([](::Settings::BooleanComponent const&, ::Settings::ComponentState) {
                    return ::Settings::ComponentState::Hidden;
                });
            } else if (id == resetId && !entry.showReset) {
                continue;
            }
            group.push_back(std::move(component));
        }
        return true;
    }

    void onOptionChanged(ModPage& page, std::string const& key, ::Option const& option) {
        std::lock_guard lock{mMutex};
        auto it = std::find_if(page.entries.begin(), page.entries.end(), [&](Entry const& e) { return e.key == key; });
        if (it == page.entries.end()) {
            return;
        }
        auto& entry = *it;
        if (entry.type == Entry::Type::Toggle) {
            bool value = static_cast<::BoolOption const&>(option).mValue;
            if (value == entry.boolValue) {
                return;
            }
            entry.boolValue  = value;
            page.stored[key] = value;
            saveStored(page);
            if (entry.onToggle) {
                entry.onToggle(value);
            }
        } else if (entry.type == Entry::Type::Dropdown || entry.type == Entry::Type::IntSlider) {
            int value = static_cast<::IntOption const&>(option).mValue;
            if (value == entry.intValue) {
                return;
            }
            entry.intValue   = value;
            page.stored[key] = value;
            saveStored(page);
            if (entry.onDropdown) {
                entry.onDropdown(value);
            }
        } else if (entry.type == Entry::Type::FloatSlider) {
            float value = static_cast<::InputModeFloatOption const&>(option).mValues.get().contains(::InputMode::Mouse)
                            ? static_cast<::InputModeFloatOption const&>(option).mValues.get().at(::InputMode::Mouse)
                            : 0.0f;
            if (value == entry.floatValue) {
                return;
            }
            entry.floatValue = value;
            page.stored[key] = value;
            saveStored(page);
            if (entry.onFloatSlider) {
                entry.onFloatSlider(value);
            }
        }
    }

    void saveStored(ModPage& page) { file_utils::writeFile(page.storePath, page.stored.dump(4)); }

    // Builds a single non-FactoryUtil component (button/text/text input/banner/int slider).
    // Option-backed entries are built through FactoryUtil, see appendEntry/buildPage.
    std::optional<std::unique_ptr<ComponentVariant>> buildSimpleEntry(ModPage& page, Entry& entry) {
        auto client = service::getClientInstance();
        if (!client) {
            return std::nullopt;
        }
        auto id = entryId(page.modName, entry.key);
        switch (entry.type) {
        case Entry::Type::Button:
            return makeComponent<Settings::ActionComponent>(
                ActionWhich,
                id,
                entry.displayName,
                entry.description,
                entry.buttonLabel,
                [onClick = entry.onClick](std::function<void(bool)> const& done) {
                    if (onClick) {
                        onClick();
                    }
                    done(true);
                },
                std::nullopt,
                std::nullopt,
                nullptr
            );
        case Entry::Type::Text:
            return makeComponent<Settings::TextComponent>(TextWhich, id, entry.displayName, entry.description);
        case Entry::Type::TextInput:
            return buildWithGameBuilder(
                id,
                entry.displayName,
                entry.description,
                stringComponentBuild(),
                stringComponentBuilderDtor(),
                [&](void* builder) {
                    auto* storage = static_cast<char*>(builder);
                    *reinterpret_cast<void**>(storage + kBuilderTailOffset) =
                        new ModStringDataProvider(page, entry.key);
                    if (entry.placeholder.has_value()) {
                        // Builder<StringComponent> mPlaceholder @0x180, has_value @0x1A0.
                        new (storage + kBuilderTailOffset + 0x08) std::string(*entry.placeholder);
                        *(storage + kBuilderTailOffset + 0x28) = 1;
                    }
                    // Builder<StringComponent> mMaxLength @0x1A8, has_value @0x1B0. An absent
                    // maxLength makes the OreUI text field always show the placeholder
                    // (value.slice(0, null) === "" in its visibility check), so force one.
                    *reinterpret_cast<int*>(storage + kBuilderTailOffset + 0x30) = entry.maxLength.value_or(INT32_MAX);
                    *(storage + kBuilderTailOffset + 0x38)                       = 1;
                }
            );
        case Entry::Type::Banner:
            return buildWithGameBuilder(
                id,
                entry.displayName,
                entry.description,
                bannerComponentBuild(),
                bannerComponentBuilderDtor(),
                [](void*) {}
            );
        case Entry::Type::IntSlider: {
            if (entry.optionId < 0) {
                return std::nullopt;
            }
            auto createProvider = createIntNumberProvider();
            if (createProvider == nullptr) {
                getLogger().warn("ModSettings: createNumberDataProvider<int> signature not resolved for '{}'", id);
                return std::nullopt;
            }
            return buildWithGameBuilder(
                id,
                entry.displayName,
                entry.description,
                intNumberComponentBuild(),
                intNumberComponentBuilderDtor(),
                [&](void* builder) {
                    std::optional<std::unique_ptr<::Settings::INumberDataProvider<int>>> provider;
                    createProvider(&provider, ::OptionID{entry.optionId}, client->getOptions(), entry.intValue);
                    if (provider.has_value() && provider->get() != nullptr) {
                        *reinterpret_cast<void**>(static_cast<char*>(builder) + kBuilderTailOffset) =
                            provider->release();
                    } else {
                        getLogger().warn("ModSettings: no number provider for '{}'", id);
                    }
                    // Builder<NumberComponent<int>>: mScaleFactor @0x180 (zero breaks
                    // display), mStep @0x184 (has_value @0x188, drives the tick marks).
                    *reinterpret_cast<int*>(static_cast<char*>(builder) + kBuilderTailOffset + 0x08) = 1;
                    *reinterpret_cast<int*>(static_cast<char*>(builder) + kBuilderTailOffset + 0x0C) = entry.intStep;
                    *(static_cast<char*>(builder) + kBuilderTailOffset + 0x10)                       = 1;
                }
            );
        }
        default:
            return std::nullopt;
        }
    }

    // Appends one entry to an already materialized group. Returns false if the entry could
    // not be built (e.g. no free OptionID).
    bool appendEntry(ModPage& page, Entry& entry, ComponentList& group) {
        auto client = service::getClientInstance();
        if (!client) {
            return false;
        }
        ensureOptions(page, client->getOptions());
        auto id = entryId(page.modName, entry.key);
        switch (entry.type) {
        case Entry::Type::Toggle:
            if (entry.optionId < 0) {
                return false;
            }
            Settings::FactoryUtil::addBoolean(
                group,
                id,
                ::OptionID{entry.optionId},
                client->getOptions(),
                std::nullopt
            );
            return true;
        case Entry::Type::Dropdown:
            if (entry.optionId < 0) {
                return false;
            }
            Settings::FactoryUtil::addOption(group, id, ::OptionID{entry.optionId}, client->getOptions());
            return true;
        case Entry::Type::FloatSlider:
            if (entry.optionId < 0) {
                return false;
            }
            Settings::FactoryUtil::addInputFloatComponent(
                group,
                id,
                ::OptionID{entry.optionId},
                ::InputMode::Mouse,
                client->getOptions(),
                1.0f,
                std::nullopt
            );
            return true;
        default:
            if (entry.type == Entry::Type::Keybind) {
                return buildKeybindEntry(page, entry, group);
            }
            if (auto component = buildSimpleEntry(page, entry)) {
                group.push_back(std::move(*component));
                return true;
            }
            return false;
        }
    }

    ComponentList buildPage(ModPage& page) {
        ComponentList components;
        auto          client = service::getClientInstance();
        if (!client) {
            return components;
        }
        ensureOptions(page, client->getOptions());
        for (auto& entry : page.entries) {
            auto id = entryId(page.modName, entry.key);
            switch (entry.type) {
            case Entry::Type::Toggle:
                if (entry.optionId >= 0) {
                    Settings::FactoryUtil::addBoolean(
                        components,
                        id,
                        ::OptionID{entry.optionId},
                        client->getOptions(),
                        std::nullopt
                    );
                }
                break;
            case Entry::Type::Dropdown:
                if (entry.optionId >= 0) {
                    Settings::FactoryUtil::addOption(components, id, ::OptionID{entry.optionId}, client->getOptions());
                }
                break;
            case Entry::Type::FloatSlider:
                if (entry.optionId >= 0) {
                    Settings::FactoryUtil::addInputFloatComponent(
                        components,
                        id,
                        ::OptionID{entry.optionId},
                        ::InputMode::Mouse,
                        client->getOptions(),
                        1.0f,
                        std::nullopt
                    );
                }
                break;
            default:
                if (entry.type == Entry::Type::Keybind) {
                    buildKeybindEntry(page, entry, components);
                } else if (auto component = buildSimpleEntry(page, entry)) {
                    components.push_back(std::move(*component));
                }
                break;
            }
        }
        return components;
    }

    void onPageAdded(ModPage& page) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto registry = client->getSettingsRegistry(); // fires the hook, which applies
        if (!registry) {
            return;
        }
        std::lock_guard lock{mMutex};
        apply(*registry);
        // The mod list group may already be materialized; append the new section directly.
        auto& materialized = static_cast<Settings::Registry&>(*registry).mSettingsMap.get();
        if (auto it = materialized.find(std::string{kModsTabId}); it != materialized.end()) {
            it->second.push_back(
                makeComponent<Settings::GroupInfoComponent>(
                    GroupInfoWhich,
                    modGroupId(page.modName),
                    page.modName,
                    std::nullopt
                )
            );
            static_cast<Settings::Registry&>(*registry).refresh(kModsTabId);
        }
    }
};

void ModStringDataProvider::setValue(std::string_view value) {
    auto* e = entry();
    if (e == nullptr || e->stringValue == value) {
        return;
    }
    e->stringValue     = value;
    mPage.stored[mKey] = e->stringValue;
    file_utils::writeFile(mPage.storePath, mPage.stored.dump(4));
    // Notify the owning component so its change publisher fires and the UI re-reads.
    if (auto& listener = mListener.get()) {
        listener();
    }
    if (e->onTextInput) {
        e->onTextInput(e->stringValue);
    }
}

LL_TYPE_INSTANCE_HOOK(
    GetSettingsRegistryHook,
    ll::memory::HookPriority::Normal,
    ClientInstance,
    &ClientInstance::$getSettingsRegistry,
    std::shared_ptr<Settings::IRegistry>
) {
    auto result = origin();
    if (result) {
        auto&           manager = ModSettingsManager::getInstance();
        std::lock_guard lock{manager.mMutex};
        manager.apply(*result);
    }
    return result;
}

// Keybind rows are built through the game's createInputBindingGroup, which needs the
// registry builder context; capture the latest one at every registry (re)build.
LL_STATIC_HOOK(
    BuildDefaultSettingsRegistryHook,
    ll::memory::HookPriority::Normal,
    &Settings::RegistryBuilder::buildDefaultSettingsRegistry,
    std::shared_ptr<Settings::IRegistry>,
    std::shared_ptr<Settings::RegistryBuilder::IBuilderContext> context
) {
    {
        auto&           manager = ModSettingsManager::getInstance();
        std::lock_guard lock{manager.mMutex};
        manager.mBuilderContext = context;
    }
    return origin(std::move(context));
}

// Publisher layouts are incomplete in the headers (Connector subobject offset differs from
// the game), so PubSub connect through the typed interface is unsafe; keybind change
// notification goes through this hook instead.
LL_TYPE_INSTANCE_HOOK(
    SetMappingWithRawInputHook,
    ll::memory::HookPriority::Normal,
    KeyboardRemappingLayout,
    &KeyboardRemappingLayout::$setMappingWithRawInput,
    void,
    std::string const& action,
    int                rawKeyIndex,
    ::RawInputType     rawKeyType
) {
    origin(action, rawKeyIndex, rawKeyType);
    ModSettingsManager::getInstance().onKeyRemapped(action);
}

// The "start capture" callback of Settings::RebindActionDataProvider
// (RebindActionDataProvider.cpp:67, no exported symbol — resolved by signature).
// OreUI buttons fire on release, so rebinding by clicking the row's button with the mouse
// binds on press and then restarts capture on release. The vanilla keyboard page suppresses
// this in its front-end; the generic settings page has no such logic, so skip capture
// starts in a short window after a rebind of one of our entries.
uintptr_t rebindCaptureStartTarget() {
    static auto addr = [] {
        using namespace ll::literals;
        return reinterpret_cast<uintptr_t>(
            ("55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC F8 00 00 00 48 8D AC 24 80 00 00 00 48 C7 45 70 FE FF FF "
             "FF 4C 8B 61 08 49 8B 8C 24 80 00 00 00 48 8B 01 48 8B 80 28 01 00 00"_sig)
                .resolve(true)
        );
    }();
    return addr;
}

LL_STATIC_HOOK(
    RebindCaptureStartHook,
    ll::memory::HookPriority::Normal,
    rebindCaptureStartTarget(),
    void,
    void* funcImpl
) {
    if (ModSettingsManager::getInstance().shouldSuppressCaptureStart()) {
        return;
    }
    origin(funcImpl);
}

// Vanilla keybinding pages enumerate the remapping layout themselves; hide our entries from
// them (they are editable under the Mods tab). The three section enumerators all resolve to
// ordinal lists, so filter each.
LL_STATIC_HOOK(
    NormalKeysIndexHook,
    ll::memory::HookPriority::Normal,
    &Settings::KeyboardAndMouseSettingsDetails::getNormalKeysIndex,
    std::vector<uint64>,
    ::KeyboardRemappingLayout const& layout
) {
    auto result = origin(layout);
    ModSettingsManager::getInstance().filterVanillaKeysIndex(layout, result);
    return result;
}

LL_STATIC_HOOK(
    ChordKeysIndexHook,
    ll::memory::HookPriority::Normal,
    &Settings::KeyboardAndMouseSettingsDetails::getChordKeysIndex,
    std::vector<uint64>,
    ::KeyboardRemappingLayout const& layout
) {
    auto result = origin(layout);
    ModSettingsManager::getInstance().filterVanillaKeysIndex(layout, result);
    return result;
}

LL_STATIC_HOOK(
    MacroKeysIndexHook,
    ll::memory::HookPriority::Normal,
    &Settings::KeyboardAndMouseSettingsDetails::getMacroKeysIndex,
    std::vector<uint64>,
    ::KeyboardRemappingLayout const& layout
) {
    auto result = origin(layout);
    ModSettingsManager::getInstance().filterVanillaKeysIndex(layout, result);
    return result;
}

void ModSettingsManager::installHook() {
    ll::memory::HookRegistrar<GetSettingsRegistryHook>::hook();
    ll::memory::HookRegistrar<BuildDefaultSettingsRegistryHook>::hook();
    ll::memory::HookRegistrar<SetMappingWithRawInputHook>::hook();
    ll::memory::HookRegistrar<NormalKeysIndexHook>::hook();
    ll::memory::HookRegistrar<ChordKeysIndexHook>::hook();
    ll::memory::HookRegistrar<MacroKeysIndexHook>::hook();
    if (rebindCaptureStartTarget() != 0) {
        ll::memory::HookRegistrar<RebindCaptureStartHook>::hook();
    }
}

} // namespace

struct ModSettings::Impl {
    ModPage* page;
};

ModSettings::ModSettings(std::unique_ptr<Impl> impl) : mImpl(std::move(impl)) {}

ModSettings::~ModSettings() = default;

ModSettings& ModSettings::forMod(::ll::mod::Mod const& mod) {
    // Handles are stable: pages live in the manager for the whole session.
    static std::unordered_map<ModPage*, std::unique_ptr<ModSettings>> handles;
    auto& page = ModSettingsManager::getInstance().pageForMod(mod);
    auto  it   = handles.find(&page);
    if (it == handles.end()) {
        it = handles.emplace(&page, std::unique_ptr<ModSettings>(new ModSettings(std::make_unique<Impl>(&page)))).first;
    }
    return *it->second;
}

ModSettings& ModSettings::addToggle(
    std::string                key,
    std::string                displayName,
    bool                       defaultValue,
    std::function<void(bool)>  onChange,
    std::optional<std::string> description
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::Toggle,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    if (auto it = page.stored.find(entry.key); it != page.stored.end() && it->is_boolean()) {
        entry.boolValue = it->get<bool>();
    } else {
        entry.boolValue = defaultValue;
    }
    entry.onToggle = std::move(onChange);
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addDropdown(
    std::string                key,
    std::string                displayName,
    std::vector<std::string>   valueNames,
    int                        defaultIndex,
    std::function<void(int)>   onChange,
    std::optional<std::string> description
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::Dropdown,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    entry.valueNames = std::move(valueNames);
    if (auto it = page.stored.find(entry.key); it != page.stored.end() && it->is_number_integer()) {
        entry.intValue = it->get<int>();
    } else {
        entry.intValue = defaultIndex;
    }
    entry.onDropdown = std::move(onChange);
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addButton(
    std::string                key,
    std::string                displayName,
    std::string                buttonLabel,
    std::function<void()>      onClick,
    std::optional<std::string> description
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::Button,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    entry.buttonLabel = std::move(buttonLabel);
    entry.onClick     = std::move(onClick);
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addText(std::string key, std::string displayName, std::optional<std::string> description) {
    auto& page = *mImpl->page;
    page.entries.push_back(Entry{Entry::Type::Text, std::move(key), std::move(displayName), std::move(description)});
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

bool ModSettings::getToggleValue(std::string_view key) const {
    for (auto& entry : mImpl->page->entries) {
        if (entry.key == key && entry.type == Entry::Type::Toggle) {
            return entry.boolValue;
        }
    }
    return false;
}

int ModSettings::getDropdownValue(std::string_view key) const {
    for (auto& entry : mImpl->page->entries) {
        if (entry.key == key && entry.type == Entry::Type::Dropdown) {
            return entry.intValue;
        }
    }
    return 0;
}

ModSettings& ModSettings::addIntSlider(
    std::string                key,
    std::string                displayName,
    int                        minValue,
    int                        maxValue,
    int                        step,
    int                        defaultValue,
    std::function<void(int)>   onChange,
    std::optional<std::string> description
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::IntSlider,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    entry.minInt   = minValue;
    entry.maxInt   = maxValue;
    entry.intStep  = step;
    entry.intValue = defaultValue;
    if (auto it = page.stored.find(entry.key); it != page.stored.end() && it->is_number_integer()) {
        entry.intValue = std::clamp(it->get<int>(), minValue, maxValue);
    }
    entry.onDropdown = std::move(onChange);
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addFloatSlider(
    std::string                key,
    std::string                displayName,
    float                      minValue,
    float                      maxValue,
    float                      step,
    float                      defaultValue,
    std::function<void(float)> onChange,
    std::optional<std::string> description
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::FloatSlider,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    entry.minFloat   = minValue;
    entry.maxFloat   = maxValue;
    entry.stepFloat  = step;
    entry.floatValue = defaultValue;
    if (auto it = page.stored.find(entry.key); it != page.stored.end() && it->is_number()) {
        entry.floatValue = std::clamp(it->get<float>(), minValue, maxValue);
    }
    entry.onFloatSlider = std::move(onChange);
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addTextInput(
    std::string                             key,
    std::string                             displayName,
    std::string                             defaultValue,
    std::optional<std::string>              placeholder,
    std::optional<int>                      maxLength,
    std::function<void(std::string const&)> onChange,
    std::optional<std::string>              description
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::TextInput,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    entry.stringValue = std::move(defaultValue);
    if (auto it = page.stored.find(entry.key); it != page.stored.end() && it->is_string()) {
        entry.stringValue = it->get<std::string>();
    }
    entry.placeholder = std::move(placeholder);
    entry.maxLength   = maxLength;
    entry.onTextInput = [onChange = std::move(onChange)](std::string value) {
        if (onChange) {
            onChange(value);
        }
    };
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addBanner(std::string key, std::string displayName, std::optional<std::string> description) {
    auto& page = *mImpl->page;
    page.entries.push_back(Entry{Entry::Type::Banner, std::move(key), std::move(displayName), std::move(description)});
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

ModSettings& ModSettings::addKeybind(
    std::string                key,
    std::string                displayName,
    std::string                action,
    int                        defaultKey,
    std::function<void(int)>   onChange,
    std::optional<std::string> description,
    bool                       showReset
) {
    auto& page = *mImpl->page;
    Entry entry{
        Entry::Type::Keybind,
        std::move(key),
        std::move(displayName),
        std::move(description),
    };
    entry.action     = std::move(action);
    entry.defaultKey = defaultKey;
    entry.keyValue   = defaultKey;
    entry.showReset  = showReset;
    entry.onKeybind  = std::move(onChange);
    page.entries.push_back(std::move(entry));
    ModSettingsManager::getInstance().onEntryAdded(page);
    return *this;
}

int ModSettings::getKeybindValue(std::string_view key) const {
    for (auto& entry : mImpl->page->entries) {
        if (entry.key == key && entry.type == Entry::Type::Keybind) {
            return entry.keyValue;
        }
    }
    return 0;
}

int ModSettings::getIntSliderValue(std::string_view key) const {
    for (auto& entry : mImpl->page->entries) {
        if (entry.key == key && entry.type == Entry::Type::IntSlider) {
            return entry.intValue;
        }
    }
    return 0;
}

float ModSettings::getFloatSliderValue(std::string_view key) const {
    for (auto& entry : mImpl->page->entries) {
        if (entry.key == key && entry.type == Entry::Type::FloatSlider) {
            return entry.floatValue;
        }
    }
    return 0;
}

std::string ModSettings::getTextInputValue(std::string_view key) const {
    for (auto& entry : mImpl->page->entries) {
        if (entry.key == key && entry.type == Entry::Type::TextInput) {
            return entry.stringValue;
        }
    }
    return {};
}

} // namespace ll::ui

namespace ll::mod {

ui::ModSettings& Mod::getSettings() const { return ui::ModSettings::forMod(*this); }

} // namespace ll::mod
