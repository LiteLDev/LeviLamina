#include "ll/api/ui/ModSettings.h"

#include <algorithm>
#include <chrono>
#include <deque>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>

#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
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
#include "mc/client/settings/Builder.h"
#include "mc/client/settings/ComponentVariant.h"
#include "mc/client/settings/DataProvider.h"
#include "mc/client/settings/FactoryUtil.h"
#include "mc/client/settings/GroupInfoComponent.h"
#include "mc/client/settings/IActionDataProvider.h"
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/client/settings/IBuilderContext.h"
#include "mc/client/settings/INumberDataProvider.h"
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/IStringDataProvider.h"
#include "mc/client/settings/KeyboardAndMouseSettingsDetails.h"
#include "mc/client/settings/Registry.h"
#include "mc/client/settings/RegistryBuilder.h"
#include "mc/client/settings/TextComponent.h"
#include "mc/common/GameVersion.h"
#include "mc/common/Globals.h"
#include "mc/locale/I18n.h"
#include "mc/options/option_types/BoolOption.h"
#include "mc/options/option_types/EnumOption.h"
#include "mc/options/option_types/FloatOption.h"
#include "mc/options/option_types/IntOption.h"
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#include "mc/options/option_types/OptionType.h"

#include "nlohmann/json.hpp"

namespace ll::ui {

namespace {

using ComponentVariant = ::Settings::ComponentVariant;
using ComponentList    = ::Settings::ComponentList;
using ::Settings::makeComponent;

constexpr std::string_view kModsTabId    = "ll.mods";
constexpr std::string_view kTabsGroupKey = "settings-tabs-groups";

std::string modGroupId(std::string_view modName) { return "ll.mods." + std::string{modName}; }

std::string entryId(std::string_view modName, std::string_view key) {
    return "ll.mod." + std::string{modName} + "." + std::string{key};
}

std::string entrySaveTag(std::string_view modName, std::string_view key) {
    return "ll_mod_" + std::string{modName} + "_" + std::string{key};
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

    int                        minInt = 0;
    int                        maxInt = 0;
    std::optional<int>         intStep;
    float                      floatValue = 0;
    float                      minFloat   = 0;
    float                      maxFloat   = 0;
    std::optional<float>       stepFloat;
    std::function<void(float)> onFloatSlider;

    std::string                             stringValue;
    std::optional<std::string>              placeholder;
    std::optional<int>                      maxLength;
    std::function<void(std::string const&)> onTextInput;

    std::string              action;
    int                      defaultKey  = 0;
    int                      keyValue    = 0;
    size_t                   layoutIndex = ~size_t(0);
    bool                     showReset   = true;
    std::function<void(int)> onKeybind;

    ModSettings::EntryStateProvider stateProvider;
    ModSettings::EntryTextProvider  nameProvider;
    ModSettings::EntryTextProvider  descriptionProvider;

    int optionId = -1;
};

struct ModPage {
    std::string                                 modName;
    std::vector<Entry>                          entries;
    std::deque<::Bedrock::PubSub::Subscription> subscriptions;
    nlohmann::json                              stored;
    std::filesystem::path                       storePath;
};

class ModSettingsManager;

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

    void commitValue() override {}

    bool flush() override { return true; }

