#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ChalkboardModel.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
// clang-format on

class ChalkboardRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>  mTextMaterial;
    ::ll::TypedStorage<8, 2064, ::ChalkboardModel> mOneByOne;
    ::ll::TypedStorage<8, 2064, ::ChalkboardModel> mTwoByOne;
    ::ll::TypedStorage<8, 2064, ::ChalkboardModel> mThreeByTwo;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mTextureOneByOne;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mTextureTwoByOne;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mTextureThreeByTwo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
