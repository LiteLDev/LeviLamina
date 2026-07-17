#include "gtest/gtest.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/MessageBox.h"
#include "ll/api/ddui/Observable.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/StringUtils.h"
#include "mc/deps/crypto/Hash.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/Player.h"
#include <chrono>
#include <memory>
#include <string>
#include <vector>

namespace ll::test::dduitest {

struct TestDduiParam {
    enum class FormType { action_menu, settings, monitor, message_box, advanced } type;
};

static auto logptr = ll::io::LoggerRegistry::getInstance().getOrCreate("DduiTest");

static ll::coro::CoroTask<void> runMonitorDelay(
    std::shared_ptr<ll::ddui::ObservableString>  entityStatus,
    std::shared_ptr<ll::ddui::ObservableBoolean> killButtonDisabled
) {
    co_await std::chrono::seconds(4);
    entityStatus->setData("Found 3 non-player entities.");
    killButtonDisabled->setData(false);
}

void registerDduiTestCommand() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false).getOrCreateCommand(
        "dduitest",
        "Data-Driven UI test commands",
        CommandPermissionLevel::GameDirectors,
        CommandFlagValue::None
    );

    cmd.overload<TestDduiParam>().required("type").execute([](CommandOrigin const& ori,
                                                              CommandOutput&       output,
                                                              TestDduiParam const& param) {
        auto* player = static_cast<Player*>(ori.getEntity());
        if (player == nullptr) {
            output.error("dduitest requires a player origin");
            return;
        }

        using namespace ll::ddui;

        switch (param.type) {
        case TestDduiParam::FormType::action_menu: {
            auto form = std::make_shared<CustomForm>(*player, "Action Menu");
            form->appendButton("Button 1", [player]() { player->sendMessage("You clicked Button 1"); });
            form->appendButton("Button 2", [player]() { player->sendMessage("You clicked Button 2"); });
            form->show([form](Player&, DataDrivenScreenClosedReason reason) {
                logptr->info("Action Menu closed, reason: {}", static_cast<int>(reason));
            });
            break;
        }

        case TestDduiParam::FormType::settings: {
            auto name     = std::make_shared<ObservableString>(player->getName(), ObservableOptions{true});
            auto music    = std::make_shared<ObservableBoolean>(true, ObservableOptions{true});
            auto volume   = std::make_shared<ObservableNumber>(75.0, ObservableOptions{true});
            auto language = std::make_shared<ObservableNumber>(0.0, ObservableOptions{true});

            auto form = std::make_shared<CustomForm>(*player, "Game Settings");
            form->appendDropdown(
                "Language",
                language,
                {
                    {"English", 0.0, "English Language"},
                    {"Spanish", 1.0, "Spanish Language"},
                    { "French", 2.0,  "French Language"}
            }
            );
            form->appendTextField("Player Name", name);
            form->appendSlider("Volume", volume, 0.0, 100.0, SliderOptions{std::string("Main Volume")});
            form->appendToggle("Music Enabled", music);
            form->appendButton("Save Settings", [form, player, name, music]() {
                player->sendMessage(
                    "Settings Saved! Name: " + name->getData() + ", Music: " + (music->getData() ? "On" : "Off")
                );
                form->close();
            });
            form->show([form, name, music, volume, language](Player&, DataDrivenScreenClosedReason) {
                logptr->info("Settings closed, name={}", name->getData());
            });
            break;
        }

        case TestDduiParam::FormType::monitor: {
            auto entityStatus       = std::make_shared<ObservableString>("Scanning...");
            auto killButtonDisabled = std::make_shared<ObservableBoolean>(true);
            auto statusMessage      = std::make_shared<ObservableString>("");

            auto form = std::make_shared<CustomForm>(*player, "Entity Monitor");
            form->appendSpacer();
            form->appendLabel(entityStatus);
            form->appendSpacer();
            form->appendButton(
                "Remove All Entities",
                [entityStatus, killButtonDisabled, statusMessage]() {
                    statusMessage->setData("Removing entities...");
                    entityStatus->setData("No entities left.");
                    killButtonDisabled->setData(true);
                },
                ButtonOptions{killButtonDisabled, std::string("Removes all non-player entities")}
            );
            form->appendSpacer();
            form->appendDivider();
            form->appendLabel(statusMessage);
            form->appendCloseButton();

            form->show([form](Player&, DataDrivenScreenClosedReason reason) {
                logptr->info("Entity Monitor closed, reason: {}", static_cast<int>(reason));
            });

            runMonitorDelay(entityStatus, killButtonDisabled).launch(ll::thread::ServerThreadExecutor::getDefault());
            break;
        }

        case TestDduiParam::FormType::message_box: {
            auto mbox = std::make_shared<MessageBox>(*player, "Confirm Action");
            mbox->appendBody("Are you sure you want to perform this action?");
            mbox->appendButton1("Confirm", "Proceed with action");
            mbox->appendButton2("Cancel", "Abort action");
            mbox->show([mbox](Player& p, MessageBoxResult const& result) {
                if (result.selection) {
                    p.sendMessage("You selected Button " + std::to_string(*result.selection + 1));
                } else {
                    p.sendMessage("MessageBox canceled or closed without selection.");
                }
            });
            break;
        }

        case TestDduiParam::FormType::advanced: {
            auto input       = std::make_shared<ObservableString>("", ObservableOptions{true});
            auto sha256Label = std::make_shared<ObservableString>("SHA256:\nempty");
            auto base64Label = std::make_shared<ObservableString>("Base64:\nempty");

            auto form = std::make_shared<CustomForm>(*player, "Advanced Test");

            form->appendLabel(sha256Label);
            form->appendSpacer();
            form->appendLabel(base64Label);
            form->appendSpacer();
            form->appendDivider();
            form->appendTextField("Input text", input, {.description = "Enter your text here"});

            form->appendCloseButton();

            form->show([form, input, sha256Label, base64Label](Player&, DataDrivenScreenClosedReason reason) {
                logptr->info("Advanced Form closed, reason: {}", (int)reason);
            });

            input->subscribe([sha256Label, base64Label](std::string const& val) {
                if (val.empty()) {
                    sha256Label->setData("SHA256:\nempty");
                    base64Label->setData("Base64:\nempty");
                    return;
                }

                Crypto::Hash::Hash hasher(Crypto::Hash::HashType::Sha256);
                hasher.update(val.data(), static_cast<uint>(val.size()));
                std::string raw = hasher.final();

                // Mojang did not add automatic line wrapping
                auto insertNewlines = [](std::string const& str) {
                    if (str.length() <= 27) {
                        return str;
                    }

                    std::string result;
                    result.reserve(str.length() + str.length() / 27);
                    for (size_t i = 0; i < str.length(); i += 27) {
                        if (i > 0) {
                            result += "-\n";
                        }
                        result += str.substr(i, 27);
                    }

                    return result;
                };

                sha256Label->setData("SHA256:\n" + insertNewlines(ll::string_utils::strToHexStr(raw)));
                base64Label->setData("Base64:\n" + insertNewlines(ll::base64_utils::encode(val)));
            });
            break;
        }
        }
    });
}

