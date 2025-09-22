#include "mc/util/MolangScriptArg.h"
#include "mc/world/actor/RenderParams.h"

#include "mc/util/molang/ExpressionNode.h"


#include "ll/api/memory/Hook.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/commands/CommandOutput.h"

#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"
#include "mc/deps/core/string/HashedString.h"


namespace {
LL_AUTO_TYPE_INSTANCE_HOOK(
    testtttt,
    ll::memory::HookPriority::Low,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    static auto ptr    = ll::io::LoggerRegistry::getInstance().getOrCreate("MolangTest");
    auto&       logger = *ptr;

    ExpressionNode::registerQueryFunction(
        "query.is_levilamina",
        [&](RenderParams&, std::vector<ExpressionNode> const&) -> MolangScriptArg const& {
            static auto v = MolangScriptArg(true);
            return v;
        },
        "query is_levilamina",
        MolangQueryFunctionReturnType::Bool,
        "default",
        0,
        ~0ull,
        {}
    );
    ExpressionNode::registerQueryFunction(
        "query.homo_number",
        [&](RenderParams&, std::vector<ExpressionNode> const&) -> MolangScriptArg const& {
            static auto v = MolangScriptArg(114514);
            return v;
        },
        "query homo_number",
        MolangQueryFunctionReturnType::Number,
        "default",
        0,
        ~0ull,
        {}
    );
    auto parm = RenderParams();
    logger.info(
        "query.is_levilamina: {}",
        ExpressionNode("query.is_levilamina", MolangVersion::Latest, {{HashedString{"default"}}}).evalAsFloat(parm)
    );
    logger.info(
        "query.homo_number: {}",
        ExpressionNode("query.homo_number", MolangVersion::Latest, {{HashedString{"default"}}}).evalAsFloat(parm)
    );
    return origin(ins);
}
} // namespace
