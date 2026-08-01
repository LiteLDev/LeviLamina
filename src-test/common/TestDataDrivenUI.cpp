#include "gtest/gtest.h"

#include <chrono>
#include <concepts>
#include <limits>
#include <memory>
#include <optional>
#include <set>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/data/Observable.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/command/ServerCommandRegisterEvent.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/ui/base/ScreenSession.h"
#include "ll/api/ui/form/CustomForm.h"
#include "ll/api/ui/form/MessageBox.h"
#include "ll/core/ui/base/Materializer.h"
#include "ll/core/ui/base/UIRawMessage.h"
#include "ll/core/ui/form/CustomFormModel.h"
#include "ll/core/ui/form/FormRuntime.h"
#include "ll/core/ui/form/MessageBoxModel.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/platform/UUID.h"
#include "mc/scripting/data_sync/DataStoreSyncServer.h"
#include "mc/scripting/data_sync/DataStoreUpdate.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/Level.h"

namespace ll::test::data_driven_ui {

using namespace std::chrono_literals;

struct TestParam {
    enum class Mode {
        custom,
        custom_async,
        message,
        message_async,
        lifecycle,
        security,
        stress,
    } mode;
    int count{100};
};

struct DataStoreSnapshot {
    std::size_t activeProperties{};
    std::size_t writablePathEntries{};
};

auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("DataDrivenUITest");

ServerPlayer* findPlayer(mce::UUID const& uuid) {
    auto level = ll::service::getLevel();
    if (!level) {
        return nullptr;
    }
    auto* player = level->getPlayer(uuid);
    return player == nullptr ? nullptr : static_cast<ServerPlayer*>(player);
}

void report(mce::UUID const& uuid, std::string const& message, bool failed = false) {
    if (auto* player = findPlayer(uuid)) {
        player->sendMessage(message);
    }
    if (failed) {
        logger->error("{}", message);
    } else {
        logger->info("{}", message);
    }
}

std::string completionText(ui::ScreenSession::Result const& result) {
    if (!result) {
        return "error: " + result.error().message();
    }
    return "close reason " + std::to_string(static_cast<int>(result.value()));
}

std::string completionText(ui::MessageBox::Result const& result) {
    if (!result) {
        return "error: " + result.error().message();
    }
    return "close reason " + std::to_string(static_cast<int>(result->closeReason)) + ", selection "
         + (result->selection ? std::to_string(*result->selection) : "none");
}

DataStoreSnapshot snapshot(Bedrock::DDUI::DataStoreSyncServer const& sync) {
    DataStoreSnapshot result;
    for (auto const& [_, properties] : *sync.mDataStores) {
        for (auto const& [__, value] : properties) {
            if (!value.isNull()) {
                ++result.activeProperties;
            }
        }
    }
    for (auto const& [_, paths] : *sync.mUpdateableFromClient) {
        result.writablePathEntries += paths.size();
    }
    return result;
}

std::set<std::string> customFormProperties(Bedrock::DDUI::DataStoreSyncServer const& sync) {
    std::set<std::string> result;
    auto const            datastore = sync.mDataStores->find("minecraft");
    if (datastore == sync.mDataStores->end()) {
        return result;
    }
    for (auto const& [name, value] : datastore->second) {
        if (name.starts_with("custom_form_data_") && !value.isNull()) {
            result.emplace(name);
        }
    }
    return result;
}

std::optional<std::string> findNewProperty(std::set<std::string> const& before, std::set<std::string> const& after) {
    for (auto const& name : after) {
        if (!before.contains(name)) {
            return name;
        }
    }
    return std::nullopt;
}

std::optional<unsigned int>
propertyVersion(Bedrock::DDUI::DataStoreSyncServer const& sync, std::string const& property) {
    auto const datastore = sync.mPropertyUpdateCount->find("minecraft");
    if (datastore == sync.mPropertyUpdateCount->end()) {
        return std::nullopt;
    }
    auto const item = datastore->second.find(property);
    return item == datastore->second.end() ? std::nullopt : std::optional{item->second};
}

std::optional<unsigned int>
pathVersion(Bedrock::DDUI::DataStoreSyncServer const& sync, std::string const& property, std::string const& path) {
    auto const datastore = sync.mPathUpdateCount->find("minecraft");
    if (datastore == sync.mPathUpdateCount->end()) {
        return std::nullopt;
    }
    auto const item = datastore->second.find(property);
    if (item == datastore->second.end()) {
        return std::nullopt;
    }
    auto const pathItem = item->second.find(path);
    return pathItem == item->second.end() ? std::nullopt : std::optional{pathItem->second};
}

std::optional<Bedrock::DDUI::DataStoreUpdate>
latestOutgoingUpdate(Bedrock::DDUI::DataStoreSyncServer const& sync, std::string_view property, std::string_view path) {
    for (auto iterator = sync.mOutgoingChanges->rbegin(); iterator != sync.mOutgoingChanges->rend(); ++iterator) {
        auto const* update = std::get_if<Bedrock::DDUI::DataStoreUpdate>(&*iterator);
        if (update != nullptr && *update->mDataStoreName == "minecraft" && *update->mProperty == property
            && *update->mPath == path) {
            return *update;
        }
    }
    return std::nullopt;
}

bool prepareClientUpdate(
    Bedrock::DDUI::DataStoreSyncServer const& sync,
    Bedrock::DDUI::DataStoreUpdate&           update,
    std::variant<double, bool, std::string>   value,
    CommandOutput&                            output,
    std::string_view                          operation
) {
    auto const currentPropertyVersion = propertyVersion(sync, *update.mProperty);
    auto const currentPathVersion     = pathVersion(sync, *update.mProperty, *update.mPath).value_or(0);
    if (!currentPropertyVersion || currentPathVersion == std::numeric_limits<unsigned int>::max()) {
        output.error("{} failed: native DataStore versions are unavailable", operation);
        return false;
    }
    update.mPropertyUpdateCount = *currentPropertyVersion;
    update.mPathUpdateCount     = currentPathVersion + 1;
    update.mData                = std::move(value);
    return true;
}

struct CustomState {
    ui::ObservableString       title{"DDUI Stable CustomForm"};
    ui::ObservableString       status{"Ready"};
    ui::ObservableUIRawMessage rawStatus{ui::UIRawMessage::text("Raw observable ready")};
    ui::ObservableString       text{"Initial text", {.clientWritable = true}};
    ui::ObservableBoolean      toggled{false, {.clientWritable = true}};
    ui::ObservableNumber       dropdown{1.0, {.clientWritable = true}};
    ui::ObservableNumber       slider{25.0, {.clientWritable = true}};
    ui::ObservableBoolean      buttonDisabled{false};
    ui::ObservableBoolean      detailVisible{true};
    ui::CustomForm             form;
    int                        buttonClicks{};

