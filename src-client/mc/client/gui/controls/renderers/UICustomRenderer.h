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

    virtual void preRenderSetup(::UIRenderContext&);

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const = 0;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void frameUpdate(::UIFrameUpdateContext&, ::UIControl&) = 0;

    virtual void render(::UIRenderContext&, ::IClientInstance&, ::UIControl&, int) = 0;

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual int getNumRenderPasses() const;

    virtual ::ResourceLocation getResourceLocation(int, int) const;

    virtual ::UIMaterialType getUIMaterialType(int) const;

    virtual bool getRequiresPreRenderSetup(int) const;

    virtual void onVisibilityChanged(bool);

    virtual void collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>&);

    virtual ::UIItemRenderInfo getItemRenderInfo() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $preRenderSetup(::UIRenderContext&);

    MCFOLD bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCFOLD ::UIBatchType $getBatchType() const;

    MCFOLD int $getCustomId() const;

    MCFOLD int $getNumRenderPasses() const;

    MCAPI ::ResourceLocation $getResourceLocation(int, int) const;

    MCFOLD bool $getRequiresPreRenderSetup(int) const;

    MCFOLD void $onVisibilityChanged(bool);

    MCFOLD void $collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>&);

    MCFOLD ::UIItemRenderInfo $getItemRenderInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
