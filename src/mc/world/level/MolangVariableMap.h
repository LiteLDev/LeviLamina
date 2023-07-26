#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangVariableMap {

public:
    // prevent constructor by default
    MolangVariableMap() = delete;

public:
    /**
     * @symbol ??0MolangVariableMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap const&); // NOLINT
    /**
     * @symbol ??0MolangVariableMap\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap&&); // NOLINT
    /**
     * @symbol ?clear\@MolangVariableMap\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MolangVariableMap& clear(); // NOLINT
    /**
     * @symbol ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@_KPEBD\@Z
     */
    MCAPI struct MolangScriptArg const& getMolangVariable(unsigned __int64, char const*) const; // NOLINT
    /**
     * @symbol ??4MolangVariableMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MolangVariableMap& operator=(class MolangVariableMap const&); // NOLINT
    /**
     * @symbol ??4MolangVariableMap\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MolangVariableMap& operator=(class MolangVariableMap&&); // NOLINT
    /**
     * @symbol ?setMolangStructMember\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@0AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void
    setMolangStructMember(class HashedString const&, class HashedString const&, struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ?setMolangVariable\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(class HashedString const&, struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ?setMolangVariable\@MolangVariableMap\@\@QEAAX_KPEBDAEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(unsigned __int64, char const*, struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ?setMolangVariable\@MolangVariableMap\@\@QEAAXW4MolangVariableIndex\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(enum class MolangVariableIndex, struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ?setMolangVariableSettings\@MolangVariableMap\@\@QEAAXAEBUMolangVariableSettings\@\@\@Z
     */
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const&); // NOLINT
    /**
     * @symbol ??1MolangVariableMap\@\@QEAA\@XZ
     */
    MCAPI ~MolangVariableMap(); // NOLINT

    // private:
    /**
     * @symbol ?_getMolangVariable\@MolangVariableMap\@\@AEBAPEBVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable const* _getMolangVariable(enum class MolangVariableIndex) const; // NOLINT
    /**
     * @symbol ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@AEB_KPEBD_N\@Z
     */
    MCAPI class MolangVariable* _getOrAddMolangVariable(unsigned __int64 const&, char const*, bool); // NOLINT
    /**
     * @symbol ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable* _getOrAddMolangVariable(enum class MolangVariableIndex); // NOLINT

private:
};
