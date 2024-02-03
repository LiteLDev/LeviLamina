
#include "ll/api/Logger.h"
#include "ll/api/command/DynamicCommand.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/HashUtils.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/commands/ServerCommands.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/storage/LevelData.h"

#include "ll/api/schedule/Scheduler.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

using Param      = DynamicCommand::ParameterData;
using ParamType  = DynamicCommand::ParameterType;
using ParamIndex = DynamicCommandInstance::ParameterIndex;

using namespace ll::hash_utils;
using namespace ll::hash_literals;
using namespace ll::chrono_literals;
using namespace ll::i18n_literals;

ll::schedule::GameTickScheduler scheduler;

static void setupTestParamCommand(CommandRegistry& registry) {
    using Param     = DynamicCommand::ParameterData;
    using ParamType = DynamicCommand::ParameterType;
    Param boolParam("testBool", ParamType::Bool, true);
    Param intParam("testInt", ParamType::Int, true);
    Param floatParam("testFloat", ParamType::Float, true);
    Param strParam("testStr", ParamType::String, true);
    Param actorParam("testActor", ParamType::Actor, true);
    Param playerParam("testPlayer", ParamType::Player, true);
    Param BlockPosParam("testBlockPos", ParamType::BlockPos, true);
    Param Vec3Param("testVec3", ParamType::Vec3, true);
    Param RawTextParam("testRawText", ParamType::RawText, true);
    Param MessageParam("testMessage", ParamType::Message, true);
    Param JsonValueParam("testJsonValue", ParamType::JsonValue, true);
    Param ItemParam("testItem", ParamType::Item, true);
    Param BlockParam("testBlock", ParamType::Block, true);
    Param BlockStateParam("testBlockState", ParamType::BlockState, true);
    Param ActorTypeParam("testActorType", ParamType::ActorType, true);
    Param EffectParam("testEffect", ParamType::Effect, true);
    Param CommandParam("testCommand", ParamType::Command, true);
    //  Test Command:
    //    param true 123 3.14 string @e @a 1 2 3 ~1 ~2 ~3 msg {"a":123} stick bedrock ["persistent_bit"=true] npc poison
    //    help param rawtext
    DynamicCommand::setup(
        registry,
        "param",
        "dynamic command",
        {
    },
        {
            boolParam,
            intParam,
            floatParam,
            strParam,
            actorParam,
            playerParam,
            BlockPosParam,
            Vec3Param,
            MessageParam,
            JsonValueParam,
            ItemParam,
            BlockParam,
            BlockStateParam,
            ActorTypeParam,
            EffectParam,
            CommandParam,
            RawTextParam,
        },
        {{"testBool",
          "testInt",
          "testFloat",
          "testStr",
          "testActor",
          "testPlayer",
          "testBlockPos",
          "testVec3",
          "testMessage",
          "testJsonValue",
          "testItem",
          "testBlock",
          "testBlockState",
          "testActorType",
          "testEffect",
          "testCommand",
          "testRawText"}},
        [](DynamicCommand const&,
           CommandOrigin const&,
           CommandOutput&                                           output,
           std::unordered_map<std::string, DynamicCommand::Result>& results) {
            for (auto& [name, result] : results) {
                output.success(result.toDebugString());
            }
        },
        CommandPermissionLevel::Any
    );
}

