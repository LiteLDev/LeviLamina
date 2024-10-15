#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

class MolangVariableMap {
public:
    // NOLINTBEGIN
    MCAPI MolangVariableMap();

    MCAPI MolangVariableMap(class MolangVariableMap&& rhs);

    MCAPI MolangVariableMap(class MolangVariableMap const& rhs);

    MCAPI class MolangVariableMap& clear();

    MCAPI struct MolangScriptArg const* getConstScriptArgReference(::MolangVariableIndex const& molangVariableIndex
    ) const;

    MCAPI struct MolangScriptArg const&
    getMolangVariable(::MolangVariableIndex const& molangVariableIndex, bool& doesVariableExist) const;

    MCAPI struct MolangScriptArg const& getMolangVariable(uint64 variableNameHash, char const*) const;

    MCAPI struct MolangScriptArg const&
    getMolangVariable(uint64 const& variableNameHash, bool& doesVariableExist) const;

    MCAPI struct MolangScriptArg* getNonConstScriptArgReference(::MolangVariableIndex const& molangVariableIndex);

    MCAPI struct MolangScriptArg* getOrAddNonConstScriptArgReference(::MolangVariableIndex const& molangVariableIndex);

    MCAPI struct MolangScriptArg const&
    getPublicMolangVariable(::MolangVariableIndex const& molangVariableIndex, bool& doesVariableExist) const;

    MCAPI class MolangVariableMap& operator=(class MolangVariableMap&& rhs);

    MCAPI class MolangVariableMap& operator=(class MolangVariableMap const& rhs);

    MCAPI void setMolangStructMember(
        class HashedString const&     rootVariableName,
        class HashedString const&     memberNameDepth0,
        struct MolangScriptArg const& value
    );

    MCAPI void setMolangVariable(class HashedString const& variableName, struct MolangScriptArg const& value);

    MCAPI void setMolangVariable(::MolangVariableIndex molangVariableIndex, struct MolangScriptArg const& value);

    MCAPI void
    setMolangVariable(uint64 variableNameHash, char const* variableName, struct MolangScriptArg const& value);

    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const& settings);

    MCAPI ~MolangVariableMap();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class MolangVariable const* _getMolangVariable(::MolangVariableIndex molangVariableIndex) const;

    MCAPI class MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex molangVariableIndex);

    MCAPI class MolangVariable*
    _getOrAddMolangVariable(uint64 const& variableNameHash, char const* variableName, bool allowSpecialCharacters);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class MolangVariableMap const& rhs);

    MCAPI void* ctor$();

    MCAPI void* ctor$(class MolangVariableMap&& rhs);

    MCAPI void dtor$();

    // NOLINTEND
};