    explicit CustomState(Player& player) : form(player, title) {}
};

std::shared_ptr<CustomState> makeCustom(Player& player) {
    auto state = std::make_shared<CustomState>(player);

    auto weak = std::weak_ptr{state};
    state->form
        .header(
            ui::UIRawMessage::text("All stable components"),
            {
                .visible = state->detailVisible
    }
        )
        .label(state->status, {.visible = state->detailVisible})
        .label(state->rawStatus, {.visible = state->detailVisible})
        .divider()
        .spacer()
        .textField(
            "Text field",
            state->text,
            {.description = std::string{"Client-writable text"}, .disabled = false, .visible = true}
        )
        .toggle("Toggle", state->toggled, {.description = std::string{"Client-writable toggle"}})
        .dropdown(
            "Dropdown",
            state->dropdown,
            {
                {"Zero", 0.5, std::string{"First item"}},
                {ui::UIRawMessage::text("One"), 1.6, std::string{"Second item"}},
                {state->status, 2.7, std::string{"Dynamic item"}},
            },
            {.description = std::string{"Select a value"}}
        )
        .slider("Slider", state->slider, 0.0, 100.0, {.description = std::string{"Drag the slider"}, .step = 1.0})
        .button(
            "Run action",
            [weak] {
                if (auto state = weak.lock()) {
                    ++state->buttonClicks;
                    state->status.setData("Button clicks: " + std::to_string(state->buttonClicks));
                }
            },
            {
                .disabled = state->buttonDisabled,
                .tooltip  = ui::UIRawMessage::translate("gui.ok"),
                .visible  = true,
            }
        )
        .closeButton();

    state->text.subscribe([weak](std::string const& value) {
        if (auto state = weak.lock()) {
            state->status.setData("Text: " + value);
        }
    });
    state->toggled.subscribe([weak](bool const& value) {
        if (auto state = weak.lock()) {
            state->status.setData(value ? "Toggle: on" : "Toggle: off");
            state->detailVisible.setData(!value);
        }
    });
    state->dropdown.subscribe([weak](double const& value) {
        if (auto state = weak.lock()) {
            state->status.setData("Dropdown: " + std::to_string(value));
        }
    });
    state->slider.subscribe([weak](double const& value) {
        if (auto state = weak.lock()) {
            state->status.setData("Slider: " + std::to_string(value));
        }
    });
    return state;
}

void scheduleCustomUpdates(std::shared_ptr<CustomState> const& state) {
    ll::thread::ServerThreadExecutor::getDefault().executeAfter(
        [state] {
            state->status.setData("Server update received");
            state->rawStatus.setData(ui::UIRawMessage::translate("gui.ok"));
            state->slider.setData(33.0);
            state->buttonDisabled.setData(false);
        },
        1s
    );
}

void runCustom(Player& player, CommandOutput& output) {
    auto state = makeCustom(player);
    auto uuid  = player.getUuid();
    auto shown = state->form.show([state, uuid](ui::CustomForm::Result result) {
        report(uuid, "custom callback: " + completionText(result), !result);
    });
    if (!shown) {
        output.error("custom show failed: {}", shown.error().message());
        return;
    }

    scheduleCustomUpdates(state);
    output.success("custom shown; exercise every control and close it");
}

coro::CoroTask<void> runCustomAsync(mce::UUID uuid) {
    auto* player = findPlayer(uuid);
    if (player == nullptr) {
        report(uuid, "custom_async: player unavailable", true);
        co_return;
    }
    auto state = makeCustom(*player);
    scheduleCustomUpdates(state);
    auto result = co_await state->form.showAsync();
    report(uuid, "custom_async: " + completionText(result), !result);
}

struct MessageState {
    ui::ObservableString title{"Stable MessageBox"};
    ui::ObservableString body{"Choose either button"};
    ui::MessageBox       form;