static void setupTestEnumCommand(CommandRegistry& registry) {
    using ParamType = DynamicCommand::ParameterType;
    using Param     = DynamicCommand::ParameterData;
    DynamicCommand::setup(
        registry,
        "testenum",        // command name
        "dynamic command", // command description
        {
  // enums{enumName, {values...}}
            {"TestEnum1", {"add", "remove"}},
            {"TestEnum2", {"list"}         },
    },
        {
            // parameters(type, name, [optional], [enumOptions(also enumName)], [identifier])
            // identifier: used to identify unique parameter data, if idnetifier is not set,
            // it is set to be the same as enumOptions or name (identifier = enumOptions.empty() ? name:enumOptions)
            Param("testEnum", ParamType::Enum, "TestEnum1", "", CommandParameterOption::EnumAutocompleteExpansion),
            Param("testEnum", ParamType::Enum, "TestEnum2", "", CommandParameterOption::EnumAutocompleteExpansion),
            Param("testInt", ParamType::Int, true),
        },
        {
            // overloads{ (type == Enum ? enumOptions : name) ...}
            {"TestEnum1", "testInt"}, // testenum <add|remove> [testInt]
            {"TestEnum2"},            // testenum <list>
        },
        // dynamic command callback
        [](DynamicCommand const&,
           CommandOrigin const&,
           CommandOutput&                                           output,
           std::unordered_map<std::string, DynamicCommand::Result>& results) {
            auto& action = results["testEnum"].getRaw<std::string>();
            switch (do_hash(action)) {
            case "add"_h:
                if (results["testInt"].isSet) output.success(fmt::format("add {}", results["testInt"].getRaw<int>()));
                else output.success("add nothing");
                break;
            case "remove"_h:
                if (results["testInt"].isSet)
                    output.success(fmt::format("remove {}", results["testInt"].getRaw<int>()));
                else output.success("remove nothing");
                break;
            case "list"_h:
                output.success("list");
                break;
            default:
                break;
            }
        },
        CommandPermissionLevel::GameDirectors
    );
}

static void setupExampleCommand(CommandRegistry& registry) {
    using ParamType = DynamicCommand::ParameterType;
    // create a dynamic command
    auto command =
        DynamicCommand::createCommand(registry, "testcmd", "dynamic command", CommandPermissionLevel::GameDirectors);

    auto& optionsAdd  = command->setEnum("TestOperation1", {"add", "remove"});
    auto& optionsList = command->setEnum("TestOperation2", {"list"});

    command->mandatory("testEnum", ParamType::Enum, optionsAdd, CommandParameterOption::EnumAutocompleteExpansion);
    command->mandatory("testEnum", ParamType::Enum, optionsList, CommandParameterOption::EnumAutocompleteExpansion);
    command->mandatory("testString", ParamType::String);

    command->addOverload({optionsAdd, "testString"}); // dyncmd <add|remove> <testString:string>
    command->addOverload({"TestOperation2"});         // dyncmd <list>

    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput&                                           output,
                            std::unordered_map<std::string, DynamicCommand::Result>& results) {
        switch (do_hash(results["testEnum"].getRaw<std::string>())) {
        case "add"_h:
            output.success(fmt::format("Add - {}", results["testString"].getRaw<std::string>()));
            break;
        case "remove"_h:
            output.success(fmt::format("Remove - {}", results["testString"].getRaw<std::string>()));
            break;
        case "list"_h:
            output.success("List");
            break;
        default:
            break;
        }
    });
    // do not forget to setup the command instance
    DynamicCommand::setup(registry, std::move(command));
}

// "remove command" command
static void setupRemoveCommand(CommandRegistry& registry) {
    auto command =
        DynamicCommand::createCommand(registry, "unregister", "unregister command", CommandPermissionLevel::Any);
    command->setAlias("remove");
    auto name = command->mandatory("name", ParamType::SoftEnum, command->setSoftEnum("CommandNames", {}));
    command->addOverload(name);
    command->setCallback([&registry](
                             DynamicCommand const& cmd,
                             CommandOrigin const&,
                             CommandOutput&                                           output,
                             std::unordered_map<std::string, DynamicCommand::Result>& results
                         ) {
        auto& name     = results["name"].getRaw<std::string>();
        auto  fullName = registry.getCommandFullName(name);
        if (fullName == cmd.getCommandName()) {
            output.success("Request unregister itself");

            scheduler.add<ll::schedule::DelayTask>(1s, [&registry, fullName] {
                if (DynamicCommand::unregisterCommand(registry, fullName)) {
                    ll::logger.debug("unregister command " + fullName);
                    ((DynamicCommandInstance*)nullptr)
                        ->setSoftEnum("CommandNames", registry.getEnumValues("CommandName"));
                } else ll::logger.error("error in unregister command " + fullName);
            });

            return;
        }
        if (DynamicCommand::unregisterCommand(registry, fullName)) {
            output.success("unregister command " + fullName);
            cmd.getInstance()->setSoftEnum("CommandNames", registry.getEnumValues("CommandName"));
        } else output.error("error in unregister command " + fullName);
    });
    command->setSoftEnum("CommandNames", registry.getEnumValues("CommandName"));
    DynamicCommand::setup(registry, std::move(command));
}

