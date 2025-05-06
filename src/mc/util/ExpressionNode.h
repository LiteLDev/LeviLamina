#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangParseConfig.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/util/MolangScriptArg.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class ExperimentStorage;
class HashedString;
class IMolangInstruction;
class RenderParams;
struct MolangEvalParams;
struct MolangParseConfig;
struct MolangProgramBuildState;
struct MolangQueryFunction;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct ResourceReference;
    // clang-format on

    // ExpressionNode inner types define
    using QueryLookupFunc = ::std::function<
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*(
            ::std::string const&,
            ::MolangQueryFunctionReturnType&,
            bool
        )>;

    using GetParticleTintFunc = ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>;

    struct ResourceReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mUnkdeb2d8;
        ::ll::UntypedStorage<2, 2>  mUnk80cca4;
        ::ll::UntypedStorage<1, 1>  mUnk749abb;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceReference& operator=(ResourceReference const&);
        ResourceReference(ResourceReference const&);
        ResourceReference();
    };

    using ResourceTable = ::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                          mOp;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                                         mMolangVersion;
    ::ll::TypedStorage<4, 4, float>                                                   mMul;
    ::ll::TypedStorage<4, 4, float>                                                   mAdd;
    ::ll::TypedStorage<1, 1, bool>                                                    mStoreStackState;
    ::ll::TypedStorage<1, 1, bool>                                                    mNeedsToCompile;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                     mIsBeingCompiled;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasVariableAssignments;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                                      mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                        mChildren;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IMolangInstruction>>> mInstructions;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mExpressionString;
    ::ll::TypedStorage<8, 32, ::std::string>                                          _mContentScopeString;
    // NOLINTEND

public:
    ExpressionNode(
        std::string const&                value,
        ::MolangVersion                   molangVersion,
        ::gsl::span<::HashedString const> querySetID
    )
    : ExpressionNode() {
        MolangParseConfig config;
        config.mVersion          = molangVersion;
        config.mAllowedQuerySets = querySetID;
        parse(value, config);
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpressionNode();

    MCAPI ExpressionNode(::ExpressionNode&& rhs);

    MCAPI ExpressionNode(::ExpressionNode const& rhs);

    MCAPI ExpressionNode(::std::string const& expression, ::MolangVersion molangVersion);

    MCAPI ExpressionNode(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI ExpressionNode(::MolangScriptArg const& value, ::ExpressionOp op);

    MCAPI bool _buildTree(::brstd::bitset<77, uint64> const& usedTokenFlags, ::MolangVersion molangVersion);

    MCFOLD bool _checkAllOperationsAreValid() const;

    MCAPI ::std::string _getExpressionString() const;

    MCAPI bool _optimize(::MolangVersion version, ::RenderParams& outRenderParams, int recursionDepth);

    MCAPI bool _processBinaryExpressions(::std::function<bool(::ExpressionOp)> predicate);

    MCAPI bool _processTernaryAndConditionalExpressions();

    MCAPI bool _readNextToken(char const*& expression, ::MolangParseConfig const& parseConfig);

    MCAPI void _setExpressionStringWithoutRelink(::std::string expressionString);

    MCAPI bool _tokenize(
        char const*                  expression,
        ::brstd::bitset<77, uint64>& usedTokenFlags,
        ::MolangParseConfig const&   parseConfig
    );

    MCAPI bool _validate(::MolangVersion version, bool inLoop, int inAssignmentLHSDepth) const;

    MCAPI bool _validateChildrenAreNumerical(::MolangVersion version) const;

    MCAPI void clear();

    MCAPI float evalAsFloat(::RenderParams& renderParams) const;

    MCAPI ::MolangScriptArg const& evalGeneric(::RenderParams& renderParams) const;

    MCAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;

    MCAPI ::std::string const& getExpressionString();

    MCAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;

    MCAPI bool getTreeString(::std::string& dest, bool sideEffectsReturnZero) const;

    MCAPI bool hasMadd() const;

    MCFOLD bool isValid() const;

    MCAPI ::MolangCompileResult link();

    MCAPI ::MolangCompileResult link(::MolangVersion molangVersion);

    MCAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);

    MCAPI ::ExpressionNode& operator=(::ExpressionNode&& rhs);

    MCAPI ::ExpressionNode& operator=(::ExpressionNode const& rhs);

    MCAPI ::ExpressionNode& operator=(float value);

    MCAPI bool operator==(::ExpressionNode const& rhs) const;

    MCAPI bool optimizeFunctionCallParams();

    MCAPI bool parse(::std::string_view inputExpression, ::MolangParseConfig const& config);

    MCAPI bool processArrays();

    MCAPI bool processBinaryExpression(::ExpressionOp op);

    MCAPI bool processMathFuncs();

    MCAPI bool processMemberAccessors();

    MCAPI bool processNegativesAndLogicalNots();

    MCAPI bool processQueriesAndFunctions();

    MCAPI bool processSections();

    MCAPI bool processSemicolons();

    MCAPI bool processUnaryExpression(::ExpressionOp op);

    MCAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MolangCompileResult
    _buildProgram(::MolangProgramBuildState& buildState, ::ExpressionNode const* node, ::MolangVersion molangVersion);

    MCAPI static ::MolangScriptArg* _getOrCreateReferencedMemberVariableScriptArg(
        ::MolangEvalParams&     state,
        ::ExpressionNode const& memberAccessorNode
    );

    MCAPI static ::std::optional<::MolangScriptArg>
    _getQueryFunctionAccessor(::std::string const& functionName, ::MolangParseConfig const& parseConfig);

    MCAPI static ::MolangScriptArg const*
    _getScriptArgFromMemberAccessedVariable(::MolangEvalParams& state, ::ExpressionNode const& memberAccessorNode);

    MCAPI static bool _initializeMolangQueries();

    MCAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&      state,
        ::ExpressionNode const&  memberAccessorNode,
        ::MolangScriptArg const& value
    );

    MCAPI static char const* getOpFriendlyName(::ExpressionOp op);

    MCAPI static ::std::function<
        ::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        ::std::string const&             functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );

    MCAPI static ::MolangQueryFunction& registerQueryFunction(
        ::std::string const& queryFunctionName,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> accessor,
        ::std::string const&                documentation,
        ::MolangQueryFunctionReturnType     returnType,
        ::HashedString                      querySetIdentifier,
        uint64                              minArgumentCount,
        uint64                              maxArgumentCount,
        ::std::initializer_list<int> const& experiments
    );

    MCAPI static void
    unregisterQueryFunction(::std::string const& queryFunctionName, ::HashedString querySetIdentifier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>&
    _defaultUnknownQueryFunction();

    MCAPI static ::ExperimentStorage& mExperiments();

    MCAPI static ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>&
    mGetParticleTintFunc();

    MCAPI static bool& mMolangInitialized();

    MCAPI static ::std::unordered_multimap<::HashedString, ::MolangQueryFunction>& mQueryFunctionAccessors();

    MCAPI static ::std::unordered_map<::HashedString, ::std::unordered_set<::HashedString>>& mQuerySets();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ExpressionNode&& rhs);

    MCAPI void* $ctor(::ExpressionNode const& rhs);

    MCAPI void* $ctor(::std::string const& expression, ::MolangVersion molangVersion);

    MCAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI void* $ctor(::MolangScriptArg const& value, ::ExpressionOp op);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
