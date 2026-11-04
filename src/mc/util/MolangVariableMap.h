#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariable.h"

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
    LLAPI void setMolangVariable(::MolangVariableIndex molangVariableIndex, ::MolangScriptArg const& value);

#ifdef LL_PLAT_S
    LLAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, ::MolangScriptArg const& value);
#endif

    LLAPI void setMolangVariable(HashedString const& variableName, ::MolangScriptArg const& value);

    LLAPI void setMolangVariable(
        uint64                   variableNameHash,
        char const*              variableName,
        ::MolangScriptArg const& value,
        bool                     allowSpecialCharacters
    );

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
    MolangVariableMap(MolangVariableMap const& rhs) {
        mMapFromVariableIndexToVariableArrayOffset = rhs.mMapFromVariableIndexToVariableArrayOffset;
        mVariables                                 = {};
        for (auto& ptr : *rhs.mVariables) {
            mVariables->push_back(std::make_unique<MolangVariable>(*ptr));
        }
        mHasPublicVariables = rhs.mHasPublicVariables;
    }
    MolangVariableMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::MolangVariable* _getMolangVariable(
        ::MolangVariableIndex                        molangVariableIndex,
        ::MolangVariableMap::MissingVariableHandling errorHandling
    ) const;

    MCAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex molangVariableIndex);

    MCAPI ::MolangVariableMap& clear();

#ifdef LL_PLAT_C
    MCAPI ::MolangScriptArg const& getMolangVariable(uint64 variableNameHash, char const*) const;
#endif

    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap&& rhs);

    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap const& rhs);

    MCNAPI bool operator==(::MolangVariableMap const& rhs) const;

    MCNAPI void setMolangStructMember(
        ::MolangVariableIndex    molangVariableIndex,
        ::HashedString const&    memberNameDepth0,
        ::MolangScriptArg const& value
    );

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
