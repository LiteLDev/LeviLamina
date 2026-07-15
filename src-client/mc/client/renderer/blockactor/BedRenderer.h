#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/BedModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BaseActorRenderContext;
struct BlockActorRenderData;
// clang-format on

class BedRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>        mBookTex;
    ::ll::TypedStorage<8, 3216, ::BedModel>             mBed;
    ::ll::TypedStorage<8, 5120, ::ActorTextureInfo[16]> mTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    BedRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedRenderer() /*override*/ = default;

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BedRenderer(::std::shared_ptr<::ActorResourceDefinition> definition);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ActorResourceDefinition> definition);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
