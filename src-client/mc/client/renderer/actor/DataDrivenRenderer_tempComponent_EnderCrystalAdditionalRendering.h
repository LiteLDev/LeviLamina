#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf7b8cc;
    ::ll::UntypedStorage<8, 16> mUnk13ff6d;
    ::ll::UntypedStorage<8, 32> mUnkede15b;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering(
        DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
