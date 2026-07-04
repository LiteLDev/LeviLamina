#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/HangingSignModel.h"
#include "mc/client/renderer/blockactor/SignRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class HangingSignRenderer : public ::SignRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4368, ::HangingSignModel> mHangingSignModel;
    // NOLINTEND

public:
    // prevent constructor by default
    HangingSignRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;

    virtual float _getScaleFactor() const /*override*/;

    virtual float _yTextOffset() const /*override*/;

    virtual float _zTextOffset() const /*override*/;

    virtual int _getSignWidth() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HangingSignRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);

    MCAPI float $_getScaleFactor() const;

    MCAPI float $_yTextOffset() const;

    MCFOLD float $_zTextOffset() const;

    MCFOLD int $_getSignWidth() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
