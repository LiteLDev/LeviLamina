
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/ServerCommands.h"

#include "ll/api/service/Bedrock.h"

#include "mc/server/commands/CommandBlockName.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/command/runtime/RuntimeOverload.h"

#include "mc/nbt/CompoundTag.h"

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
    std::cout << str << std::endl;
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
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);

    auto&       cmd    = CommandRegistrar::getInstance().getOrCreateCommand("t", "test tttttt");
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

    CommandRegistrar::getInstance().tryRegisterSoftEnum("hello", {"SoftEnum1", "af1451"});

    CommandRegistrar::getInstance().tryRegisterEnum(
        "testenum",
        {
            {"testenumhhhh", 124144},
            {"hrshh54w4t4",  67584 }
    },
         Bedrock::type_id<CommandRegistry, std::pair<
    std::string,
    uint64>>(),
        &CommandRegistry::parse<std::pair<
    std::string,
    uint64>>
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
            output.success("Enum : {}", self["enummmmm"].get<ParamKind::Enum>());
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
            ll::logger.debug("mParseTables : {}", ll::service::getCommandRegistry()->mParseTables | std::views::keys);
            auto& table = ll::service::getCommandRegistry()->mParseTables.begin()->second;
            ll::logger.debug("first : {}", table.first | std::views::keys);
            // ll::logger.debug("first : {}", table.first);
            ll::logger.debug("second : {}", table.follow | std::views::keys);

            for (auto [k, v] : table.predict) {
                if (ll::service::getCommandRegistry()->symbolToString(k.first) == "{")
                    ll::logger.debug("{} : {}", k, v);
            }
        }
    );
}
