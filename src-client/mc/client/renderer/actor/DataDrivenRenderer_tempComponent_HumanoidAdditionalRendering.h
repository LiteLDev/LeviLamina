#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3a0dad;
    ::ll::UntypedStorage<8, 24> mUnk243299;
    ::ll::UntypedStorage<8, 32> mUnk3a6bc6;
    ::ll::UntypedStorage<1, 1>  mUnk1762fd;
    ::ll::UntypedStorage<1, 1>  mUnk72d582;
    ::ll::UntypedStorage<4, 4>  mUnkd95614;
    ::ll::UntypedStorage<1, 1>  mUnkf232b2;
    ::ll::UntypedStorage<4, 4>  mUnk8d88ed;
    ::ll::UntypedStorage<4, 4>  mUnk9bcd0a;
    ::ll::UntypedStorage<4, 4>  mUnkb87ea5;
    ::ll::UntypedStorage<4, 4>  mUnkbb77d6;
    ::ll::UntypedStorage<4, 4>  mUnk4275c5;
    ::ll::UntypedStorage<4, 4>  mUnk8d35ce;
    ::ll::UntypedStorage<4, 8>  mUnk42ea8c;
    ::ll::UntypedStorage<8, 8>  mUnk8e909d;
    ::ll::UntypedStorage<8, 8>  mUnkfd1d20;
    ::ll::UntypedStorage<8, 8>  mUnk30eba1;
    ::ll::UntypedStorage<8, 24> mUnkccd028;
    ::ll::UntypedStorage<8, 8>  mUnk453393;
    ::ll::UntypedStorage<8, 8>  mUnk48e03d;
    ::ll::UntypedStorage<8, 8>  mUnk136bf2;
    ::ll::UntypedStorage<8, 8>  mUnka5cac8;
    ::ll::UntypedStorage<8, 8>  mUnk3ba9f9;
    ::ll::UntypedStorage<8, 8>  mUnka37fc5;
    ::ll::UntypedStorage<8, 8>  mUnkcf3c46;
    ::ll::UntypedStorage<8, 8>  mUnkeda452;
    ::ll::UntypedStorage<8, 16> mUnk9df525;
    ::ll::UntypedStorage<1, 1>  mUnkeba727;
    ::ll::UntypedStorage<1, 1>  mUnkc1ab47;
    ::ll::UntypedStorage<8, 16> mUnk2f62b8;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering(
        DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_HumanoidAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::std::string> const& ELYTRA_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
