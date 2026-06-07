#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class IClientInstance;
class Matrix;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class LivePlayerRenderer : public ::MinecraftUICustomRenderer {
public:
    // LivePlayerRenderer inner types declare
    // clang-format off
    struct RotationProxy;
    // clang-format on

    // LivePlayerRenderer inner types define
    struct RotationProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mYBodyRot;
        ::ll::TypedStorage<4, 4, float> mYBodyRotO;
        ::ll::TypedStorage<4, 4, float> mRotX;
        ::ll::TypedStorage<4, 4, float> mRotY;
        ::ll::TypedStorage<4, 4, float> mYHeadRot;
        ::ll::TypedStorage<4, 4, float> mYHeadRotO;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LivePlayerRenderer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _getMousePosition(
        float&                                                xMouse,
        float&                                                yMouse,
        float                                                 xo,
        float                                                 yo,
        ::Bedrock::NotNullNonOwnerPtr<::GuiData const> const& guiData,
        ::IClientInstance const&                              client,
        ::UIControl const&                                    owner
    );

    MCAPI static void setupCameraMatrixGliding(::Matrix& worldMatrix, float xo, float yo, float ownerScale);

    MCAPI static void setupMatrixRotation(bool isGliding, ::Matrix& worldMatrix, float yMouse);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
