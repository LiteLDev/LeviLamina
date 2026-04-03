#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/client/renderer/game/ItemInHandRenderFrameId.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/minecraft_renderer/game/ItemContextFlags.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BannerBlockActor;
class BaseActorRenderContext;
class Block;
class BlockTessellator;
class BlockType;
class ConduitBlockActor;
class DecoratedPotBlockActor;
class IClientInstance;
class ItemRenderCall;
class Level;
class Mob;
class Player;
class SerializedActorBlockActor;
class Tessellator;
class TextureTessellator;
class Vec3;
struct Brightness;
namespace dragon { struct RenderMetadata; }
namespace mce { class Camera; }
namespace mce { class TextureGroup; }
namespace mce { struct ViewportInfo; }
// clang-format on

class ItemInHandRenderer : public ::ActorShaderManager {
public:
    // ItemInHandRenderer inner types declare
    // clang-format off
    struct OffsetForLowAspectRatio;
    // clang-format on

    // ItemInHandRenderer inner types define
    struct OffsetForLowAspectRatio {
    public:
        // OffsetForLowAspectRatio inner types declare
        // clang-format off
        struct Scoped;
        // clang-format on

        // OffsetForLowAspectRatio inner types define
        enum class Direction : uchar {
            Left  = 0,
            Right = 1,
        };

        struct Scoped {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnk8b3a1f;
            ::ll::UntypedStorage<8, 8> mUnkad04bd;
            ::ll::UntypedStorage<8, 8> mUnk711535;
            ::ll::UntypedStorage<8, 8> mUnk673c3d;
            ::ll::UntypedStorage<1, 1> mUnk70d991;
            ::ll::UntypedStorage<4, 4> mUnk1a7539;
            ::ll::UntypedStorage<1, 1> mUnkb8460a;
            // NOLINTEND

        public:
            // prevent constructor by default
            Scoped& operator=(Scoped const&);
            Scoped(Scoped const&);
            Scoped();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~Scoped();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static bool apply(
            ::ItemInHandRenderer::OffsetForLowAspectRatio::Direction direction,
            ::MatrixStack::MatrixStackRef&                           worldMatrix,
            ::mce::ViewportInfo const&                               viewportInfo,
            ::mce::Camera const&                                     camera,
            bool                                                     isFirstPerson,
            float                                                    xScale
        );
        // NOLINTEND
    };

    using RenderMap = ::std::map<::ItemInHandRenderFrameId, ::ItemRenderCall>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack>                                            mItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                            mOffHandItem;
    ::ll::TypedStorage<4, 4, int>                                                      mSlot;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                       mClient;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextureTessellator>>                  mTextureTessellator;
    ::ll::TypedStorage<4, 4, float>                                                    mHeight;
    ::ll::TypedStorage<4, 4, float>                                                    mOldHeight;
    ::ll::TypedStorage<4, 4, float>                                                    mHeightOffHand;
    ::ll::TypedStorage<4, 4, float>                                                    mOldHeightOffHand;
    ::ll::TypedStorage<8, 8, ::BlockTessellator&>                                      mBlockTessellator;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatOpaqueBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatOpaqueBlockColor;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatAlphaBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatItem;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatBlendBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatBlendBlockNoColor;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatAlphaColoredBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatItemMultiColorTint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatAlphaOneSidedBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatAlphaOneSidedColoredBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatOpaqueBlockGlint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatAlphaBlockGlint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatItemGlint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mMatFishingLine;
    ::ll::TypedStorage<8, 128, ::std::array<::mce::MaterialPtr const*, 16>>            mMaterialMatrix;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                       mGlintTexture;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BannerBlockActor>>                    mBannerEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DecoratedPotBlockActor>>              mDecoratedPotEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SerializedActorBlockActor>>           mCopperGolemStatueEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConduitBlockActor>>                   mConduitEntity;
    ::ll::TypedStorage<8, 16, ::std::map<::ItemInHandRenderFrameId, ::ItemRenderCall>> mRenderObjects;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                mTransform;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mPauseStateChange;
    ::ll::TypedStorage<8, 8, ::std::chrono::duration<double, ::std::ratio<1, 1>>>      mTimer;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                  mLastTime;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsDeferredEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemInHandRenderer& operator=(ItemInHandRenderer const&);
    ItemInHandRenderer(ItemInHandRenderer const&);
    ItemInHandRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemInHandRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemInHandRenderer(
        ::IClientInstance&                     client,
        ::BlockTessellator&                    commonRenderer,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCAPI void _applyDefaultItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::ItemStack const&             item,
        bool                           isInHandItem,
        ::BlockType const*             blockType,
        ::BlockShape                   blockShape,
        ::ItemRenderCall const*        renderObjectCall,
        float                          heldItemScale,
        bool                           posAndRotSetByJSON
    );

