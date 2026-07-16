#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_VexAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk670796;
    ::ll::UntypedStorage<8, 8>  mUnka1eb46;
    ::ll::UntypedStorage<8, 8>  mUnkdf6bee;
    ::ll::UntypedStorage<8, 8>  mUnka253f2;
    ::ll::UntypedStorage<1, 2>  mUnka0782d;
    ::ll::UntypedStorage<1, 2>  mUnk4bb823;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_VexAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_VexAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_VexAdditionalRendering(
        DataDrivenRenderer_tempComponent_VexAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_VexAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
