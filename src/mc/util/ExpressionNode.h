#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/ExpressionOp.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class ExperimentStorage;
class Experiments;
class HashedString;
class IMolangInstruction;
class MolangVariableMap;
class RenderParams;
struct ExpressionOpBitField;
struct MolangEvalParams;
struct MolangProgramBuildState;
struct MolangQueryFunction;
struct MolangScriptArg;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ExpressionNode {
public:
    // ExpressionNode inner types define
    using QueryLookupFunc = ::std::function<
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*(
            ::std::string const&,
            ::MolangQueryFunctionReturnType&,
            bool
        )>;

    using GetParticleColorFunc = ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>;

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
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                                      mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                        mChildren;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IMolangInstruction>>> mInstructions;
    ::ll::TypedStorage<8, 32, ::std::string>                                          _mExpressionString;
    ::ll::TypedStorage<8, 32, ::std::string>                                          _mContentScopeString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpressionNode();

    MCAPI ExpressionNode(::ExpressionNode&& rhs);

    MCAPI ExpressionNode(::ExpressionNode const& rhs);

    MCAPI explicit ExpressionNode(float value);

    MCAPI ExpressionNode(::MolangScriptArg& value, ::ExpressionOp op);

    MCAPI ExpressionNode(
        ::std::string const&              expression,
        ::MolangVersion                   molangVersion,
        ::gsl::span<::HashedString const> querySetID
    );

    MCAPI ExpressionNode(
        ::Json::Value const&              value,
        ::MolangVersion                   molangVersion,
        ::gsl::span<::HashedString const> querySetID
    );

    MCAPI bool _buildTree(::ExpressionOpBitField const& usedTokenFlags, ::MolangVersion molangVersion);

    MCAPI bool _checkAllOperationsAreValid() const;

    MCAPI bool _hasDisallowedQueryPtrs(
        ::std::vector<::std::function<
            ::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*> const&
            allowedQueryPtrs
    ) const;

    MCAPI void _logEvaluatedToNan() const;

    MCAPI bool _optimize(::MolangVersion version, ::RenderParams& outRenderParams, int recursionDepth);

    MCAPI bool _processBinaryExpressions(::std::function<bool(::ExpressionOp)> predicate);

    MCAPI bool _processTernaryAndConditionalExpressions();

    MCAPI bool _readNextToken(
        char const*&                             expression,
        ::gsl::span<::HashedString const> const& idSet,
        ::MolangVersion                          molangVersion
    );

    MCAPI void _setExpressionStringWithoutRelink(::std::string const& expressionString);

    MCAPI bool _tokenize(
        char const*                              expression,
        ::ExpressionOpBitField&                  usedTokenFlags,
        ::gsl::span<::HashedString const> const& idSet,
        ::MolangVersion                          molangVersion
    );

    MCAPI bool _validate(::MolangVersion version, bool inLoop, int inAssignmentLHSDepth) const;

    MCAPI bool _validateChildrenAreNumerical(::MolangVersion version) const;

    MCAPI void clear();

    MCAPI float evalAsFloat(::RenderParams& renderParams) const;

    MCAPI ::MolangScriptArg const& evalGeneric(::RenderParams& renderParams) const;

    MCAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;

    MCAPI ::std::string const getExpressionString() const;

    MCAPI ::std::string const& getExpressionString();

    MCAPI ::MolangVersion const getMolangVersion() const;

    MCAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;

    MCAPI bool getTreeString(::std::string& dest, bool sideEffectsReturnZero) const;

    MCAPI bool hasDisallowedQueries(::std::vector<::std::string> const& allowedQueries) const;

    MCAPI bool hasMadd() const;

    MCAPI bool hasSideEffects(bool countRandomAsSideEffect) const;

    MCAPI bool isInitialized() const;

    MCAPI bool isValid() const;

    MCAPI ::MolangCompileResult link() const;

    MCAPI ::MolangCompileResult link(::MolangVersion molangVersion) const;

    MCAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);

    MCAPI ::ExpressionNode& operator=(::ExpressionNode&& rhs);

    MCAPI ::ExpressionNode& operator=(::ExpressionNode const& rhs);

    MCAPI ::ExpressionNode& operator=(float value);

    MCAPI bool operator==(::ExpressionNode const& rhs) const;

    MCAPI bool optimizeFunctionCallParams();

    MCAPI bool
    parse(::std::string const& inputExpression, ::MolangVersion molangVersion, ::gsl::span<::HashedString const> idSet);

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

    MCAPI static bool _getQueryFunctionAccessor(
        ::MolangScriptArg&              arg,
        ::std::string const&            functionName,
        ::MolangVersion                 molangVersion,
        ::MolangQueryFunctionReturnType functionReturnType,
        ::HashedString const&           querySetId
    );

    MCAPI static ::MolangScriptArg const*
    _getReferencedMemberVariableScriptArg(::MolangEvalParams& state, ::ExpressionNode const& memberAccessorNode);

    MCAPI static ::MolangScriptArg const*
    _getScriptArgFromMemberAccessedVariable(::MolangEvalParams& state, ::ExpressionNode const& memberAccessorNode);

    MCAPI static bool _initializeMolangQueries();

    MCAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&      state,
        ::ExpressionNode const&  memberAccessorNode,
        ::MolangScriptArg const& value
    );

    MCAPI static void _writeScriptArgToMolangVariable(
        ::MolangVariableMap&     destMap,
        ::MolangVariableIndex    variableIndex,
        ::MolangScriptArg const& value
    );

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void buildExpressionOpTable();

    MCAPI static float fast_atof_positiveOnly(char const*& ptr);

    MCAPI static ::Experiments& getExperiments();

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

    MCAPI static void setExperiments(::Experiments const& experiments);

    MCAPI static void
    unregisterQueryFunction(::std::string const& queryFunctionName, ::HashedString querySetIdentifier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>&
    _defaultUnknownQueryFunction();

    MCAPI static ::std::vector<::std::pair<::std::string, ::ExpressionOp>>& mAliasOpTokens();

    MCAPI static ::ExperimentStorage& mExperiments();

    MCAPI static ::std::vector<::std::string>& mExpressionOpTokens();

    MCAPI static ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>&
    mGetParticleColorFunc();

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

    MCAPI void* $ctor(float value);

    MCAPI void* $ctor(::MolangScriptArg& value, ::ExpressionOp op);

    MCAPI void*
    $ctor(::std::string const& expression, ::MolangVersion molangVersion, ::gsl::span<::HashedString const> querySetID);

    MCAPI void*
    $ctor(::Json::Value const& value, ::MolangVersion molangVersion, ::gsl::span<::HashedString const> querySetID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