// enum command
void onEnumExecute(
    CommandRegistry&      registry,
    DynamicCommand const& cmd,
    CommandOrigin const&,
    CommandOutput&                                           output,
    std::unordered_map<std::string, DynamicCommand::Result>& results
) {
    auto enumNames     = registry.getEnumNames();
    auto softEnumNames = registry.getSoftEnumNames();
    cmd.getInstance()->setSoftEnum("EnumNameList", enumNames);
    cmd.getInstance()->addSoftEnumValues("EnumNameList", softEnumNames);
    if (results["name"].isSet) {
        auto& enumName = results["name"].getRaw<std::string>();
        bool  found    = false;
        if (std::find(enumNames.begin(), enumNames.end(), enumName) != enumNames.end()) {
            found = true;
            output.success("§eEnum §l{}§r§e Values:"_tr(enumName));
            for (auto& val : registry.getEnumValues(enumName)) {
                output.success(val);
                // output.addToResultList("enums", val);
            }
            // output.success("Enums: %1$s", {CommandOutputParameter("enums")});
        }
        if (std::find(softEnumNames.begin(), softEnumNames.end(), enumName) != softEnumNames.end()) {
            found = true;
            output.success("§eSoft Enum §l{}§r§e Values:"_tr(enumName));
            for (auto& val : registry.getSoftEnumValues(enumName)) {
                output.success(val);
            }
        }
        if (!found) output.error(R"(Enum or Soft Enum "{}" not found)", enumName);
    } else {
        output.success("§eEnum Names:");
        for (auto& val : registry.getEnumNames()) {
            output.success(val);
        }
        output.success("§eSoft Enum Names:");
        for (auto& val : registry.getSoftEnumNames()) {
            output.success(val);
        }
    }
}

static void setupEnumCommand(CommandRegistry& registry) {
    auto command = DynamicCommand::createCommand(
        registry,
        "enum",
        "get command enum names or values",
        CommandPermissionLevel::Any
    );
    command->setAlias("enums");
    auto name = command->mandatory("name", ParamType::SoftEnum, command->setSoftEnum("EnumNameList", {}));
    command->addOverload(name);
    command->addOverload();
    command->setCallback([&registry](
                             DynamicCommand const&                                    cmd,
                             CommandOrigin const&                                     origin,
                             CommandOutput&                                           output,
                             std::unordered_map<std::string, DynamicCommand::Result>& results
                         ) { onEnumExecute(registry, cmd, origin, output, results); });
    auto cmd = DynamicCommand::setup(registry, std::move(command));
    scheduler.add<ll::schedule::DelayTask>(1s, [&registry, cmd] {
        auto packet = registry.serializeAvailableCommands();
        cmd->setSoftEnum("EnumNameList", packet.getEnumNames());
        cmd->addSoftEnumValues("EnumNameList", packet.getSoftEnumNames());
    });
}

// echo command
static void setupEchoCommand(CommandRegistry& registry) {
    auto command = DynamicCommand::createCommand(registry, "echo", "show message", CommandPermissionLevel::Any);
    command->addOverload(command->mandatory("text", ParamType::RawText));
    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput&                                           output,
                            std::unordered_map<std::string, DynamicCommand::Result>& results) {
        auto text = results["text"].getRaw<std::string>();
        output.success(text);
    });
    DynamicCommand::setup(registry, std::move(command));
}

static void setupCrashCommand(CommandRegistry& registry) {
    auto command = DynamicCommand::createCommand(registry, "crash", "crash", CommandPermissionLevel::GameDirectors);
    command->addOverload();
    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput&,
                            std::unordered_map<std::string, DynamicCommand::Result>&) {
        auto crash = std::thread([] {
            char* null = (char*)0x456;
            *null      = 'a';
        });
        crash.detach();
    });
    DynamicCommand::setup(registry, std::move(command));
}

