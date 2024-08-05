#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangScriptArgType.h"

struct MolangScriptArg {
public:
    // NOLINTBEGIN
    MCAPI MolangScriptArg();

    MCAPI explicit MolangScriptArg(float);

    MCAPI explicit MolangScriptArg(int);

    MCAPI MolangScriptArg(struct MolangScriptArg&&);

    MCAPI MolangScriptArg(struct MolangScriptArg const&);

    MCAPI void clear();

    MCAPI struct MolangMemberArray* getAsNonConstIfMolangMemberArray();

    MCAPI struct MolangMemberArray* getAsNonConstMolangMemberArray();

    MCAPI ::MolangScriptArgType getBaseType() const;

    MCAPI struct MolangMemberArray const* getIfMolangMemberArray() const;

    MCAPI bool isEqual(struct MolangScriptArg const&) const;

    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg&&);

    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg const&);

    MCAPI void setType(::MolangScriptArgType);

    MCAPI ~MolangScriptArg();

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_break;

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_emptyStringHash;

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float0;

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float1;

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_floatNeg1;

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_molangActorIdEmptyArrayPtr;

    MCAPI static struct MolangScriptArg const mDefaultReturnValue_structUV0;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void reportGetFailure() const;

    // NOLINTEND
};
