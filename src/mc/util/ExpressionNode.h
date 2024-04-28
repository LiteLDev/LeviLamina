#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/MolangVersion.h"

// auto generated inclusion list
#include "mc/common/wrapper/MolangCompileResult.h"
#include "mc/enums/ExpressionOp.h"
#include "mc/util/molang/MolangQueryFunctionReturnType.h"
#include "mc/util/molang/MolangVariableIndex.h"
#include "mc/util/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct MolangScriptArg;
class RenderParams;

class ExpressionNode {
public:
    using AccessorT         = MolangScriptArg const&(RenderParams&, std::vector<ExpressionNode> const&);
    using AccessorFn        = std::function<AccessorT>;
    using AccessorFnPointer = AccessorFn const*;

    uchar filler[200];

    // NOLINTBEGIN
    // symbol: ??0ExpressionNode@@QEAA@XZ
    MCAPI ExpressionNode();

    // symbol: ??0ExpressionNode@@QEAA@$$QEAV0@@Z
    MCAPI ExpressionNode(class ExpressionNode&& rhs);

    // symbol: ??0ExpressionNode@@QEAA@AEBV0@@Z
    MCAPI ExpressionNode(class ExpressionNode const& rhs);

    // symbol: ??0ExpressionNode@@QEAA@M@Z
    MCAPI explicit ExpressionNode(float value);

    // symbol: ??0ExpressionNode@@QEAA@AEAUMolangScriptArg@@W4ExpressionOp@@@Z
    MCAPI ExpressionNode(struct MolangScriptArg& value, ::ExpressionOp op);

