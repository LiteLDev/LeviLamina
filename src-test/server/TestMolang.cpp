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
    auto boolReturn   = MolangQueryFunctionReturnType::Number;
    auto numReturn    = MolangQueryFunctionReturnType::Number;

    auto const* boolAccessor = ExpressionNode::queryFunctionAccessorFromString(
        HashedString{"query.is_levilamina"},
        MolangVersion::Latest,
        boolReturn,
        true
    );
    auto const* numAccessor = ExpressionNode::queryFunctionAccessorFromString(
        HashedString{"query.homo_number"},
        MolangVersion::Latest,
        numReturn,
        true
    );
    ASSERT_NE(boolAccessor, nullptr);
    ASSERT_NE(numAccessor, nullptr);
    EXPECT_FLOAT_EQ((*boolAccessor)(renderParams, {}).mPOD.mFloat, 1.0f);
    EXPECT_FLOAT_EQ((*numAccessor)(renderParams, {}).mPOD.mFloat, 114514.0f);

    ExpressionNode::unregisterQueryFunction("query.is_levilamina", HashedString{"default"});
    ExpressionNode::unregisterQueryFunction("query.homo_number", HashedString{"default"});
}
