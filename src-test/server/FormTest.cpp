#include <cstdint>
#include <string>
#include <variant>

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/form/CustomForm.h"
#include "ll/api/form/ModalForm.h"
#include "ll/api/form/SimpleForm.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/Player.h"
#include "mc/scripting/ServerScriptManager.h"


namespace ll::test::formtest {
struct TestFormParam {
    enum class FormType { custom, modal, simple } type;
};

void registerFormTestCommand() {
    static auto logptr = ll::io::LoggerRegistry::getInstance().getOrCreate("FormTest");
    auto&       cmd =
        ll::command::CommandRegistrar::getInstance()
            .getOrCreateCommand("formtest", "formtest", CommandPermissionLevel::GameDirectors, CommandFlagValue::None);
    cmd.overload<TestFormParam>().required("type").execute(
        [](CommandOrigin const& ori, CommandOutput&, TestFormParam const& param) {
            switch (param.type) {
            case TestFormParam::FormType::custom: {
                ll::form::CustomForm     form;
                std::vector<std::string> names;
                form.setTitle("CustomForm")
                    .appendLabel("label")
                    .appendInput("input1", "input")
                    .appendToggle("toggle", "toggle")
                    .appendSlider("slider", "slider", 0, 100, 1)
                    .appendStepSlider("stepSlider", "stepSlider", {"a", "b", "c"})
                    .appendDropdown("dropdown", "dropdown", {"a", "b", "c"})
                    .appendDropdown("emptydropdown", "empty dropdown", names)
                    .sendTo(
                        *(Player*)ori.getEntity(),
                        [](Player&, ll::form::CustomFormResult const& data, ll::form::FormCancelReason) {
                            if (!data) {
                                logptr->info("CustomForm callback canceled");
                                return;
                            }
                            for (auto [name, result] : *data) {
                                visit([&](auto& v) { logptr->info("CustomForm callback {} = {}", name, v); }, result);
                            }
                        }
                    );
                break;
            }

            case TestFormParam::FormType::modal: {
                ll::form::ModalForm form;
                form.setTitle("ModalForm")
                    .setUpperButton("Upper")
                    .setLowerButton("Lower")
                    .sendTo(
                        *(Player*)ori.getEntity(),
                        [](Player&, ll::form::ModalFormResult selected, ll::form::FormCancelReason cancelReason) {
                            if (!selected) {
                                logptr->info("ModalForm callback canceled");
                                if (cancelReason) {
                                    logptr->info("ModalForm callback cancelReason {}", (int)*cancelReason);
                                }
                                return;
                            }
                            logptr->info("ModalForm callback {}", (bool)selected);
                        }
                    );
                break;
            }
            case TestFormParam::FormType::simple: {
                ll::form::SimpleForm form;
                form.setTitle("SimpleForm")
                    .setContent("Content")
                    .appendButton("Button1")
                    .appendButton("Button2", "textures/ui/absorption_effect", "path")
                    .sendTo(*(Player*)ori.getEntity(), [](Player&, int selected, ll::form::FormCancelReason) {
                        if (selected == -1) {
                            logptr->info("SimpleForm callback canceled");
                            return;
                        }
                        logptr->info("SimpleForm callback {}", selected);
                    });
                break;
            }
            }
        }
    );
}

LL_TYPE_INSTANCE_HOOK(
    registerBuiltinCommands,
    ll::memory::HookPriority::Normal,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    auto result = origin(ins);
    registerFormTestCommand();
    return result;
}

ll::memory::HookRegistrar<registerBuiltinCommands> hooks{};

} // namespace ll::test::formtest
