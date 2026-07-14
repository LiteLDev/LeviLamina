#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/shared_types/legacy/Side.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Boat;
class GeometryPtr;
class ScreenContext;
// clang-format on

class BoatModel : public ::Model {
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
    // NOLINTEND

public:
    // prevent constructor by default
    BoatModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoatModel() /*override*/;

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

    virtual void setupAnim(float, float, float, float, float, float) /*override*/;

    virtual ::ModelPart _makePaddle(bool flip, ::ModelPart paddle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BoatModel(::GeometryPtr source);

    MCFOLD void _animatePaddle(
        ::ModelPart&        paddle,
        ::ScreenContext&    screenContext,
        ::Boat const&       boat,
        ::SharedTypes::Side side,
        float               scale,
        float               a
    );
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

    MCFOLD void $setupAnim(float, float, float, float, float, float);

    MCFOLD ::ModelPart $_makePaddle(bool flip, ::ModelPart paddle);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
