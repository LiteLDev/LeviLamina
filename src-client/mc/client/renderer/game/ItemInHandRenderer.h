#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/minecraft_renderer/game/ItemContextFlags.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class Block;
class BlockType;
class IClientInstance;
class ItemStack;
class Level;
class Mob;
class Player;
class Tessellator;
class TextureTessellator;
class Vec3;
struct BlockTessellator;
struct Brightness;
struct ItemInHandRenderFrameId;
struct ItemRenderCall;
namespace dragon { struct RenderMetadata; }
namespace mce { class Camera; }
namespace mce { class MaterialPtr; }
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk113ade;
    ::ll::UntypedStorage<8, 152> mUnk44f329;
    ::ll::UntypedStorage<4, 4>   mUnk8112c3;
    ::ll::UntypedStorage<8, 8>   mUnkc5a94f;
    ::ll::UntypedStorage<8, 8>   mUnk67bffb;
    ::ll::UntypedStorage<4, 4>   mUnk989799;
    ::ll::UntypedStorage<4, 4>   mUnka4bb4a;
    ::ll::UntypedStorage<4, 4>   mUnk63627f;
    ::ll::UntypedStorage<4, 4>   mUnkcbeac9;
    ::ll::UntypedStorage<8, 8>   mUnkde70fc;
    ::ll::UntypedStorage<8, 16>  mUnk85f2d2;
    ::ll::UntypedStorage<8, 16>  mUnkd85f06;
    ::ll::UntypedStorage<8, 16>  mUnk7b403d;
    ::ll::UntypedStorage<8, 16>  mUnkde2698;
    ::ll::UntypedStorage<8, 16>  mUnkcfc13e;
    ::ll::UntypedStorage<8, 16>  mUnkbe23fa;
    ::ll::UntypedStorage<8, 16>  mUnkecc8d4;
    ::ll::UntypedStorage<8, 16>  mUnkfa2338;
    ::ll::UntypedStorage<8, 16>  mUnk456a6f;
    ::ll::UntypedStorage<8, 16>  mUnkc81b23;
    ::ll::UntypedStorage<8, 16>  mUnk85862e;
    ::ll::UntypedStorage<8, 16>  mUnk43bede;
    ::ll::UntypedStorage<8, 16>  mUnkfe4b4c;
    ::ll::UntypedStorage<8, 16>  mUnkbb7a7c;
    ::ll::UntypedStorage<8, 128> mUnk697a8d;
    ::ll::UntypedStorage<8, 32>  mUnk2188bd;
    ::ll::UntypedStorage<8, 8>   mUnk298471;
    ::ll::UntypedStorage<8, 8>   mUnk21b71e;
    ::ll::UntypedStorage<8, 8>   mUnkac37ff;
    ::ll::UntypedStorage<8, 8>   mUnk5a3ad8;
    ::ll::UntypedStorage<8, 16>  mUnk925b2b;
    ::ll::UntypedStorage<4, 64>  mUnkb5092a;
    ::ll::UntypedStorage<8, 16>  mUnk832760;
    ::ll::UntypedStorage<8, 8>   mUnk61eda9;
    ::ll::UntypedStorage<8, 8>   mUnke7ec2e;
    ::ll::UntypedStorage<1, 1>   mUnkede088;
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
    MCNAPI ItemInHandRenderer(
        ::IClientInstance&                     client,
        ::BlockTessellator&                    commonRenderer,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCNAPI void _applyDefaultItemTransforms(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::ItemStack const&             item,
        bool                           isInHandItem,
        ::BlockType const*             blockType,
        ::BlockShape                   blockShape,
        ::ItemRenderCall const*        renderObjectCall,
        bool                           posAndRotSetByJSON
    );

    MCNAPI void _applyMainhandItemTransforms(
        ::BaseActorRenderContext&      renderContext,
        ::Player&                      player,
        ::MatrixStack::MatrixStackRef& worldMatrix,
        float                          frameAlpha,
        bool                           matrixSetFromJson,
        bool                           useBlockTransforms
    );

    MCNAPI void _applyOffhandItemTransforms(
        ::BaseActorRenderContext&      renderContext,
        ::ItemRenderCall const*        renderObjectCall,
        ::Player&                      player,
        ::MatrixStack::MatrixStackRef& worldMatrix,
        float                          frameAlpha,
        bool                           matrixSetFromJson,
        ::ItemContextFlags             itemFlags
    );

    MCNAPI void _applyUseAnimation(
        ::BaseActorRenderContext&      renderContext,
        ::Player&                      player,
        ::MatrixStack::MatrixStackRef& worldMatrix,
        float                          frameAlpha
    );

    MCNAPI bool _areNotMatchingChemistrySticks(::ItemStack& itemBefore, ::ItemStack const& itemAfter);

    MCNAPI ::Vec3
    _calculateOffhandWorldTranslation(::Player const& player, ::BaseActorRenderContext const& renderContext) const;

    MCNAPI ::InHandUpdateType _checkAndUpdateIfItemChanged(
        ::ItemStack&       itemBefore,
        ::ItemStack const& itemAfter,
        bool               isMainHand,
        bool               slotChanged
    );

    MCNAPI ::ItemRenderCall* _getRenderCall(::Mob* mob, ::ItemStack const& itemInstance, int fallbackFrame);

    MCNAPI void
    _pushSparklerParticles(::BaseActorRenderContext& renderContext, ::ItemStack const& item, ::Level& level);

    MCNAPI ::ItemRenderCall&
    _rebuildItem(::BaseActorRenderContext& renderContext, ::Mob* mob, ::ItemStack const& item, int fallbackFrame);

    MCNAPI void _renderBannerBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        ::Brightness              lightEmission,
        float                     frameAlpha,
        float                     scale
    ) const;

    MCNAPI void _renderChestBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::BlockType const*        blockType,
        ::Actor&                  entity,
        bool                      isInHandItem
    ) const;

    MCNAPI void _renderConduitBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::Actor&                  entity,
        ::Brightness              lightEmission,
        float                     frameAlpha
    ) const;

    MCNAPI void _renderCopperGolemStatueBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        bool                      isFirstPerson,
        bool                      isInHandItem
    ) const;

    MCNAPI void _renderDecoratedPotBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        bool                      isFirstPerson
    ) const;

    MCNAPI void _renderDynamicTexturedItemInHands(
        ::BaseActorRenderContext& renderContext,
        ::Player&                 player,
        float                     xRot,
        float                     inverseArmHeight,
        float                     attackValue
    );

    MCNAPI void _renderFirstPersonHandsAndAttachables(::BaseActorRenderContext& renderContext, ::Player& player);

    MCNAPI void
    _renderFishingRod(::BaseActorRenderContext& renderContext, ::ItemStack const& item, ::Actor& entity) const;

    MCNAPI void _renderGlowstickBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        ::Brightness              lightEmission,
        float                     frameAlpha,
        ::ItemContextFlags        itemFlags,
        float                     scale
    );

    MCNAPI void _renderItemInMainHand(
        ::BaseActorRenderContext& renderContext,
        ::Player&                 player,
        float                     xRot,
        float                     inverseArmHeight,
        float                     attackValue
    );

    MCNAPI void _renderItemInOffhand(
        ::BaseActorRenderContext& renderContext,
        ::Player&                 player,
        float                     xRot,
        float                     inverseArmHeight,
        float                     attackValue
    );

    MCNAPI void _renderMiniMapHand(::BaseActorRenderContext& renderContext, ::Player& player, bool inOffhand);

    MCNAPI void
    _renderPhotoMapItem(::BaseActorRenderContext& renderContext, ::Player& player, float frameAlpha, bool isMainHand);

    MCNAPI void _renderShulkerBoxBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        ::Brightness              lightEmission,
        float                     frameAlpha
    ) const;

    MCNAPI void _renderSkullBlockItem(
        ::BaseActorRenderContext& renderContext,
        ::dragon::RenderMetadata  renderMetadata,
        ::ItemStack const&        item,
        ::Actor&                  entity,
        ::Brightness              lightEmission,
        float                     frameAlpha
    ) const;

    MCNAPI bool _shouldRenderOffhandItem(::Player& player) const;

    MCNAPI void _tessellateBlockItem(::Tessellator& tessellator, ::BlockTessellator& t, ::Block const& block);

    MCNAPI void _tessellateTextureItem(
        ::BaseActorRenderContext& renderContext,
        ::TextureTessellator&     textureTessellator,
        ::Mob*                    mob,
        ::ItemStack const&        item,
        int                       fallbackFrame,
        ushort&                   heightOut,
        ushort&                   widthOut
    );

    MCNAPI void _transformOffhandItem(::MatrixStack::MatrixStackRef& worldMatrix);

    MCNAPI void _transformOffhandTool(::MatrixStack::MatrixStackRef& worldMatrix, ::ItemStack const& item, float a);

    MCNAPI void _transformWorldMatrixFromJson(
        ::MatrixStack::MatrixStackRef& worldMatrix,
        ::ItemStack const&             item,
        bool                           isMainHand,
        ::ItemContextFlags             itemFlags
    );

    MCNAPI void clearRenderObjects();

    MCNAPI ::mce::MaterialPtr const&
    getObjectMaterial(::ItemRenderCall const& renderObject, ::ItemContextFlags itemFlags) const;

    MCNAPI ::ItemRenderCall const&
    getRenderCallAtFrame(::BaseActorRenderContext& renderContext, ::ItemStack const& item, int frame);

    MCNAPI void initMaterials(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCNAPI void renderFirstPerson(::BaseActorRenderContext& renderContext, ::ItemContextFlags itemFlags);

    MCNAPI void renderItem(
        ::BaseActorRenderContext& renderContext,
        ::Actor&                  entity,
        ::ItemStack const&        item,
        bool                      posAndRotSetByJSON,
        ::ItemContextFlags        itemFlags,
        bool                      useMatrixAsIs,
        bool                      renderingMainHand
    );

    MCNAPI void renderItemNew(
        ::BaseActorRenderContext& renderContext,
        ::Actor&                  entity,
        ::ItemStack const&        item,
        ::ItemContextFlags        itemFlags,
        ::Brightness              lightEmission
    );

    MCNAPI void
    renderMainhandItem(::BaseActorRenderContext& renderContext, ::Player& player, ::ItemContextFlags itemFlags);

    MCNAPI void renderObject(
        ::BaseActorRenderContext&       renderContext,
        ::ItemRenderCall const&         renderObject,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemContextFlags              itemFlags
    );

    MCNAPI void
    renderOffhandItem(::BaseActorRenderContext& renderContext, ::Player& player, ::ItemContextFlags itemFlags);

    MCNAPI void
    tessellateAtFrame(::BaseActorRenderContext& renderContext, ::Mob* mob, ::ItemStack const& item, int frame);

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::RenderMetadata _createRenderMetadata(
        ::BaseActorRenderContext const& renderContext,
        ::Actor const&                  entity,
        ::ItemStack const&              item
    );

    MCNAPI static bool canTessellateAsBlockItem(::ItemStack const& item);

    MCNAPI static void computeMatrixForDynamicTexturedItemInHands(
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
    MCNAPI void* $ctor(
        ::IClientInstance&                     client,
        ::BlockTessellator&                    commonRenderer,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
