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

class DecoratedPotBase : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mGuiMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mNeckOuter;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mNeckInner;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBottom;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mTop;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecoratedPotBase() /*override*/;

    virtual void render(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DecoratedPotBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
