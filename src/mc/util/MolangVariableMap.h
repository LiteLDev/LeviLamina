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
    MolangVariableMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::MolangVariable* _getMolangVariable(
        ::MolangVariableIndex                        molangVariableIndex,
        ::MolangVariableMap::MissingVariableHandling errorHandling
    ) const;

    MCNAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex molangVariableIndex);

    MCNAPI ::MolangVariableMap& clear();

#ifdef LL_PLAT_C
    MCNAPI ::MolangScriptArg const& getMolangVariable(uint64 variableNameHash, char const*) const;
#endif

    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap&& rhs);

    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap const& rhs);

    MCNAPI bool operator==(::MolangVariableMap const& rhs) const;

    MCNAPI void setMolangStructMember(
        ::MolangVariableIndex    molangVariableIndex,
        ::HashedString const&    memberNameDepth0,
        ::MolangScriptArg const& value
    );

    MCAPI void setMolangVariable(::HashedString const& variableName, ::MolangScriptArg const& value);

#ifdef LL_PLAT_C
    MCNAPI void setMolangVariable(::HashedString const& variableName, float value);

    MCAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, ::MolangScriptArg const& value);

    MCNAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, float value);
#endif

    MCAPI ~MolangVariableMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
