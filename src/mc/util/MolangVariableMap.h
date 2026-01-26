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
    MolangVariableMap(MolangVariableMap const& rhs) {
        mMapFromVariableIndexToVariableArrayOffset = rhs.mMapFromVariableIndexToVariableArrayOffset;
        mVariables                                 = {};
        for (auto& ptr : *rhs.mVariables) {
            mVariables->push_back(std::make_unique<MolangVariable>(*ptr));
        }
        mHasPublicVariables = rhs.mHasPublicVariables;
    }

    void setMolangVariable(HashedString const& variableName, ::MolangScriptArg const& value) {
        setMolangVariable(variableName.getHash(), variableName.c_str(), value);
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangVariableMap();

    MCAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex molangVariableIndex);

    MCAPI ::MolangVariableMap& clear();

    MCAPI ::MolangScriptArg const& getMolangVariable(uint64 variableNameHash, char const*) const;

    MCAPI ::MolangVariableMap& operator=(::MolangVariableMap&&);

    MCAPI ::MolangVariableMap& operator=(::MolangVariableMap const& rhs);

    MCAPI bool operator==(::MolangVariableMap const& rhs) const;

    MCAPI void setMolangStructMember(
        ::MolangVariableIndex    molangVariableIndex,
        ::HashedString const&    memberNameDepth0,
        ::MolangScriptArg const& value
    );

    MCAPI void setMolangVariable(::MolangVariableIndex molangVariableIndex, ::MolangScriptArg const& value);

    MCAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, ::MolangScriptArg const& value);

    MCAPI_C void updatePublicVariables();

    MCAPI ~MolangVariableMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI_C void* $ctor(::MolangVariableMap&&);

    MCAPI_C void* $ctor(::MolangVariableMap const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
