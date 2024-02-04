#include "mc/util/molang/MolangScriptArg.h"
#include "mc/world/level/levelgen/feature/helpers/RenderParams.h"

#include "mc/util/ExpressionNode.h"


#include "ll/api/memory/Hook.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/Logger.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/world/AutomaticID.h"


namespace {
LL_AUTO_TYPE_INSTANCE_HOOK(
    testtttt,
    ll::memory::HookPriority::Low,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    static ll::Logger logger("MolangTest");
    ExpressionNode::registerQueryFunction(
        "query.is_levilamina",
        [&](RenderParams&, const std::vector<ExpressionNode>&) -> MolangScriptArg const& {
            static auto v = MolangScriptArg(true);
            return v;
        },
        "query is_levilamina",
        MolangQueryFunctionReturnType::Bool,
        "default",
        0,
        UINT64_MAX,
        {}
    );
    ExpressionNode::registerQueryFunction(
        "query.homo_number",
        [&](RenderParams&, const std::vector<ExpressionNode>&) -> MolangScriptArg const& {
            static auto v = MolangScriptArg(114514);
            return v;
        },
        "query homo_number",
        MolangQueryFunctionReturnType::Number,
        "default",
        0,
        UINT64_MAX,
        {}
    );
    auto parm = RenderParams();
    logger.info("query.is_levilamina: {}", ExpressionNode("query.is_levilamina").evalAsFloat(parm));
    logger.info("query.homo_number: {}", ExpressionNode("query.homo_number").evalAsFloat(parm));
    origin(ins);
}
} // namespace
