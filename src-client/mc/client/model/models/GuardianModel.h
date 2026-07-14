#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class GeometryPtr;
class ScreenContext;
// clang-format on

class GuardianModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mHead;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mEye;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mTailPart0;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mTailPart1;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mTailPart2;
    ::ll::TypedStorage<8, 6912, ::ModelPart[12]>  mSpikeParts;
    ::ll::TypedStorage<4, 144, ::Vec3[12]>        mSpikePositions;
    // NOLINTEND

public:
    // prevent constructor by default
    GuardianModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(
        ::ScreenContext& screenContext,
        ::Actor&         entity,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    ) /*override*/;

    virtual void setupAnim(::Actor& bob, float yRot, float xRot, float, float, float, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GuardianModel(::GeometryPtr source, bool bIsGhost);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source, bool bIsGhost);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(
        ::ScreenContext& screenContext,
        ::Actor&         entity,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    MCAPI void $setupAnim(::Actor& bob, float yRot, float xRot, float, float, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
