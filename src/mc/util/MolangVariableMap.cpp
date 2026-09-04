#include "MolangVariableMap.h"


void MolangVariableMap::setMolangVariable(::MolangVariableIndex molangVariableIndex, ::MolangScriptArg const& value) {
    _getOrAddMolangVariable(molangVariableIndex)->mValue = value;
}

void MolangVariableMap::setMolangVariable(
    uint64                   variableNameHash,
    char const*              variableName,
    ::MolangScriptArg const& value
) {
    setMolangVariable(variableNameHash, variableName, value, false);
}

void MolangVariableMap::setMolangVariable(HashedString const& variableName, ::MolangScriptArg const& value) {
    setMolangVariable(variableName.getHash(), variableName.c_str(), value, false);
}

void MolangVariableMap::setMolangVariable(
    uint64                   variableNameHash,
    char const*              variableName,
    ::MolangScriptArg const& value,
    bool                     allowSpecialCharacters
) {
    setMolangVariable(
        MolangVariable::_findOrAddVariableIndex(variableNameHash, variableName, allowSpecialCharacters),
        value
    );
}