    bool canModify() const override { return true; }
};

enum class EntryProviderKind { State, Name, Description };

void applyEntryProvider(ComponentVariant& component, Entry const& entry, EntryProviderKind kind) {
    std::visit(
        [&](auto& c) {
            switch (kind) {
            case EntryProviderKind::State: {
                auto& slot = c.mStateOverrideProvider.get();
                if (entry.stateProvider) {
                    slot = [provider = entry.stateProvider](auto const&, ::Settings::ComponentState current) {
                        return static_cast<::Settings::ComponentState>(
                            provider(static_cast<ModSettings::EntryState>(current))
                        );
                    };
                } else {
                    slot = std::nullopt;
                }
                break;
            }
            case EntryProviderKind::Name: {
                auto& fn = c.mNameOverrideProvider.get();
                if (entry.nameProvider) {
                    fn = [provider = entry.nameProvider](auto const&) { return provider(); };
                } else {
                    fn = nullptr;
                }
                break;
            }
            case EntryProviderKind::Description: {
                auto& fn = c.mDescriptionOverrideProvider.get();
                if (entry.descriptionProvider) {
                    fn = [provider = entry.descriptionProvider](auto const&) { return provider(); };
                } else {
                    fn = nullptr;
                }
                break;
            }
            }
        },
        component
    );
}

void applyEntryProviders(ComponentVariant& component, Entry const& entry) {
    if (entry.stateProvider) {
        applyEntryProvider(component, entry, EntryProviderKind::State);
    }
    if (entry.nameProvider) {
        applyEntryProvider(component, entry, EntryProviderKind::Name);
    }
    if (entry.descriptionProvider) {
        applyEntryProvider(component, entry, EntryProviderKind::Description);
    }
}

void insertModsTab(ComponentList& tabs) {
    auto modsTab = makeComponent<Settings::GroupInfoComponent>(kModsTabId, "Mods", std::nullopt);
    for (auto anchor : {"settings-game-group", "settings-realms-group", "settings-core-group"}) {
        for (size_t i = 0; i < tabs.size(); ++i) {
            auto const& tabId = std::visit([](auto const& c) -> std::string const& { return c.mId.get(); }, *tabs[i]);
            if (tabId == anchor) {
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

    void onKeymappingRefresh(uint64 index) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto layout = client->getOptions().getCurrentKeyboardRemapping();
        if (!layout) {
            return;
        }
        auto& mappings = layout->mKeymappings.get();
        if (index >= mappings.size()) {
            return;
        }
        onKeyRemapped(mappings[index].mAction.get());
    }

    void onKeyRemapped(std::string const& action) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        bool                                                  changed = false;
        std::vector<std::pair<std::function<void(int)>, int>> callbacks;
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
                        callbacks.emplace_back(entry.onKeybind, current);
                    }
                    changed = true;
                }
            }
        }
        for (auto& [cb, value] : callbacks) {
            cb(value);
        }
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

    bool shouldSuppressCaptureStart() {
        std::lock_guard lock{mMutex};
        return std::chrono::steady_clock::now() - mLastKeybindChange < std::chrono::milliseconds(500);
    }

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

    void onEntryAdded(ModPage& page) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto registry = client->getSettingsRegistry();
        if (!registry) {
            return;
        }
        auto                       groupId = modGroupId(page.modName);
        std::optional<std::string> refreshId;
        bool                       appended = false;
        {
            std::lock_guard lock{mMutex};
            refreshId          = apply(*registry);
            auto& materialized = static_cast<Settings::Registry&>(*registry).mSettingsMap.get();
            auto  it           = materialized.find(groupId);
            if (it != materialized.end() && !page.entries.empty()) {
                appended = appendEntry(page, page.entries.back(), it->second);
            }
        }
        auto& reg = static_cast<Settings::Registry&>(*registry);
        if (refreshId) {
            reg.refresh(*refreshId);
        }
        if (appended) {
            reg.refresh(groupId);
        }
    }

    std::optional<std::string> apply(Settings::IRegistry& iregistry) {
        auto&                      registry = static_cast<Settings::Registry&>(iregistry);
        std::optional<std::string> refreshId;
        if (mAppliedRegistries.insert(&registry).second) {
            auto& factories = registry.mSettingsFactories.get();
            factories.emplace(std::string{kModsTabId}, [] {
                ComponentList components;
                for (auto& page : getInstance().mPages) {
                    components.push_back(
                        makeComponent<Settings::GroupInfoComponent>(
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
                refreshId = std::string{kTabsGroupKey};
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
        return refreshId;
    }

private:
    std::unordered_map<::ll::mod::Mod const*, std::unique_ptr<ModPage>> mPages;
    std::unordered_set<void*>                                           mAppliedRegistries;
    std::deque<std::unordered_map<int, std::string>>                    mEnumNameMaps;
    std::once_flag                                                      mHookOnce;
    int                                                                 mNextOptionId = 821;
    std::chrono::steady_clock::time_point                               mLastKeybindChange{};
    ::Bedrock::PubSub::Subscription                                     mKeymappingRefreshSub;
    std::shared_ptr<::KeyboardRemappingLayout>                          mSubscribedLayout;

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
                options._registerOption(
                    std::make_unique<::FloatOption>(
                        ::OptionID{id},
                        ::OptionOwnerType::User,
                        ::OptionResetFlags::None,
                        entry.displayName,
                        entrySaveTag(page.modName, entry.key),
                        entry.floatValue,
                        entry.minFloat,
                        entry.maxFloat
                    )
                );
                break;
            }
            default:
                break;
            }
            auto option = options.getIfValid(::OptionID{id});
            if (!option.has_value() || *option == nullptr) {
                continue;
            }
            switch (entry.type) {
            case Entry::Type::Toggle:
                static_cast<::BoolOption*>(*option)->set(entry.boolValue, false);
                break;
            case Entry::Type::Dropdown:
            case Entry::Type::IntSlider:
                static_cast<::IntOption*>(*option)->set(entry.intValue, false);
                break;
            case Entry::Type::FloatSlider:
                static_cast<::FloatOption*>(*option)->mValue = entry.floatValue;
                break;
            default:
                break;
            }
            auto& slot = page.subscriptions.emplace_back();
            slot       = (*option)->registerObserver([pagePtr = &page, key = entry.key](::Option const& opt) {
                getInstance().onOptionChanged(*pagePtr, key, opt);
            });
        }
    }

    void ensureKeybind(ModPage& page, Entry& entry, ::IOptionRegistry& options) {
        auto layout = options.getCurrentKeyboardRemapping();
        if (layout && mSubscribedLayout != layout) {
            mKeymappingRefreshSub = layout->mRefreshKeymappingsPublisher.get()->connect(
                [](::std::optional<uint64> index) {
                    if (index.has_value()) {
                        getInstance().onKeymappingRefresh(*index);
                    }
                },
                ::Bedrock::PubSub::ConnectPosition::AtBack,
                nullptr
            );
            mSubscribedLayout = layout;
        }
        if (entry.layoutIndex != ~size_t(0)) {
            return;
        }
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

    bool buildKeybindEntry(ModPage& page, Entry& entry, ComponentList& group) const;

    void onOptionChanged(ModPage& page, std::string const& key, ::Option const& option) {
        std::function<void()> notify;
        {
            std::lock_guard lock{mMutex};
            auto            it =
                std::find_if(page.entries.begin(), page.entries.end(), [&](Entry const& e) { return e.key == key; });
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
                    notify = [cb = entry.onToggle, value] { cb(value); };
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
                    notify = [cb = entry.onDropdown, value] { cb(value); };
                }
            } else if (entry.type == Entry::Type::FloatSlider) {
                float value = static_cast<::FloatOption const&>(option).mValue;
                if (value == entry.floatValue) {
                    return;
                }
                entry.floatValue = value;
                page.stored[key] = value;
                saveStored(page);
                if (entry.onFloatSlider) {
                    notify = [cb = entry.onFloatSlider, value] { cb(value); };
                }
            }
        }
        if (notify) {
            notify();
        }
    }

    void saveStored(ModPage& page) { file_utils::writeFile(page.storePath, page.stored.dump(4)); }

    std::optional<std::unique_ptr<ComponentVariant>> buildSimpleEntry(ModPage& page, Entry& entry) {
        auto client = service::getClientInstance();
        if (!client) {
            return std::nullopt;
        }
        auto                                             id = entryId(page.modName, entry.key);
        std::optional<std::unique_ptr<ComponentVariant>> result;
        switch (entry.type) {
        case Entry::Type::Button:
            result = makeComponent<Settings::ActionComponent>(
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
            break;
        case Entry::Type::Text:
            result = makeComponent<Settings::TextComponent>(id, entry.displayName, entry.description);
            break;
        case Entry::Type::TextInput:
            result = Settings::buildComponent<Settings::StringComponent>(
                id,
                entry.displayName,
                entry.description,
                [&](Settings::Builder<Settings::StringComponent>& builder) {
                    builder.mDataProvider =
                        std::unique_ptr<Settings::IStringDataProvider>(new ModStringDataProvider(page, entry.key));
                    if (entry.placeholder.has_value()) {
                        builder.mPlaceholder.get() = *entry.placeholder;
                    }
                    builder.mMaxLength.get() = static_cast<uint64>(entry.maxLength.value_or(INT32_MAX));
                }
            );
            break;
        case Entry::Type::Banner:
            result = Settings::buildComponent<Settings::BannerComponent>(
                id,
                entry.displayName,
                entry.description,
                [](Settings::Builder<Settings::BannerComponent>&) {}
            );
            break;
        case Entry::Type::IntSlider:
            if (entry.optionId >= 0) {
                result = Settings::buildComponent<Settings::NumberComponent<int>>(
                    id,
                    entry.displayName,
                    entry.description,
                    [&](Settings::Builder<Settings::NumberComponent<int>>& builder) {
                        auto provider = Settings::DataProvider::createNumberDataProvider<int>(
                            ::OptionID{entry.optionId},
                            client->getOptions(),
                            entry.intValue
                        );
                        if (provider.has_value() && *provider) {
                            builder.mDataProvider = std::move(*provider);
                        } else {
                            getLogger().warn("ModSettings: no number provider for '{}'", id);
                        }
                        builder.mScaleFactor = 1;
                        builder.mStep.get()  = entry.intStep;
                    }
                );
            }
            break;
        case Entry::Type::FloatSlider:
            if (entry.optionId >= 0) {
                result = Settings::buildComponent<Settings::NumberComponent<float>>(
                    id,
                    entry.displayName,
                    entry.description,
                    [&](Settings::Builder<Settings::NumberComponent<float>>& builder) {
                        auto provider = Settings::DataProvider::createNumberDataProvider<float>(
                            ::OptionID{entry.optionId},
                            client->getOptions(),
                            entry.floatValue
                        );
                        if (provider.has_value() && *provider) {
                            builder.mDataProvider = std::move(*provider);
                        } else {
                            getLogger().warn("ModSettings: no number provider for '{}'", id);
                        }
                        builder.mScaleFactor = 1.0f;
                        builder.mStep.get()  = entry.stepFloat;
                    }
                );
            }
            break;
        default:
            break;
        }
        if (!result.has_value() || !result.value()) {
            getLogger().warn("ModSettings: could not build component for '{}'", id);
        }
        return result;
    }

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
            break;
        case Entry::Type::Dropdown:
            if (entry.optionId < 0) {
                return false;
            }
            Settings::FactoryUtil::addOption(group, id, ::OptionID{entry.optionId}, client->getOptions());
            break;
        default:
            if (entry.type == Entry::Type::Keybind) {
                return buildKeybindEntry(page, entry, group);
            }
            if (auto component = buildSimpleEntry(page, entry)) {
                group.push_back(std::move(*component));
            } else {
                return false;
            }
            break;
        }
        applyEntryProviders(*group.back(), entry);
        return true;
    }

    ComponentList buildPage(ModPage& page) {
        ComponentList components;
        if (!service::getClientInstance()) {
            return components;
        }
        for (auto& entry : page.entries) {
            appendEntry(page, entry, components);
        }
        return components;
    }

    void onPageAdded(ModPage& page) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto registry = client->getSettingsRegistry();
        if (!registry) {
            return;
        }
        std::optional<std::string> refreshId;
        bool                       tabAppended = false;
        {
            std::lock_guard lock{mMutex};
            refreshId          = apply(*registry);
            auto& materialized = static_cast<Settings::Registry&>(*registry).mSettingsMap.get();
            if (auto it = materialized.find(std::string{kModsTabId}); it != materialized.end()) {
                it->second.push_back(
                    makeComponent<Settings::GroupInfoComponent>(modGroupId(page.modName), page.modName, std::nullopt)
                );
                tabAppended = true;
            }
        }
        auto& reg = static_cast<Settings::Registry&>(*registry);
        if (refreshId) {
            reg.refresh(*refreshId);
        }
        if (tabAppended) {
            reg.refresh(kModsTabId);
        }
    }

