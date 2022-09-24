/**
 * @file  ExpressionNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Actor.hpp"
#include "HashedString.hpp"
class MolangInstance {
public:
    LIAPI MolangInstance(const string&);
    LIAPI ~MolangInstance();
    LIAPI float evalAsFloat(Actor* actor);
    LIAPI Json ::Value evalAsJson(Actor* actor);
    LIAPI string getExpressionString();
    LIAPI bool isInitialized();
    LIAPI bool isValid();
    LIAPI bool parse(const string& expressionStr, enum class MolangVersion version = (MolangVersion)6,
                              gsl::span<class HashedString const, -1> v = gsl::span<class HashedString const, -1>(
                                  {HashedString("default" /*or "world_gen"*/)}));

private:
    char expression[0xC8]{};
    // allocate memory for storage of ExpressionNode,from IDA xref of : ExpressionNode
    // ExpressionNode* expression;
};
#undef BEFORE_EXTRA

/**
 * @brief MC class ExpressionNode.
 *
 */
class ExpressionNode {

#define AFTER_EXTRA
    // Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @hash   1104684630
     * @symbol ??0ExpressionNode@@QEAA@XZ
     */
    MCAPI ExpressionNode();
    /**
     * @hash   -1237435101
     * @symbol ??0ExpressionNode@@QEAA@M@Z
     */
    MCAPI ExpressionNode(float);
    /**
     * @hash   999697829
     * @symbol ??0ExpressionNode@@QEAA@AEBVValue@Json@@W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
     */
    MCAPI ExpressionNode(class Json::Value const &, enum MolangVersion, class gsl::span<class HashedString const, -1>);
    /**
     * @hash   -1096660345
     * @symbol ??0ExpressionNode@@QEAA@AEBVValue@Json@@AEBVSemVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
     */
    MCAPI ExpressionNode(class Json::Value const &, class SemVersion const &, class gsl::span<class HashedString const, -1>);
    /**
     * @hash   -440101179
     * @symbol ??0ExpressionNode@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
     */
    MCAPI ExpressionNode(std::string const &, enum MolangVersion, class gsl::span<class HashedString const, -1>);
    /**
     * @hash   1511515807
     * @symbol ??0ExpressionNode@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
     */
    MCAPI ExpressionNode(std::string const &, class SemVersion const &, class gsl::span<class HashedString const, -1>);
    /**
     * @hash   1784920801
     * @symbol ??0ExpressionNode@@QEAA@AEBV0@@Z
     */
    MCAPI ExpressionNode(class ExpressionNode const &);
    /**
     * @hash   -474139736
     * @symbol ??0ExpressionNode@@QEAA@AEAUMolangScriptArg@@W4ExpressionOp@@@Z
     */
    MCAPI ExpressionNode(struct MolangScriptArg &, enum ExpressionOp);
    /**
     * @hash   -53665571
     * @symbol ??0ExpressionNode@@QEAA@$$QEAV0@@Z
     */
    MCAPI ExpressionNode(class ExpressionNode &&);
    /**
     * @hash   -1141703485
     * @symbol ?clear@ExpressionNode@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -1380635253
     * @symbol ?evalAsFloat@ExpressionNode@@QEBAMAEAVRenderParams@@@Z
     */
    MCAPI float evalAsFloat(class RenderParams &) const;
    /**
     * @hash   -516777045
     * @symbol ?evalGeneric@ExpressionNode@@QEBAAEBUMolangScriptArg@@AEAVRenderParams@@@Z
     */
    MCAPI struct MolangScriptArg const & evalGeneric(class RenderParams &) const;
    /**
     * @hash   -697602130
     * @symbol ?getExpressionString@ExpressionNode@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getExpressionString();
    /**
     * @hash   -1150542764
     * @symbol ?getExpressionString@ExpressionNode@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const getExpressionString() const;
    /**
     * @hash   1506342952
     * @symbol ?getMolangVersion@ExpressionNode@@QEBA?BW4MolangVersion@@XZ
     */
    MCAPI enum MolangVersion const getMolangVersion() const;
    /**
     * @hash   1881177072
     * @symbol ?getTreeHash@ExpressionNode@@QEBA_K_N@Z
     */
    MCAPI unsigned __int64 getTreeHash(bool) const;
    /**
     * @hash   -2079171966
     * @symbol ?getTreeString@ExpressionNode@@QEBA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI bool getTreeString(std::string &, bool) const;
    /**
     * @symbol ?hasDisallowedQueries@ExpressionNode@@QEBA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI bool hasDisallowedQueries(std::vector<std::string> const &) const;
    /**
     * @hash   -1329017624
     * @symbol ?hasMadd@ExpressionNode@@QEBA_NXZ
     */
    MCAPI bool hasMadd() const;
    /**
     * @symbol ?hasSideEffects@ExpressionNode@@QEBA_N_N@Z
     */
    MCAPI bool hasSideEffects(bool) const;
    /**
     * @hash   -1268707856
     * @symbol ?isInitialized@ExpressionNode@@QEBA_NXZ
     */
    MCAPI bool isInitialized() const;
    /**
     * @hash   1269210000
     * @symbol ?isValid@ExpressionNode@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   2024413226
     * @symbol ?link@ExpressionNode@@QEBA?AW4MolangCompileResult@@XZ
     */
    MCAPI enum MolangCompileResult link() const;
    /**
     * @hash   -126824552
     * @symbol ?moveConstantChildToValueIfFloatOrHashType@ExpressionNode@@QEAAXH@Z
     */
    MCAPI void moveConstantChildToValueIfFloatOrHashType(int);
    /**
     * @hash   38676488
     * @symbol ??4ExpressionNode@@QEAAAEAV0@M@Z
     */
    MCAPI class ExpressionNode & operator=(float);
    /**
     * @hash   1810954148
     * @symbol ??4ExpressionNode@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ExpressionNode & operator=(class ExpressionNode const &);
    /**
     * @hash   -406104467
     * @symbol ??8ExpressionNode@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class ExpressionNode const &) const;
    /**
     * @hash   -90372583
     * @symbol ?parse@ExpressionNode@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z
     */
    MCAPI bool parse(std::string const &, enum MolangVersion, class gsl::span<class HashedString const, -1>);
    /**
     * @hash   1742088596
     * @symbol ??1ExpressionNode@@QEAA@XZ
     */
    MCAPI ~ExpressionNode();
    /**
     * @hash   745720435
     * @symbol ?bindType@ExpressionNode@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -2065913693
     * @symbol ?buildExpressionOpTable@ExpressionNode@@SAXXZ
     */
    MCAPI static void buildExpressionOpTable();
    /**
     * @hash   -839103643
     * @symbol ?fast_atof_positiveOnly@ExpressionNode@@SAMAEAPEBD@Z
     */
    MCAPI static float fast_atof_positiveOnly(char const *&);
    /**
     * @hash   1106403370
     * @symbol ?getExperiments@ExpressionNode@@SAAEAVExperiments@@XZ
     */
    MCAPI static class Experiments & getExperiments();
    /**
     * @hash   430326376
     * @symbol ?getOpFriendlyName@ExpressionNode@@SAPEBDW4ExpressionOp@@@Z
     */
    MCAPI static char const * getOpFriendlyName(enum ExpressionOp);
    /**
     * @hash   798252624
     * @symbol ?getQueryFunctionMutex@ExpressionNode@@SAAEAVrecursive_mutex@std@@XZ
     */
    MCAPI static class std::recursive_mutex & getQueryFunctionMutex();
    /**
     * @hash   536980962
     * @symbol ?mAliasOpTokens@ExpressionNode@@2V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ExpressionOp@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ExpressionOp@@@std@@@2@@std@@A
     */
    MCAPI static std::vector<struct std::pair<std::string, enum ExpressionOp>> mAliasOpTokens;
    /**
     * @hash   -841866382
     * @symbol ?mExpressionOpTokens@ExpressionNode@@2V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
     */
    MCAPI static std::vector<std::string> mExpressionOpTokens;
    /**
     * @hash   -2088153924
     * @symbol ?queryFunctionAccessorFromString@ExpressionNode@@SAPEBV?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4MolangVersion@@AEAW4MolangQueryFunctionReturnType@@_N@Z
     */
    MCAPI static class std::function<struct MolangScriptArg const & (class RenderParams &, std::vector<class ExpressionNode> const &)> const * queryFunctionAccessorFromString(std::string const &, enum MolangVersion, enum MolangQueryFunctionReturnType &, bool);
    /**
     * @hash   -89135828
     * @symbol ?registerQueryFunction@ExpressionNode@@SAAEAUMolangQueryFunction@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@4@0W4MolangQueryFunctionReturnType@@VHashedString@@_K4AEBV?$initializer_list@H@4@@Z
     */
    MCAPI static struct MolangQueryFunction & registerQueryFunction(std::string const &, class std::function<struct MolangScriptArg const & (class RenderParams &, std::vector<class ExpressionNode> const &)>, std::string const &, enum MolangQueryFunctionReturnType, class HashedString, unsigned __int64, unsigned __int64, class std::initializer_list<int> const &);
    /**
     * @hash   -953307414
     * @symbol ?setExperiments@ExpressionNode@@SAXAEBVExperiments@@@Z
     */
    MCAPI static void setExperiments(class Experiments const &);
    /**
     * @hash   1372907341
     * @symbol ?unregisterQueryFunction@ExpressionNode@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VHashedString@@@Z
     */
    MCAPI static void unregisterQueryFunction(std::string const &, class HashedString);

//private:
    /**
     * @hash   242675019
     * @symbol ?_buildTree@ExpressionNode@@AEAA_NAEBUExpressionOpBitField@@W4MolangVersion@@@Z
     */
    MCAPI bool _buildTree(struct ExpressionOpBitField const &, enum MolangVersion);
    /**
     * @hash   -95281049
     * @symbol ?_checkAllOperationsAreValid@ExpressionNode@@AEBA_NXZ
     */
    MCAPI bool _checkAllOperationsAreValid() const;
    /**
     * @symbol ?_hasDisallowedQueryPtrs@ExpressionNode@@AEBA_NAEBV?$vector@PEBV?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@V?$allocator@PEBV?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@@2@@std@@@Z
     */
    MCAPI bool _hasDisallowedQueryPtrs(std::vector<class std::function<struct MolangScriptArg const & (class RenderParams &, class std::vector<class ExpressionNode, class std::allocator<class ExpressionNode>> const &)> const *> const &) const;
    /**
     * @hash   -402221798
     * @symbol ?_optimize@ExpressionNode@@AEAA_NW4MolangVersion@@@Z
     */
    MCAPI bool _optimize(enum MolangVersion);
    /**
     * @hash   -1219949309
     * @symbol ?_processBinaryExpressions@ExpressionNode@@AEAA_NV?$function@$$A6A_NW4ExpressionOp@@@Z@std@@@Z
     */
    MCAPI bool _processBinaryExpressions(class std::function<bool (enum ExpressionOp)>);
    /**
     * @hash   -949703091
     * @symbol ?_processTernaryAndConditionalExpressions@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool _processTernaryAndConditionalExpressions();
    /**
     * @hash   -1028013522
     * @symbol ?_readNextToken@ExpressionNode@@AEAA_NAEAPEBDAEBV?$span@$$CBVHashedString@@$0?0@gsl@@W4MolangVersion@@@Z
     */
    MCAPI bool _readNextToken(char const *&, class gsl::span<class HashedString const, -1> const &, enum MolangVersion);
    /**
     * @hash   1305659649
     * @symbol ?_setExpressionStringWithoutRelink@ExpressionNode@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _setExpressionStringWithoutRelink(std::string const &);
    /**
     * @hash   1431784566
     * @symbol ?_tokenize@ExpressionNode@@AEAA_NPEBDAEAUExpressionOpBitField@@AEBV?$span@$$CBVHashedString@@$0?0@gsl@@W4MolangVersion@@@Z
     */
    MCAPI bool _tokenize(char const *, struct ExpressionOpBitField &, class gsl::span<class HashedString const, -1> const &, enum MolangVersion);
    /**
     * @hash   1735086603
     * @symbol ?_validate@ExpressionNode@@AEBA_NW4MolangVersion@@_NH@Z
     */
    MCAPI bool _validate(enum MolangVersion, bool, int) const;
    /**
     * @hash   420340461
     * @symbol ?_validateChildrenAreNumerical@ExpressionNode@@AEBA_NW4MolangVersion@@@Z
     */
    MCAPI bool _validateChildrenAreNumerical(enum MolangVersion) const;
    /**
     * @hash   1235311545
     * @symbol ?findClosingOp@ExpressionNode@@AEBA_NAEA_KW4ExpressionOp@@@Z
     */
    MCAPI bool findClosingOp(unsigned __int64 &, enum ExpressionOp) const;
    /**
     * @hash   -1265235243
     * @symbol ?optimizeFunctionCallParams@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool optimizeFunctionCallParams();
    /**
     * @hash   -1799634363
     * @symbol ?processArrays@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processArrays();
    /**
     * @hash   -380463745
     * @symbol ?processBinaryExpression@ExpressionNode@@AEAA_NW4ExpressionOp@@@Z
     */
    MCAPI bool processBinaryExpression(enum ExpressionOp);
    /**
     * @hash   -143169212
     * @symbol ?processMathFuncs@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processMathFuncs();
    /**
     * @hash   -311667025
     * @symbol ?processMemberAccessors@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processMemberAccessors();
    /**
     * @hash   -817470723
     * @symbol ?processNegativesAndLogicalNots@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processNegativesAndLogicalNots();
    /**
     * @hash   -1631849369
     * @symbol ?processQueriesAndFunctions@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processQueriesAndFunctions();
    /**
     * @hash   646954985
     * @symbol ?processSections@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processSections();
    /**
     * @hash   140172269
     * @symbol ?processSemicolons@ExpressionNode@@AEAA_NXZ
     */
    MCAPI bool processSemicolons();
    /**
     * @hash   253719903
     * @symbol ?processUnaryExpression@ExpressionNode@@AEAA_NW4ExpressionOp@@@Z
     */
    MCAPI bool processUnaryExpression(enum ExpressionOp);
    /**
     * @hash   565054030
     * @symbol ?_buildProgram@ExpressionNode@@CA?AW4MolangCompileResult@@AEAUMolangProgramBuildState@@PEBV1@@Z
     */
    MCAPI static enum MolangCompileResult _buildProgram(struct MolangProgramBuildState &, class ExpressionNode const *);
    /**
     * @hash   508579162
     * @symbol ?_getOrCreateReferencedMemberVariableScriptArg@ExpressionNode@@CAPEAUMolangScriptArg@@AEAUMolangEvalParams@@AEBV1@@Z
     */
    MCAPI static struct MolangScriptArg * _getOrCreateReferencedMemberVariableScriptArg(struct MolangEvalParams &, class ExpressionNode const &);
    /**
     * @hash   33327945
     * @symbol ?_getQueryFunctionAccessor@ExpressionNode@@CA_NAEAUMolangScriptArg@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@W4MolangQueryFunctionReturnType@@AEBVHashedString@@@Z
     */
    MCAPI static bool _getQueryFunctionAccessor(struct MolangScriptArg &, std::string const &, enum MolangVersion, enum MolangQueryFunctionReturnType, class HashedString const &);
    /**
     * @hash   1749435832
     * @symbol ?_getScriptArgFromMemberAccessedVariable@ExpressionNode@@CAPEBUMolangScriptArg@@AEAUMolangEvalParams@@AEBV1@@Z
     */
    MCAPI static struct MolangScriptArg const * _getScriptArgFromMemberAccessedVariable(struct MolangEvalParams &, class ExpressionNode const &);
    /**
     * @hash   1899292519
     * @symbol ?_initializeMolangQueries@ExpressionNode@@CA_NXZ
     */
    MCAPI static bool _initializeMolangQueries();
    /**
     * @hash   1407325096
     * @symbol ?_writeScriptArgToMemberAccessedVariable@ExpressionNode@@CAXAEAUMolangEvalParams@@AEBV1@AEBUMolangScriptArg@@@Z
     */
    MCAPI static void _writeScriptArgToMemberAccessedVariable(struct MolangEvalParams &, class ExpressionNode const &, struct MolangScriptArg const &);
    /**
     * @hash   -360187579
     * @symbol ?_writeScriptArgToMolangVariable@ExpressionNode@@CAXAEAVMolangVariableMap@@W4MolangVariableIndex@@AEBUMolangScriptArg@@@Z
     */
    MCAPI static void _writeScriptArgToMolangVariable(class MolangVariableMap &, enum MolangVariableIndex, struct MolangScriptArg const &);

private:
    /**
     * @hash   1094217401
     * @symbol ?_defaultUnknownQueryFunction@ExpressionNode@@0V?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$allocator@VExpressionNode@@@std@@@std@@@Z@std@@A
     */
    MCAPI static class std::function<struct MolangScriptArg const & (class RenderParams &, std::vector<class ExpressionNode> const &)> _defaultUnknownQueryFunction;
    /**
     * @hash   120586372
     * @symbol ?mExperiments@ExpressionNode@@0VExperimentStorage@@A
     */
    MCAPI static class ExperimentStorage mExperiments;
    /**
     * @hash   -26627807
     * @symbol ?mMolangInitialized@ExpressionNode@@0_NA
     */
    MCAPI static bool mMolangInitialized;
    /**
     * @hash   1969823930
     * @symbol ?mQueryFunctionAccessors@ExpressionNode@@0V?$unordered_multimap@VHashedString@@UMolangQueryFunction@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@UMolangQueryFunction@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_multimap<class HashedString, struct MolangQueryFunction, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct MolangQueryFunction>>> mQueryFunctionAccessors;
    /**
     * @hash   1002526654
     * @symbol ?mQuerySets@ExpressionNode@@0V?$unordered_map@VHashedString@@V?$unordered_set@VHashedString@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@VHashedString@@@3@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$unordered_set@VHashedString@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@VHashedString@@@3@@std@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, class std::unordered_set<class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<class HashedString>>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::unordered_set<class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<class HashedString>>>>> mQuerySets;

};