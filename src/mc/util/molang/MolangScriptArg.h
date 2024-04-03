#pragma once

#include "ll/api/base/Concepts.h"

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/util/molang/MolangActorArrayPtr.h"
#include "mc/util/molang/MolangActorIdArrayPtr.h"
#include "mc/util/molang/MolangArrayVariable.h"
#include "mc/util/molang/MolangClientTextureSet.h"
#include "mc/util/molang/MolangContextVariable.h"
#include "mc/util/molang/MolangDataDrivenGeometry.h"
#include "mc/util/molang/MolangEntityVariable.h"
#include "mc/util/molang/MolangGeometryVariable.h"
#include "mc/util/molang/MolangMaterialVariable.h"
#include "mc/util/molang/MolangMatrix.h"
#include "mc/util/molang/MolangMemberAccessor.h"
#include "mc/util/molang/MolangMemberArray.h"
#include "mc/util/molang/MolangQueryFunctionPtr.h"
#include "mc/util/molang/MolangScriptArgPOD.h"
#include "mc/util/molang/MolangTempVariable.h"
#include "mc/util/molang/MolangTextureVariable.h"

// auto generated inclusion list
#include "mc/util/molang/MolangScriptArgType.h"

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
    // symbol: ??0MolangScriptArg@@QEAA@XZ
    MCAPI MolangScriptArg();

    // symbol: ??0MolangScriptArg@@QEAA@M@Z
    MCAPI MolangScriptArg(float);

    // symbol: ??0MolangScriptArg@@QEAA@H@Z
    MCAPI MolangScriptArg(int);

    // symbol: ??0MolangScriptArg@@QEAA@$$QEAU0@@Z
    MCAPI MolangScriptArg(struct MolangScriptArg&&);

    // symbol: ??0MolangScriptArg@@QEAA@AEBU0@@Z
    MCAPI MolangScriptArg(struct MolangScriptArg const&);

    // symbol: ?getAsNonConstMolangMemberArray@MolangScriptArg@@QEAAPEAUMolangMemberArray@@XZ
    MCAPI struct MolangMemberArray* getAsNonConstMolangMemberArray();

    // symbol: ?getBaseType@MolangScriptArg@@QEBA?AW4MolangScriptArgType@@XZ
    MCAPI ::MolangScriptArgType getBaseType() const;

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
