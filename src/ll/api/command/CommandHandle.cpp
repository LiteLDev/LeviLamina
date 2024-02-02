#include "ll/api/command/CommandHandle.h"
#include "ll/api/service/Bedrock.h"


#include "mc/server/commands/CommandOutput.h"

namespace ll::command {

void CommandHandle::registerOverload(OverloadData&& data) {
    for (auto& p : data.params) {
        fmt::println("{} {} {}", p.mName, p.mOffset, p.mSetOffset);
    }
    ll::service::getCommandRegistry()->registerOverload(name, data.factory, std::move(data).params);
}

char const* CommandHandle::addText(std::string_view) {
    return "color"; // TODO
}


struct ParamTest {
    int             p1;
    Optional<float> p2;
    bool            p3;
};

} // namespace ll::command


#include "ll/api/memory/Hook.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace {
LL_AUTO_TYPE_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Low,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);

    using namespace ll::command;

    ll::service::getCommandRegistry()->registerCommand("testsss");
    //  ll::service::getCommandRegistry()->mPostfixes.push_back()
    CommandHandle{"testsss"}
        .overload<ParamTest>()
        .text("color")
        .required("p1")
        .required("p3")
        .optional("p2")
        .execute<[](CommandOrigin const&, CommandOutput& output, ParamTest const& param) {
            output.success("overload1");
            output.success("p1: {}", param.p1);
            output.success("p2: {} {}", param.p2.has_value(), param.p2.value_or(233));
            output.success("p3: {}", param.p3);
        }>();
    CommandHandle{"testsss"}
        .overload<ParamTest>()
        .text("color")
        .text("color")
        .text("color")
        .text("color")
        .text("color")
        .text("color")
        .required("p1")
        .required("p2")
        .optional("p3")
        .execute<[](CommandOrigin const&, CommandOutput& output, ParamTest const& param) {
            output.success("overload2");
            output.success("p1: {}", param.p1);
            output.success("p2: {} {}", param.p2.has_value(), param.p2.value_or(233));
            output.success("p3: {}", param.p3);
        }>();
}

} // namespace
