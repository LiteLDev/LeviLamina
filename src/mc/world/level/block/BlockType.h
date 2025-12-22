#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/AttachmentType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/states/BlockState.h"
#include "mc/world/level/block/states/BlockStateInstance.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/common/NewBlockID.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/container/Cache.h"
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/util/IntRange.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/NoteBlockInstrument.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/block_events/BlockEventManager.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#include "mc/world/level/block/components/NetEaseBlockComponentStorage.h"
#include "mc/world/phys/AABB.h"
#include <optional>
#include <type_traits>

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockItem;
class BlockPos;
class BlockSource;
class BlockState;
class BlockStateGroup;
class BlockStateInstance;
class Container;
class DefinitionEvent;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class IResourceDropsStrategy;
class ItemActor;
class ItemInstance;
class ItemStack;
class Material;
class MobSpawnerData;
class Player;
class Randomize;
class RenderParams;
class SemVersion;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockAnimateTickData;
struct BlockComponentDescription;
struct BlockComponentFinalizerForRendererContext;
struct BlockGraphicsModeChangeContext;
struct CommandName;
struct CopperBehavior;
struct ResourceDrops;
struct ResourceDropsContext;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace br::spawn { struct EntityType; }
// clang-format on

class BlockType {
public:
    template <typename T>
        requires(std::is_integral_v<T> || std::is_enum_v<T>)
    std::optional<T> getState(uint64 id, ushort data) const {
        auto it = mStates->find(id);

        if (it == mStates->end()) {
            for (auto const& collection : *mAlteredStateCollections) {
                if (collection && collection->mBlockState->get().mID == id) {
                    auto result = collection->getState(*this, data);
                    if (result) {
                        return std::optional<T>{static_cast<T>(*result)};
                    }
                }
            }

            return std::nullopt;
        }

        return it->second.get<T>(data);
    }

    template <typename T>
    std::optional<T> getState(BlockState const& stateType, ushort data) const {
        return getState<T>(stateType.mID, data);
    }

    template <typename T>
        requires(std::is_integral_v<T> || std::is_enum_v<T>)
    optional_ref<Block const> trySetState(uint64 id, T val, ushort data) {
        auto it = mStates->find(id);

        if (it != mStates->end()) {
            auto& stateInstance = it->second;

            if (static_cast<uchar>(val) < stateInstance.mVariationCount) {
                ushort maskedData = (data & ~stateInstance.mMask)
                                  | (static_cast<ushort>(val) << (stateInstance.mEndBit - stateInstance.mNumBits + 1));

                if (maskedData < mBlockPermutations->size()) {
                    return *mBlockPermutations->at(maskedData);
                }
                return nullptr;
            }
        }

        for (auto& collection : *mAlteredStateCollections) {
            if (collection && collection->mBlockState->get().mID == id) {
                auto result = collection->setState(*this, data, val);
                if (result) {
                    return result;
                }
            }
        }

        return mReturnDefaultBlockOnUnidentifiedBlockState ? mDefaultState : nullptr;
    }

    template <typename T>
    optional_ref<Block const> trySetState(BlockState const& stateType, T val, ushort data) {
        return trySetState(stateType.mID, val, data);
    }

public:
    // BlockType inner types declare
    // clang-format off
    struct AlteredStateCollection;
    struct HorizontalDirectionBits;
    struct NameInfo;
    struct RearrangedStateCollection;
    struct RemovedStateCollection;
    // clang-format on

    // BlockType inner types define
    struct AlteredStateCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockState const>> mBlockState;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::optional<int> getState(::BlockType const&, int) const = 0;

        virtual ::Block const* setState(::BlockType const&, int, int) const = 0;

