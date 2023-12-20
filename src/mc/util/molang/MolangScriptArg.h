#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangScriptArgType.h"

struct MolangScriptArg {
public:
    // NOLINTBEGIN
    // symbol: ??0MolangScriptArg@@QEAA@XZ
    MCAPI MolangScriptArg();

    // symbol: ??0MolangScriptArg@@QEAA@M@Z
    MCAPI explicit MolangScriptArg(float);

    // symbol: ??0MolangScriptArg@@QEAA@H@Z
    MCAPI explicit MolangScriptArg(int);

    // symbol: ??0MolangScriptArg@@QEAA@$$QEAU0@@Z
    MCAPI MolangScriptArg(struct MolangScriptArg&&);

    // symbol: ??0MolangScriptArg@@QEAA@AEBU0@@Z
    MCAPI MolangScriptArg(struct MolangScriptArg const&);

    // symbol: ?clear@MolangScriptArg@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?getAsNonConstIfMolangMemberArray@MolangScriptArg@@QEAAPEAUMolangMemberArray@@XZ
    MCAPI struct MolangMemberArray* getAsNonConstIfMolangMemberArray();

    // symbol: ?getAsNonConstMolangMemberArray@MolangScriptArg@@QEAAPEAUMolangMemberArray@@XZ
    MCAPI struct MolangMemberArray* getAsNonConstMolangMemberArray();

    // symbol: ?getBaseType@MolangScriptArg@@QEBA?AW4MolangScriptArgType@@XZ
    MCAPI ::MolangScriptArgType getBaseType() const;

    // symbol: ?getIfMolangMemberArray@MolangScriptArg@@QEBAPEBUMolangMemberArray@@XZ
    MCAPI struct MolangMemberArray const* getIfMolangMemberArray() const;

    // symbol: ?isEqual@MolangScriptArg@@QEBA_NAEBU1@@Z
    MCAPI bool isEqual(struct MolangScriptArg const&) const;

    // symbol: ??4MolangScriptArg@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg&&);

    // symbol: ??4MolangScriptArg@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg const&);

    // symbol: ?setType@MolangScriptArg@@QEAAXW4MolangScriptArgType@@@Z
    MCAPI void setType(::MolangScriptArgType);

    // symbol: ??1MolangScriptArg@@QEAA@XZ
    MCAPI ~MolangScriptArg();

    // symbol: ?mDefaultReturnValue_break@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_break;

    // symbol: ?mDefaultReturnValue_emptyStringHash@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_emptyStringHash;

    // symbol: ?mDefaultReturnValue_float0@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float0;

    // symbol: ?mDefaultReturnValue_float1@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float1;

    // symbol: ?mDefaultReturnValue_floatNeg1@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_floatNeg1;

    // symbol: ?mDefaultReturnValue_molangActorIdEmptyArrayPtr@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_molangActorIdEmptyArrayPtr;

    // symbol: ?mDefaultReturnValue_structUV0@MolangScriptArg@@2U1@B
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_structUV0;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?reportGetFailure@MolangScriptArg@@AEBAXXZ
    MCAPI void reportGetFailure() const;

    // NOLINTEND
};
