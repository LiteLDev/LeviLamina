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
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BannerBlockActor;
class BaseActorRenderContext;
class Block;
class BlockTessellator;
class ConduitBlockActor;
class DecoratedPotBlockActor;
class IClientInstance;
class ItemRenderCall;
class Mob;
class SerializedActorBlockActor;
class Tessellator;
class TextureTessellator;
struct Brightness;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
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
    ::ll::TypedStorage<4, 64, ::Matrix>                                                mPreFirstPersonItemRenderProj;
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
    virtual ~ItemInHandRenderer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemInHandRenderer(
        ::IClientInstance&                     client,
        ::BlockTessellator&                    commonRenderer,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCAPI ::ItemRenderCall&
    _rebuildItem(::BaseActorRenderContext& renderContext, ::Mob* mob, ::ItemStack const& item, int fallbackFrame);

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

    MCAPI void clearRenderObjects();

    MCAPI ::ItemRenderCall const&
    getRenderCallAtFrame(::BaseActorRenderContext& renderContext, ::ItemStack const& item, int frame);

    MCAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCAPI void
    renderFirstPerson(::BaseActorRenderContext& renderContext, ::Matrix const& prevProj, ::ItemContextFlags itemFlags);

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

    MCAPI void renderObject(
        ::BaseActorRenderContext&       renderContext,
        ::ItemRenderCall const&         renderObject,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemContextFlags              itemFlags
    );

    MCAPI void
    tessellateAtFrame(::BaseActorRenderContext& renderContext, ::Mob* mob, ::ItemStack const& item, int frame);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canTessellateAsBlockItem(::ItemStack const& item);
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
};
