#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangScriptArgType.h"

// auto generated forward declare list
// clang-format off
class MaterialVariants;
struct MolangActorArrayPtr;
struct MolangActorIdArrayPtr;
struct MolangArrayVariable;
struct MolangClientTextureSet;
struct MolangContextVariable;
struct MolangDataDrivenGeometry;
struct MolangEntityVariable;
struct MolangGeometryVariable;
struct MolangMaterialVariable;
struct MolangMatrix;
struct MolangMemberAccessor;
struct MolangMemberArray;
struct MolangQueryFunctionPtr;
struct MolangTempVariable;
struct MolangTextureVariable;
union MolangScriptArgPOD;
// clang-format on

struct MolangScriptArg {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MolangScriptArgType> mType;
    ::ll::TypedStorage<8, 8, ::MolangScriptArgPOD>  mPOD;
    ::ll::TypedStorage<
        8,
        72,
        ::std::variant<
            ::MolangMatrix,
            ::MaterialVariants,
            ::MolangActorArrayPtr,
            ::MolangActorIdArrayPtr,
            ::MolangArrayVariable,
            ::MolangClientTextureSet,
            ::MolangContextVariable,
            ::MolangDataDrivenGeometry,
            ::MolangEntityVariable,
            ::MolangGeometryVariable,
            ::MolangMaterialVariable,
            ::MolangMemberAccessor,
            ::MolangMemberArray,
            ::MolangQueryFunctionPtr,
            ::MolangTempVariable,
            ::MolangTextureVariable>>
        mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangScriptArg(::MolangScriptArg const&);

    MCAPI explicit MolangScriptArg(float value);

    MCAPI ::MolangMemberArray* getAsNonConstMolangMemberArray();

    MCAPI ::MolangScriptArg& operator=(::MolangMemberArray const&);

    MCAPI ::MolangScriptArg& operator=(::MolangScriptArg const&);

    MCAPI ::MolangScriptArg& operator=(::MolangScriptArg&&);

    MCAPI void reportGetFailure() const;

    MCAPI ~MolangScriptArg();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_break();

    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_emptyStringHash();

    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_float0();

    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_float1();

    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_floatNeg1();

    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_molangActorIdEmptyArrayPtr();

    MCAPI static ::MolangScriptArg const& mDefaultReturnValue_structUV0();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangScriptArg const&);

    MCAPI void* $ctor(float value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
