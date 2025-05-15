#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangScriptArg.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableSettings.h"

class MolangVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                      mName;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                   mValue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MolangScriptArg>> mPublicValue;
    ::ll::TypedStorage<4, 8, ::MolangVariableSettings>             mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangVariable& operator=(MolangVariable const&);
    MolangVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangVariable(::MolangVariable const& rhs);

    MCAPI MolangVariable(::MolangVariableIndex index, ::HashedString name, ::MolangScriptArg value);

    MCAPI ~MolangVariable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MolangVariableIndex
    _findOrAddVariableIndex(uint64 nameHash, char const* name, bool allowSpecialCharacters);

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangVariable const& rhs);

    MCAPI void* $ctor(::MolangVariableIndex index, ::HashedString name, ::MolangScriptArg value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
