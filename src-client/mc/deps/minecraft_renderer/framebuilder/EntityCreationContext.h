#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/external/render_dragon/frame_object/Frame.h"
#include "mc/external/render_dragon/rendering/ClipSpaceOrigin.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::frameobject { struct IntraFrameAllocatorContainer; }
namespace dragon::framerenderer { class BgfxPrimitiveIndexBuffer; }
namespace dragon::materials { class MaterialResourceManager; }
namespace dragon::mesh { class VertexDeclManager; }
namespace dragon::tasks { class AsyncTasksScope; }
namespace dragon::tasks { class GraphicsTasks; }
namespace mce::framebuilder::bgfxbridge { struct FancyFrameRendererResources; }
namespace mce::framebuilder::bgfxbridge { struct RTXMinecraftFrameRendererResources; }
namespace mce::framebuilder::bgfxbridge { struct VibrantVisualsFrameRendererResources; }
namespace mce::framebuilder::gamecomponents { struct ActorShadow; }
namespace mce::framebuilder::gamecomponents { struct AlphaTestCracks; }
namespace mce::framebuilder::gamecomponents { struct Atmosphere; }
namespace mce::framebuilder::gamecomponents { struct BlendedCracksObject; }
namespace mce::framebuilder::gamecomponents { struct BlockChanges; }
namespace mce::framebuilder::gamecomponents { struct CloudObject; }
namespace mce::framebuilder::gamecomponents { struct ColorCorrectedUI; }
namespace mce::framebuilder::gamecomponents { struct DeferredWater; }
namespace mce::framebuilder::gamecomponents { struct EditorHighlightConfiguration; }
namespace mce::framebuilder::gamecomponents { struct FadeToBlackEffect; }
namespace mce::framebuilder::gamecomponents { struct FirstPersonPlayerShadowCaster; }
namespace mce::framebuilder::gamecomponents { struct FullScreenOverlayObject; }
namespace mce::framebuilder::gamecomponents { struct FullScreenOverlayObjectDoNotRenderInScreenshot; }
namespace mce::framebuilder::gamecomponents { struct Gameface; }
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
namespace mce::framebuilder::gamecomponents { struct Highlighted; }
namespace mce::framebuilder::gamecomponents { struct IBLClouds; }
namespace mce::framebuilder::gamecomponents { struct InLevelCubeMapObject; }
namespace mce::framebuilder::gamecomponents { struct InMenuCubeMapObject; }
namespace mce::framebuilder::gamecomponents { struct InsideBlockEffect; }
namespace mce::framebuilder::gamecomponents { struct ItemInHandObject; }
namespace mce::framebuilder::gamecomponents { struct ItemShadow; }
namespace mce::framebuilder::gamecomponents { struct Lead; }
namespace mce::framebuilder::gamecomponents { struct MotionOnly; }
namespace mce::framebuilder::gamecomponents { struct NameTag; }
namespace mce::framebuilder::gamecomponents { struct NonShadowOnlyObject; }
namespace mce::framebuilder::gamecomponents { struct OverlayUI; }
namespace mce::framebuilder::gamecomponents { struct ParticleObject; }
namespace mce::framebuilder::gamecomponents { struct PersistentUIElement; }
namespace mce::framebuilder::gamecomponents { struct PlayerUI; }
namespace mce::framebuilder::gamecomponents { struct PlayerVision; }
namespace mce::framebuilder::gamecomponents { struct SceneObject; }
namespace mce::framebuilder::gamecomponents { struct SceneObjectActors; }
namespace mce::framebuilder::gamecomponents { struct SceneObjectBanners; }
namespace mce::framebuilder::gamecomponents { struct SceneOverlayObject; }
namespace mce::framebuilder::gamecomponents { struct SceneSky; }
namespace mce::framebuilder::gamecomponents { struct SceneSkyObject; }
namespace mce::framebuilder::gamecomponents { struct SceneVolumeBuffers; }
namespace mce::framebuilder::gamecomponents { struct ScreenshotCapture; }
namespace mce::framebuilder::gamecomponents { struct SelectionOverlayObject; }
namespace mce::framebuilder::gamecomponents { struct ServerGraphicsOverrideParameters; }
namespace mce::framebuilder::gamecomponents { struct ShadowAtlasFrameData; }
namespace mce::framebuilder::gamecomponents { struct ShadowOverlay; }
namespace mce::framebuilder::gamecomponents { struct ShadowVolume; }
namespace mce::framebuilder::gamecomponents { struct SimpleItemShadow; }
namespace mce::framebuilder::gamecomponents { struct SimpleShadow; }
namespace mce::framebuilder::gamecomponents { struct SkyAmbientSamples; }
namespace mce::framebuilder::gamecomponents { struct ThirdPersonItemInHandObject; }
namespace mce::framebuilder::gamecomponents { struct TransitioningVolumeBuffers; }
namespace mce::framebuilder::gamecomponents { struct TransparentItemInWorldObject; }
namespace mce::framebuilder::gamecomponents { struct UIMeshCapture; }
namespace mce::framebuilder::gamecomponents { struct UIStructureVolumeCapture; }
namespace mce::framebuilder::gamecomponents { struct VolumetricFog; }
namespace mce::framebuilder::gamecomponents { struct VoxelVolumeBuffers; }
namespace mce::framebuilder::gamecomponents { struct WaterHoleObject; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct EntityCreationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::IntraFrameAllocatorContainer&> mAllocator;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ClipSpaceOrigin>                 clipSaceOrigin;
    ::ll::TypedStorage<
        8,
        8,
        ::dragon::frameobject::Frame<
            ::mce::framebuilder::gamecomponents::ActorShadow,
            ::mce::framebuilder::gamecomponents::AlphaTestCracks,
            ::mce::framebuilder::gamecomponents::Atmosphere,
            ::mce::framebuilder::gamecomponents::BlendedCracksObject,
            ::mce::framebuilder::gamecomponents::DeferredWater,
            ::mce::framebuilder::gamecomponents::FadeToBlackEffect,
            ::mce::framebuilder::gamecomponents::FullScreenOverlayObject,
            ::mce::framebuilder::gamecomponents::FullScreenOverlayObjectDoNotRenderInScreenshot,
            ::mce::framebuilder::gamecomponents::Gameface,
            ::mce::framebuilder::gamecomponents::GameplayMetadata,
            ::mce::framebuilder::gamecomponents::IBLClouds,
            ::mce::framebuilder::gamecomponents::CloudObject,
            ::mce::framebuilder::gamecomponents::InLevelCubeMapObject,
            ::mce::framebuilder::gamecomponents::InMenuCubeMapObject,
            ::mce::framebuilder::gamecomponents::InsideBlockEffect,
            ::mce::framebuilder::gamecomponents::ItemInHandObject,
            ::mce::framebuilder::gamecomponents::ItemShadow,
            ::mce::framebuilder::gamecomponents::Lead,
            ::mce::framebuilder::gamecomponents::MotionOnly,
            ::mce::framebuilder::gamecomponents::OverlayUI,
            ::mce::framebuilder::gamecomponents::ParticleObject,
            ::mce::framebuilder::gamecomponents::PersistentUIElement,
            ::mce::framebuilder::gamecomponents::PlayerUI,
            ::mce::framebuilder::gamecomponents::ColorCorrectedUI,
            ::mce::framebuilder::gamecomponents::PlayerVision,
            ::mce::framebuilder::gamecomponents::FirstPersonPlayerShadowCaster,
            ::mce::framebuilder::gamecomponents::SceneObjectActors,
            ::mce::framebuilder::gamecomponents::SceneObjectBanners,
            ::mce::framebuilder::gamecomponents::SceneObject,
            ::mce::framebuilder::gamecomponents::SceneOverlayObject,
            ::mce::framebuilder::gamecomponents::SceneSky,
            ::mce::framebuilder::gamecomponents::SceneSkyObject,
            ::mce::framebuilder::gamecomponents::SceneVolumeBuffers,
            ::mce::framebuilder::gamecomponents::ServerGraphicsOverrideParameters,
            ::mce::framebuilder::gamecomponents::SimpleShadow,
            ::mce::framebuilder::gamecomponents::SimpleItemShadow,
            ::mce::framebuilder::gamecomponents::SelectionOverlayObject,
            ::mce::framebuilder::gamecomponents::NonShadowOnlyObject,
            ::mce::framebuilder::gamecomponents::ShadowOverlay,
            ::mce::framebuilder::gamecomponents::ShadowAtlasFrameData,
            ::mce::framebuilder::gamecomponents::ShadowVolume,
            ::mce::framebuilder::gamecomponents::ThirdPersonItemInHandObject,
            ::mce::framebuilder::gamecomponents::TransparentItemInWorldObject,
            ::mce::framebuilder::gamecomponents::TransitioningVolumeBuffers,
            ::mce::framebuilder::gamecomponents::VolumetricFog,
            ::mce::framebuilder::gamecomponents::VoxelVolumeBuffers,
            ::mce::framebuilder::gamecomponents::WaterHoleObject,
            ::mce::framebuilder::gamecomponents::UIStructureVolumeCapture,
            ::mce::framebuilder::gamecomponents::UIMeshCapture,
            ::mce::framebuilder::gamecomponents::ScreenshotCapture,
            ::mce::framebuilder::gamecomponents::NameTag,
            ::mce::framebuilder::gamecomponents::SkyAmbientSamples,
            ::mce::framebuilder::gamecomponents::BlockChanges,
            ::mce::framebuilder::gamecomponents::EditorHighlightConfiguration,
            ::mce::framebuilder::gamecomponents::Highlighted,
            ::mce::framebuilder::bgfxbridge::RTXMinecraftFrameRendererResources,
            ::mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources,
            ::mce::framebuilder::bgfxbridge::FancyFrameRendererResources>&>
                                                                                                     mFrame;
    ::ll::TypedStorage<8, 8, ::dragon::tasks::GraphicsTasks&>                                        mGraphicsTasks;
    ::ll::TypedStorage<8, 8, ::dragon::tasks::AsyncTasksScope&>                                      mAsyncTasks;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<::dragon::ResolvedVertexBufferResource>&> mVbResourceService;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<::dragon::ResolvedIndexBufferResource>&>  mIbResourceService;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<::dragon::ResolvedAccelerationStructureResource>&>
        mAsResourceService;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<::dragon::ResolvedMaterialResource>&>
        mMaterialResourceService;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<::dragon::ResolvedTextureResource>&> mTextureResourceService;
    ::ll::TypedStorage<8, 8, ::dragon::mesh::VertexDeclManager&>                                mVertexDeclManager;
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::BgfxPrimitiveIndexBuffer&>                mQuadIndexBuffer;
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::BgfxPrimitiveIndexBuffer&>                mSequenceIndexBuffer;
    ::ll::TypedStorage<8, 8, ::dragon::materials::MaterialResourceManager&>                     mMaterialsManager;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::LightingModels>                               mLightingModel;
    ::ll::TypedStorage<1, 1, bool> mPointLightShadingEnabled;
    ::ll::TypedStorage<1, 1, bool> mIsBVHRequired;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityCreationContext& operator=(EntityCreationContext const&);
    EntityCreationContext(EntityCreationContext const&);
    EntityCreationContext();
};

} // namespace mce::framebuilder::bgfxbridge
