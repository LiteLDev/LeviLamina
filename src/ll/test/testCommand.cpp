
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "mc/server/commands/CommandBlockName.h"
#include "mc/world/AutomaticID.h"

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
    testtttt,
    ll::memory::HookPriority::Low,
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
        .execute<[](CommandOrigin const& ori, CommandOutput& output, ParamTest2 const& param) {
            output.success("block: {}", param.block.getDescriptionId());
            output.success("dim: {}", param.dim.id);

            if (param.subcmd) {
                output.success("subcmd: {}", param.subcmd->getCommandName());
                param.subcmd->run(ori, output);
            }
        }>();
}
