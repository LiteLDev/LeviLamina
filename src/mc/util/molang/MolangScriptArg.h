#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangScriptArg {

public:
    // prevent constructor by default
    MolangScriptArg() = delete;

public:
    /**
     * @symbol ??0MolangScriptArg\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI MolangScriptArg(struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ??0MolangScriptArg\@\@QEAA\@H\@Z
     */
    MCAPI MolangScriptArg(int); // NOLINT
    /**
     * @symbol ??0MolangScriptArg\@\@QEAA\@M\@Z
     */
    MCAPI MolangScriptArg(float); // NOLINT
    /**
     * @symbol ?getAsNonConstMolangMemberArray\@MolangScriptArg\@\@QEAAPEAUMolangMemberArray\@\@XZ
     */
    MCAPI struct MolangMemberArray* getAsNonConstMolangMemberArray(); // NOLINT
    /**
     * @symbol ??4MolangScriptArg\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg&&); // NOLINT
    /**
     * @symbol ??4MolangScriptArg\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg const&); // NOLINT
    /**
     * @symbol ??1MolangScriptArg\@\@QEAA\@XZ
     */
    MCAPI ~MolangScriptArg(); // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_break\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_break; // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_emptyStringHash\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_emptyStringHash; // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_float0\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float0; // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_float1\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float1; // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_floatNeg1\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_floatNeg1; // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_molangActorIdEmptyArrayPtr\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_molangActorIdEmptyArrayPtr; // NOLINT
    /**
     * @symbol ?mDefaultReturnValue_structUV0\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_structUV0; // NOLINT
};
