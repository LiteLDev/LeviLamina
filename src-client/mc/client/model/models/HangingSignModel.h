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

class HangingSignModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mPlank;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBoard;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mVChain;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mChainL1;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mChainL2;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mChainR1;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mChainR2;
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
