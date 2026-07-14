#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class ConduitWindModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mWind;
    // NOLINTEND

public:
    // prevent constructor by default
    ConduitWindModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConduitWindModel() /*override*/ = default;

    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConduitWindModel(int u, int v, int tw, int th);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int u, int v, int tw, int th);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $render(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