    MCAPI void _applyMainhandItemTransforms(
        ::BaseActorRenderContext&      renderContext,
        ::Player&                      player,
        ::MatrixStack::MatrixStackRef& worldMatrix,
        float                          frameAlpha,
        bool                           matrixSetFromJson,
        bool                           useBlockTransforms
    );

    MCAPI void _applyOffhandItemTransforms(
        ::BaseActorRenderContext&      renderContext,
        ::ItemRenderCall const*        renderObjectCall,
        ::Player&                      player,
        ::MatrixStack::MatrixStackRef& worldMatrix,
        float                          frameAlpha,
        bool                           matrixSetFromJson,
        ::ItemContextFlags             itemFlags
    );

    MCAPI void _applyUseAnimation(
        ::BaseActorRenderContext&      renderContext,
        ::Player&                      player,
        ::MatrixStack::MatrixStackRef& worldMatrix,
        float                          frameAlpha
    );

    MCAPI bool _areNotMatchingChemistrySticks(::ItemStack& itemBefore, ::ItemStack const& itemAfter);

    MCAPI ::Vec3
    _calculateOffhandWorldTranslation(::Player const& player, ::BaseActorRenderContext const& renderContext) const;

    MCAPI ::InHandUpdateType _checkAndUpdateIfItemChanged(
        ::ItemStack&       itemBefore,
        ::ItemStack const& itemAfter,
        bool               isMainHand,
        bool               slotChanged
    );

    MCAPI ::ItemRenderCall* _getRenderCall(::Mob* mob, ::ItemStack const& itemInstance, int fallbackFrame);

    MCAPI void _pushSparklerParticles(::BaseActorRenderContext& renderContext, ::ItemStack const& item, ::Level& level);

    MCAPI ::ItemRenderCall&
    _rebuildItem(::BaseActorRenderContext& renderContext, ::Mob* mob, ::ItemStack const& item, int fallbackFrame);

    MCAPI void _renderBannerBlockItem(
        ::BaseActorRenderContext&           renderContext,
        ::dragon::RenderMetadata            renderMetadata,
        ::ItemStack const&                  item,
        ::Actor&                            entity,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor,
        float                               frameAlpha,
        float                               scale
    ) const;

    MCAPI void _renderChestBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::BlockType const*        blockType,
        ::Actor&                  entity,
        bool                      isInHandItem
    ) const;

    MCAPI void _renderConduitBlockItem(
        ::BaseActorRenderContext&           renderContext,
        ::dragon::RenderMetadata            renderMetadata,
        ::Actor&                            entity,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor,
        float                               frameAlpha
    ) const;

