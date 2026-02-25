#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudArmorRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudArmorRenderer inner types define
    enum class ArmorType : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mHasLoadedTextures;
    ::ll::TypedStorage<8, 8, uint64>                              mNumFullIcons;
    ::ll::TypedStorage<8, 8, uint64>                              mNumHalfIcons;
    ::ll::TypedStorage<8, 8, uint64>                              mNumEmptyIcons;
    ::ll::TypedStorage<4, 4, float>                               mArmorHeightOffset;
    ::ll::TypedStorage<8, 96, ::std::array<::mce::TexturePtr, 3>> mArmorTextures;
    ::ll::TypedStorage<8, 1584, ::std::array<::mce::Mesh, 3>>     mArmorMeshes;
    ::ll::TypedStorage<4, 120, ::std::array<::glm::vec3, 10>>     mIconPosition;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                    mRenderAABB;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudArmorRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudArmorRenderer();

    MCAPI void _loadArmorTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCFOLD bool _validateArmorMeshes(::ScreenContext& screenContext);
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

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
