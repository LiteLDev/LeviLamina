#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/HangingSignModel.h"
#include "mc/client/renderer/blockactor/SignRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
// clang-format on

class HangingSignRenderer : public ::SignRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4368, ::HangingSignModel> mHangingSignModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;

    virtual float _getScaleFactor() const /*override*/;

    virtual float _yTextOffset() const /*override*/;

    virtual float _zTextOffset() const /*override*/;

    virtual int _getSignWidth() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
