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
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float) /*override*/;

    virtual void render(::ScreenContext&) /*override*/;

    virtual void render(::BaseActorRenderContext&) /*override*/;

    virtual void setupAnim(float, float, float, float, float, float) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
