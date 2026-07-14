#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class GeometryPtr;
class ScreenContext;
// clang-format on

class SkeletonHeadModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mHead;
    // NOLINTEND

public:
    // prevent constructor by default
    SkeletonHeadModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(
        ::ScreenContext& screenContext,
        ::Actor&         e,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    ) /*override*/;

    virtual void render(::ScreenContext& screenContext) /*override*/;

    virtual void render(::BaseActorRenderContext&) /*override*/;

    virtual void setupAnim(float time, float r, float bob, float yRot, float xRot, float scale) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SkeletonHeadModel(::GeometryPtr source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(
        ::ScreenContext& screenContext,
        ::Actor&         e,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    MCAPI void $render(::ScreenContext& screenContext);

    MCFOLD void $render(::BaseActorRenderContext&);

    MCAPI void $setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
