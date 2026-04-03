#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/UIBatchType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ResourceLocation;
class UIComponent;
class UIControl;
class UICustomRenderer;
class UIScene;
struct ScreenEvent;
struct UIItemRenderInfo;
// clang-format on

class CustomRenderComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UICustomRenderer>> mRenderer;
    ::ll::TypedStorage<8, 32, ::std::string>                         mItemName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomRenderComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual int getNumRenderPasses() const;

    virtual ::UIMaterialType getUIMaterialType(int pass) const;

    virtual ::ResourceLocation getResourceLocation(int textureSlot, int pass) const;

    virtual bool getRequiresPreRenderSetup(int pass) const;

    virtual ::UIItemRenderInfo getItemRenderInfo() const;

    virtual void collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void setRenderer(::std::shared_ptr<::UICustomRenderer> renderer);

    MCAPI bool updateCustom(::IClientInstance& client, ::UIScene const& scene);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCAPI void $onVisibilityChanged(bool visible);

    MCAPI ::UIBatchType $getBatchType() const;

    MCAPI int $getCustomId() const;

    MCAPI int $getNumRenderPasses() const;

    MCAPI ::UIMaterialType $getUIMaterialType(int pass) const;

    MCAPI ::ResourceLocation $getResourceLocation(int textureSlot, int pass) const;

    MCAPI bool $getRequiresPreRenderSetup(int pass) const;

    MCAPI ::UIItemRenderInfo $getItemRenderInfo() const;

    MCAPI void $collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