    explicit MessageState(Player& player) : form(player, title) {}
};

std::shared_ptr<MessageState> makeMessage(Player& player) {
    auto state = std::make_shared<MessageState>(player);
    state->form.body(state->body)
        .button1("Button one", ui::TextValue{std::string{"Returns selection 1"}})
        .button2(ui::UIRawMessage::text("Button two"), ui::TextValue{std::string{"Returns selection 2"}});
    return state;
}

void runMessage(Player& player, CommandOutput& output) {
    auto state = makeMessage(player);
    auto uuid  = player.getUuid();
    auto shown = state->form.show([state, uuid](ui::MessageBox::Result result) {
        report(uuid, "message callback: " + completionText(result), !result);
    });
    if (!shown) {
        output.error("message show failed: {}", shown.error().message());
        return;
    }
    output.success("message shown; click either button and verify selection 1/2");
}

coro::CoroTask<void> runMessageAsync(mce::UUID uuid) {
    auto* player = findPlayer(uuid);
    if (player == nullptr) {
        report(uuid, "message_async: player unavailable", true);
        co_return;
    }
    auto state  = makeMessage(*player);
    auto result = co_await state->form.showAsync();
    report(uuid, "message_async: " + completionText(result), !result);
}

struct LifecycleState : std::enable_shared_from_this<LifecycleState> {
    mce::UUID      uuid;
    ui::CustomForm primary;
    ui::CustomForm busy;

    explicit LifecycleState(Player& player)
    : uuid(player.getUuid()),
      primary(player, "Lifecycle primary"),
      busy(player, "Busy probe") {}

    void startCloseAllPhase() {
        auto* player = findPlayer(uuid);
        if (player == nullptr) {
            report(uuid, "lifecycle close-screen: player unavailable", true);
            return;
        }
        ui::CustomForm form{*player, "closeScreen phase"};
        form.label("This form will be closed for this player").closeButton();
        auto self  = shared_from_this();
        auto shown = form.show([self](ui::CustomForm::Result result) {
            auto passed = result && result.value() == ui::ScreenCloseReason::ProgrammaticCloseAll;
            report(self->uuid, "lifecycle closeScreen: " + completionText(result), !passed);
        });
        if (!shown) {
            report(uuid, "lifecycle close-screen show failed: " + shown.error().message(), true);
            return;
        }
        ll::thread::ServerThreadExecutor::getDefault().executeAfter(
            [self] {
                if (auto* current = findPlayer(self->uuid)) {
                    ui::closeScreen(*current);
                }
            },
            1s
        );
    }
};

void runLifecycle(Player& player, CommandOutput& output) {
    auto state = std::make_shared<LifecycleState>(player);
    state->primary.label("Programmatic close phase").closeButton();

    auto shown = state->primary.show([state](ui::CustomForm::Result result) {
        auto passed = result && result.value() == ui::ScreenCloseReason::ProgrammaticClose;
        report(state->uuid, "lifecycle close: " + completionText(result), !passed);
        state->startCloseAllPhase();
    });
    if (!shown) {
        output.error("lifecycle primary show failed: {}", shown.error().message());
        return;
    }

    auto repeated = state->primary.show();
    if (repeated) {
        output.error("lifecycle repeated show unexpectedly succeeded");
        return;
    }

    bool modificationRejected = false;
    try {
        state->primary.label("illegal modification");
    } catch (std::logic_error const&) {
        modificationRejected = true;
    }
    if (!modificationRejected || !state->primary.isShowing()) {
        output.error("lifecycle structure lock or isShowing failed");
        return;
    }

    state->busy.label("Expected UserBusy");
    auto busyShown = state->busy.show([state](ui::CustomForm::Result result) {
        auto passed = result && result.value() == ui::ScreenCloseReason::UserBusy;
        report(state->uuid, "lifecycle busy: " + completionText(result), !passed);
    });
    if (!busyShown) {
        output.error("lifecycle busy show start failed: {}", busyShown.error().message());
        return;
    }

    ll::thread::ServerThreadExecutor::getDefault().executeAfter(
        [state] {
            auto first  = state->primary.close();
            auto second = state->primary.close();
            if (!first || !second) {
                report(state->uuid, "lifecycle repeated close failed", true);
            }
        },
        1s
    );
    output.success("lifecycle started: repeat show, lock, busy, close, and closeScreen");
}

struct SecurityState {
    ui::ObservableString  readOnly{"Read-only label"};
    ui::ObservableBoolean toggle{true, {.clientWritable = true}};
    ui::ObservableNumber  number{12.5, {.clientWritable = true}};
    ui::CustomForm        form;
    int                   toggleCallbacks{};
    int                   numberCallbacks{};

