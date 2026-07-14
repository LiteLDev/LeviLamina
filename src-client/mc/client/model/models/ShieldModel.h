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

class ShieldModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mPatternMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintPatternMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mShield;
    // NOLINTEND

public:
    // prevent constructor by default
    ShieldModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ShieldModel(::GeometryPtr source);

    MCFOLD void setDefaultMaterial();

    MCFOLD void setGlintMaterial();

    MCAPI void setGlintPatternMaterial();

    MCAPI void setPatternMaterial();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
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
