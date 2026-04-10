#include "gtest/gtest.h"


#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/ServerCommands.h"

#include "ll/api/service/Bedrock.h"

#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/ServerCommandOrigin.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/Level.h"

#include "ll/api/command/runtime/RuntimeOverload.h"

#include "mc/deps/nbt/CompoundTag.h"

#include <ranges>

#include "ll/core/LeviLamina.h"

template <>
struct fmt::formatter<CommandRegistry::Symbol> : fmt::formatter<std::string> {
    template <class FormatContext>
    auto format(CommandRegistry::Symbol const& t, FormatContext& ctx) const {
        std::string str = ll::service::getCommandRegistry()->symbolToString(t);
        if (str == "SYMBOL_ERROR") {
            str = std::to_string(t.mValue);
        }
        return formatter<std::string>::format(str, ctx);
    }
};

using namespace ll::command;

namespace {

struct CommandExecutionResult {
    std::unique_ptr<::Command> compiledCommand;
    CommandOutput              output{CommandOutputType::AllOutput};
};

CommandExecutionResult executeTestCommand(std::string_view commandLine) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandExecutionResult result;
    auto                   compiled = registrar.compileCommand(commandLine, origin);
    if (!compiled) {
        compiled.error().log(result.output);
        compiled.error().log(ll::getLogger());
        return result;
    }

    result.compiledCommand = std::move(compiled.value());
    result.compiledCommand->run(origin, result.output);
    return result;
}

} // namespace

template <>
bool CommandRegistry::parse<CompoundTagVariant>(
    void*                              storage,
    CommandRegistry::ParseToken const& token,
    CommandOrigin const& /*origin*/,
    int /*version*/,
    std::string& error,
    std::vector<std::string>& /*errorParams*/
) const {
    size_t      parsedLength{};
    std::string str = token.toString();
    auto        res = CompoundTagVariant::parse(str, parsedLength);
    if (res) {
        (*(CompoundTagVariant*)storage) = std::move(*res);
        return true;
    } else {
        // parsedLength
        error = res.error().message();
        return false;
    }
}

struct ParamTest {
    int             p1;
    std::string     sPostfix;
    Optional<float> p2;
    bool            p3;

    enum class TestEnums { sb, sb2, CamCas } p4;
    enum class TestEnums2 { s1b, s2b2, s3j, gGG, s, sf, b };
    SoftEnum<TestEnums2> p5;
};

struct ParamTest2 {
    CommandBlockName           block;
    DimensionType              dim;
    std::unique_ptr<::Command> subcmd;
};

struct ParamTest3 {
    CompoundTagVariant snbt;
    Json::Value        json;
};