    explicit SecurityState(Player& player) : form(player, "Security") {}
};

void runSecurity(Player& player, CommandOutput& output) {
    bool rejectedReadOnlyInput = false;
    try {
        ui::CustomForm probe{player, "Read-only probe"};
        probe.toggle("Must reject", ui::ObservableBoolean{false});
    } catch (std::invalid_argument const&) {
        rejectedReadOnlyInput = true;
    }
    if (!rejectedReadOnlyInput) {
        output.error("security failed: read-only input Observable was accepted");
        return;
    }

    auto  state            = std::make_shared<SecurityState>(player);
    auto& sync             = static_cast<ServerPlayer&>(player).getDataStoreSync();
    auto  beforeProperties = customFormProperties(sync);

    state->form.label(state->readOnly)
        .toggle("Writable toggle", state->toggle)
        .slider("Writable number", state->number, 0.0, 100.0)
        .button("Action", [] {})
        .closeButton();
    auto weak = std::weak_ptr{state};
    state->toggle.subscribe([weak](bool const&) {
        if (auto state = weak.lock()) {
            ++state->toggleCallbacks;
        }
    });
    state->number.subscribe([weak](double const&) {
        if (auto state = weak.lock()) {
            ++state->numberCallbacks;
        }
    });

    auto uuid  = player.getUuid();
    auto shown = state->form.show([state, uuid](ui::CustomForm::Result result) {
        report(uuid, "security form: " + completionText(result), !result);
    });
    if (!shown) {
        output.error("security show failed: {}", shown.error().message());
        return;
    }

    auto property = findNewProperty(beforeProperties, customFormProperties(sync));
    if (!property) {
        output.error("security failed: high-level form property was not discoverable by the probe");
        return;
    }

    state->toggle.setData(false);
    state->toggle.setData(true);
    state->number.setData(13.0);
    state->number.setData(12.5);
    auto toggleBase = latestOutgoingUpdate(sync, *property, "layout[1].toggled");
    auto numberBase = latestOutgoingUpdate(sync, *property, "layout[2].value");
    if (!toggleBase || !numberBase) {
        output.error("security failed: high-level outgoing update templates are unavailable");
        return;
    }

    auto wrongType = *toggleBase;
    auto before    = state->toggleCallbacks;
    if (!prepareClientUpdate(sync, wrongType, std::string{"wrong"}, output, "prepare wrong type")) {
        return;
    }
    sync.applyUpdate(wrongType);
    if (!state->toggle.getData() || state->toggleCallbacks != before) {
        output.error("security failed: wrong-type update changed Observable");
        return;
    }

    auto nonFinite = *numberBase;
    before         = state->numberCallbacks;
    if (!prepareClientUpdate(sync, nonFinite, std::numeric_limits<double>::infinity(), output, "prepare non-finite")) {
        return;
    }
    sync.applyUpdate(nonFinite);
    if (state->number.getData() != 12.5 || state->numberCallbacks != before) {
        output.error("security failed: non-finite update changed Observable");
        return;
    }

    auto accepted = *toggleBase;
    before        = state->toggleCallbacks;
    if (!prepareClientUpdate(sync, accepted, false, output, "prepare accepted update")) {
        return;
    }
    sync.applyUpdate(accepted);
    if (state->toggle.getData() || state->toggleCallbacks != before + 1) {
        output.error("security failed: valid client update did not reach Observable");
        return;
    }

    before = state->toggleCallbacks;
    sync.applyUpdate(accepted);
    if (state->toggle.getData() || state->toggleCallbacks != before) {
        output.error("security failed: replay update was accepted");
        return;
    }

    ll::thread::ServerThreadExecutor::getDefault().executeAfter([state] { state->form.close(); }, 2s);
    output.success("security passed: read-only, writable, type, finite-number, and replay checks");
}

coro::CoroTask<void> runStress(mce::UUID uuid, int count) {
    auto* initialPlayer = findPlayer(uuid);
    if (initialPlayer == nullptr) {
        report(uuid, "stress: player unavailable", true);
        co_return;
    }
    auto const baseline = snapshot(initialPlayer->getDataStoreSync());

    for (int iteration = 0; iteration < count; ++iteration) {
        auto* player = findPlayer(uuid);
        if (player == nullptr) {
            report(uuid, "stress: player left at iteration " + std::to_string(iteration), true);
            co_return;
        }

        struct State {
            ui::CustomForm form;

            State(Player& player, int iteration) : form(player, "Stress " + std::to_string(iteration)) {}
        };
        auto state = std::make_shared<State>(*player, iteration);
        state->form.label("High-level form").button("Action", [] {}).closeButton();
        ll::thread::ServerThreadExecutor::getDefault().executeAfter([state] { state->form.close(); }, 50ms);

        auto result = co_await state->form.showAsync();
        if (!result || result.value() != ui::ScreenCloseReason::ProgrammaticClose) {
            report(uuid, "stress failed at " + std::to_string(iteration) + ": " + completionText(result), true);
            co_return;
        }
    }

    auto* finalPlayer = findPlayer(uuid);
    if (finalPlayer == nullptr) {
        report(uuid, "stress: player unavailable for final snapshot", true);
        co_return;
    }
    auto const final  = snapshot(finalPlayer->getDataStoreSync());
    auto const passed = final.activeProperties == baseline.activeProperties
                     && final.writablePathEntries == baseline.writablePathEntries;
    report(
        uuid,
        "stress " + std::to_string(count)
            + (passed ? " passed; active DataStore returned to baseline"
                      : " failed; DataStore state did not return to baseline"),
        !passed
    );
}

void registerCommand() {
    auto& command = ll::command::CommandRegistrar::getServerInstance().getOrCreateCommand(
        "dduitest",
        "Stable high-level data-driven UI tests",
        CommandPermissionLevel::GameDirectors,
        CommandFlagValue::None
    );

    command.overload<TestParam>().required("mode").optional("count").execute(
        [](CommandOrigin const& origin, CommandOutput& output, TestParam const& param) {
            auto* player = static_cast<Player*>(origin.getEntity());
            if (player == nullptr) {
                output.error("dduitest requires a player origin");
                return;
            }
            switch (param.mode) {
            case TestParam::Mode::custom:
                runCustom(*player, output);
                return;
            case TestParam::Mode::custom_async:
                runCustomAsync(player->getUuid()).launch(ll::thread::ServerThreadExecutor::getDefault());
                output.success("custom_async started");
                return;
            case TestParam::Mode::message:
                runMessage(*player, output);
                return;
            case TestParam::Mode::message_async:
                runMessageAsync(player->getUuid()).launch(ll::thread::ServerThreadExecutor::getDefault());
                output.success("message_async started");
                return;
            case TestParam::Mode::lifecycle:
                runLifecycle(*player, output);
                return;
            case TestParam::Mode::security:
                runSecurity(*player, output);
                return;
            case TestParam::Mode::stress:
                if (param.count <= 0) {
                    output.error("stress count must be positive");
                    return;
                }
                runStress(player->getUuid(), param.count).launch(ll::thread::ServerThreadExecutor::getDefault());
                output.success("stress {} started", param.count);
                return;
            }
        }
    );
}

auto commandRegisterListener =
    ll::event::EventBus::getInstance().emplaceListener<ll::event::command::ServerCommandRegisterEvent>(
        [](ll::event::command::ServerCommandRegisterEvent&) { registerCommand(); }
    );

} // namespace ll::test::data_driven_ui

