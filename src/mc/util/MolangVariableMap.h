#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class MolangVariable;
struct MolangScriptArg;
// clang-format on

class MolangVariableMap {
public:
    // MolangVariableMap inner types define
    enum class MissingVariableHandling : int {
        Error   = 0,
        NoError = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<short>> mMapFromVariableIndexToVariableArrayOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::MolangVariable>>> mVariables;
    ::ll::TypedStorage<1, 1, bool>                                                mHasPublicVariables;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangVariableMap(MolangVariableMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangVariableMap();

    MCAPI MolangVariableMap(::MolangVariableMap&&);

    MCAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex molangVariableIndex);

    MCAPI ::MolangVariableMap& clear();

    MCAPI ::MolangScriptArg const& getMolangVariable(uint64 variableNameHash, char const*) const;

    MCAPI ::MolangVariableMap& operator=(::MolangVariableMap&&);

    MCAPI ::MolangVariableMap& operator=(::MolangVariableMap const& rhs);

    MCAPI void setMolangStructMember(
        ::HashedString const&    rootVariableName,
        ::HashedString const&    memberNameDepth0,
        ::MolangScriptArg const& value
    );

    MCAPI void setMolangVariable(::MolangVariableIndex molangVariableIndex, ::MolangScriptArg const& value);

    MCAPI void setMolangVariable(::HashedString const& variableName, ::MolangScriptArg const& value);

    MCAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, ::MolangScriptArg const& value);

    MCAPI ~MolangVariableMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::MolangVariableMap&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
