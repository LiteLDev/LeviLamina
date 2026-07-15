#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class GeometryPtr;
class ScreenContext;
// clang-format on

class ChestBoatModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBottom;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBack;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mFront;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeft;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mRight;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeftPaddle;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mRightPaddle;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLid;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBottomChest;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLock;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBoatModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestBoatModel() /*override*/;

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

    virtual void setupAnim(float time, float r, float bob, float yRot, float xRot, float scale) /*override*/;

    virtual ::ModelPart _makePaddle(bool flip, ::ModelPart paddle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChestBoatModel(::GeometryPtr source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCFOLD void $setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);

    MCFOLD ::ModelPart $_makePaddle(bool flip, ::ModelPart paddle);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