    // symbol: ??0ExpressionNode@@QEAA@AEBVValue@Json@@AEBVSemVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
    MCAPI ExpressionNode(
        class Json::Value const&            value,
        class SemVersion const&             molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    // symbol: ??0ExpressionNode@@QEAA@AEBVValue@Json@@W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
    MCAPI ExpressionNode(
        class Json::Value const&            value,
        ::MolangVersion                     molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    // symbol:
    // ??0ExpressionNode@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
    MCAPI ExpressionNode(
        std::string const&                  expression,
        class SemVersion const&             molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    // symbol:
    // ??0ExpressionNode@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
    MCAPI ExpressionNode(
        std::string const&                  expression,
        ::MolangVersion                     molangVersion = MolangVersion::Latest,
        gsl::span<class HashedString const> querySetID = gsl::span<class HashedString const>{{HashedString{"default"}}}
    );

    // symbol: ?clear@ExpressionNode@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?evalAsFloat@ExpressionNode@@QEBAMAEAVRenderParams@@@Z
    MCAPI float evalAsFloat(class RenderParams& renderParams) const;

    // symbol: ?evalGeneric@ExpressionNode@@QEBAAEBUMolangScriptArg@@AEAVRenderParams@@@Z
    MCAPI struct MolangScriptArg const& evalGeneric(class RenderParams& renderParams) const;

    // symbol:
    // ?getExpressionString@ExpressionNode@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const getExpressionString() const;

    // symbol:
    // ?getExpressionString@ExpressionNode@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getExpressionString();

    // symbol: ?getMolangVersion@ExpressionNode@@QEBA?BW4MolangVersion@@XZ
    MCAPI ::MolangVersion const getMolangVersion() const;

    // symbol: ?getTreeHash@ExpressionNode@@QEBA_K_N@Z
    MCAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;

    // symbol:
    // ?getTreeString@ExpressionNode@@QEBA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI bool getTreeString(std::string& dest, bool sideEffectsReturnZero) const;

    // symbol:
    // ?hasDisallowedQueries@ExpressionNode@@QEBA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI bool hasDisallowedQueries(std::vector<std::string> const& allowedQueries) const;

    // symbol: ?hasMadd@ExpressionNode@@QEBA_NXZ
    MCAPI bool hasMadd() const;

    // symbol: ?hasSideEffects@ExpressionNode@@QEBA_N_N@Z
    MCAPI bool hasSideEffects(bool) const;

    // symbol: ?isInitialized@ExpressionNode@@QEBA_NXZ
    MCAPI bool isInitialized() const;

    // symbol: ?isValid@ExpressionNode@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?link@ExpressionNode@@QEBA?AW4MolangCompileResult@@XZ
    MCAPI ::MolangCompileResult link() const;

    // symbol: ?link@ExpressionNode@@QEBA?AW4MolangCompileResult@@W4MolangVersion@@@Z
    MCAPI ::MolangCompileResult link(::MolangVersion molangVersion) const;

    // symbol: ?moveConstantChildToValueIfFloatOrHashType@ExpressionNode@@QEAAXH@Z
    MCAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);

    // symbol: ??4ExpressionNode@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ExpressionNode& operator=(class ExpressionNode&&);

    // symbol: ??4ExpressionNode@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ExpressionNode& operator=(class ExpressionNode const& rhs);

    // symbol: ??4ExpressionNode@@QEAAAEAV0@M@Z
    MCAPI class ExpressionNode& operator=(float value);

    // symbol: ??8ExpressionNode@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class ExpressionNode const& rhs) const;

    // symbol:
    // ?parse@ExpressionNode@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
    MCAPI bool
    parse(std::string const& inputExpression, ::MolangVersion molangVersion, gsl::span<class HashedString const> idSet);

    // symbol: ??1ExpressionNode@@QEAA@XZ
    MCAPI ~ExpressionNode();

    // symbol: ?bindType@ExpressionNode@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?buildExpressionOpTable@ExpressionNode@@SAXXZ
    MCAPI static void buildExpressionOpTable();

    // symbol: ?fast_atof_positiveOnly@ExpressionNode@@SAMAEAPEBD@Z
    MCAPI static float fast_atof_positiveOnly(char const*& ptr);

    // symbol: ?getExperiments@ExpressionNode@@SAAEAVExperiments@@XZ
    MCAPI static class Experiments& getExperiments();

    // symbol: ?getOpFriendlyName@ExpressionNode@@SAPEBDW4ExpressionOp@@@Z
    MCAPI static char const* getOpFriendlyName(::ExpressionOp op);

    // symbol: ?getQueryFunctionMutex@ExpressionNode@@SAAEAVrecursive_mutex@std@@XZ
    MCAPI static std::recursive_mutex& getQueryFunctionMutex();

    // symbol:
    // ?queryFunctionAccessorFromString@ExpressionNode@@SAPEBV?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4MolangVersion@@AEAW4MolangQueryFunctionReturnType@@_N@Z
    MCAPI static AccessorFnPointer queryFunctionAccessorFromString(
        std::string const&               functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );

    // symbol:
    // ?registerQueryFunction@ExpressionNode@@SAAEAUMolangQueryFunction@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@4@0W4MolangQueryFunctionReturnType@@VHashedString@@_K4AEBV?$initializer_list@H@4@@Z
    MCAPI static struct MolangQueryFunction& registerQueryFunction(
        std::string const&                queryFunctionName,
        AccessorFn                        accessor,
        std::string const&                documentation,
        ::MolangQueryFunctionReturnType   returnType,
        class HashedString                querySetIdentifier,
        uint64                            minArgumentCount,
        uint64                            maxArgumentCount,
        std::initializer_list<int> const& experiments
    );

    // symbol: ?setExperiments@ExpressionNode@@SAXAEBVExperiments@@@Z
    MCAPI static void setExperiments(class Experiments const& experiments);

    // symbol:
    // ?unregisterQueryFunction@ExpressionNode@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VHashedString@@@Z
    MCAPI static void
    unregisterQueryFunction(std::string const& queryFunctionName, class HashedString querySetIdentifier);

    // symbol:
    // ?mAliasOpTokens@ExpressionNode@@2V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ExpressionOp@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ExpressionOp@@@std@@@2@@std@@A
    MCAPI static std::vector<std::pair<std::string, ::ExpressionOp>> mAliasOpTokens;

    // symbol:
    // ?mExpressionOpTokens@ExpressionNode@@2V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
    MCAPI static std::vector<std::string> mExpressionOpTokens;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_buildTree@ExpressionNode@@AEAA_NAEBUExpressionOpBitField@@W4MolangVersion@@@Z
    MCAPI bool _buildTree(struct ExpressionOpBitField const& usedTokenFlags, ::MolangVersion molangVersion);

    // symbol: ?_checkAllOperationsAreValid@ExpressionNode@@AEBA_NXZ
    MCAPI bool _checkAllOperationsAreValid() const;

    // symbol:
    // ?_hasDisallowedQueryPtrs@ExpressionNode@@AEBA_NAEBV?$vector@PEBV?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@V?$allocator@PEBV?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@@2@@std@@@Z
    MCAPI bool _hasDisallowedQueryPtrs(std::vector<AccessorFnPointer> const&) const;

    // symbol: ?_logEvaluatedToNan@ExpressionNode@@AEBAXXZ
    MCAPI void _logEvaluatedToNan() const;

    // symbol: ?_optimize@ExpressionNode@@AEAA_NW4MolangVersion@@AEAVRenderParams@@H@Z
    MCAPI bool _optimize(::MolangVersion version, class RenderParams& outRenderParams, int);

    // symbol: ?_processBinaryExpressions@ExpressionNode@@AEAA_NV?$function@$$A6A_NW4ExpressionOp@@@Z@std@@@Z
    MCAPI bool _processBinaryExpressions(std::function<bool(::ExpressionOp)> predicate);

    // symbol: ?_processTernaryAndConditionalExpressions@ExpressionNode@@AEAA_NXZ
    MCAPI bool _processTernaryAndConditionalExpressions();

    // symbol: ?_readNextToken@ExpressionNode@@AEAA_NAEAPEBDAEBV?$span@$$CBVHashedString@@$0?0@gsl@@W4MolangVersion@@@Z
    MCAPI bool _readNextToken(
        char const*&                               expression,
        gsl::span<class HashedString const> const& idSet,
        ::MolangVersion                            molangVersion
    );

    // symbol:
    // ?_setExpressionStringWithoutRelink@ExpressionNode@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _setExpressionStringWithoutRelink(std::string const& expressionString);

    // symbol:
    // ?_tokenize@ExpressionNode@@AEAA_NPEBDAEAUExpressionOpBitField@@AEBV?$span@$$CBVHashedString@@$0?0@gsl@@W4MolangVersion@@@Z
    MCAPI bool _tokenize(
        char const*                                expression,
        struct ExpressionOpBitField&               usedTokenFlags,
        gsl::span<class HashedString const> const& idSet,
        ::MolangVersion                            molangVersion
    );

    // symbol: ?_validate@ExpressionNode@@AEBA_NW4MolangVersion@@_NH@Z
    MCAPI bool _validate(::MolangVersion version, bool inLoop, int inAssignmentLHSDepth) const;

    // symbol: ?_validateChildrenAreNumerical@ExpressionNode@@AEBA_NW4MolangVersion@@@Z
    MCAPI bool _validateChildrenAreNumerical(::MolangVersion version) const;

    // symbol: ?executeMolangProgram@ExpressionNode@@AEBAAEBUMolangScriptArg@@AEAVRenderParams@@AEAUMolangEvalParams@@@Z
    MCAPI struct MolangScriptArg const&
    executeMolangProgram(class RenderParams& renderParams, struct MolangEvalParams& state) const;

    // symbol: ?findClosingOp@ExpressionNode@@AEBA_NAEA_KW4ExpressionOp@@@Z
    MCAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;

    // symbol: ?optimizeFunctionCallParams@ExpressionNode@@AEAA_NXZ
    MCAPI bool optimizeFunctionCallParams();

    // symbol: ?processArrays@ExpressionNode@@AEAA_NXZ
    MCAPI bool processArrays();

    // symbol: ?processBinaryExpression@ExpressionNode@@AEAA_NW4ExpressionOp@@@Z
    MCAPI bool processBinaryExpression(::ExpressionOp op);

    // symbol: ?processMathFuncs@ExpressionNode@@AEAA_NXZ
    MCAPI bool processMathFuncs();

    // symbol: ?processMemberAccessors@ExpressionNode@@AEAA_NXZ
    MCAPI bool processMemberAccessors();

    // symbol: ?processNegativesAndLogicalNots@ExpressionNode@@AEAA_NXZ
    MCAPI bool processNegativesAndLogicalNots();

    // symbol: ?processQueriesAndFunctions@ExpressionNode@@AEAA_NXZ
    MCAPI bool processQueriesAndFunctions();

    // symbol: ?processSections@ExpressionNode@@AEAA_NXZ
    MCAPI bool processSections();

    // symbol: ?processSemicolons@ExpressionNode@@AEAA_NXZ
    MCAPI bool processSemicolons();

    // symbol: ?processUnaryExpression@ExpressionNode@@AEAA_NW4ExpressionOp@@@Z
    MCAPI bool processUnaryExpression(::ExpressionOp op);

    // symbol:
    // ?_buildProgram@ExpressionNode@@CA?AW4MolangCompileResult@@AEAUMolangProgramBuildState@@PEBV1@W4MolangVersion@@@Z
    MCAPI static ::MolangCompileResult _buildProgram(
        struct MolangProgramBuildState& buildState,
        class ExpressionNode const*     node,
        ::MolangVersion                 molangVersion
    );

    // symbol:
    // ?_getOrCreateReferencedMemberVariableScriptArg@ExpressionNode@@CAPEAUMolangScriptArg@@AEAUMolangEvalParams@@AEBV1@@Z
    MCAPI static struct MolangScriptArg* _getOrCreateReferencedMemberVariableScriptArg(
        struct MolangEvalParams&    state,
        class ExpressionNode const& memberAccessorNode
    );

    // symbol:
    // ?_getQueryFunctionAccessor@ExpressionNode@@CA_NAEAUMolangScriptArg@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@W4MolangQueryFunctionReturnType@@AEBVHashedString@@@Z
    MCAPI static bool _getQueryFunctionAccessor(
        struct MolangScriptArg&         arg,
        std::string const&              functionName,
        ::MolangVersion                 molangVersion,
        ::MolangQueryFunctionReturnType functionReturnType,
        class HashedString const&       querySetId
    );

    // symbol:
    // ?_getScriptArgFromMemberAccessedVariable@ExpressionNode@@CAPEBUMolangScriptArg@@AEAUMolangEvalParams@@AEBV1@@Z
    MCAPI static struct MolangScriptArg const* _getScriptArgFromMemberAccessedVariable(
        struct MolangEvalParams&    state,
        class ExpressionNode const& memberAccessorNode
    );

    // symbol: ?_initializeMolangQueries@ExpressionNode@@CA_NXZ
    MCAPI static bool _initializeMolangQueries();

    // symbol:
    // ?_writeScriptArgToMemberAccessedVariable@ExpressionNode@@CAXAEAUMolangEvalParams@@AEBV1@AEBUMolangScriptArg@@@Z
    MCAPI static void _writeScriptArgToMemberAccessedVariable(
        struct MolangEvalParams&      state,
        class ExpressionNode const&   memberAccessorNode,
        struct MolangScriptArg const& value
    );

    // symbol:
    // ?_writeScriptArgToMolangVariable@ExpressionNode@@CAXAEAVMolangVariableMap@@W4MolangVariableIndex@@AEBUMolangScriptArg@@@Z
    MCAPI static void _writeScriptArgToMolangVariable(
        class MolangVariableMap&      destMap,
        ::MolangVariableIndex         variableIndex,
        struct MolangScriptArg const& value
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_defaultUnknownQueryFunction@ExpressionNode@@0V?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@A
    MCAPI static AccessorFn _defaultUnknownQueryFunction;

    // symbol: ?mExperiments@ExpressionNode@@0VExperimentStorage@@A
    MCAPI static class ExperimentStorage mExperiments;

    // symbol: ?mMolangInitialized@ExpressionNode@@0_NA
    MCAPI static bool mMolangInitialized;

    // symbol:
    // ?mQueryFunctionAccessors@ExpressionNode@@0V?$unordered_multimap@VHashedString@@UMolangQueryFunction@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@UMolangQueryFunction@@@std@@@4@@std@@A
    MCAPI static std::unordered_multimap<class HashedString, struct MolangQueryFunction> mQueryFunctionAccessors;

    // symbol:
    // ?mQuerySets@ExpressionNode@@0V?$unordered_map@VHashedString@@V?$unordered_set@VHashedString@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@VHashedString@@@3@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$unordered_set@VHashedString@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@VHashedString@@@3@@std@@@std@@@3@@std@@A
    MCAPI static std::unordered_map<class HashedString, std::unordered_set<class HashedString>> mQuerySets;

    // NOLINTEND
};
