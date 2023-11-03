#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVariableIndex.h"

class MolangVariableMap {
public:
    // NOLINTBEGIN
    // symbol: ??0MolangVariableMap@@QEAA@XZ
    MCAPI MolangVariableMap();

    // symbol: ??0MolangVariableMap@@QEAA@$$QEAV0@@Z
    MCAPI MolangVariableMap(class MolangVariableMap&&);

    // symbol: ??0MolangVariableMap@@QEAA@AEBV0@@Z
    MCAPI MolangVariableMap(class MolangVariableMap const&);

    // symbol: ?clear@MolangVariableMap@@QEAAAEAV1@XZ
    MCAPI class MolangVariableMap& clear();

    // symbol: ?getConstScriptArgReference@MolangVariableMap@@QEBAPEBUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
    MCAPI struct MolangScriptArg const* getConstScriptArgReference(::MolangVariableIndex const&) const;

    // symbol: ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEBW4MolangVariableIndex@@AEA_N@Z
    MCAPI struct MolangScriptArg const& getMolangVariable(::MolangVariableIndex const&, bool&) const;

    // symbol: ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@_KPEBD@Z
    MCAPI struct MolangScriptArg const& getMolangVariable(uint64, char const*) const;

    // symbol: ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEB_KAEA_N@Z
    MCAPI struct MolangScriptArg const& getMolangVariable(uint64 const&, bool&) const;

    // symbol: ?getNonConstScriptArgReference@MolangVariableMap@@QEAAPEAUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
    MCAPI struct MolangScriptArg* getNonConstScriptArgReference(::MolangVariableIndex const&);

    // symbol:
    // ?getOrAddNonConstScriptArgReference@MolangVariableMap@@QEAAPEAUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
    MCAPI struct MolangScriptArg* getOrAddNonConstScriptArgReference(::MolangVariableIndex const&);

    // symbol: ?getPublicMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEBW4MolangVariableIndex@@AEA_N@Z
    MCAPI struct MolangScriptArg const& getPublicMolangVariable(::MolangVariableIndex const&, bool&) const;

    // symbol: ??4MolangVariableMap@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class MolangVariableMap& operator=(class MolangVariableMap&&);

    // symbol: ??4MolangVariableMap@@QEAAAEAV0@AEBV0@@Z
    MCAPI class MolangVariableMap& operator=(class MolangVariableMap const&);

    // symbol: ?setMolangStructMember@MolangVariableMap@@QEAAXAEBVHashedString@@0AEBUMolangScriptArg@@@Z
    MCAPI void
    setMolangStructMember(class HashedString const&, class HashedString const&, struct MolangScriptArg const&);

    // symbol: ?setMolangVariable@MolangVariableMap@@QEAAXAEBVHashedString@@AEBUMolangScriptArg@@@Z
    MCAPI void setMolangVariable(class HashedString const&, struct MolangScriptArg const&);

    // symbol: ?setMolangVariable@MolangVariableMap@@QEAAXW4MolangVariableIndex@@AEBUMolangScriptArg@@@Z
    MCAPI void setMolangVariable(::MolangVariableIndex, struct MolangScriptArg const&);

    // symbol: ?setMolangVariable@MolangVariableMap@@QEAAX_KPEBDAEBUMolangScriptArg@@@Z
    MCAPI void setMolangVariable(uint64, char const*, struct MolangScriptArg const&);

    // symbol: ?setMolangVariableSettings@MolangVariableMap@@QEAAXAEBUMolangVariableSettings@@@Z
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const&);

    // symbol: ??1MolangVariableMap@@QEAA@XZ
    MCAPI ~MolangVariableMap();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getMolangVariable@MolangVariableMap@@AEBAPEBVMolangVariable@@W4MolangVariableIndex@@@Z
    MCAPI class MolangVariable const* _getMolangVariable(::MolangVariableIndex) const;

    // symbol: ?_getOrAddMolangVariable@MolangVariableMap@@AEAAPEAVMolangVariable@@W4MolangVariableIndex@@@Z
    MCAPI class MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex);

    // symbol: ?_getOrAddMolangVariable@MolangVariableMap@@AEAAPEAVMolangVariable@@AEB_KPEBD_N@Z
    MCAPI class MolangVariable* _getOrAddMolangVariable(uint64 const&, char const*, bool);

    // NOLINTEND
};