        virtual ~AlteredStateCollection() = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static bool _checkVersioningRequirements(::SemVersion const& removedSupportVersion);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mNorth;
        ::ll::TypedStorage<1, 1, bool> mEast;
        ::ll::TypedStorage<1, 1, bool> mSouth;
        ::ll::TypedStorage<1, 1, bool> mWest;
        // NOLINTEND
    };

    struct NameInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString> mRawName;
        ::ll::TypedStorage<8, 32, ::std::string>  mNamespaceName;
        ::ll::TypedStorage<8, 48, ::HashedString> mFullName;
        ::ll::TypedStorage<8, 48, ::HashedString> mPreFlatteningName;
        // NOLINTEND

    public:
        // prevent constructor by default
        NameInfo& operator=(NameInfo const&);
        NameInfo(NameInfo const&);
        NameInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::BlockType::NameInfo& operator=(::BlockType::NameInfo&&);

        MCAPI ~NameInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RearrangedStateCollection inner types define
        using GetterType = ::std::function<::std::optional<int>(::BlockType const&, int)>;

        using SetterType = ::std::function<::Block const*(::BlockType const&, int, int)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::std::optional<int>(::BlockType const&, int)>> mGetter;
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(::BlockType const&, int, int)>>  mSetter;
        // NOLINTEND

    public:
        // prevent constructor by default
        RearrangedStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::optional<int> getState(::BlockType const& blockType, int blockData) const /*override*/;

        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const /*override*/;

        virtual ~RearrangedStateCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RearrangedStateCollection(
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter
        );
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        add(::BlockType&                                                   blockType,
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter,
            ::SemVersion const&                                            removedSupportVersion);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter
        );
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::optional<int> $getState(::BlockType const& blockType, int blockData) const;

        MCAPI ::Block const* $setState(::BlockType const& blockType, int blockData, int stateData) const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct RemovedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RemovedStateCollection inner types declare
        // clang-format off
        struct SplitBlock;
        // clang-format on

        // RemovedStateCollection inner types define
        struct SplitBlock {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, int>                                   mData;
            ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockType>> mBlockType;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockType::RemovedStateCollection::SplitBlock>> mSplitBlocks;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::optional<int> getState(::BlockType const& blockType, int) const /*override*/;

        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const /*override*/;

        virtual ~RemovedStateCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        add(::BlockState const&                                              stateRef,
            ::std::vector<::BlockType::RemovedStateCollection::SplitBlock>&& splitBlocks,
            ::SemVersion const&                                              removedSupportVersion);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::optional<int> $getState(::BlockType const& blockType, int) const;

        MCAPI ::Block const* $setState(::BlockType const& blockType, int blockData, int stateData) const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI static optional_ref<BlockType>       tryGetFromRegistry(HashedString const& name);
    LLNDAPI static optional_ref<BlockType const> tryGetFromRegistry(uint legacyBlockID);

    LLNDAPI static optional_ref<BlockType> tryGetFromRegistry(std::string_view name);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mDescriptionId;
    ::ll::TypedStorage<8, 104, ::BlockComponentStorage>      mComponents;
    ::ll::TypedStorage<8, 176, ::BlockType::NameInfo>        mNameInfo;
    ::ll::TypedStorage<8, 8, ::BlockProperty>                mProperties;
    ::ll::TypedStorage<1, 1, bool>                           mFancy;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>             mRenderLayer;
    ::ll::TypedStorage<1, 1, bool>                           mRenderLayerCanRenderAsOpaque;
    ::ll::TypedStorage<1, 1, ::BlockActorType>               mBlockEntityType;
    ::ll::TypedStorage<4, 4, float>                          mThickness;
    ::ll::TypedStorage<1, 1, bool>                           mCanSlide;
    ::ll::TypedStorage<1, 1, bool>                           mCanReactToNeighborsDuringInstatick;
    ::ll::TypedStorage<1, 1, bool>                           mIsInteraction;
    ::ll::TypedStorage<4, 4, float>                          mGravity;
    ::ll::TypedStorage<8, 8, ::Material const&>              mMaterial;
    ::ll::TypedStorage<1, 1, bool>                           mFalling;
    ::ll::TypedStorage<4, 4, float>                          mParticleQuantityScalar;
    ::ll::TypedStorage<4, 4, ::CreativeItemCategory>         mCreativeCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                 mCreativeGroup;
    ::ll::TypedStorage<1, 1, bool>                           mIsHiddenInCommands;
    ::ll::TypedStorage<1, 1, bool>                           mAllowsRunes;
    ::ll::TypedStorage<1, 1, bool>                           mCanBeBrokenFromFalling;
    ::ll::TypedStorage<1, 1, bool>                           mCanBeOriginalSurface;
    ::ll::TypedStorage<1, 1, bool>                           mSolid;
    ::ll::TypedStorage<1, 1, bool>                           mPushesOutItems;
    ::ll::TypedStorage<1, 1, bool>                           mIgnoreBlockForInsideCubeRenderer;
    ::ll::TypedStorage<1, 1, bool>                           mIsTrapdoor;
    ::ll::TypedStorage<1, 1, bool>                           mIsDoor;
    ::ll::TypedStorage<1, 1, bool>                           mIsOpaqueFullBlock;
    ::ll::TypedStorage<4, 4, float>                          mTranslucency;
    ::ll::TypedStorage<1, 1, bool>                           mShouldRandomTickExtraLayer;
    ::ll::TypedStorage<1, 1, bool>                           mIsMobPiece;
    ::ll::TypedStorage<1, 1, bool>                           mCanBeExtraBlock;
    ::ll::TypedStorage<1, 1, bool>                           mCanPropagateBrightness;
    ::ll::TypedStorage<1, 1, ::Brightness>                   mLightBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                   mLightEmission;
    ::ll::TypedStorage<4, 16, ::mce::Color>                  mMapColor;
    ::ll::TypedStorage<4, 4, float>                          mFriction;
    ::ll::TypedStorage<4, 4, ::NoteBlockInstrument>          mNoteBlockInstrument;
    ::ll::TypedStorage<1, 1, ::TintMethod>                   mTintMethod;
    ::ll::TypedStorage<1, 1, bool>                           mReturnDefaultBlockOnUnidentifiedBlockState;
    ::ll::TypedStorage<2, 2, ::NewBlockID>                   mID;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>             mMinRequiredBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                           mIsVanilla;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mTags;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<1, 1, bool>                                          mDataDrivenVanillaBlocksAndItemsEnabled;
    ::ll::TypedStorage<4, 24, ::AABB>                                       mVisualShape;
    ::ll::TypedStorage<4, 4, uint>                                          mBitsUsed;
    ::ll::TypedStorage<4, 4, uint>                                          mTotalBitsUsed;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::BlockStateInstance>>     mStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>> mStateNameMap;
    ::ll::TypedStorage<8, 8, uint64>                                        mCreativeEnumState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Block>>>    mBlockPermutations;
    ::ll::TypedStorage<8, 8, ::Block const*>                                mDefaultState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BlockTrait::IGetPlacementBlockCallback>>>
                                                                                     mGetPlacementBlockCallbacks;
    ::ll::TypedStorage<8, 72, ::Core::Cache<ushort, ::Block const*, ::Block const*>> mLegacyDataLookupTable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockStateGroup>>                   mBlockStateGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IResourceDropsStrategy>>            mResourceDropsStrategy;
    ::ll::TypedStorage<4, 8, ::IntRange>                                             mExperienceDropRange;
    ::ll::TypedStorage<1, 1, bool>                                                   mRequiresCorrectToolForDrops;
    ::ll::TypedStorage<8, 104, ::NetEaseBlockComponentStorage>                       mNetEaseComponentStorage;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockType::AlteredStateCollection>>>
                                                                                      mAlteredStateCollections;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::BlockClientPredictionOverrides, 7>> mClientPredictionOverrides;
    ::ll::TypedStorage<8, 32, ::BlockEvents::BlockEventManager>                       mEventManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry>>   mShapeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockType& operator=(BlockType const&);
    BlockType(BlockType const&);
    BlockType();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockType();

    virtual ::std::shared_ptr<::BlockActor> newBlockEntity(::BlockPos const& pos, ::Block const& block) const;

    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const;

    virtual bool
    hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual ::AABB const& getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    virtual bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const;

    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    virtual bool hasVariableLighting() const;

    virtual bool isStrippable(::Block const& srcBlock) const;

    virtual ::Block const& getStrippedBlock(::Block const& srcBlock) const;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const;

    virtual bool canConnect(::Block const&, uchar toOther, ::Block const& thisBlock) const;

    virtual bool isMovingBlock() const;

    virtual ::CopperBehavior const* tryGetCopperBehavior() const;

    virtual bool isStemBlock() const;

    virtual bool isContainerBlock() const;

    virtual bool isCraftingBlock() const;

    virtual bool isLavaBlocking() const;

    virtual bool isFenceBlock() const;

    virtual bool isFenceGateBlock() const;

    virtual bool isThinFenceBlock() const;

    virtual bool isWallBlock() const;

    virtual bool isStairBlock() const;

    virtual bool isSlabBlock() const;

    virtual bool isDoorBlock() const;

    virtual bool isChestBlock() const;

    virtual bool isRailBlock() const;

    virtual bool isButtonBlock() const;

    virtual bool isLeverBlock() const;

    virtual bool isCandleCakeBlock() const;

    virtual bool isMultifaceBlock() const;

    virtual bool isSignalSource() const;

    virtual bool isConsumerComponent() const;

    virtual bool canBeOriginalSurface(bool) const;

    virtual bool isSilentWhenJumpingOff() const;

    virtual bool isValidAuxValue(int value) const;

    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    virtual ::Block const& sanitizeFillBlock(::Block const& block) const;

    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    virtual ::std::optional<::HashedString> getRequiredMedium() const;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    virtual void
    handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    virtual bool shouldDispense(::BlockSource& region, ::Container& container) const;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    virtual void
    transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;

    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    virtual bool detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    virtual bool isBounceBlock() const;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    virtual bool isFilteredOut(::BlockRenderLayer) const;

    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    virtual bool ignoreEntitiesOnPistonMove(::Block const& block) const;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    virtual bool mayConsumeFertilizer(::BlockSource& region) const;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    virtual bool mayPick() const;

    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    virtual void
    destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;

    virtual bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void
    spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    virtual ::Block const& getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    virtual int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    virtual bool attack(::Player* player, ::BlockPos const& pos) const;

    virtual bool shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    virtual bool canBeBuiltOver(
        ::Block const&     block,
        ::BlockSource&     region,
        ::BlockPos const&  pos,
        ::BlockItem const& newItem
    ) const;

    virtual bool canBeBuiltOver(::Block const& block, ::BlockSource&, ::BlockPos const&) const;

    virtual void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;

    virtual void executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    virtual bool shouldStopFalling(::Actor& entity) const;

    virtual bool pushesUpFallingBlocks() const;

    virtual bool canHaveExtraData() const;

    virtual bool hasComparatorSignal() const;

    virtual int
    getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    virtual bool canSlide(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool canInstatick() const;

    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    virtual void notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool causesFreezeEffect() const;

    virtual ::std::string buildDescriptionId(::Block const&) const;

    virtual bool isAuxValueRelevantForPicking() const;

    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    virtual float getShadeBrightness(::Block const& block) const;

    virtual int telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getVariant(::Block const& block) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual ::Block const& getRenderBlock() const;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const;

    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void animateTick(::BlockAnimateTickData const&) const;

    virtual ::BlockType& init();

    virtual ::Brightness getLightEmission(::Block const&) const;

    virtual ::Block const* tryLegacyUpgrade(ushort) const;

    virtual bool dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;

    virtual ::Block const* tryGetInfested(::Block const&) const;

    virtual ::Block const* tryGetUninfested(::Block const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    virtual bool shouldTickOnSetBlock() const;

    virtual bool isInteractiveBlock() const;

    virtual bool allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    virtual ::BlockRenderLayer getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;

    virtual int getExtraRenderLayers() const;

    virtual ::HashedString const& getCullingLayer() const;

    virtual ::Brightness getLight(::Block const&) const;

    virtual ::Brightness getEmissiveBrightness(::Block const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockType(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _executeEvent(
        ::std::string const&                                                  name,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCAPI bool addAABB(::AABB const& shape, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const;

    MCAPI ::BlockType& addBlockProperties(::BlockProperty addedProperties);

    MCAPI ::BlockType& addComponent(::BlockComponentDescription const& blockComponentDescription);

    MCAPI ::BlockType& addState(::BlockState const& state);

    MCAPI ::BlockType& addState(::BlockState const& state, uint64 variationCount);

    MCAPI ::BlockType& addTag(::HashedString const& tag);

    MCAPI ::BlockType& addTrait(::BlockTrait::ITrait const& trait);

    MCAPI bool anyOf(::gsl::span<::std::reference_wrapper<::HashedString const> const> const& blockTypeIdList) const;

    MCAPI ::std::string buildDescriptionName(::Block const& block) const;

    MCAPI void createBlockPermutations(uint latestUpdaterVersion);

    MCAPI ::WeakPtr<::BlockType> createWeakPtr() const;

    MCAPI void executeEvent(::std::string const& name, ::RenderParams& params) const;

    MCAPI void finalizeBlockComponentStorage();

    MCAPI_C void
    finalizeBlockComponentStorageForRendering(::BlockComponentFinalizerForRendererContext& finalizerContext);

    MCAPI void forEachBlockPermutation(::brstd::function_ref<bool(::Block const&)> callback) const;

    MCAPI_C void forEachBlockStateInstance(::brstd::function_ref<bool(::BlockStateInstance const&)> callback) const;

    MCAPI short getBlockItemId() const;

    MCAPI ::BlockState const* getBlockState(::HashedString const& name) const;

    MCAPI ::std::vector<::CommandName> getCommandNames() const;

    MCAPI void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI ::ResourceDrops getResourceDrops(
        ::Block const&                block,
        ::Randomize&                  randomize,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI ::Block const& getStateFromLegacyData(ushort data) const;

    MCAPI bool hasState(::BlockState const& stateType) const;

    MCAPI bool hasTag(::HashedString const& tag) const;

    MCAPI_C bool isDuplicatedAliasName() const;

    MCAPI bool isValidSpawn(
        ::BlockSource&                 region,
        ::Block const&                 state,
        ::BlockPos                     pos,
        ::br::spawn::EntityType const& entityType
    ) const;

    MCAPI void onFallOnBase(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI ::BlockType& overrideBlockProperties(::BlockProperty newProperties);

    MCAPI ::BlockType& setAllowsRunes(bool interference);

    MCAPI ::BlockType& setCanBeExtraBlock(bool state);

    MCAPI ::BlockType& setCanBeOriginalSurface(bool canBeOriginalSurface);

    MCAPI ::BlockType& setCategory(::CreativeItemCategory creativeCategory);

    MCAPI ::BlockType& setCreativeGroup(::std::string const& value);

    MCAPI ::BlockType& setExperienceDrop(::IntRange dropRange);

    MCAPI ::BlockType& setFriction(float f);

    MCAPI ::BlockType& setInstrument(::NoteBlockInstrument instrument);

    MCAPI ::BlockType& setIsHiddenInCommands(bool isHiddenInCommands);

    MCAPI ::BlockType& setIsValidSpawn(
        bool (*predicate)(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&)
    );

    MCAPI ::BlockType& setLightBlock(::Brightness brightness);

    MCAPI ::BlockType& setLightEmission(::Brightness brightness);

    MCAPI ::BlockType& setMapColor(::mce::Color const& color);

    MCAPI ::BlockType& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI ::BlockType& setNameId(::std::string const& id);

    MCAPI_C void setPermutationsBlockGraphicsAsUnknownBlock();

    MCAPI ::BlockType& setRequiresCorrectToolForDrops();

    MCAPI ::BlockType& setTintMethod(::TintMethod tintMethod);

    MCAPI ::BlockType& setTranslucency(float translucency);

    MCAPI bool shouldRandomTick() const;

    MCAPI bool shouldTriggerOnStandOn(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::Randomize&                  randomize,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI ::Block const* tryGetStateFromLegacyData(ushort data) const;

    MCAPI bool updateTallestCollisionShape(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::AABB&                                            result,
        ::Vec3 const&                                      posToMinimizeDistanceToIfMatchingHeight,
        float&                                             currentDistanceSqr
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string buildDescriptionIdFromNameInfo(::BlockType::NameInfo const& nameInfo);

    MCAPI static ::BlockType::NameInfo extractBlockNameInfo(::std::string const& name);

    MCAPI static uchar getPlacementFacingAll(::Actor const& entity, ::BlockPos const& pos, float yRotOffsetDegree);

    MCAPI static ::ItemActor* popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemStack const& item);

    MCAPI static ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const& itemInstance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();

    MCAPI static float const& SIZE_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::BlockActor> $newBlockEntity(::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCFOLD bool
    $hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    MCAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    MCAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCFOLD ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCAPI ::AABB const& $getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

    MCFOLD void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCFOLD void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCFOLD bool $hasVariableLighting() const;

    MCFOLD bool $isStrippable(::Block const& srcBlock) const;

    MCFOLD ::Block const& $getStrippedBlock(::Block const& srcBlock) const;

    MCAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCAPI bool $canProvideMultifaceSupport(::Block const& block, uchar face) const;

    MCAPI bool $canConnect(::Block const&, uchar toOther, ::Block const& thisBlock) const;

    MCFOLD bool $isMovingBlock() const;

    MCFOLD ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCFOLD bool $isStemBlock() const;

    MCFOLD bool $isContainerBlock() const;

    MCFOLD bool $isCraftingBlock() const;

    MCAPI bool $isLavaBlocking() const;

    MCFOLD bool $isFenceBlock() const;

    MCFOLD bool $isFenceGateBlock() const;

    MCFOLD bool $isThinFenceBlock() const;

    MCFOLD bool $isWallBlock() const;

    MCFOLD bool $isStairBlock() const;

    MCFOLD bool $isSlabBlock() const;

    MCFOLD bool $isDoorBlock() const;

    MCFOLD bool $isChestBlock() const;

    MCFOLD bool $isRailBlock() const;

    MCFOLD bool $isButtonBlock() const;

    MCFOLD bool $isLeverBlock() const;

    MCFOLD bool $isCandleCakeBlock() const;

    MCFOLD bool $isMultifaceBlock() const;

    MCFOLD bool $isSignalSource() const;

    MCFOLD bool $isConsumerComponent() const;

    MCAPI bool $canBeOriginalSurface(bool) const;

    MCFOLD bool $isSilentWhenJumpingOff() const;

    MCFOLD bool $isValidAuxValue(int value) const;

    MCFOLD bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD ::Block const& $sanitizeFillBlock(::Block const& block) const;

    MCFOLD void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCAPI ::std::optional<::HashedString> $getRequiredMedium() const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCFOLD void
    $handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;

    MCAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCFOLD bool $shouldDispense(::BlockSource& region, ::Container& container) const;

    MCFOLD bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCFOLD void
    $transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;

    MCFOLD void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCFOLD void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    MCFOLD bool $detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCFOLD bool $isBounceBlock() const;

    MCFOLD bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCFOLD bool $isFilteredOut(::BlockRenderLayer) const;

    MCFOLD bool $canRenderSelectionOverlay(::BlockRenderLayer) const;

    MCFOLD bool $ignoreEntitiesOnPistonMove(::Block const& block) const;

    MCFOLD bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCFOLD bool $mayPick() const;

    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    MCFOLD bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD void
    $destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;

    MCFOLD bool $getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI int $calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCFOLD bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCFOLD bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI bool $shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI bool $canBeBuiltOver(
        ::Block const&     block,
        ::BlockSource&     region,
        ::BlockPos const&  pos,
        ::BlockItem const& newItem
    ) const;

    MCAPI bool $canBeBuiltOver(::Block const& block, ::BlockSource&, ::BlockPos const&) const;

    MCFOLD void $triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;

    MCAPI void $executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    MCAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCAPI bool $shouldStopFalling(::Actor& entity) const;

    MCFOLD bool $pushesUpFallingBlocks() const;

    MCFOLD bool $canHaveExtraData() const;

    MCFOLD bool $hasComparatorSignal() const;

    MCFOLD int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI bool $canSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canInstatick() const;

    MCFOLD bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    MCFOLD void $notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $causesFreezeEffect() const;

    MCFOLD ::std::string $buildDescriptionId(::Block const&) const;

    MCFOLD bool $isAuxValueRelevantForPicking() const;

    MCFOLD bool $isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCAPI float $getShadeBrightness(::Block const& block) const;

    MCAPI int $telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCFOLD ::Block const& $getRenderBlock() const;

    MCFOLD uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCFOLD ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCFOLD void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCFOLD void $animateTick(::BlockAnimateTickData const&) const;

    MCFOLD ::BlockType& $init();

    MCAPI ::Brightness $getLightEmission(::Block const&) const;

    MCFOLD ::Block const* $tryLegacyUpgrade(ushort) const;

    MCFOLD bool $dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;

    MCFOLD ::Block const* $tryGetInfested(::Block const&) const;

    MCFOLD ::Block const* $tryGetUninfested(::Block const&) const;

    MCFOLD void $_addHardCodedBlockComponents(::Experiments const&);

    MCFOLD void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCFOLD void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCFOLD bool $shouldTickOnSetBlock() const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;

    MCFOLD int $getExtraRenderLayers() const;

    MCAPI ::HashedString const& $getCullingLayer() const;

    MCAPI ::Brightness $getLight(::Block const&) const;

    MCFOLD ::Brightness $getEmissiveBrightness(::Block const&) const;

    MCFOLD ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCFOLD void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCFOLD void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