static_assert(std::derived_from<ll::ui::ObservableBoolean, ll::data::Observable<bool>>);
static_assert(std::derived_from<ll::ui::ObservableNumber, ll::data::Observable<double>>);
static_assert(std::derived_from<ll::ui::ObservableString, ll::data::Observable<std::string>>);
static_assert(std::derived_from<ll::ui::ObservableUIRawMessage, ll::data::Observable<ll::ui::UIRawMessage>>);
static_assert(std::same_as<ll::data::Observable<int>::SubscriptionId, std::uint32_t>);
static_assert(!std::copy_constructible<ll::data::Observable<int>::Callback>);
static_assert(ll::ui::BindingValue<cereal::DynamicValue>);
static_assert(requires(cereal::DynamicValue::Object const& object, std::string_view key) {
    object.find(key);
    object.contains(key);
});
static_assert(
    requires(ll::ui::ScreenSession const& session, cereal::DynamicValue const& value, std::string const& json) {
        { session.createProperty("minecraft", "test", value) } -> std::same_as<ll::Expected<ll::ui::Property>>;
        { session.createProperty("minecraft", "test", json) } -> std::same_as<ll::Expected<ll::ui::Property>>;
    }
);

TEST(ObservableTest, SubscriptionPersistsUntilExplicitlyRemoved) {
    ll::data::Observable<int> observable{0};
    int                       calls{};
    auto const                id = observable.subscribe([&](int const&) { ++calls; });

    observable.setData(1);
    observable.setData(1);
    EXPECT_EQ(calls, 1);
    EXPECT_TRUE(observable.unsubscribe(id));
    EXPECT_FALSE(observable.unsubscribe(id));
    observable.setData(2);
    EXPECT_EQ(calls, 1);
}

