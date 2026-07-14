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

class BedModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBody;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeg0;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeg1;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeg2;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLeg3;
    // NOLINTEND

public:
    // prevent constructor by default
    BedModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedModel() /*override*/;

    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BedModel(::GeometryPtr source);
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
    MCAPI void $render(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