public:
    void applyProviderLive(ModPage& page, Entry& entry, EntryProviderKind kind) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto registry = client->getSettingsRegistry();
        if (!registry) {
            return;
        }
        auto groupId = modGroupId(page.modName);
        {
            std::lock_guard lock{mMutex};
            auto&           reg    = static_cast<Settings::Registry&>(*registry);
            auto&           groups = reg.mSettingsMap.get();
            auto            it     = groups.find(groupId);
            if (it == groups.end()) {
                return;
            }
            auto id = entryId(page.modName, entry.key);
            for (auto& component : it->second) {
                auto const& cid =
                    std::visit([](auto const& c) -> std::string const& { return c.mId.get(); }, *component);
                if (cid == id) {
                    applyEntryProvider(*component, entry, kind);
                    break;
                }
            }
        }
        static_cast<Settings::Registry&>(*registry).refresh(groupId);
    }

    void refreshGroup(ModPage& page) {
        auto client = service::getClientInstance();
        if (!client) {
            return;
        }
        auto registry = client->getSettingsRegistry();
        if (!registry) {
            return;
        }
        static_cast<Settings::Registry&>(*registry).refresh(modGroupId(page.modName));
    }
};

class ModKeybindDataProvider : public ::Settings::IActionDataProvider {
    ModPage&                              mPage;
    std::string                           mKey;
    ::Bedrock::PubSub::Subscription       mRawInputSub;
    bool                                  mCapturing = false;
    std::chrono::steady_clock::time_point mCaptureStartedAt{};
    ModKeybindDataProvider*               mSibling = nullptr;