TEST(ObservableTest, CopiesShareDataAndSubscriptions) {
    ll::data::Observable<std::string> first{"a"};
    auto                              second = first;
    ll::data::Observable<std::string> independent{"a"};
    std::string                       observed;
    auto const                        firstId = first.subscribe([&](std::string const& value) { observed = value; });
    auto const                        copyId  = second.subscribe([](std::string const&) {});
    auto const                        independentId = independent.subscribe([](std::string const&) {});

    second.setData("b");
    EXPECT_EQ(first.getData(), "b");
    EXPECT_EQ(observed, "b");
    EXPECT_EQ(firstId, 1u);
    EXPECT_EQ(copyId, 2u);
    EXPECT_EQ(independentId, 1u);
}

TEST(ObservableTest, MoveOnlyCallbacksRunDirectlyAndExceptionsPropagate) {
    ll::data::Observable<int> observable{0};
    auto                      value    = std::make_unique<int>(0);
    auto const                throwing = observable.subscribe([owned = std::move(value)](int const& current) mutable {
        *owned = current;
        throw std::runtime_error("callback failed");
    });

    EXPECT_THROW(observable.setData(1), std::runtime_error);
    EXPECT_EQ(observable.getData(), 1);
    EXPECT_TRUE(observable.unsubscribe(throwing));

    int observed{};
    (void)observable.subscribe([&](int const& value) { observed = value; });
    observable.setData(3);
    EXPECT_EQ(observable.getData(), 3);
    EXPECT_EQ(observed, 3);
}

TEST(DataDrivenUITest, ObservableOptionsStayInUiDerivedTypes) {
    ll::ui::ObservableBoolean      boolean{false, {.clientWritable = true}};
    ll::ui::ObservableNumber       number{0.0};
    ll::ui::ObservableString       string{"", {.clientWritable = true}};
    ll::ui::ObservableUIRawMessage raw{ll::ui::UIRawMessage::text("x")};

    EXPECT_TRUE(boolean.isClientWritable());
    EXPECT_FALSE(number.isClientWritable());
    EXPECT_TRUE(string.isClientWritable());
    EXPECT_FALSE(raw.isClientWritable());
}

TEST(DataDrivenUITest, UIRawMessageSupportsEveryStableField) {
    auto value   = ll::ui::UIRawMessage::rawText({
        ll::ui::UIRawMessage::text("prefix"),
        ll::ui::UIRawMessage::translate("translation.key", std::vector<std::string>{"one", "two"}),
        ll::ui::UIRawMessage::translate("nested.key", ll::ui::UIRawMessage::text("nested")),
    });
    auto dynamic = ll::ui::detail::UIRawMessageAccess::toDynamicValue(value);

    ASSERT_TRUE(dynamic.contains("rawtext"));
    ASSERT_EQ(dynamic["rawtext"].size(), 3);
    EXPECT_EQ(dynamic["rawtext"][0]["text"].asString(), "prefix");
    EXPECT_EQ(dynamic["rawtext"][1]["translate"].asString(), "translation.key");
    ASSERT_TRUE(dynamic["rawtext"][1]["with"].isArray());
    EXPECT_EQ(dynamic["rawtext"][1]["with"][0].asString(), "one");
    EXPECT_EQ(dynamic["rawtext"][1]["with"][1].asString(), "two");
    EXPECT_EQ(dynamic["rawtext"][2]["with"]["text"].asString(), "nested");

    auto roundTrip = ll::ui::detail::UIRawMessageAccess::fromDynamicValue(dynamic);
    ASSERT_TRUE(roundTrip);
    EXPECT_EQ(roundTrip.value(), value);
}

