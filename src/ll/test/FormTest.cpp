#include <cstdint>
#include <string>
#include <variant>

#include "ll/api/Logger.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/form/CustomForm.h"
#include "ll/api/form/ModalForm.h"
#include "ll/api/form/SimpleForm.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/ServerCommands.h"
#include "mc/world/actor/player/Player.h"

namespace ll::test::formtest {
struct TestFormParam {
    enum class FormType { custom, modal, simple } type;
};

void registerFormTestCommand() {
    static ll::Logger logger{"FormTest"};
    static auto       lambda = [](CommandOrigin const& ori, CommandOutput&, TestFormParam const& param) {
        switch (param.type) {
        case TestFormParam::FormType::custom: {
            ll::form::CustomForm form;
            form.setTitle("CustomForm")
                .appendLabel("label")
                .appendInput("input1", "input")
                .appendToggle("toggle", "toggle")
                .appendSlider("slider", "slider", 0, 100, 1)
                .appendStepSlider("stepSlider", "stepSlider", {"a", "b", "c"})
                .appendDropdown("dropdown", "dropdown", {"a", "b", "c"})
                .sendTo(*(Player*)ori.getEntity(), [](Player&, ll::form::CustomFormResult const& data) {
                    for (auto [name, result] : data) {
                        static auto logDebugResult = [&](const ll::form::CustomFormElementResult& var) {
                            if (std::holds_alternative<uint64_t>(var)) {
                                logger.info("CustomForm callback {} = {}", name, std::get<uint64_t>(var));
                            } else if (std::holds_alternative<double>(var)) {
                                logger.info("CustomForm callback {} = {}", name, std::get<double>(var));
                            } else if (std::holds_alternative<std::string>(var)) {
                                logger.info("CustomForm callback {} = {}", name, std::get<std::string>(var));
                            }
                        };
                        logDebugResult(result);
                    }
                });
            break;
        }

        case TestFormParam::FormType::modal: {
            ll::form::ModalForm form;
            form.setTitle("ModalForm")
                .setUpperButton("Upper")
                .setLowerButton("Lower")
                .sendTo(*(Player*)ori.getEntity(), [](Player&, ll::form::ModalForm::SelectedButton selected) {
                    logger.info("ModalForm callback {}", (bool)selected);
                });
            break;
        }
        case TestFormParam::FormType::simple: {
            ll::form::SimpleForm form;
            form.setTitle("SimpleForm")
                .setContent("Content")
                .appendButton("Button1")
                .appendButton("Button2", "textures/ui/absorption_effect", "path")
                .sendTo(*(Player*)ori.getEntity(), [](Player&, int selected) {
                    logger.info("SimpleForm callback {}", selected);
                });
            break;
        }
        }
    };
    auto& cmd =
        ll::command::CommandRegistrar::getInstance()
            .getOrCreateCommand("formtest", "formtest", CommandPermissionLevel::GameDirectors, CommandFlagValue::None);
    cmd.overload<TestFormParam>().required("type").execute<lambda>();
}

LL_STATIC_HOOK(
    registerBuiltinCommands,
    ll::memory::HookPriority::Normal,
    ServerCommands::setupStandardServer,
    void,
    Minecraft&         server,
    std::string const& networkCommands,
    std::string const& networkTestCommands,
    PermissionsFile*   permissionsFile
) {
    origin(server, networkCommands, networkTestCommands, permissionsFile);
    registerFormTestCommand();
}

ll::memory::HookRegistrar<registerBuiltinCommands> hooks{};

} // namespace ll::test::formtest