    Entry* entry() const {
        auto it =
            std::find_if(mPage.entries.begin(), mPage.entries.end(), [&](Entry const& e) { return e.key == mKey; });
        return it == mPage.entries.end() ? nullptr : &*it;
    }

    static ::KeyboardRemappingLayout* currentLayout() {
        auto client = service::getClientInstance();
        if (!client) {
            return nullptr;
        }
        auto layout = client->getOptions().getCurrentKeyboardRemapping();
        return layout ? layout.get() : nullptr;
    }

public:
    ModKeybindDataProvider(ModPage& page, std::string key) : mPage(page), mKey(std::move(key)) {}

    ~ModKeybindDataProvider() override { endCapture(); }

    bool flush() override { return true; }

    bool canModify() const override { return true; }

    bool isCapturing() const { return mCapturing; }

    void setSibling(ModKeybindDataProvider* sibling) { mSibling = sibling; }

    bool isDefault() const {
        auto* e = entry();
        return e == nullptr || e->keyValue == e->defaultKey;
    }

    Settings::ComponentState resetRowState(::Settings::ComponentState current) const {
        auto* e = entry();
        if (e != nullptr && e->stateProvider
            && e->stateProvider(static_cast<ModSettings::EntryState>(current)) == ModSettings::EntryState::Hidden) {
            return ::Settings::ComponentState::Hidden;
        }
        return isDefault() ? ::Settings::ComponentState::Hidden : current;
    }