LL_AUTO_TYPE_INSTANCE_HOOK(
    registerBuiltinCommands,
    ll::memory::HookPriority::Normal,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    auto result = origin(ins);

    auto&       cmd    = CommandRegistrar::getServerInstance().getOrCreateCommand("t", "test tttttt");
    static auto lambda = [](CommandOrigin const&, CommandOutput& output, ParamTest const& param) {
        output.success("overload1");
        output.success("p1: {}", param.p1);
        output.success("p2: {} {}", param.p2.has_value(), param.p2.value_or(233));
        output.success("p3: {}", param.p3);
        output.success("p4: {}", magic_enum::enum_name(param.p4));
        output.success("p5: {}", param.p5);
    };
    cmd.overload<ParamTest>()
        .required("p1")
        .postfix("hi")
        .text("ni")
        .required("p4")
        .required("sPostfix")
        .postfix("st")
        .optional("p3")
        .optional("p2")
        .execute(lambda);
    cmd.overload<ParamTest>().required("p1").text("gr").required("p5").optional("p2").optional("p3").execute(lambda);
    cmd.overload<ParamTest2>().required("block").required("dim").optional("subcmd").execute(
        [](CommandOrigin const& ori, CommandOutput& output, ParamTest2 const& param, ::Command const&) {
            output.success("block: {}", param.block.getDescriptionId());
            output.success("dim: {}", param.dim.id);

            if (param.subcmd) {
                output.success("subcmd: {}", param.subcmd->getCommandName());
                param.subcmd->run(ori, output);
            }
        }
    );
    cmd.overload().text("throw").execute([](CommandOrigin const&, CommandOutput&) { throw std::runtime_error{"hi"}; });

    CommandRegistrar::getServerInstance().tryRegisterSoftEnum("hello", {"SoftEnum1", "af1451"});

    CommandRegistrar::getServerInstance().tryRegisterRuntimeEnum(
        "testenum",
        {
            {"testenumhhhh", 124144},
            { "hrshh54w4t4",  67584}
    }
    );

    cmd.runtimeOverload()
        .required("runtime", ParamKind::Int)
        .required("range", ParamKind::IntegerRange)
        .required("se", ParamKind::SoftEnum, "hello")
        .required("enummmmm", ParamKind::Enum, "testenum")
        .execute([](CommandOrigin const& orgin, CommandOutput& output, RuntimeCommand const& self) {
            output.success("{}", orgin.getName());
            output.success("runtime : {}", self["runtime"].get<ParamKind::Int>());
            auto range = self["range"].get<ParamKind::IntegerRange>();
            output.success("range : {} {}", range.mMinValue, range.mMaxValue);
            output.success("SoftEnum : {}", self["se"].get<ParamKind::SoftEnum>());
            output.success(
                "Enum : {}",
                reinterpret_cast<std::pair<std::string, uint64> const&>(self["enummmmm"].get<ParamKind::Enum>())
            );
        });

    cmd.overload<ParamTest3>()
        .text("nbt")
        .required("snbt")
        .modify([](CommandParameterData& data) {
            data.mEnumOrPostfixSymbol = CommandRegistry::HardNonTerminal::JsonObject;
        })
        .execute([](CommandOrigin const&, CommandOutput& output, ParamTest3 const& param) {
            output.success("snbt: {}", param.snbt.toSnbt(SnbtFormat::PrettyChatPrint));
        });
    cmd.overload<ParamTest3>().text("json").required("json").execute(
        [](CommandOrigin const&, CommandOutput& output, ParamTest3 const& param) {
            output.success("json: {}", param.json.toStyledString());
            output.success("mParseTables : {}", ll::service::getCommandRegistry()->mParseTables | std::views::keys);
            auto& table = ll::service::getCommandRegistry()->mParseTables.begin()->second;
            output.success("first : {}", table.first | std::views::keys);
            output.success("second : {}", table.follow | std::views::keys);

            for (auto [k, v] : table.predict) {
                if (ll::service::getCommandRegistry()->symbolToString(k.first) == "{") output.success("{} : {}", k, v);
            }
        }
    );
    return result;
}

TEST(TestCommand, RegisteringEnumsAndCommandsDoesNotThrow) {
    auto& registrar = CommandRegistrar::getServerInstance();

    EXPECT_NO_THROW((void)registrar.tryRegisterSoftEnum("hello_gtest", {"SoftEnum1", "af1451"}));
    EXPECT_NO_THROW((void)registrar.tryRegisterRuntimeEnum(
        "testenum_gtest",
        {
            {"a", 1},
            {"b", 2}
    }
    ));
    EXPECT_NO_THROW((void)std::addressof(registrar.getOrCreateCommand("t_gtest", "test tttttt")));
}

TEST(TestCommand, CompiledCommandCanBeRunAndProducesExpectedOutput) {
    CommandExecutionResult result;
    ASSERT_NO_THROW(result = executeTestCommand("t 123hi ni sb st true 4.5"));

    ASSERT_TRUE(result.compiledCommand);
    EXPECT_EQ(result.compiledCommand->getCommandName(), "t");
    EXPECT_GE(result.output.mSuccessCount, 1);
    ASSERT_GE(result.output.mMessages.size(), 6);

    EXPECT_EQ(result.output.mMessages[0].mMessageId, "overload1");
    EXPECT_EQ(result.output.mMessages[1].mMessageId, "p1: 123");
    EXPECT_EQ(result.output.mMessages[2].mMessageId, "p2: true 4.5");
    EXPECT_EQ(result.output.mMessages[3].mMessageId, "p3: true");
    EXPECT_EQ(result.output.mMessages[4].mMessageId, "p4: sb");
    EXPECT_EQ(result.output.mMessages[5].mMessageId, "p5: ");
}

