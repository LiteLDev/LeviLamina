#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/function_ref.h"
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
namespace Molang::details { class Program; }
namespace Molang::details { struct MolangProgramBuildState; }
// clang-format on

namespace Molang::details {

class ExpressionNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkf560f0;
    ::ll::UntypedStorage<4, 4> mUnk4e6e98;
    ::ll::UntypedStorage<4, 4> mUnk56c08e;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 88> mUnka6816f;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 96> mUnka6816f;
#endif
    ::ll::UntypedStorage<8, 24> mUnk58ba9b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode&&);

    MCNAPI ExpressionNode(::Molang::details::ExpressionNode const&);

    MCNAPI bool _buildTree(::brstd::bitset<109, uint64> const& usedTokenFlags, ::MolangVersion molangVersion);

    MCNAPI bool _checkAllOperationsAreValid() const;

    MCNAPI bool _optimize(::MolangVersion version, ::RenderParams& outRenderParams, int recursionDepth);

    MCNAPI bool _processBinaryExpressions(::brstd::function_ref<bool(::ExpressionOp)> predicate);

    MCNAPI bool _processTernaryAndConditionalExpressions();

    MCNAPI bool _readNextToken(char const*& expression, ::MolangParseConfig const& parseConfig);

    MCNAPI bool _validate(::MolangVersion version, bool inLoop, int inAssignmentLHSDepth) const;

    MCNAPI bool _validateChildrenAreNumerical(::MolangVersion version) const;

    MCNAPI_S bool areAllChildrenEqual() const;

    MCNAPI void clear();

    MCNAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;

    MCNAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;

    MCNAPI bool getTreeString(::std::string& dest, bool sideEffectsReturnZero) const;

    MCNAPI bool hasMadd() const;

    MCNAPI bool isValid() const;

    MCNAPI ::nonstd::expected<::Molang::details::Program, ::MolangCompileResult> link(::MolangVersion version);

    MCNAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);

    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode&&);

    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode const&);

    MCNAPI ::Molang::details::ExpressionNode& operator=(float value);

    MCNAPI bool operator==(::Molang::details::ExpressionNode const& rhs) const;

    MCNAPI bool optimizeFunctionCallParams();

    MCNAPI bool parse(
        ::std::string_view            inputExpression,
        ::MolangParseConfig const&    config,
        ::brstd::bitset<109, uint64>& usedTokenFlags
    );

    MCNAPI bool
    parse(::Json::Value const& value, ::MolangParseConfig const& config, ::brstd::bitset<109, uint64>& usedTokenFlags);

    MCNAPI bool processArrays();

    MCNAPI bool processBinaryExpression(::ExpressionOp op);

    MCNAPI bool processMathFuncs();

    MCNAPI_S bool processMemberAccessors();

    MCNAPI bool processNegativesAndLogicalNots();

    MCNAPI bool processQueriesAndFunctions();

    MCNAPI bool processSections();

    MCNAPI bool processSemicolons();

    MCNAPI bool processUnaryExpression(::ExpressionOp op);

    MCNAPI void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

    MCNAPI_C ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>
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

    MCNAPI static ::MolangScriptArg const* _getReferencedMemberVariableScriptArg(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode
    );

    MCNAPI_C static ::MolangScriptArg const* _getScriptArgFromMemberAccessedVariable(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode
    );

    MCNAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode,
        ::MolangScriptArg const&                 value
    );

    MCNAPI static char const* getOpFriendlyName(::ExpressionOp op);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Molang::details::ExpressionNode&&);

    MCNAPI void* $ctor(::Molang::details::ExpressionNode const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
