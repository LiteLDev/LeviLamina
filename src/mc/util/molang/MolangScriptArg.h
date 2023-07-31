#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangScriptArg {

public:
    // prevent constructor by default
    MolangScriptArg() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MolangScriptArg\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI MolangScriptArg(struct MolangScriptArg const&);
    /**
     * @symbol ??0MolangScriptArg\@\@QEAA\@H\@Z
     */
    MCAPI MolangScriptArg(int);
    /**
     * @symbol ??0MolangScriptArg\@\@QEAA\@M\@Z
     */
    MCAPI MolangScriptArg(float);
    /**
     * @symbol ?getAsNonConstMolangMemberArray\@MolangScriptArg\@\@QEAAPEAUMolangMemberArray\@\@XZ
     */
    MCAPI struct MolangMemberArray* getAsNonConstMolangMemberArray();
    /**
     * @symbol ??4MolangScriptArg\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg&&);
    /**
     * @symbol ??4MolangScriptArg\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg const&);
    /**
     * @symbol ??1MolangScriptArg\@\@QEAA\@XZ
     */
    MCAPI ~MolangScriptArg();
    /**
     * @symbol ?mDefaultReturnValue_break\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_break;
    /**
     * @symbol ?mDefaultReturnValue_emptyStringHash\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_emptyStringHash;
    /**
     * @symbol ?mDefaultReturnValue_float0\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float0;
    /**
     * @symbol ?mDefaultReturnValue_float1\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float1;
    /**
     * @symbol ?mDefaultReturnValue_floatNeg1\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_floatNeg1;
    /**
     * @symbol ?mDefaultReturnValue_molangActorIdEmptyArrayPtr\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_molangActorIdEmptyArrayPtr;
    /**
     * @symbol ?mDefaultReturnValue_structUV0\@MolangScriptArg\@\@2U1\@B
     */
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_structUV0;
    // NOLINTEND
};