    MCAPI void _renderCopperGolemStatueBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        bool                      isFirstPerson,
        bool                      isInHandItem
    ) const;

    MCAPI void _renderDecoratedPotBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        bool                      isFirstPerson
    ) const;

    MCAPI void _renderDynamicTexturedItemInHands(
        ::BaseActorRenderContext& renderContext,
        ::Player&                 player,
        float                     xRot,
        float                     inverseArmHeight,
        float                     attackValue
    );

    MCAPI void _renderFirstPersonHandsAndAttachables(::BaseActorRenderContext& renderContext, ::Player& player);

    MCAPI void
    _renderFishingRod(::BaseActorRenderContext& renderContext, ::ItemStack const& item, ::Actor& entity) const;

    MCAPI void _renderGlowstickBlockItem(
        ::BaseActorRenderContext&           renderContext,
        ::dragon::RenderMetadata            renderMetadata,
        ::ItemStack const&                  item,
        ::Actor&                            entity,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor,
        float                               frameAlpha,
        ::ItemContextFlags                  itemFlags,
        float                               scale
    );

    MCAPI void _renderItemInMainHand(
        ::BaseActorRenderContext& renderContext,
        ::Player&                 player,
        float                     xRot,
        float                     inverseArmHeight,
        float                     attackValue
    );

    MCAPI void _renderItemInOffhand(
        ::BaseActorRenderContext& renderContext,
        ::Player&                 player,
        float                     xRot,
        float                     inverseArmHeight,
        float                     attackValue
    );

    MCAPI void _renderMiniMapHand(::BaseActorRenderContext& renderContext, ::Player& player, bool inOffhand);

    MCAPI void
    _renderPhotoMapItem(::BaseActorRenderContext& renderContext, ::Player& player, float frameAlpha, bool isMainHand);

    MCAPI void _renderShulkerBoxBlockItem(
        ::BaseActorRenderContext&           renderContext,
        ::dragon::RenderMetadata            renderMetadata,
        ::ItemStack const&                  item,
        ::Actor&                            entity,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor,
        float                               frameAlpha
    ) const;

    MCAPI void _renderSkullBlockItem(
        ::BaseActorRenderContext&           renderContext,
        ::dragon::RenderMetadata            renderMetadata,
        ::ItemStack const&                  item,
        ::Actor&                            entity,
        ::Brightness                        lightEmission,
        ::std::optional<::glm::vec3> const& lightEmissionColor,
        float                               frameAlpha
    ) const;

    MCAPI bool _shouldRenderOffhandItem(::Player& player) const;

    MCAPI void _tessellateBlockItem(::Tessellator& tessellator, ::BlockTessellator& t, ::Block const& block);

    MCAPI void _tessellateTextureItem(
        ::BaseActorRenderContext& renderContext,
        ::TextureTessellator&     textureTessellator,
        ::Mob*                    mob,
        ::ItemStack const&        item,
        int                       fallbackFrame,
        ushort&                   heightOut,
        ushort&                   widthOut
    );

    MCAPI void _transformOffhandItem(::MatrixStack::MatrixStackRef& worldMatrix);

    MCAPI void _transformOffhandTool(::MatrixStack::MatrixStackRef& worldMatrix, ::ItemStack const& item, float a);

    MCAPI void _transformWorldMatrixFromJson(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::ItemStack const&             item,
        bool                           isMainHand,
        ::ItemContextFlags             itemFlags,
        float                          textureScale
    );

    MCAPI void clearRenderObjects();

    MCAPI ::mce::MaterialPtr const&
    getObjectMaterial(::ItemRenderCall const& renderObject, ::ItemContextFlags itemFlags) const;

    MCAPI ::ItemRenderCall const&
    getRenderCallAtFrame(::BaseActorRenderContext& renderContext, ::ItemStack const& item, int frame);

    MCAPI void initMaterials(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCAPI void renderFirstPerson(::BaseActorRenderContext& renderContext, ::ItemContextFlags itemFlags);

    MCAPI void renderItem(
        ::BaseActorRenderContext& renderContext,
        ::Actor&                  entity,
        ::ItemStack const&        item,
        bool                      posAndRotSetByJSON,
        ::ItemContextFlags        itemFlags,
        bool                      useMatrixAsIs,
        bool                      renderingMainHand
    );

    MCAPI void renderItemNew(
        ::BaseActorRenderContext& renderContext,
        ::Actor&                  entity,
        ::ItemStack const&        item,
        ::ItemContextFlags        itemFlags,
        ::Brightness              lightEmission
    );

    MCAPI void
    renderMainhandItem(::BaseActorRenderContext& renderContext, ::Player& player, ::ItemContextFlags itemFlags);

    MCAPI void renderObject(
        ::BaseActorRenderContext&       renderContext,
        ::ItemRenderCall const&         renderObject,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemContextFlags              itemFlags
    );

    MCAPI void
    renderOffhandItem(::BaseActorRenderContext& renderContext, ::Player& player, ::ItemContextFlags itemFlags);

    MCAPI void
    tessellateAtFrame(::BaseActorRenderContext& renderContext, ::Mob* mob, ::ItemStack const& item, int frame);

    MCAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::dragon::RenderMetadata _createRenderMetadata(
        ::BaseActorRenderContext const& renderContext,
        ::Actor const&                  entity,
        ::ItemStack const&              item
    );

    MCAPI static bool canTessellateAsBlockItem(::ItemStack const& item);

    MCAPI static void computeMatrixForDynamicTexturedItemInHands(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::mce::ViewportInfo const&     viewportInfo,
        ::mce::Camera const&           camera,
        float                          xRot,
        float                          inverseArmHeight,
        float                          attackValue
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                     client,
        ::BlockTessellator&                    commonRenderer,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
