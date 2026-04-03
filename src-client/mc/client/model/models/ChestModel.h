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

class ChestModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLid;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBottom;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLock;
    ::ll::TypedStorage<1, 1, bool>                mIsLarge;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestModel() /*override*/;

    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChestModel(bool large);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool large);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
