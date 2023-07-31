#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangVariable {

public:
    // prevent constructor by default
    MolangVariable& operator=(MolangVariable const&) = delete;
    MolangVariable(MolangVariable const&)            = delete;
    MolangVariable()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MolangVariable\@\@QEAA\@W4MolangVariableIndex\@\@VHashedString\@\@UMolangScriptArg\@\@\@Z
     */
    MCAPI MolangVariable(enum class MolangVariableIndex, class HashedString, struct MolangScriptArg);
    /**
     * @symbol ??1MolangVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangVariable();
    /**
     * @symbol ?getVariableIndex\@MolangVariable\@\@SA?AW4MolangVariableIndex\@\@_KPEBD_N\@Z
     */
    MCAPI static enum class MolangVariableIndex getVariableIndex(uint64_t, char const*, bool);
    /**
     * @symbol ?getVariableIndex\@MolangVariable\@\@SA?AW4MolangVariableIndex\@\@_K\@Z
     */
    MCAPI static enum class MolangVariableIndex getVariableIndex(uint64_t);
    /**
     * @symbol ?getVariableIndex\@MolangVariable\@\@SA?AW4MolangVariableIndex\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static enum class MolangVariableIndex getVariableIndex(class HashedString const&);
    /**
     * @symbol ?getVariableName\@MolangVariable\@\@SAAEBVHashedString\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI static class HashedString const& getVariableName(enum class MolangVariableIndex);
    /**
     * @symbol ?processWaterMark\@MolangVariable\@\@SAXXZ
     */
    MCAPI static void processWaterMark();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getMolangVariableIndexLock\@MolangVariable\@\@CAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static std::recursive_mutex& _getMolangVariableIndexLock();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mHasSetWatermark\@MolangVariable\@\@0_NA
     */
    MCAPI static bool mHasSetWatermark;
    /**
     * @symbol
     * ?mIndexToVariableNameMap\@MolangVariable\@\@0V?$unordered_map\@W4MolangVariableIndex\@\@VHashedString\@\@U?$hash\@W4MolangVariableIndex\@\@\@std\@\@U?$equal_to\@W4MolangVariableIndex\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4MolangVariableIndex\@\@VHashedString\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static std::unordered_map<enum class MolangVariableIndex, class HashedString> mIndexToVariableNameMap;
    /**
     * @symbol
     * ?mIndexToVariableNameMap_LowWaterMark\@MolangVariable\@\@0V?$unordered_map\@W4MolangVariableIndex\@\@VHashedString\@\@U?$hash\@W4MolangVariableIndex\@\@\@std\@\@U?$equal_to\@W4MolangVariableIndex\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4MolangVariableIndex\@\@VHashedString\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static std::unordered_map<enum class MolangVariableIndex, class HashedString>
        mIndexToVariableNameMap_LowWaterMark;
    /**
     * @symbol
     * ?mVariableNameToIndexMap\@MolangVariable\@\@0V?$unordered_map\@_KW4MolangVariableIndex\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KW4MolangVariableIndex\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static std::unordered_map<uint64_t, enum class MolangVariableIndex> mVariableNameToIndexMap;
    /**
     * @symbol
     * ?mVariableNameToIndexMap_LowWaterMark\@MolangVariable\@\@0V?$unordered_map\@_KW4MolangVariableIndex\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KW4MolangVariableIndex\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static std::unordered_map<uint64_t, enum class MolangVariableIndex> mVariableNameToIndexMap_LowWaterMark;
    // NOLINTEND
};