#include "ll/api/service/Bedrock.h"
#include "mc/entity/systems/EntitySystems.h"
#include "mc/world/level/Level.h"
#include <ranges>

static void setupTimingCommand(CommandRegistry& registry) {
    constexpr static size_t counttick = 100;

    auto command = DynamicCommand::createCommand(registry, "timing", "timing", CommandPermissionLevel::GameDirectors);
    command->addOverload();
    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput&,
                            std::unordered_map<std::string, DynamicCommand::Result>&) {
        auto thread = std::thread([] {
            auto& system = ll::service::getLevel()->getEntitySystems();

            auto& collection = system.getDefaultCollection();
            {
                std::lock_guard lock(collection.mTimingMutex);
                system.mEnableTimingCapture = true;
                ll::logger.warn("EnableTimingCapture");
            }

            std::unordered_map<uint, DefaultEntitySystemsCollection::ECSTiming> timings{};
            using namespace ll::chrono;
            ll::thread::TickSyncSleep<GameTickClock> sleeper;
            auto                                     begin = std::chrono::steady_clock::now();
            for (size_t i = 0; i < counttick; i++) {
                sleeper.sleepFor(1_tick);
                {
                    std::lock_guard lock(collection.mTimingMutex);
                    for (auto& collectCategory : collection.mTickingSystemCategories) {
                        auto& tickTimings = collectCategory.mTimings;
                        for (size_t j = 0; j < tickTimings.size(); j++) {
                            auto& timing    = timings[collectCategory.mSystems.at(j)];
                            timing.mCount  += tickTimings.at(j).mCount;
                            timing.mMsTime += tickTimings.at(j).mMsTime;
                        }
                    }
                }
            }
            auto end = std::chrono::steady_clock::now();
            {
                std::lock_guard lock(collection.mTimingMutex);
                system.mEnableTimingCapture = false;
            }
            struct TimingData {
                uint   id;
                double avg;
                uint   count;
            };

            std::vector<TimingData> orderdTiming;
            orderdTiming.reserve(timings.size());
            double allTime = 0.0;
            for (auto& [systemId, timing] : timings) {
                orderdTiming.emplace_back(systemId, double(timing.mMsTime) / counttick, timing.mCount);
                allTime += double(timing.mMsTime) / counttick;
            }

            std::ranges::sort(orderdTiming, [](TimingData const& a, TimingData const& b) { return a.avg > b.avg; });

            ll::logger.warn("TPS: {:.5f}", double(counttick) / std::chrono::duration<double>(end - begin).count());
            ll::logger.warn("ECS cost {:.5f}ms per tick", allTime);

            for (size_t i = 0; i < orderdTiming.size() && i < 20; i++) {
                auto& data = orderdTiming[i];
                ll::logger.warn(
                    "  | {:.5f}ms {} for {:0>3} {}",
                    data.avg,
                    double(data.count) / counttick,
                    data.id,
                    collection.mAllSystemsInfo[data.id].mName
                );
            }
        });
        thread.detach();
    });

    DynamicCommand::setup(registry, std::move(command));
}


#include "mc/server/SimulatedPlayer.h"

static void setupCreateSimulatePlayerCommand(CommandRegistry& registry) {
    auto command = DynamicCommand::createCommand(
        registry,
        "createplayer",
        "createSimulatePlayer",
        CommandPermissionLevel::GameDirectors
    );

    auto name = command->mandatory("name", ParamType::String);
    auto num  = command->optional("number", ParamType::Int);

    command->setAlias("csp");
    command->addOverload({name, num});
    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&                                     ori,
                            CommandOutput&                                           output,
                            std::unordered_map<std::string, DynamicCommand::Result>& results) {
        auto name = results["name"].getRaw<std::string>();
        auto num  = results["number"];

        auto entity = ori.getEntity();

        auto createSimulatedPlayer = [entity, &name]() {
            if (entity) {
                return SimulatedPlayer::create(name, entity->getFeetPos(), entity->getDimensionId());
            } else {
                return SimulatedPlayer::create(name);
            }
        };

        if (num.isSet) {
            auto number       = num.getRaw<int>();
            auto successCount = 0;

            for (int i = 0; i < number; i++) {
                if (createSimulatedPlayer()) successCount++;
            }

            if (successCount == 0) {
                output.error("createSimulatePlayer {} failed", name);
                return;
            }
            output.success("createSimulatePlayer {} * {}", name, successCount);
            return;
        }
        if (!createSimulatedPlayer()) {
            output.error("createSimulatePlayer {} failed", name);
            return;
        }
        output.success("createSimulatePlayer {}", name);
    });
    DynamicCommand::setup(registry, std::move(command));
}

