/**
 * @file  MC/MolangVariable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MolangVariable.
 *
 */
class MolangVariable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVARIABLE
public:
    class MolangVariable& operator=(class MolangVariable const &) = delete;
    MolangVariable(class MolangVariable const &) = delete;
    MolangVariable() = delete;
#endif

public:
    /**
     * @hash   -1442514379
     * @symbol ??0MolangVariable@@QEAA@W4MolangVariableIndex@@VHashedString@@UMolangScriptArg@@@Z
     */
    MCAPI MolangVariable(enum MolangVariableIndex, class HashedString, struct MolangScriptArg);
    /**
     * @hash   1684855622
     * @symbol ??1MolangVariable@@QEAA@XZ
     */
    MCAPI ~MolangVariable();
    /**
     * @hash   720087367
     * @symbol ?getVariableIndex@MolangVariable@@SA?AW4MolangVariableIndex@@AEBVHashedString@@@Z
     */
    MCAPI static enum MolangVariableIndex getVariableIndex(class HashedString const &);
    /**
     * @hash   329461330
     * @symbol ?getVariableIndex@MolangVariable@@SA?AW4MolangVariableIndex@@_K@Z
     */
    MCAPI static enum MolangVariableIndex getVariableIndex(unsigned __int64);
    /**
     * @hash   -396537767
     * @symbol ?getVariableIndex@MolangVariable@@SA?AW4MolangVariableIndex@@_KPEBD_N@Z
     */
    MCAPI static enum MolangVariableIndex getVariableIndex(unsigned __int64, char const *, bool);
    /**
     * @hash   -987096585
     * @symbol ?getVariableName@MolangVariable@@SAAEBVHashedString@@W4MolangVariableIndex@@@Z
     */
    MCAPI static class HashedString const & getVariableName(enum MolangVariableIndex);
    /**
     * @hash   101405907
     * @symbol ?initVariableMaps@MolangVariable@@SAXXZ
     */
    MCAPI static void initVariableMaps();
    /**
     * @hash   -1628821130
     * @symbol ?isValidName@MolangVariable@@SA_NPEBD@Z
     */
    MCAPI static bool isValidName(char const *);
    /**
     * @hash   432428275
     * @symbol ?processWaterMark@MolangVariable@@SAXXZ
     */
    MCAPI static void processWaterMark();

//private:
    /**
     * @hash   1537271281
     * @symbol ?_getMolangVariableIndexLock@MolangVariable@@CAAEAVrecursive_mutex@std@@XZ
     */
    MCAPI static class std::recursive_mutex & _getMolangVariableIndexLock();

private:
    /**
     * @hash   -1756507289
     * @symbol ?mHasSetWatermark@MolangVariable@@0_NA
     */
    MCAPI static bool mHasSetWatermark;
    /**
     * @hash   563366773
     * @symbol ?mIndexToVariableNameMap@MolangVariable@@0V?$unordered_map@W4MolangVariableIndex@@VHashedString@@U?$hash@W4MolangVariableIndex@@@std@@U?$equal_to@W4MolangVariableIndex@@@4@V?$allocator@U?$pair@$$CBW4MolangVariableIndex@@VHashedString@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<enum MolangVariableIndex, class HashedString, struct std::hash<enum MolangVariableIndex>, struct std::equal_to<enum MolangVariableIndex>, class std::allocator<struct std::pair<enum MolangVariableIndex const, class HashedString>>> mIndexToVariableNameMap;
    /**
     * @hash   -1240757734
     * @symbol ?mIndexToVariableNameMap_LowWaterMark@MolangVariable@@0V?$unordered_map@W4MolangVariableIndex@@VHashedString@@U?$hash@W4MolangVariableIndex@@@std@@U?$equal_to@W4MolangVariableIndex@@@4@V?$allocator@U?$pair@$$CBW4MolangVariableIndex@@VHashedString@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<enum MolangVariableIndex, class HashedString, struct std::hash<enum MolangVariableIndex>, struct std::equal_to<enum MolangVariableIndex>, class std::allocator<struct std::pair<enum MolangVariableIndex const, class HashedString>>> mIndexToVariableNameMap_LowWaterMark;
    /**
     * @hash   -1350377157
     * @symbol ?mVariableNameToIndexMap@MolangVariable@@0V?$unordered_map@_KW4MolangVariableIndex@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KW4MolangVariableIndex@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<unsigned __int64, enum MolangVariableIndex, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, enum MolangVariableIndex>>> mVariableNameToIndexMap;
    /**
     * @hash   578143448
     * @symbol ?mVariableNameToIndexMap_LowWaterMark@MolangVariable@@0V?$unordered_map@_KW4MolangVariableIndex@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KW4MolangVariableIndex@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<unsigned __int64, enum MolangVariableIndex, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, enum MolangVariableIndex>>> mVariableNameToIndexMap_LowWaterMark;

};