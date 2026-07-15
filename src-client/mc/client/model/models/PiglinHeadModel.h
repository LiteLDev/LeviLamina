#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class GeometryPtr;
class ScreenContext;
// clang-format on

class PiglinHeadModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mAnimationPos;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mHead;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeftEar;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mRightEar;
    ::ll::TypedStorage<4, 4, float>               mEarAsymmetry;
    // NOLINTEND

public:
    // prevent constructor by default
    PiglinHeadModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PiglinHeadModel(::GeometryPtr source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