    std::optional<std::string> currentKeysLabel() const {
        auto* e      = entry();
        auto* layout = currentLayout();
        if (e == nullptr || layout == nullptr) {
            return std::nullopt;
        }
        for (auto& keymapping : layout->mKeymappings.get()) {
            if (keymapping.mAction.get() != e->action) {
                continue;
            }
            auto& keys = keymapping.mKeys.get();
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
        }
        return std::nullopt;
    }

    void notifyChanged() {
        if (auto& listener = mListener.get()) {
            listener();
        }
        if (mSibling != nullptr) {
            mSibling->notifyChanged();
        }
    }

    void onRowClicked() {
        if (mCapturing || ModSettingsManager::getInstance().shouldSuppressCaptureStart()) {
            return;
        }
        startCapture();
    }

    void startCapture() {
        auto* e       = entry();
        auto  context = ModSettingsManager::getInstance().mBuilderContext;
        if (e == nullptr || !context) {
            return;
        }
        mCapturing = true;
        context->setInputBindingMode(::InputBindingMode::MouseAndKeyboard);
        mCaptureStartedAt = std::chrono::steady_clock::now();
        auto& handler     = context->getInputSettingsHandler();
        handler.setCapturingKeymapping({::InputMode::Mouse, std::nullopt, e->action});
        mRawInputSub =
            context->registerToRawInputEvent([this](int key, ::RawInputType type, ::ButtonState state, bool down) {
                onRawInput(key, type, state, down);
            });
        notifyChanged();
    }

