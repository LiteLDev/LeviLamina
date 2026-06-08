#include "gtest/gtest.h"

#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangScriptArg.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/IComplexExpression.h"
#include "mc/world/actor/RenderParams.h"


TEST(TestMolang, MolangQueryFunctionsCanBeRegisteredAndEvaluated) {

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

    auto renderParams = RenderParams();
    auto boolQuery    = ExpressionNode("query.is_levilamina", MolangVersion::Latest, {{HashedString{"default"}}});
    auto numQuery     = ExpressionNode("query.homo_number", MolangVersion::Latest, {{HashedString{"default"}}});

    EXPECT_FLOAT_EQ(boolQuery.evalGeneric(renderParams).mPOD.mFloat, 1.0f);
    EXPECT_FLOAT_EQ(numQuery.evalGeneric(renderParams).mPOD.mFloat, 114514.0f);
}