TEST(DataDrivenUITest, CustomFormComponentsUseStableVanillaFieldsAndDefaults) {
    using namespace ll::ui;
    using namespace ll::ui::detail;
    using namespace ll::ui::detail::component;

    ObservableNumber  dropdown{1.0, {.clientWritable = true}};
    ObservableNumber  slider{2.0, {.clientWritable = true}};
    ObservableString  text{"input", {.clientWritable = true}};
    ObservableBoolean toggled{true, {.clientWritable = true}};

    CustomFormModel model{"Title"};
    model.showCloseButton();
    model.emplace<Button>("Button", [] {}, ButtonOptions{});
    model.emplace<Divider>(DividerOptions{});
    model.emplace<Dropdown>(
        "Dropdown",
        dropdown,
        std::vector<DropdownItemData>{
            {"One", 1.0, {}}
    },
        DropdownOptions{}
    );
    model.emplace<Header>("Header", TextOptions{});
    model.emplace<Label>("Label", TextOptions{});
    model.emplace<Slider>("Slider", slider, NumberValue{0.0}, NumberValue{10.0}, SliderOptions{});
    model.emplace<Spacer>(SpacingOptions{});
    model.emplace<TextField>("Text field", text, TextFieldOptions{});
    model.emplace<Toggle>("Toggle", toggled, ToggleOptions{});

    auto        form   = model.serialize();
    auto const& layout = form["layout"];

    EXPECT_EQ(form["title"].asString(), "Title");
    EXPECT_TRUE(form["closeButton"]["button_visible"].asBool());
    EXPECT_EQ(form["closeButton"]["label"].asString(), "Close");
    EXPECT_EQ(form["closeButton"]["onClick"].asNumber(), 0.0);
    EXPECT_EQ(layout["length"].asInteger(), 9);

    EXPECT_TRUE(layout["0"]["button_visible"].asBool());
    EXPECT_TRUE(layout["0"]["visible"].asBool());
    EXPECT_FALSE(layout["0"]["disabled"].asBool());
    EXPECT_EQ(layout["0"]["tooltip"].asString(), "");
    EXPECT_EQ(layout["0"]["onClick"].asNumber(), 0.0);
    EXPECT_TRUE(layout["1"]["divider_visible"].asBool());
    EXPECT_TRUE(layout["1"]["visible"].asBool());
    EXPECT_TRUE(layout["2"]["dropdown_visible"].asBool());
    EXPECT_EQ(layout["2"]["description"].asString(), "");
    EXPECT_EQ(layout["2"]["items"]["length"].asInteger(), 1);
    EXPECT_EQ(layout["2"]["items"]["0"]["label"].asString(), "One");
    EXPECT_EQ(layout["2"]["items"]["0"]["value"].asNumber(), 1.0);
    EXPECT_EQ(layout["2"]["items"]["0"]["description"].asString(), "");
    EXPECT_TRUE(layout["3"]["header_visible"].asBool());
    EXPECT_TRUE(layout["4"]["label_visible"].asBool());
    EXPECT_TRUE(layout["5"]["slider_visible"].asBool());
    EXPECT_EQ(layout["5"]["step"].asNumber(), 1.0);
    EXPECT_TRUE(layout["6"]["spacer_visible"].asBool());
    EXPECT_TRUE(layout["7"]["textfield_visible"].asBool());
    EXPECT_EQ(layout["7"]["text"].asString(), "input");
    EXPECT_TRUE(layout["8"]["toggle_visible"].asBool());
    EXPECT_TRUE(layout["8"]["toggled"].asBool());
}

TEST(DataDrivenUITest, CustomFormComponentsCoverEveryStableOption) {
    using namespace ll::ui;
    using namespace ll::ui::detail;
    using namespace ll::ui::detail::component;

    auto buttonData = Button{
        "Button",
        [] {},
        {.disabled = true, .tooltip = UIRawMessage::translate("gui.ok"), .visible = false}
    }.serialize();
    EXPECT_TRUE(buttonData["disabled"].asBool());
    EXPECT_EQ(buttonData["tooltip"]["translate"].asString(), "gui.ok");
    EXPECT_FALSE(buttonData["visible"].asBool());

    EXPECT_FALSE(Divider{{.visible = false}}.serialize()["visible"].asBool());

    ObservableNumber dropdown{2.0, {.clientWritable = true}};
    auto             dropdownData = Dropdown{
        "Dropdown",
        dropdown,
        {{UIRawMessage::text("Two"), 2.0, UIRawMessage::text("Item description")}},
        {.description = "Dropdown description", .disabled = true, .visible = false}
    }.serialize();
    EXPECT_EQ(dropdownData["description"].asString(), "Dropdown description");
    EXPECT_TRUE(dropdownData["disabled"].asBool());
    EXPECT_FALSE(dropdownData["visible"].asBool());
    EXPECT_EQ(dropdownData["items"]["0"]["label"]["text"].asString(), "Two");
    EXPECT_EQ(dropdownData["items"]["0"]["description"]["text"].asString(), "Item description");

    EXPECT_FALSE((Header{"Header", {.visible = false}}.serialize()["visible"].asBool()));
    EXPECT_FALSE((Label{"Label", {.visible = false}}.serialize()["visible"].asBool()));

    ObservableNumber slider{3.0, {.clientWritable = true}};
    auto             sliderData = Slider{
        "Slider",
        slider,
        NumberValue{-1.0},
        NumberValue{5.0},
        {.description = "Slider description", .disabled = true, .step = 0.5, .visible = false}
    }.serialize();
    EXPECT_EQ(sliderData["description"].asString(), "Slider description");
    EXPECT_TRUE(sliderData["disabled"].asBool());
    EXPECT_EQ(sliderData["step"].asNumber(), 0.5);
    EXPECT_FALSE(sliderData["visible"].asBool());
    EXPECT_EQ(sliderData["minValue"].asNumber(), -1.0);
    EXPECT_EQ(sliderData["maxValue"].asNumber(), 5.0);

    EXPECT_FALSE(Spacer{{.visible = false}}.serialize()["visible"].asBool());

    ObservableString text{"value", {.clientWritable = true}};
    auto             textFieldData = TextField{
        "Text",
        text,
        {.description = "Text description", .disabled = true, .visible = false}
    }.serialize();
    EXPECT_EQ(textFieldData["description"].asString(), "Text description");
    EXPECT_TRUE(textFieldData["disabled"].asBool());
    EXPECT_FALSE(textFieldData["visible"].asBool());

    ObservableBoolean toggled{false, {.clientWritable = true}};
    auto              toggleData = Toggle{
        "Toggle",
        toggled,
        {.description = "Toggle description", .disabled = true, .visible = false}
    }.serialize();
    EXPECT_EQ(toggleData["description"].asString(), "Toggle description");
    EXPECT_TRUE(toggleData["disabled"].asBool());
    EXPECT_FALSE(toggleData["visible"].asBool());
}

