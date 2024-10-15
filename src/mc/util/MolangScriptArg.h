#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangScriptArgType.h"

struct MolangScriptArg {
public:
    // NOLINTBEGIN
    MCAPI MolangScriptArg();

    MCAPI explicit MolangScriptArg(float value);

    MCAPI explicit MolangScriptArg(int value);

    MCAPI MolangScriptArg(struct MolangScriptArg&&);

    MCAPI MolangScriptArg(struct MolangScriptArg const&);

    MCAPI void clear();

    MCAPI struct MolangMemberArray* getAsNonConstIfMolangMemberArray();

    MCAPI struct MolangMemberArray* getAsNonConstMolangMemberArray();

    MCAPI ::MolangScriptArgType getBaseType() const;

    MCAPI struct MolangMemberArray const* getIfMolangMemberArray() const;

    MCAPI bool isEqual(struct MolangScriptArg const& rhs) const;

    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg&&);

    MCAPI struct MolangScriptArg& operator=(struct MolangScriptArg const&);

    MCAPI void setType(::MolangScriptArgType type);

    MCAPI ~MolangScriptArg();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void reportGetFailure() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct MolangScriptArg const&);

    MCAPI void* ctor$();

    MCAPI void* ctor$(int value);

    MCAPI void* ctor$(struct MolangScriptArg&&);

    MCAPI void* ctor$(float value);

    MCAPI void dtor$();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_break();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_emptyStringHash();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_float0();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_float1();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_floatNeg1();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_molangActorIdEmptyArrayPtr();

    MCAPI static struct MolangScriptArg const& mDefaultReturnValue_structUV0();

    // NOLINTEND
};
