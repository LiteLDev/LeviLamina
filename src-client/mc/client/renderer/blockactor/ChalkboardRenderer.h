#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ChalkboardModel.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/block/actor/ChalkboardBlockActor.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ChalkboardBlockActor;
class Font;
class GeometryGroup;
class ProfanityContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
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
    // prevent constructor by default
    ChalkboardRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChalkboardRenderer(
        ::std::shared_ptr<::mce::TextureGroup>                textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const& modelRepo
    );

    MCAPI ::ChalkboardBlockActor::CachedMessageData const& _getCachedChalkboardMessage(
        ::ChalkboardBlockActor&                                  chalkboardBlockActor,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const& context,
        ::Font&                                                  font
    );

    MCAPI void _renderText(
        ::BaseActorRenderContext& renderContext,
        ::ChalkboardBlockActor&   chalkboard,
        ::ChalkboardSize          boardSize
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup>                textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const& modelRepo
    );
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