    void endCapture() {
        if (!mCapturing) {
            return;
        }
        mCapturing   = false;
        mRawInputSub = ::Bedrock::PubSub::Subscription{};
        if (auto context = ModSettingsManager::getInstance().mBuilderContext) {
            context->getInputSettingsHandler().mCapturingKeymapping.get().reset();
            context->setInputBindingMode(::InputBindingMode::Undefined);
        }
        notifyChanged();
    }

    void onRawInput(int key, ::RawInputType type, ::ButtonState /*state*/, bool down) {
        if (!down || !mCapturing) {
            return;
        }
        if (type == ::RawInputType::MouseButton
            && std::chrono::steady_clock::now() - mCaptureStartedAt < std::chrono::milliseconds(250)) {
            return;
        }
        auto* e      = entry();
        auto* layout = currentLayout();
        if (e == nullptr || layout == nullptr) {
            endCapture();
            return;
        }
        if (key == 27) {
            layout->setMapping(e->action, {0});
        } else {
            layout->setMappingWithRawInput(e->action, key, type);
            auto& mappings = layout->mKeymappings.get();
            int   bound    = 0;
            for (auto& keymapping : mappings) {
                if (keymapping.mAction.get() == e->action) {
                    auto& keys = keymapping.mKeys.get();
                    bound      = keys.empty() ? 0 : keys.front();
                }
            }
            for (auto& keymapping : mappings) {
                if (keymapping.mAction.get() != e->action) {
                    std::erase(keymapping.mKeys.get(), bound);
                }
            }
        }
        ModSettingsManager::getInstance().onKeyRemapped(e->action);
        endCapture();
    }

    void resetToDefault() {
        auto* e      = entry();
        auto* layout = currentLayout();
        if (e == nullptr || layout == nullptr) {
            return;
        }
        layout->setMapping(e->action, {e->defaultKey});
        ModSettingsManager::getInstance().onKeyRemapped(e->action);
        notifyChanged();
    }
};

bool ModSettingsManager::buildKeybindEntry(ModPage& page, Entry& entry, ComponentList& group) const {
    auto client = service::getClientInstance();
    if (!client || !mBuilderContext || entry.layoutIndex == ~size_t(0)) {
        return false;
    }
    auto layout = client->getOptions().getCurrentKeyboardRemapping();
    if (!layout) {
        return false;
    }
    auto* provider  = new ModKeybindDataProvider(page, entry.key);
    auto  component = makeComponent<Settings::ActionComponent>(
        entryId(page.modName, entry.key),
        entry.displayName,
        entry.description,
        "",
        [provider](std::function<void(bool)> const& done) {
            provider->onRowClicked();
            done(true);
        },
        std::nullopt,
        std::nullopt,
        std::unique_ptr<::Settings::IActionDataProvider>(provider)
    );
    std::get<::Settings::ActionComponent>(*component).mActionLabelOverrideProvider =
        [provider](::Settings::ActionComponent const&) -> std::optional<std::string> {
        if (provider->isCapturing()) {
            return std::string(">_<");
        }
        return provider->currentKeysLabel();
    };
    applyEntryProviders(*component, entry);
    group.push_back(std::move(component));
    if (entry.showReset) {
        auto* resetProvider = new ModKeybindDataProvider(page, entry.key);
        provider->setSibling(resetProvider);
        auto resetComponent = makeComponent<Settings::ActionComponent>(
            entryId(page.modName, entry.key) + ".reset",
            "",
            std::nullopt,
            "options.key.reset.buttonLabel",
            [provider](std::function<void(bool)> const& done) {
                provider->resetToDefault();
                done(true);
            },
            std::nullopt,
            std::nullopt,
            std::unique_ptr<::Settings::IActionDataProvider>(resetProvider)
        );
        std::get<::Settings::ActionComponent>(*resetComponent).mStateOverrideProvider.get() =
            [resetProvider](::Settings::ActionComponent const&, ::Settings::ComponentState state) {
                return resetProvider->resetRowState(state);
            };
        group.push_back(std::move(resetComponent));
    }
    return true;
}

