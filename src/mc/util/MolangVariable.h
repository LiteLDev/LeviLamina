#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangScriptArg.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableSettings.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class MolangVariable {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mValue;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mValue;
#endif
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MolangScriptArg>> mPublicValue;
    ::ll::TypedStorage<4, 8, ::MolangVariableSettings>             mSettings;
    // NOLINTEND

public:
    MolangVariable(MolangVariable const& rhs) {
        mValue = rhs.mValue;
        if (rhs.mPublicValue) {
            mPublicValue = std::make_unique<MolangScriptArg>(*rhs.mPublicValue);
        }
        mSettings = rhs.mSettings;
    }

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MolangVariableIndex
    _findOrAddVariableIndex(uint64 nameHash, char const* name, bool allowSpecialCharacters);

    MCAPI_C static ::MolangVariableIndex getVariableIndex(::HashedString const& name);

    MCAPI static ::MolangVariableIndex getVariableIndex(uint64 nameHash);

    MCAPI static ::HashedString const& getVariableName(::MolangVariableIndex index);

    MCAPI static void processWaterMark();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& mHasSetWatermark();

    MCAPI static ::std::unordered_map<::MolangVariableIndex, ::HashedString>& mIndexToVariableNameMap();

    MCAPI static ::std::unordered_map<::MolangVariableIndex, ::HashedString>& mIndexToVariableNameMap_LowWaterMark();

    MCAPI static ::std::unordered_map<uint64, ::MolangVariableIndex>& mVariableNameToIndexMap();

    MCAPI static ::std::unordered_map<uint64, ::MolangVariableIndex>& mVariableNameToIndexMap_LowWaterMark();
    // NOLINTEND
};
