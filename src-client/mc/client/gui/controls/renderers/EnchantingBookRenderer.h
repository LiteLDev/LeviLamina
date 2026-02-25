#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/renderer/ActorShaderManager.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
struct EnchantingBookModel;
// clang-format on

class EnchantingBookRenderer : public ::MinecraftUICustomRenderer, public ::ActorShaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EnchantingBookModel>> mBook;
    ::ll::TypedStorage<1, 1, bool>                                     mPrevOpen;
    ::ll::TypedStorage<4, 4, float>                                    mFlip;
    ::ll::TypedStorage<4, 4, float>                                    mOFlip;
    ::ll::TypedStorage<4, 4, float>                                    mFlipT;
    ::ll::TypedStorage<4, 4, float>                                    mFlipA;
    ::ll::TypedStorage<4, 4, float>                                    mOpen;
    ::ll::TypedStorage<4, 4, float>                                    mOOpen;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingBookRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForActorShaderManager();

    MCNAPI static void** $vftableForMinecraftUICustomRenderer();
    // NOLINTEND
};
