#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class DecoratedPotFace : public ::Model {
public:
    // DecoratedPotFace inner types declare
    // clang-format off
    struct Alignment;
    // clang-format on

    // DecoratedPotFace inner types define
    struct Alignment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGuiMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mModel;
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratedPotFace();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DecoratedPotFace(::DecoratedPotFace::Alignment const& alignment);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DecoratedPotFace::Alignment const& alignment);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
