#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/renderer/MatrixStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class BoneOrientation;
class DataDrivenRenderer;
class HashedString;
class ItemStack;
class Mob;
class RenderParams;
struct ActorRenderData;
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

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual ~DataDrivenRenderer_tempComponent_VexAdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenRenderer_tempComponent_VexAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer
    );

    MCNAPI void _renderParentedItemInHand(
        ::Mob&                                  mob,
        ::HashedString const&                   boneName,
        ::ItemStack const&                      item,
        ::BaseActorRenderContext&               renderContext,
        ::std::vector<::BoneOrientation> const& boneOrientations,
        ::MatrixStack::MatrixStackRef&          worldMatrix
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _doesHeldItemIgnoreLighting(::BaseActorRenderContext const& renderContext, ::Actor const& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::DataDrivenRenderer> renderer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;

    MCNAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
