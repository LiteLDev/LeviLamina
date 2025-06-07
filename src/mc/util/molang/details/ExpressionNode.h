#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangEvalParams;
struct MolangParseConfig;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { struct MolangProgramBuildState; }
// clang-format on

namespace Molang::details {

class ExpressionNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkf560f0;
    ::ll::UntypedStorage<2, 2>  mUnk50c582;
    ::ll::UntypedStorage<4, 4>  mUnk4e6e98;
    ::ll::UntypedStorage<4, 4>  mUnk56c08e;
    ::ll::UntypedStorage<4, 4>  mUnkce7c76;
    ::ll::UntypedStorage<1, 1>  mUnk909b35;
    ::ll::UntypedStorage<1, 1>  mUnk72c394;
    ::ll::UntypedStorage<1, 1>  mUnk447a4a;
    ::ll::UntypedStorage<8, 88> mUnka6816f;
    ::ll::UntypedStorage<8, 24> mUnk58ba9b;
    ::ll::UntypedStorage<8, 32> mUnkcbc25e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode const& rhs);

    MCNAPI ExpressionNode(::Molang::details::ExpressionNode&& rhs);

    MCNAPI ExpressionNode(::Json::Value const& value, ::MolangParseConfig const& config);

    MCNAPI bool _buildTree(::brstd::bitset<78, uint64> const& usedTokenFlags, ::MolangVersion molangVersion);

    MCNAPI bool _checkAllOperationsAreValid() const;

    MCNAPI bool _optimize(::MolangVersion version, ::RenderParams& outRenderParams, int recursionDepth);

    MCNAPI bool _processBinaryExpressions(::std::function<bool(::ExpressionOp)> predicate);

    MCNAPI bool _processTernaryAndConditionalExpressions();

    MCNAPI bool _readNextToken(char const*& expression, ::MolangParseConfig const& parseConfig);

    MCNAPI void _setExpressionStringWithoutRelink(::std::string expressionString);

    MCNAPI bool _tokenize(
        char const*                  expression,
        ::brstd::bitset<78, uint64>& usedTokenFlags,
        ::MolangParseConfig const&   parseConfig
    );

    MCNAPI bool _validate(::MolangVersion version, bool inLoop, int inAssignmentLHSDepth) const;

    MCNAPI bool _validateChildrenAreNumerical(::MolangVersion version) const;

    MCNAPI void clear();

    MCNAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;

    MCNAPI ::std::string getExpressionString() const;

    MCNAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;

    MCNAPI bool getTreeString(::std::string& dest, bool sideEffectsReturnZero) const;

    MCNAPI ::std::optional<::MolangScriptArg> getValueIfConstant() const;

    MCNAPI bool hasMadd() const;

    MCNAPI bool isValid() const;

    MCNAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);

    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode&& rhs);

    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode const& rhs);

    MCNAPI ::Molang::details::ExpressionNode& operator=(float value);

    MCNAPI bool operator==(::Molang::details::ExpressionNode const& rhs) const;

    MCNAPI bool optimizeFunctionCallParams();

    MCNAPI bool parse(::std::string_view inputExpression, ::MolangParseConfig const& config);

    MCNAPI bool processArrays();

    MCNAPI bool processBinaryExpression(::ExpressionOp op);

    MCNAPI bool processMathFuncs();

    MCNAPI bool processMemberAccessors();

    MCNAPI bool processNegativesAndLogicalNots();

    MCNAPI bool processQueriesAndFunctions();

    MCNAPI bool processSections();

    MCNAPI bool processSemicolons();

    MCNAPI bool processUnaryExpression(::ExpressionOp op);

    MCNAPI void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

    MCNAPI void
    replaceResourceVariables(::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable);

    MCNAPI void validateArrayVariables() const;

    MCNAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangCompileResult _buildProgram(
        ::Molang::details::MolangProgramBuildState& buildState,
        ::Molang::details::ExpressionNode const*    node,
        ::MolangVersion                             molangVersion
    );

    MCNAPI static ::MolangScriptArg* _getOrCreateReferencedMemberVariableScriptArg(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode
    );

    MCNAPI static ::std::optional<::MolangScriptArg>
    _getQueryFunctionAccessor(::std::string const& functionName, ::MolangParseConfig const& parseConfig);

    MCNAPI static ::MolangScriptArg const* _getScriptArgFromMemberAccessedVariable(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode
    );

    MCNAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode,
        ::MolangScriptArg const&                 value
    );

    MCNAPI static char const* getOpFriendlyName(::ExpressionOp op);

    MCNAPI static ::std::unique_ptr<::Molang::details::IComplexExpression> link(::Molang::details::ExpressionNode node);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Molang::details::ExpressionNode const& rhs);

    MCNAPI void* $ctor(::Molang::details::ExpressionNode&& rhs);

    MCNAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
