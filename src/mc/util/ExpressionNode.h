#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ExpressionNode {

public:
    /**
     * @symbol ??0ExpressionNode\@\@QEAA\@XZ
     */
    MCAPI ExpressionNode(); // NOLINT
    /**
     * @symbol
     * ??0ExpressionNode\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MolangVersion\@\@V?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI
    ExpressionNode(std::string const&, enum class MolangVersion, class gsl::span<class HashedString const, -1>); // NOLINT
    /**
     * @symbol ??0ExpressionNode\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ExpressionNode(class ExpressionNode const&); // NOLINT
    /**
     * @symbol
     * ??0ExpressionNode\@\@QEAA\@AEBVValue\@Json\@\@W4MolangVersion\@\@V?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI
    ExpressionNode(class Json::Value const&, enum class MolangVersion, class gsl::span<class HashedString const, -1>); // NOLINT
    /**
     * @symbol
     * ??0ExpressionNode\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@V?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI
    ExpressionNode(std::string const&, class SemVersion const&, class gsl::span<class HashedString const, -1>); // NOLINT
    /**
     * @symbol ??0ExpressionNode\@\@QEAA\@M\@Z
     */
    MCAPI ExpressionNode(float); // NOLINT
    /**
     * @symbol ??0ExpressionNode\@\@QEAA\@AEAUMolangScriptArg\@\@W4ExpressionOp\@\@\@Z
     */
    MCAPI ExpressionNode(struct MolangScriptArg&, enum class ExpressionOp); // NOLINT
    /**
     * @symbol ??0ExpressionNode\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ExpressionNode(class ExpressionNode&&); // NOLINT
    /**
     * @symbol
     * ??0ExpressionNode\@\@QEAA\@AEBVValue\@Json\@\@AEBVSemVersion\@\@V?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI
    ExpressionNode(class Json::Value const&, class SemVersion const&, class gsl::span<class HashedString const, -1>); // NOLINT
    /**
     * @symbol ?clear\@ExpressionNode\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?evalAsFloat\@ExpressionNode\@\@QEBAMAEAVRenderParams\@\@\@Z
     */
    MCAPI float evalAsFloat(class RenderParams&) const; // NOLINT
    /**
     * @symbol ?evalGeneric\@ExpressionNode\@\@QEBAAEBUMolangScriptArg\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI struct MolangScriptArg const& evalGeneric(class RenderParams&) const; // NOLINT
    /**
     * @symbol
     * ?getExpressionString\@ExpressionNode\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getExpressionString() const; // NOLINT
    /**
     * @symbol
     * ?getExpressionString\@ExpressionNode\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getExpressionString(); // NOLINT
    /**
     * @symbol ?getMolangVersion\@ExpressionNode\@\@QEBA?BW4MolangVersion\@\@XZ
     */
    MCAPI enum class MolangVersion const getMolangVersion() const; // NOLINT
    /**
     * @symbol ?getTreeHash\@ExpressionNode\@\@QEBA_K_N\@Z
     */
    MCAPI unsigned __int64 getTreeHash(bool) const; // NOLINT
    /**
     * @symbol
     * ?getTreeString\@ExpressionNode\@\@QEBA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI bool getTreeString(std::string&, bool) const; // NOLINT
    /**
     * @symbol
     * ?hasDisallowedQueries\@ExpressionNode\@\@QEBA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasDisallowedQueries(std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol ?hasMadd\@ExpressionNode\@\@QEBA_NXZ
     */
    MCAPI bool hasMadd() const; // NOLINT
    /**
     * @symbol ?hasSideEffects\@ExpressionNode\@\@QEBA_N_N\@Z
     */
    MCAPI bool hasSideEffects(bool) const; // NOLINT
    /**
     * @symbol ?isInitialized\@ExpressionNode\@\@QEBA_NXZ
     */
    MCAPI bool isInitialized() const; // NOLINT
    /**
     * @symbol ?isValid\@ExpressionNode\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?link\@ExpressionNode\@\@QEBA?AW4MolangCompileResult\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI enum class MolangCompileResult link(enum class MolangVersion) const; // NOLINT
    /**
     * @symbol ?link\@ExpressionNode\@\@QEBA?AW4MolangCompileResult\@\@XZ
     */
    MCAPI enum class MolangCompileResult link() const; // NOLINT
    /**
     * @symbol ?moveConstantChildToValueIfFloatOrHashType\@ExpressionNode\@\@QEAAXH\@Z
     */
    MCAPI void moveConstantChildToValueIfFloatOrHashType(int); // NOLINT
    /**
     * @symbol ??4ExpressionNode\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ExpressionNode& operator=(class ExpressionNode const&); // NOLINT
    /**
     * @symbol ??4ExpressionNode\@\@QEAAAEAV0\@M\@Z
     */
    MCAPI class ExpressionNode& operator=(float); // NOLINT
    /**
     * @symbol ??8ExpressionNode\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ExpressionNode const&) const; // NOLINT
    /**
     * @symbol
     * ?parse\@ExpressionNode\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MolangVersion\@\@V?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI bool
    parse(std::string const&, enum class MolangVersion, class gsl::span<class HashedString const, -1>); // NOLINT
    /**
     * @symbol ??1ExpressionNode\@\@QEAA\@XZ
     */
    MCAPI ~ExpressionNode(); // NOLINT
    /**
     * @symbol ?bindType\@ExpressionNode\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?buildExpressionOpTable\@ExpressionNode\@\@SAXXZ
     */
    MCAPI static void buildExpressionOpTable(); // NOLINT
    /**
     * @symbol ?fast_atof_positiveOnly\@ExpressionNode\@\@SAMAEAPEBD\@Z
     */
    MCAPI static float fast_atof_positiveOnly(char const*&); // NOLINT
    /**
     * @symbol ?getOpFriendlyName\@ExpressionNode\@\@SAPEBDW4ExpressionOp\@\@\@Z
     */
    MCAPI static char const* getOpFriendlyName(enum class ExpressionOp); // NOLINT
    /**
     * @symbol ?getQueryFunctionMutex\@ExpressionNode\@\@SAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static class std::recursive_mutex& getQueryFunctionMutex(); // NOLINT
    /**
     * @symbol
     * ?queryFunctionAccessorFromString\@ExpressionNode\@\@SAPEBV?$function\@$$A6AAEBUMolangScriptArg\@\@AEAVRenderParams\@\@AEBV?$vector\@VExpressionNode\@\@V?$allocator\@VExpressionNode\@\@\@std\@\@\@std\@\@\@Z\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4MolangVersion\@\@AEAW4MolangQueryFunctionReturnType\@\@_N\@Z
     */
    MCAPI static class std::function<
        struct MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        std::string const&,
        enum class MolangVersion,
        enum class MolangQueryFunctionReturnType&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?registerQueryFunction\@ExpressionNode\@\@SAAEAUMolangQueryFunction\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AAEBUMolangScriptArg\@\@AEAVRenderParams\@\@AEBV?$vector\@VExpressionNode\@\@V?$allocator\@VExpressionNode\@\@\@std\@\@\@std\@\@\@Z\@4\@0W4MolangQueryFunctionReturnType\@\@VHashedString\@\@_K4AEBV?$initializer_list\@H\@4\@\@Z
     */
    MCAPI static struct
        MolangQueryFunction&
        registerQueryFunction(std::string const&, class std::function<struct MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)>, std::string const&, enum class MolangQueryFunctionReturnType, class HashedString, unsigned __int64, unsigned __int64, class std::initializer_list<int> const&); // NOLINT
    /**
     * @symbol ?setExperiments\@ExpressionNode\@\@SAXAEBVExperiments\@\@\@Z
     */
    MCAPI static void setExperiments(class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?unregisterQueryFunction\@ExpressionNode\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VHashedString\@\@\@Z
     */
    MCAPI static void unregisterQueryFunction(std::string const&, class HashedString); // NOLINT
    /**
     * @symbol
     * ?mAliasOpTokens\@ExpressionNode\@\@2V?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ExpressionOp\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ExpressionOp\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<struct std::pair<std::string, enum class ExpressionOp>> mAliasOpTokens; // NOLINT
    /**
     * @symbol
     * ?mExpressionOpTokens\@ExpressionNode\@\@2V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::string> mExpressionOpTokens; // NOLINT

    // private:
    /**
     * @symbol ?_buildTree\@ExpressionNode\@\@AEAA_NAEBUExpressionOpBitField\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI bool _buildTree(struct ExpressionOpBitField const&, enum class MolangVersion); // NOLINT
    /**
     * @symbol ?_checkAllOperationsAreValid\@ExpressionNode\@\@AEBA_NXZ
     */
    MCAPI bool _checkAllOperationsAreValid() const; // NOLINT
    /**
     * @symbol
     * ?_hasDisallowedQueryPtrs\@ExpressionNode\@\@AEBA_NAEBV?$vector\@PEBV?$function\@$$A6AAEBUMolangScriptArg\@\@AEAVRenderParams\@\@AEBV?$vector\@VExpressionNode\@\@V?$allocator\@VExpressionNode\@\@\@std\@\@\@std\@\@\@Z\@std\@\@V?$allocator\@PEBV?$function\@$$A6AAEBUMolangScriptArg\@\@AEAVRenderParams\@\@AEBV?$vector\@VExpressionNode\@\@V?$allocator\@VExpressionNode\@\@\@std\@\@\@std\@\@\@Z\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool
    _hasDisallowedQueryPtrs(std::vector<class std::function<
                                struct
                                MolangScriptArg const&(class RenderParams&, class std::vector<class ExpressionNode, class std::allocator<class ExpressionNode>> const&)> const*> const&)
        const; // NOLINT
    /**
     * @symbol ?_optimize\@ExpressionNode\@\@AEAA_NW4MolangVersion\@\@AEAVRenderParams\@\@H\@Z
     */
    MCAPI bool _optimize(enum class MolangVersion, class RenderParams&, int); // NOLINT
    /**
     * @symbol ?_processBinaryExpressions\@ExpressionNode\@\@AEAA_NV?$function\@$$A6A_NW4ExpressionOp\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool _processBinaryExpressions(class std::function<bool(enum class ExpressionOp)>); // NOLINT
    /**
     * @symbol ?_processTernaryAndConditionalExpressions\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool _processTernaryAndConditionalExpressions(); // NOLINT
    /**
     * @symbol
     * ?_readNextToken\@ExpressionNode\@\@AEAA_NAEAPEBDAEBV?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI bool _readNextToken(
        char const*&,
        class gsl::span<class HashedString const, -1> const&,
        enum class MolangVersion
    ); // NOLINT
    /**
     * @symbol
     * ?_setExpressionStringWithoutRelink\@ExpressionNode\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _setExpressionStringWithoutRelink(std::string const&); // NOLINT
    /**
     * @symbol
     * ?_tokenize\@ExpressionNode\@\@AEAA_NPEBDAEAUExpressionOpBitField\@\@AEBV?$span\@$$CBVHashedString\@\@$0?0\@gsl\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI bool _tokenize(
        char const*,
        struct ExpressionOpBitField&,
        class gsl::span<class HashedString const, -1> const&,
        enum class MolangVersion
    ); // NOLINT
    /**
     * @symbol ?_validate\@ExpressionNode\@\@AEBA_NW4MolangVersion\@\@_NH\@Z
     */
    MCAPI bool _validate(enum class MolangVersion, bool, int) const; // NOLINT
    /**
     * @symbol ?_validateChildrenAreNumerical\@ExpressionNode\@\@AEBA_NW4MolangVersion\@\@\@Z
     */
    MCAPI bool _validateChildrenAreNumerical(enum class MolangVersion) const; // NOLINT
    /**
     * @symbol
     * ?executeMolangProgram\@ExpressionNode\@\@AEBAAEBUMolangScriptArg\@\@AEAVRenderParams\@\@AEAUMolangEvalParams\@\@\@Z
     */
    MCAPI struct MolangScriptArg const&
    executeMolangProgram(class RenderParams&, struct MolangEvalParams&) const; // NOLINT
    /**
     * @symbol ?findClosingOp\@ExpressionNode\@\@AEBA_NAEA_KW4ExpressionOp\@\@\@Z
     */
    MCAPI bool findClosingOp(unsigned __int64&, enum class ExpressionOp) const; // NOLINT
    /**
     * @symbol ?optimizeFunctionCallParams\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool optimizeFunctionCallParams(); // NOLINT
    /**
     * @symbol ?processArrays\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processArrays(); // NOLINT
    /**
     * @symbol ?processBinaryExpression\@ExpressionNode\@\@AEAA_NW4ExpressionOp\@\@\@Z
     */
    MCAPI bool processBinaryExpression(enum class ExpressionOp); // NOLINT
    /**
     * @symbol ?processMathFuncs\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processMathFuncs(); // NOLINT
    /**
     * @symbol ?processMemberAccessors\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processMemberAccessors(); // NOLINT
    /**
     * @symbol ?processNegativesAndLogicalNots\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processNegativesAndLogicalNots(); // NOLINT
    /**
     * @symbol ?processQueriesAndFunctions\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processQueriesAndFunctions(); // NOLINT
    /**
     * @symbol ?processSections\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processSections(); // NOLINT
    /**
     * @symbol ?processSemicolons\@ExpressionNode\@\@AEAA_NXZ
     */
    MCAPI bool processSemicolons(); // NOLINT
    /**
     * @symbol ?processUnaryExpression\@ExpressionNode\@\@AEAA_NW4ExpressionOp\@\@\@Z
     */
    MCAPI bool processUnaryExpression(enum class ExpressionOp); // NOLINT
    /**
     * @symbol
     * ?_buildProgram\@ExpressionNode\@\@CA?AW4MolangCompileResult\@\@AEAUMolangProgramBuildState\@\@PEBV1\@W4MolangVersion\@\@\@Z
     */
    MCAPI static enum class MolangCompileResult
    _buildProgram(struct MolangProgramBuildState&, class ExpressionNode const*, enum class MolangVersion); // NOLINT
    /**
     * @symbol
     * ?_getOrCreateReferencedMemberVariableScriptArg\@ExpressionNode\@\@CAPEAUMolangScriptArg\@\@AEAUMolangEvalParams\@\@AEBV1\@\@Z
     */
    MCAPI static struct MolangScriptArg*
    _getOrCreateReferencedMemberVariableScriptArg(struct MolangEvalParams&, class ExpressionNode const&); // NOLINT
    /**
     * @symbol
     * ?_getQueryFunctionAccessor\@ExpressionNode\@\@CA_NAEAUMolangScriptArg\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MolangVersion\@\@W4MolangQueryFunctionReturnType\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static bool
    _getQueryFunctionAccessor(struct MolangScriptArg&, std::string const&, enum class MolangVersion, enum class MolangQueryFunctionReturnType, class HashedString const&); // NOLINT
    /**
     * @symbol
     * ?_getScriptArgFromMemberAccessedVariable\@ExpressionNode\@\@CAPEBUMolangScriptArg\@\@AEAUMolangEvalParams\@\@AEBV1\@\@Z
     */
    MCAPI static struct MolangScriptArg const*
    _getScriptArgFromMemberAccessedVariable(struct MolangEvalParams&, class ExpressionNode const&); // NOLINT
    /**
     * @symbol ?_initializeMolangQueries\@ExpressionNode\@\@CA_NXZ
     */
    MCAPI static bool _initializeMolangQueries(); // NOLINT
    /**
     * @symbol
     * ?_writeScriptArgToMemberAccessedVariable\@ExpressionNode\@\@CAXAEAUMolangEvalParams\@\@AEBV1\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI static void
    _writeScriptArgToMemberAccessedVariable(struct MolangEvalParams&, class ExpressionNode const&, struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol
     * ?_writeScriptArgToMolangVariable\@ExpressionNode\@\@CAXAEAVMolangVariableMap\@\@W4MolangVariableIndex\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI static void
    _writeScriptArgToMolangVariable(class MolangVariableMap&, enum class MolangVariableIndex, struct MolangScriptArg const&); // NOLINT

private:
    /**
     * @symbol
     * ?_defaultUnknownQueryFunction\@ExpressionNode\@\@0V?$function\@$$A6AAEBUMolangScriptArg\@\@AEAVRenderParams\@\@AEBV?$vector\@VExpressionNode\@\@V?$allocator\@VExpressionNode\@\@\@std\@\@\@std\@\@\@Z\@std\@\@A
     */
    MCAPI static class std::function<
        struct MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)>
        _defaultUnknownQueryFunction; // NOLINT
    /**
     * @symbol ?mExperiments\@ExpressionNode\@\@0VExperimentStorage\@\@A
     */
    MCAPI static class ExperimentStorage mExperiments; // NOLINT
    /**
     * @symbol ?mMolangInitialized\@ExpressionNode\@\@0_NA
     */
    MCAPI static bool mMolangInitialized; // NOLINT
    /**
     * @symbol
     * ?mQueryFunctionAccessors\@ExpressionNode\@\@0V?$unordered_multimap\@VHashedString\@\@UMolangQueryFunction\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UMolangQueryFunction\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_multimap<
        class HashedString,
        struct MolangQueryFunction,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<class HashedString const, struct MolangQueryFunction>>>
        mQueryFunctionAccessors; // NOLINT
    /**
     * @symbol
     * ?mQuerySets\@ExpressionNode\@\@0V?$unordered_map\@VHashedString\@\@V?$unordered_set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@VHashedString\@\@\@3\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$unordered_set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@VHashedString\@\@\@3\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        class HashedString,
        class std::unordered_set<
            class HashedString,
            struct std::hash<class HashedString>,
            struct std::equal_to<class HashedString>,
            class std::allocator<class HashedString>>,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<
            class HashedString const,
            class std::unordered_set<
                class HashedString,
                struct std::hash<class HashedString>,
                struct std::equal_to<class HashedString>,
                class std::allocator<class HashedString>>>>>
        mQuerySets; // NOLINT
};
