#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/BellModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class BellBlockActorRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo> mBellTexture;
    ::ll::TypedStorage<8, 1488, ::BellModel>       mBell;
    // NOLINTEND

public:
    // prevent constructor by default
    BellBlockActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BellBlockActorRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