void ModStringDataProvider::setValue(std::string_view value) {
    auto* e = entry();
    if (e == nullptr || e->stringValue == value) {
        return;
    }
    e->stringValue     = value;
    mPage.stored[mKey] = e->stringValue;
    file_utils::writeFile(mPage.storePath, mPage.stored.dump(4));
    if (auto& listener = mListener.get()) {
        listener();
    }
    if (e->onTextInput) {
        e->onTextInput(e->stringValue);
    }
}

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
    auto result = origin(std::move(context));
    if (result) {
        auto&                      manager = ModSettingsManager::getInstance();
        std::optional<std::string> refreshId;
        {
            std::lock_guard lock{manager.mMutex};
            refreshId = manager.apply(*result);
        }
        if (refreshId) {
            static_cast<Settings::Registry&>(*result).refresh(*refreshId);
        }
    }
    return result;
}

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
    ll::memory::HookRegistrar<BuildDefaultSettingsRegistryHook>::hook();
    ll::memory::HookRegistrar<NormalKeysIndexHook>::hook();
    ll::memory::HookRegistrar<ChordKeysIndexHook>::hook();
    ll::memory::HookRegistrar<MacroKeysIndexHook>::hook();
}

} // namespace

struct ModSettings::Impl {
    ModPage* page;
};

ModSettings::ModSettings(std::unique_ptr<Impl> impl) : mImpl(std::move(impl)) {}

ModSettings::~ModSettings() = default;

ModSettings& ModSettings::forMod(::ll::mod::Mod const& mod) {
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
    std::optional<int>         step,
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
    std::optional<float>       step,
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
    entry.onTextInput = std::move(onChange);
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

ModSettings& ModSettings::setEntryStateProvider(std::string key, EntryStateProvider provider) {
    auto& page = *mImpl->page;
    for (auto& entry : page.entries) {
        if (entry.key == key) {
            entry.stateProvider = std::move(provider);
            ModSettingsManager::getInstance().applyProviderLive(page, entry, EntryProviderKind::State);
            return *this;
        }
    }
    getLogger().warn("ModSettings: no entry named '{}'", key);
    return *this;
}

ModSettings& ModSettings::setEntryNameProvider(std::string key, EntryTextProvider provider) {
    auto& page = *mImpl->page;
    for (auto& entry : page.entries) {
        if (entry.key == key) {
            entry.nameProvider = std::move(provider);
            ModSettingsManager::getInstance().applyProviderLive(page, entry, EntryProviderKind::Name);
            return *this;
        }
    }
    getLogger().warn("ModSettings: no entry named '{}'", key);
    return *this;
}

ModSettings& ModSettings::setEntryDescriptionProvider(std::string key, EntryTextProvider provider) {
    auto& page = *mImpl->page;
    for (auto& entry : page.entries) {
        if (entry.key == key) {
            entry.descriptionProvider = std::move(provider);
            ModSettingsManager::getInstance().applyProviderLive(page, entry, EntryProviderKind::Description);
            return *this;
        }
    }
    getLogger().warn("ModSettings: no entry named '{}'", key);
    return *this;
}

ModSettings& ModSettings::refreshEntry(std::string_view key) {
    auto& page = *mImpl->page;
    for (auto& entry : page.entries) {
        if (entry.key == key) {
            ModSettingsManager::getInstance().refreshGroup(page);
            break;
        }
    }
    return *this;
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
