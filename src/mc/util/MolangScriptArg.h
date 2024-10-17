#pragma once

#include "ll/api/base/Concepts.h"

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/util/MolangActorArrayPtr.h"
#include "mc/util/MolangActorIdArrayPtr.h"
#include "mc/util/MolangArrayVariable.h"
#include "mc/util/MolangClientTextureSet.h"
#include "mc/util/MolangContextVariable.h"
#include "mc/util/MolangDataDrivenGeometry.h"
#include "mc/util/MolangEntityVariable.h"
#include "mc/util/MolangGeometryVariable.h"
#include "mc/util/MolangMaterialVariable.h"
#include "mc/util/MolangMatrix.h"
#include "mc/util/MolangMemberAccessor.h"
#include "mc/util/MolangMemberArray.h"
#include "mc/util/MolangQueryFunctionPtr.h"
#include "mc/util/MolangScriptArgPOD.h"
#include "mc/util/MolangTempVariable.h"
#include "mc/util/MolangTextureVariable.h"

// auto generated inclusion list
#include "mc/util/MolangScriptArgType.h"

struct MolangScriptArg {
    using MolangScriptArgData = std::variant<
        MolangMatrix,
        MaterialVariants,
        MolangActorArrayPtr,
        MolangActorIdArrayPtr,
        MolangArrayVariable,
        MolangClientTextureSet,
        MolangContextVariable,
        MolangDataDrivenGeometry,
        MolangEntityVariable,
        MolangGeometryVariable,
        MolangMaterialVariable,
        MolangMemberAccessor,
        MolangMemberArray,
        MolangQueryFunctionPtr,
        MolangTempVariable,
        MolangTextureVariable>;

    MolangScriptArgType mType;
    MolangScriptArgPOD  mPOD;
    MolangScriptArgData mData;

    MolangScriptArg(MolangLoopBreak loopBreak) : mType(MolangScriptArgType::MolangLoopBreak), mPOD(loopBreak) {}
    MolangScriptArg(MolangLoopContinue loopContinue)
    : mType(MolangScriptArgType::MolangLoopContinue),
      mPOD(loopContinue) {}
    MolangScriptArg(Actor const& actor) : mType(MolangScriptArgType::MolangActorPtr), mPOD(std::addressof(actor)) {}
    MolangScriptArg(ActorUniqueID actorId) : mType(MolangScriptArgType::MolangActorIdPtr), mPOD(actorId) {}
    MolangScriptArg(ItemStackBase const& item)
    : mType(MolangScriptArgType::MolangItemStackBasePtr),
      mPOD(std::addressof(item)) {}

    template <ll::concepts::IsInTypes<MolangScriptArgData> T>
    MolangScriptArg(T const& val) : mType(MolangScriptArgType::Variant),
                                    mData(val) {}

    MCTAPI MolangScriptArg(MolangMemberArray const&);
    MCTAPI MolangScriptArg(MolangActorIdArrayPtr const&);
    MCTAPI MolangScriptArg(MolangMatrix const&);

public:
    // NOLINTBEGIN
    MCAPI MolangScriptArg();

    MCAPI MolangScriptArg(float value);

    MCAPI MolangScriptArg(int value);

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