LL_TYPE_INSTANCE_HOOK(
    registerDduiTestBuiltinCommands,
    ll::memory::HookPriority::Normal,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    auto result = origin(ins);
    registerDduiTestCommand();
    return result;
}

ll::memory::HookRegistrar<registerDduiTestBuiltinCommands> hooks{};

} // namespace ll::test::dduitest

TEST(DduiTest, RegisterDduiTestCommandDoesNotThrow) { EXPECT_NO_THROW(ll::test::dduitest::registerDduiTestCommand()); }

TEST(DduiTest, ParseFormIdWorksCorrectly) {
    using ll::ddui::DduiManager;
    EXPECT_EQ(DduiManager::parseFormId("123"), std::optional<uint>(123));
    EXPECT_EQ(DduiManager::parseFormId("0"), std::optional<uint>(0));
    EXPECT_EQ(DduiManager::parseFormId("4294967295"), std::optional<uint>(4294967295U));
    EXPECT_EQ(DduiManager::parseFormId(""), std::nullopt);
    EXPECT_EQ(DduiManager::parseFormId("abc"), std::nullopt);
    EXPECT_EQ(DduiManager::parseFormId("123a"), std::nullopt);
    EXPECT_EQ(DduiManager::parseFormId("12345678901"), std::nullopt);
}

TEST(DduiTest, SliderValidationAndClamping) {
    using namespace ll::ddui;
    auto val = std::make_shared<ObservableNumber>(10.0, ObservableOptions{true});
    Slider slider("Test Slider", val, 0.0, 20.0, SliderOptions{std::string("Main"), 1.0});

    EXPECT_TRUE(slider.validate());

    // Update with valid value
    slider.handleUpdate("value", std::variant<double, bool, std::string>(15.0));
    EXPECT_DOUBLE_EQ(val->getData(), 15.0);

    // Update with value out of range (should clamp)
    slider.handleUpdate("value", std::variant<double, bool, std::string>(25.0));
    EXPECT_DOUBLE_EQ(val->getData(), 20.0);

    // Update with NaN (should be ignored)
    slider.handleUpdate("value", std::variant<double, bool, std::string>(std::numeric_limits<double>::quiet_NaN()));
    EXPECT_DOUBLE_EQ(val->getData(), 20.0);

    // Step alignment check
    Slider sliderStep("Step Slider", val, 0.0, 10.0, SliderOptions{std::string("Step"), 2.5});
    sliderStep.handleUpdate("value", std::variant<double, bool, std::string>(3.0));
    EXPECT_DOUBLE_EQ(val->getData(), 2.5); // rounds to closest step (2.5)
}

TEST(DduiTest, DropdownValidationAndIndexMapping) {
    using namespace ll::ddui;
    auto val = std::make_shared<ObservableNumber>(1.0, ObservableOptions{true});
    Dropdown dropdown("Test Dropdown", val, {
        {"Item 0", 0.0, "Description 0"},
        {"Item 1", 1.0, "Description 1"},
        {"Item 2", 2.0, "Description 2"}
    });

    EXPECT_TRUE(dropdown.validate());

    auto serialized = dropdown.serialize();
    EXPECT_EQ(serialized["value"], 1.0); // mapped to index 1

    // Update with valid index 2
    dropdown.handleUpdate("value", std::variant<double, bool, std::string>(2.0));
    EXPECT_DOUBLE_EQ(val->getData(), 2.0); // mapped to item value 2.0

    // Update with out of bounds index
    dropdown.handleUpdate("value", std::variant<double, bool, std::string>(5.0));
    EXPECT_DOUBLE_EQ(val->getData(), 2.0); // unchanged

    // Update with NaN
    dropdown.handleUpdate("value", std::variant<double, bool, std::string>(std::numeric_limits<double>::quiet_NaN()));
    EXPECT_DOUBLE_EQ(val->getData(), 2.0); // unchanged
}
