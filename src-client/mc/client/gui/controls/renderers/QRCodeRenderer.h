#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class QRCodeRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mQrCodeContent;
    ::ll::TypedStorage<4, 16, ::mce::Color>         mForegroundColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>         mBackgroundColor;
    ::ll::TypedStorage<8, 16, ::mce::ClientTexture> mTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QRCodeRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual ::UIBatchType getBatchType() const /*override*/;

    virtual int getCustomId() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCNAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
