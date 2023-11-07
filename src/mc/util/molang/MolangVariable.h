#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVariableIndex.h"

class MolangVariable {
public:
    // prevent constructor by default
    MolangVariable& operator=(MolangVariable const&);
    MolangVariable(MolangVariable const&);
    MolangVariable();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangVariable@@QEAA@W4MolangVariableIndex@@VHashedString@@UMolangScriptArg@@@Z
    MCAPI MolangVariable(::MolangVariableIndex, class HashedString, struct MolangScriptArg);

    // symbol: ??1MolangVariable@@QEAA@XZ
    MCAPI ~MolangVariable();

    // symbol: ?getVariableIndex@MolangVariable@@SA?AW4MolangVariableIndex@@AEBVHashedString@@@Z
    MCAPI static ::MolangVariableIndex getVariableIndex(class HashedString const&);

    // symbol: ?getVariableIndex@MolangVariable@@SA?AW4MolangVariableIndex@@_K@Z
    MCAPI static ::MolangVariableIndex getVariableIndex(uint64);

    // symbol: ?getVariableIndex@MolangVariable@@SA?AW4MolangVariableIndex@@_KPEBD_N@Z
    MCAPI static ::MolangVariableIndex getVariableIndex(uint64, char const*, bool);

    // symbol: ?getVariableName@MolangVariable@@SAAEBVHashedString@@W4MolangVariableIndex@@@Z
    MCAPI static class HashedString const& getVariableName(::MolangVariableIndex);

    // symbol: ?initVariableMaps@MolangVariable@@SAXXZ
    MCAPI static void initVariableMaps();

    // symbol: ?processWaterMark@MolangVariable@@SAXXZ
    MCAPI static void processWaterMark();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getMolangVariableIndexLock@MolangVariable@@CAAEAVrecursive_mutex@std@@XZ
    MCAPI static std::recursive_mutex& _getMolangVariableIndexLock();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mHasSetWatermark@MolangVariable@@0_NA
    MCAPI static bool mHasSetWatermark;

    // symbol:
    // ?mIndexToVariableNameMap@MolangVariable@@0V?$unordered_map@W4MolangVariableIndex@@VHashedString@@U?$hash@W4MolangVariableIndex@@@std@@U?$equal_to@W4MolangVariableIndex@@@4@V?$allocator@U?$pair@$$CBW4MolangVariableIndex@@VHashedString@@@std@@@4@@std@@A
    MCAPI static std::unordered_map<::MolangVariableIndex, class HashedString> mIndexToVariableNameMap;

    // symbol:
    // ?mIndexToVariableNameMap_LowWaterMark@MolangVariable@@0V?$unordered_map@W4MolangVariableIndex@@VHashedString@@U?$hash@W4MolangVariableIndex@@@std@@U?$equal_to@W4MolangVariableIndex@@@4@V?$allocator@U?$pair@$$CBW4MolangVariableIndex@@VHashedString@@@std@@@4@@std@@A
    MCAPI static std::unordered_map<::MolangVariableIndex, class HashedString> mIndexToVariableNameMap_LowWaterMark;

    // symbol:
    // ?mVariableNameToIndexMap@MolangVariable@@0V?$unordered_map@_KW4MolangVariableIndex@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KW4MolangVariableIndex@@@std@@@3@@std@@A
    MCAPI static std::unordered_map<uint64, ::MolangVariableIndex> mVariableNameToIndexMap;

    // symbol:
    // ?mVariableNameToIndexMap_LowWaterMark@MolangVariable@@0V?$unordered_map@_KW4MolangVariableIndex@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KW4MolangVariableIndex@@@std@@@3@@std@@A
    MCAPI static std::unordered_map<uint64, ::MolangVariableIndex> mVariableNameToIndexMap_LowWaterMark;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mHasSetWatermark() { return mHasSetWatermark; }

    static auto& $mIndexToVariableNameMap() { return mIndexToVariableNameMap; }

    static auto& $mIndexToVariableNameMap_LowWaterMark() { return mIndexToVariableNameMap_LowWaterMark; }

    static auto& $mVariableNameToIndexMap() { return mVariableNameToIndexMap; }

    static auto& $mVariableNameToIndexMap_LowWaterMark() { return mVariableNameToIndexMap_LowWaterMark; }

    // NOLINTEND
};