static void kickAllSimulatePlayerCommand(CommandRegistry& registry) {
    auto command = DynamicCommand::createCommand(
        registry,
        "kickallsimulateplayer",
        "kickAllSimulatePlayer",
        CommandPermissionLevel::Any
    );
    command->setAlias("kasp");
    command->addOverload();
    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput& output,
                            std::unordered_map<std::string, DynamicCommand::Result>&) {
        ll::service::getLevel()->forEachPlayer([&](Player& player) {
            if (player.isSimulatedPlayer()) {
                ((SimulatedPlayer&)player).simulateDisconnect();
            }
            return true;
        });
        output.success("kickAllSimulatePlayer");
    });
    DynamicCommand::setup(registry, std::move(command));
}

#include "ll/api/form/CustomForm.h"
#include "ll/api/form/ModalForm.h"
#include "ll/api/form/SimpleForm.h"


static void setupTestFormCommand(CommandRegistry& registry) {
    using ParamType = DynamicCommand::ParameterType;
    using Param     = DynamicCommand::ParameterData;
    DynamicCommand::setup(
        registry,
        "testform",
        "test form",
        {
            {"formEnum1", {"modal", "custom", "simple"}},
    },
        {
            Param("formEnum", ParamType::Enum, "formEnum1", "", CommandParameterOption::EnumAutocompleteExpansion),

        },
        {
            {"formEnum1"}, // testform <modal|custom|simple>
        },
        [](DynamicCommand const&,
           CommandOrigin const& ori,
           CommandOutput&,
           std::unordered_map<std::string, DynamicCommand::Result>& results) {
            auto& action = results["formEnum"].getRaw<std::string>();
            switch (do_hash(action)) {
            case "modal"_h: {
                ll::form::ModalForm form;
                form.setTitle("ModalForm")
                    .setButtonLeft("Left")
                    .setButtonRight("Right")
                    .sendTo(*(Player*)ori.getEntity(), [](Player&, bool selected) {
                        ll::logger.debug("ModalForm callback {}", selected);
                    });
                break;
            }
            case "custom"_h: {
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
                            std::visit(
                                [&](const auto& var) { ll::logger.debug("CustomForm callback {} = {}", name, var); },
                                result
                            );
                        }
                    });
                break;
            }
            case "simple"_h: {
                ll::form::SimpleForm form;
                form.setTitle("SimpleForm")
                    .setContent("Content")
                    .appendButton("Button1")
                    .appendButton("Button2", "textures/ui/absorption_effect", "path")
                    .sendTo(*(Player*)ori.getEntity(), [](Player&, int selected) {
                        ll::logger.debug("SimpleForm callback {}", selected);
                    });
                break;
            }
            default:
                break;
            }
        },
        CommandPermissionLevel::GameDirectors
    );
}

static bool reg = [] {
    using namespace ll::event;
    EventBus::getInstance().emplaceListener<ServerStartedEvent>([](ServerStartedEvent&) {
        auto registry = ll::service::getCommandRegistry();
        setupRemoveCommand(registry);
        setupTestEnumCommand(registry);
        setupTestParamCommand(registry);
        setupExampleCommand(registry);
        setupEnumCommand(registry);
        setupEchoCommand(registry);
        setupCrashCommand(registry);
        setupTimingCommand(registry);
        setupCreateSimulatePlayerCommand(registry);
        kickAllSimulatePlayerCommand(registry);
        setupTestFormCommand(registry);
    });
    return true;
}();

// #include "ll/api/memory/Hook.h"

// LL_AUTO_TYPE_INSTANCE_HOOK(banHook, HookPriority::Normal, SimulatedPlayer, &SimulatedPlayer::postAiStep,void) {}
