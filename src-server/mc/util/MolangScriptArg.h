#pragma once

#include "ll/api/base/Concepts.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
#include "mc/util/MolangOffsetPlaceholder.h"
#include "mc/util/MolangQueryFunctionPtr.h"
#include "mc/util/MolangResourceOffset.h"
#include "mc/util/MolangScriptArgPOD.h"
#include "mc/util/MolangScriptArgType.h"
#include "mc/util/MolangTempVariable.h"
#include "mc/util/MolangTextureVariable.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangScriptArg {
public:
    using MolangScriptArgData = std::variant<
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
        ::MolangTextureVariable,
        ::MolangOffsetPlaceholder,
        ::MolangResourceOffset>;

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

public:
    // member variables
    // NOLINTBEGIN
    ::MolangScriptArgType mType;
    ::MolangScriptArgPOD  mPOD;
    MolangScriptArgData   mData;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangScriptArg();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangScriptArg(::MolangScriptArg const& other);

    MCAPI MolangScriptArg(float value);

    MCAPI ::MolangMemberArray* getAsNonConstMolangMemberArray();

    MCAPI ::HashedString const& getName() const;

    MCAPI ::MolangScriptArg& operator=(::MolangScriptArg const& other);

    MCAPI ::MolangScriptArg& operator=(::MolangScriptArg&& other);

    MCAPI ::MolangScriptArg& operator=(::MolangMemberArray&& value);

    MCAPI bool operator==(::MolangScriptArg const& rhs) const;

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
    MCAPI void* $ctor(::MolangScriptArg const& other);

    MCAPI void* $ctor(float value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