TEST(DynamicValueTest, NativeInterfaceUsesTransparentStringViewLookupAndMinecraftHash) {
    auto value = cereal::DynamicValue::object();
    value.set("title", "Title").set("items", cereal::DynamicValue::array({1, 2, 3}));

    std::string      ownedKey{"title"};
    std::string_view key{ownedKey};
    EXPECT_TRUE(value.contains(key));
    EXPECT_EQ(value.at(key).asString(), "Title");
    EXPECT_EQ(value["items"].size(), 3);
    EXPECT_EQ(value["items"][1].asInteger(), 2);
    EXPECT_EQ(std::hash<cereal::DynamicValue>{}(value), static_cast<std::size_t>(value.hash()));
    EXPECT_EQ(cereal::util::internal::StringViewHash{}(key), std::hash<std::string>{}(ownedKey));
}

TEST(DataDrivenUITest, MessageBoxModelUsesStableVanillaFields) {
    ll::ui::detail::MessageBoxModel model{ll::ui::UIRawMessage::text("Title")};
    model.body(std::string{"Body"});
    model.button1(std::string{"One"}, ll::ui::UIRawMessage::translate("gui.ok"));
    model.button2(std::string{"Two"}, {});
    auto data = model.serialize();

    EXPECT_EQ(data["title"]["text"].asString(), "Title");
    EXPECT_EQ(data["body"].asString(), "Body");
    EXPECT_EQ(data["button1"]["label"].asString(), "One");
    EXPECT_EQ(data["button1"]["tooltip"]["translate"].asString(), "gui.ok");
    EXPECT_EQ(data["button1"]["onClick"].asNumber(), 0.0);
    EXPECT_EQ(data["button2"]["label"].asString(), "Two");
    EXPECT_EQ(data["button2"]["tooltip"].asString(), "");
    EXPECT_EQ(data["button2"]["onClick"].asNumber(), 0.0);
}

TEST(DataDrivenUITest, ComponentsRejectNonFiniteNumbers) {
    auto infinity = std::numeric_limits<double>::infinity();
    EXPECT_THROW((void)ll::ui::detail::materialize(ll::ui::NumberValue{infinity}), std::invalid_argument);

    ll::ui::ObservableNumber dropdown{0.0, {.clientWritable = true}};
    EXPECT_THROW(
        (void)ll::ui::detail::component::Dropdown(
            "Dropdown",
            dropdown,
            {
                {"Invalid", infinity, {}}
    },
            {}
        ),
        std::invalid_argument
    );
}

TEST(DataDrivenUITest, PublicCloseReasonsMatchBedrockValues) {
    using ll::ui::ScreenCloseReason;
    EXPECT_EQ(static_cast<int>(ScreenCloseReason::ProgrammaticClose), 0);
    EXPECT_EQ(static_cast<int>(ScreenCloseReason::ProgrammaticCloseAll), 1);
    EXPECT_EQ(static_cast<int>(ScreenCloseReason::ClientCanceled), 2);
    EXPECT_EQ(static_cast<int>(ScreenCloseReason::UserBusy), 3);
    EXPECT_EQ(static_cast<int>(ScreenCloseReason::InvalidForm), 4);
}
