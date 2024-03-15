
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/ServerCommands.h"

#include "ll/api/service/Bedrock.h"

#include "mc/server/commands/CommandBlockName.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/command/runtime/Overload.h"

using namespace ll::command;

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
        .execute<lambda>();
    cmd.overload<ParamTest>().required("p1").text("gr").required("p5").optional("p2").optional("p3").execute<lambda>();
    cmd.overload<ParamTest2>()
        .required("block")
        .required("dim")
        .optional("subcmd")
        .execute<[](CommandOrigin const& ori, CommandOutput& output, ParamTest2 const& param, ::Command const&) {
            output.success("block: {}", param.block.getDescriptionId());
            output.success("dim: {}", param.dim.id);

            if (param.subcmd) {
                output.success("subcmd: {}", param.subcmd->getCommandName());
                param.subcmd->run(ori, output);
            }
        }>();

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
        .required("runtime", runtime::ParamKind::Int)
        .required("range", runtime::ParamKind::IntegerRange)
        .required("se", runtime::ParamKind::SoftEnum, "hello")
        .required("enummmmm", runtime::ParamKind::Enum, "testenum")
        .execute([](CommandOrigin const& orgin, CommandOutput& output, runtime::Command const& self) {
            output.success("{}", orgin.getName());
            output.success("runtime : {}", self["runtime"].get<runtime::ParamKind::Int>());
            auto range = self["range"].get<runtime::ParamKind::IntegerRange>();
            output.success("range : {} {}", range.mMinValue, range.mMaxValue);
            output.success("SoftEnum : {}", self["se"].get<runtime::ParamKind::SoftEnum>());
            output.success("Enum : {}", self["enummmmm"].get<runtime::ParamKind::Enum>());
        });
}