TEST(TestCommand, ExecuteCommandRunsRegisteredCommandAndProducesExpectedOutput) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t 123hi ni sb st true 4.5", origin));

    EXPECT_GE(output.mSuccessCount, 1);
    ASSERT_GE(output.mMessages.size(), 6);
    EXPECT_EQ(output.mMessages[0].mMessageId, "overload1");
    EXPECT_EQ(output.mMessages[1].mMessageId, "p1: 123");
    EXPECT_EQ(output.mMessages[2].mMessageId, "p2: true 4.5");
    EXPECT_EQ(output.mMessages[3].mMessageId, "p3: true");
    EXPECT_EQ(output.mMessages[4].mMessageId, "p4: sb");
    EXPECT_EQ(output.mMessages[5].mMessageId, "p5: ");
}

TEST(TestCommand, ExecuteCommandRunsSubcommandAndMergesOutput) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t stone overworld t 123hi ni sb st true 4.5", origin));

    EXPECT_GE(output.mSuccessCount, 1);
    ASSERT_GE(output.mMessages.size(), 9);
    EXPECT_EQ(output.mMessages[0].mMessageId, "block: tile.stone");
    EXPECT_EQ(output.mMessages[1].mMessageId, "dim: 0");
    EXPECT_EQ(output.mMessages[2].mMessageId, "subcmd: t");
    EXPECT_EQ(output.mMessages[3].mMessageId, "overload1");
    EXPECT_EQ(output.mMessages[4].mMessageId, "p1: 123");
}

TEST(TestCommand, ExecuteCommandReturnsErrorOutputWhenCompilationFails) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t not_an_inthi ni sb st true 4.5", origin));

    EXPECT_EQ(output.mSuccessCount, 0);
    EXPECT_FALSE(output.mMessages.empty());
}

TEST(TestCommand, ExecuteCommandCatchesCommandExceptions) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t throw", origin));

    EXPECT_EQ(output.mSuccessCount, 0);
    EXPECT_FALSE(output.mMessages.empty());
}

TEST(TestCommand, ExecuteCommandRunsSoftEnumOverload) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t 123 gr s1b 4.5 true", origin));

    EXPECT_GE(output.mSuccessCount, 1);
    ASSERT_GE(output.mMessages.size(), 6);
    EXPECT_EQ(output.mMessages[0].mMessageId, "overload1");
    EXPECT_EQ(output.mMessages[1].mMessageId, "p1: 123");
    EXPECT_EQ(output.mMessages[2].mMessageId, "p2: true 4.5");
    EXPECT_EQ(output.mMessages[3].mMessageId, "p3: true");
    EXPECT_EQ(output.mMessages[4].mMessageId, "p4: sb");
    EXPECT_EQ(output.mMessages[5].mMessageId, "p5: s1b");
}

TEST(TestCommand, ExecuteCommandRunsRuntimeOverload) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t 123 4..9 SoftEnum1 testenumhhhh", origin));

    EXPECT_GE(output.mSuccessCount, 1);
    ASSERT_GE(output.mMessages.size(), 5);
    EXPECT_EQ(output.mMessages[1].mMessageId, "runtime : 123");
    EXPECT_EQ(output.mMessages[2].mMessageId, "range : 4 9");
    EXPECT_EQ(output.mMessages[3].mMessageId, "SoftEnum : SoftEnum1");
    EXPECT_TRUE(output.mMessages[4].mMessageId.starts_with("Enum : "));
}

TEST(TestCommand, ExecuteCommandRunsNbtOverload) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t nbt {\"value\":1}", origin));

    EXPECT_GE(output.mSuccessCount, 1);
    ASSERT_FALSE(output.mMessages.empty());
    EXPECT_TRUE(output.mMessages[0].mMessageId.starts_with("snbt: "));
}

TEST(TestCommand, ExecuteCommandRunsJsonOverload) {
    auto&               registrar = CommandRegistrar::getServerInstance();
    ServerCommandOrigin origin("test", ll::service::getLevel()->asServer(), CommandPermissionLevel::Owner, 0);

    CommandOutput output;
    ASSERT_NO_THROW(output = registrar.executeCommand("t json {\"value\":1}", origin));

    EXPECT_GE(output.mSuccessCount, 1);
    ASSERT_FALSE(output.mMessages.empty());
    EXPECT_TRUE(output.mMessages[0].mMessageId.starts_with("json: "));
}
