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

class ShulkerBoxModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLid;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBase;
    ::ll::TypedStorage<4, 4, float>               mPeekAmount;
    ::ll::TypedStorage<4, 4, float>               bs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::ScreenContext&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
