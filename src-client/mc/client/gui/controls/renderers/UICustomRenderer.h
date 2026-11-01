#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/UIBatchType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ResourceLocation;
class UIControl;
class UIFrameUpdateContext;
class UIRenderContext;
class UIScene;
struct ScreenEvent;
struct UIItemRenderInfo;
// clang-format on

class UICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPropagatedAlpha;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UICustomRenderer() = default;

    virtual void preRenderSetup(::UIRenderContext& renderContext);

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const = 0;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    virtual void frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner) = 0;

    virtual void render(::UIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass) = 0;

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual int getNumRenderPasses() const;

    virtual ::ResourceLocation getResourceLocation(int textureSlot, int pass) const;

    virtual ::UIMaterialType getUIMaterialType(int pass) const;

    virtual bool getRequiresPreRenderSetup(int pass) const;

    virtual void onVisibilityChanged(bool visible);

    virtual void collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);

    virtual ::UIItemRenderInfo getItemRenderInfo() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRenderSetup(::UIRenderContext& renderContext);

    MCNAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;

    MCNAPI int $getNumRenderPasses() const;

    MCNAPI ::ResourceLocation $getResourceLocation(int textureSlot, int pass) const;

    MCNAPI ::UIMaterialType $getUIMaterialType(int pass) const;

    MCNAPI bool $getRequiresPreRenderSetup(int pass) const;

    MCNAPI void $onVisibilityChanged(bool visible);

    MCNAPI void $collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);

    MCNAPI ::UIItemRenderInfo $getItemRenderInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
