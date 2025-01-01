#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangScriptArg;
struct MolangVariableSettings;
// clang-format on

class MolangVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>          mName;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>       mValue;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>       mPublicValue;
    ::ll::TypedStorage<4, 8, ::MolangVariableSettings> mSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangVariable(::MolangVariableIndex index, ::HashedString name, ::MolangScriptArg value);

    MCAPI ~MolangVariable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _resetToLowWaterMark();

    MCAPI static void _updateLowWaterMark();

    MCAPI static ::MolangVariableIndex getVariableIndex(::HashedString const& name);

    MCAPI static ::MolangVariableIndex getVariableIndex(uint64 nameHash);

    MCAPI static ::MolangVariableIndex getVariableIndex(uint64 nameHash, char const* name, bool allowSpecialCharacters);

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangVariableIndex index, ::HashedString name, ::MolangScriptArg value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
