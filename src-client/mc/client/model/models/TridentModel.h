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

class TridentModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mPole;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mRDent;
    // NOLINTEND

public:
    // prevent constructor by default
    TridentModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::ScreenContext& screenContext, ::Actor& scale, float, float, float, float, float, float) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TridentModel(::GeometryPtr source);

    MCFOLD void setDefaultMaterial();

    MCFOLD void setGlintMaterial();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryPtr source);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::ScreenContext& screenContext, ::Actor& scale, float, float, float, float, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
