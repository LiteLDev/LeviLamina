#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangVariable {

public:
    // prevent constructor by default
    MolangVariable& operator=(MolangVariable const&) = delete;
    MolangVariable(MolangVariable const&)            = delete;
    MolangVariable()                                 = delete;

public:
    /**
     * @symbol ??0MolangVariable\@\@QEAA\@W4MolangVariableIndex\@\@VHashedString\@\@UMolangScriptArg\@\@\@Z
     */
    MCAPI MolangVariable(enum class MolangVariableIndex, class HashedString, struct MolangScriptArg); // NOLINT
    /**
     * @symbol ??1MolangVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangVariable(); // NOLINT
    /**
     * @symbol ?getVariableIndex\@MolangVariable\@\@SA?AW4MolangVariableIndex\@\@_KPEBD_N\@Z
     */
    MCAPI static enum class MolangVariableIndex getVariableIndex(unsigned __int64, char const*, bool); // NOLINT
    /**
     * @symbol ?getVariableIndex\@MolangVariable\@\@SA?AW4MolangVariableIndex\@\@_K\@Z
     */
    MCAPI static enum class MolangVariableIndex getVariableIndex(unsigned __int64); // NOLINT
    /**
     * @symbol ?getVariableIndex\@MolangVariable\@\@SA?AW4MolangVariableIndex\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static enum class MolangVariableIndex getVariableIndex(class HashedString const&); // NOLINT
    /**
     * @symbol ?getVariableName\@MolangVariable\@\@SAAEBVHashedString\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI static class HashedString const& getVariableName(enum class MolangVariableIndex); // NOLINT
    /**
     * @symbol ?processWaterMark\@MolangVariable\@\@SAXXZ
     */
    MCAPI static void processWaterMark(); // NOLINT

    // private:
    /**
     * @symbol ?_getMolangVariableIndexLock\@MolangVariable\@\@CAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static class std::recursive_mutex& _getMolangVariableIndexLock(); // NOLINT

private:
    /**
     * @symbol ?mHasSetWatermark\@MolangVariable\@\@0_NA
     */
    MCAPI static bool mHasSetWatermark; // NOLINT
    /**
     * @symbol
     * ?mIndexToVariableNameMap\@MolangVariable\@\@0V?$unordered_map\@W4MolangVariableIndex\@\@VHashedString\@\@U?$hash\@W4MolangVariableIndex\@\@\@std\@\@U?$equal_to\@W4MolangVariableIndex\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4MolangVariableIndex\@\@VHashedString\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        enum class MolangVariableIndex,
        class HashedString,
        struct std::hash<enum class MolangVariableIndex>,
        struct std::equal_to<enum class MolangVariableIndex>,
        class std::allocator<struct std::pair<enum class MolangVariableIndex const, class HashedString>>>
        mIndexToVariableNameMap; // NOLINT
    /**
     * @symbol
     * ?mIndexToVariableNameMap_LowWaterMark\@MolangVariable\@\@0V?$unordered_map\@W4MolangVariableIndex\@\@VHashedString\@\@U?$hash\@W4MolangVariableIndex\@\@\@std\@\@U?$equal_to\@W4MolangVariableIndex\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4MolangVariableIndex\@\@VHashedString\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        enum class MolangVariableIndex,
        class HashedString,
        struct std::hash<enum class MolangVariableIndex>,
        struct std::equal_to<enum class MolangVariableIndex>,
        class std::allocator<struct std::pair<enum class MolangVariableIndex const, class HashedString>>>
        mIndexToVariableNameMap_LowWaterMark; // NOLINT
    /**
     * @symbol
     * ?mVariableNameToIndexMap\@MolangVariable\@\@0V?$unordered_map\@_KW4MolangVariableIndex\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KW4MolangVariableIndex\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        unsigned __int64,
        enum class MolangVariableIndex,
        struct std::hash<unsigned __int64>,
        struct std::equal_to<unsigned __int64>,
        class std::allocator<struct std::pair<unsigned __int64 const, enum class MolangVariableIndex>>>
        mVariableNameToIndexMap; // NOLINT
    /**
     * @symbol
     * ?mVariableNameToIndexMap_LowWaterMark\@MolangVariable\@\@0V?$unordered_map\@_KW4MolangVariableIndex\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KW4MolangVariableIndex\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        unsigned __int64,
        enum class MolangVariableIndex,
        struct std::hash<unsigned __int64>,
        struct std::equal_to<unsigned __int64>,
        class std::allocator<struct std::pair<unsigned __int64 const, enum class MolangVariableIndex>>>
        mVariableNameToIndexMap_LowWaterMark; // NOLINT
};
