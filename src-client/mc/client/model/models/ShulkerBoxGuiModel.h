#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class ShulkerBoxGuiModel : public ::Model {
public:
    // ShulkerBoxGuiModel inner types declare
    // clang-format off
    struct FacadeQuad;
    // clang-format on

    // ShulkerBoxGuiModel inner types define
    struct FacadeQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition0;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition1;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition2;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition3;
        ::ll::TypedStorage<4, 12, ::Vec3> mNormal;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv0;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv1;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv2;
        ::ll::TypedStorage<4, 8, ::Vec2>  mUv3;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mTopFace;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mWestFaces;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mSouthFaces;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
