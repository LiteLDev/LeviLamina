#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/states/BlockState.h"
#include "mc/world/level/block/states/BlockStateInstance.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/container/Cache.h"
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/LavaFlammable.h"
#include "mc/world/level/block/NoteBlockInstrument.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockComponentStorage;
class BlockItem;
class BlockPos;
class BlockSource;
class BlockState;
class BlockStateGroup;
class BlockStateInstance;
class Container;
class CopperBehavior;
class DefinitionEvent;
class DefinitionTrigger;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IConstBlockSource;
class IResourceDropsStrategy;
class ItemActor;
class ItemInstance;
class ItemStack;
class Material;
class MobSpawnerData;
class NetEaseBlockComponentStorage;
class Player;
class Random;
class Randomize;
class RenderParams;
class ScriptBlockCustomComponentsFinalizer;
class SemVersion;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockAnimateTickData;
struct BlockComponentDescription;
struct BlockGraphicsModeChangeContext;
struct Brightness;
struct CommandName;
struct IntRange;
struct NewBlockID;
struct ResourceDrops;
struct ResourceDropsContext;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockEventManager; }
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace br::spawn { struct EntityType; }
namespace mce { class Color; }
// clang-format on

class BlockLegacy {
public:
    // BlockLegacy inner types declare
    // clang-format off
    struct AlteredStateCollection;
    struct HorizontalDirectionBits;
    struct NameInfo;
    struct RearrangedStateCollection;
    struct RemovedStateCollection;
    // clang-format on

    // BlockLegacy inner types define
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::BlockLegacy::NameInfo& operator=(::BlockLegacy::NameInfo&&);

        MCAPI ~NameInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

    struct AlteredStateCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockState const>> mBlockState;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::optional<int> getState(::BlockLegacy const&, int) const = 0;

        // vIndex: 1
        virtual ::Block const* setState(::BlockLegacy const&, int, int) const = 0;

        // vIndex: 2
        virtual ~AlteredStateCollection() = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static bool _checkVersioningRequirements(::SemVersion const& removedSupportVersion);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct RemovedStateCollection : public ::BlockLegacy::AlteredStateCollection {
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
            ::ll::TypedStorage<4, 4, int>                                     mData;
            ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockLegacy>> mBlockLegacy;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock>> mSplitBlocks;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::optional<int> getState(::BlockLegacy const& blockLegacy, int) const /*override*/;

        // vIndex: 1
        virtual ::Block const* setState(::BlockLegacy const& blockLegacy, int blockData, int stateData) const
            /*override*/;

        // vIndex: 2
        virtual ~RemovedStateCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        add(::BlockState const&                                                stateRef,
            ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock>&& splitBlocks,
            ::SemVersion const&                                                removedSupportVersion);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::optional<int> $getState(::BlockLegacy const& blockLegacy, int) const;

        MCAPI ::Block const* $setState(::BlockLegacy const& blockLegacy, int blockData, int stateData) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockLegacy::AlteredStateCollection {
    public:
        // RearrangedStateCollection inner types define
        using GetterType = ::std::function<::std::optional<int>(::BlockLegacy const&, int)>;

        using SetterType = ::std::function<::Block const*(::BlockLegacy const&, int, int)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::std::optional<int>(::BlockLegacy const&, int)>> mGetter;
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(::BlockLegacy const&, int, int)>>  mSetter;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::optional<int> getState(::BlockLegacy const& blockLegacy, int blockData) const /*override*/;

        // vIndex: 1
        virtual ::Block const* setState(::BlockLegacy const& blockLegacy, int blockData, int stateData) const
            /*override*/;

        // vIndex: 2
        virtual ~RearrangedStateCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RearrangedStateCollection(
            ::BlockState const&                                              stateRef,
            ::std::function<::std::optional<int>(::BlockLegacy const&, int)> getter,
            ::std::function<::Block const*(::BlockLegacy const&, int, int)>  setter
        );
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        add(::BlockLegacy&                                                   blockLegacy,
            ::BlockState const&                                              stateRef,
            ::std::function<::std::optional<int>(::BlockLegacy const&, int)> getter,
            ::std::function<::Block const*(::BlockLegacy const&, int, int)>  setter,
            ::SemVersion const&                                              removedSupportVersion);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::BlockState const&                                              stateRef,
            ::std::function<::std::optional<int>(::BlockLegacy const&, int)> getter,
            ::std::function<::Block const*(::BlockLegacy const&, int, int)>  setter
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::optional<int> $getState(::BlockLegacy const& blockLegacy, int blockData) const;

        MCAPI ::Block const* $setState(::BlockLegacy const& blockLegacy, int blockData, int stateData) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI static optional_ref<BlockLegacy>       tryGetFromRegistry(std::string_view name);
    LLNDAPI static optional_ref<BlockLegacy const> tryGetFromRegistry(uint legacyBlockID);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mDescriptionId;
    ::ll::TypedStorage<8, 104, ::BlockComponentStorage>      mComponents;
    ::ll::TypedStorage<8, 176, ::BlockLegacy::NameInfo>      mNameInfo;
    ::ll::TypedStorage<8, 8, ::BlockProperty>                mProperties;
    ::ll::TypedStorage<1, 1, bool>                           mFancy;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>             mRenderLayer;
    ::ll::TypedStorage<1, 1, bool>                           mRenderLayerCanRenderAsOpaque;
    ::ll::TypedStorage<4, 4, ::BlockActorType>               mBlockEntityType;
    ::ll::TypedStorage<1, 1, bool>                           mAnimatedTexture;
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
    ::ll::TypedStorage<1, 1, bool>                           mShouldRandomTick;
    ::ll::TypedStorage<1, 1, bool>                           mShouldRandomTickExtraLayer;
    ::ll::TypedStorage<1, 1, bool>                           mIsMobPiece;
    ::ll::TypedStorage<1, 1, bool>                           mCanBeExtraBlock;
    ::ll::TypedStorage<1, 1, bool>                           mCanPropagateBrightness;
    ::ll::TypedStorage<1, 1, ::Brightness>                   mLightBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                   mLightEmission;
    ::ll::TypedStorage<4, 4, ::FlameOdds>                    mFlameOdds;
    ::ll::TypedStorage<4, 4, ::BurnOdds>                     mBurnOdds;
    ::ll::TypedStorage<1, 1, ::LavaFlammable>                mLavaFlammable;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockLegacy::AlteredStateCollection>>>
                                                                                      mAlteredStateCollections;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::BlockClientPredictionOverrides, 7>> mClientPredictionOverrides;
    ::ll::TypedStorage<8, 32, ::BlockEvents::BlockEventManager>                       mEventManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockLegacy();

    // vIndex: 1
    virtual ::std::shared_ptr<::BlockActor> newBlockEntity(::BlockPos const& pos, ::Block const& block) const;

    // vIndex: 2
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const;

    // vIndex: 3
    virtual bool
    hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    // vIndex: 4
    virtual ::HitResult
    clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    // vIndex: 7
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    // vIndex: 10
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB)
        const;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    // vIndex: 12
    virtual ::AABB const& getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    // vIndex: 14
    virtual bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    // vIndex: 16
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos, int& seed) const;

    // vIndex: 15
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const;

    // vIndex: 17
    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    // vIndex: 18
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 19
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    // vIndex: 20
    virtual bool hasVariableLighting() const;

    // vIndex: 21
    virtual bool isStrippable(::Block const& srcBlock) const;

    // vIndex: 22
    virtual ::Block const& getStrippedBlock(::Block const& srcBlock) const;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 24
    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const;

    // vIndex: 25
    virtual bool canConnect(::Block const&, uchar toOther, ::Block const& thisBlock) const;

    // vIndex: 26
    virtual bool isMovingBlock() const;

    // vIndex: 27
    virtual ::CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 28
    virtual bool isStemBlock() const;

    // vIndex: 29
    virtual bool isContainerBlock() const;

    // vIndex: 30
    virtual bool isCraftingBlock() const;

    // vIndex: 31
    virtual bool isLavaBlocking() const;

    // vIndex: 32
    virtual bool isFenceBlock() const;

    // vIndex: 33
    virtual bool isFenceGateBlock() const;

    // vIndex: 34
    virtual bool isThinFenceBlock() const;

    // vIndex: 35
    virtual bool isWallBlock() const;

    // vIndex: 36
    virtual bool isStairBlock() const;

    // vIndex: 37
    virtual bool isSlabBlock() const;

    // vIndex: 38
    virtual bool isDoorBlock() const;

    // vIndex: 39
    virtual bool isRailBlock() const;

    // vIndex: 40
    virtual bool isButtonBlock() const;

    // vIndex: 41
    virtual bool isLeverBlock() const;

    // vIndex: 42
    virtual bool isCandleCakeBlock() const;

    // vIndex: 43
    virtual bool isMultifaceBlock() const;

    // vIndex: 44
    virtual bool isSignalSource() const;

    // vIndex: 45
    virtual bool isConsumerComponent() const;

    // vIndex: 46
    virtual bool canBeOriginalSurface() const;

    // vIndex: 47
    virtual bool isSilentWhenJumpingOff() const;

    // vIndex: 48
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 49
    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    // vIndex: 50
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const;

    // vIndex: 51
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    // vIndex: 52
    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    // vIndex: 53
    virtual ::std::optional<::HashedString> getRequiredMedium() const;

    // vIndex: 54
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    // vIndex: 55
    virtual void
    handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;

    // vIndex: 56
    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    // vIndex: 58
    virtual bool shouldDispense(::BlockSource& region, ::Container& container) const;

    // vIndex: 59
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    // vIndex: 60
    virtual void
    transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;

    // vIndex: 61
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 62
    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    // vIndex: 63
    virtual bool detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 64
    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 65
    virtual void onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 66
    virtual void onStructureNeighborBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 68
    virtual void updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 69
    virtual bool isBounceBlock() const;

    // vIndex: 70
    virtual bool isPreservingMediumWhenPlaced(::BlockLegacy const* medium) const;

    // vIndex: 71
    virtual bool isFilteredOut(::BlockRenderLayer) const;

    // vIndex: 72
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    // vIndex: 73
    virtual bool ignoreEntitiesOnPistonMove(::Block const& block) const;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    // vIndex: 75
    virtual bool mayConsumeFertilizer(::BlockSource& region) const;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    // vIndex: 78
    virtual bool mayPick() const;

    // vIndex: 77
    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 82
    virtual bool tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    // vIndex: 83
    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    // vIndex: 85
    virtual void
    destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;

    // vIndex: 86
    virtual bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    // vIndex: 88
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    // vIndex: 91
    virtual void
    spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    // vIndex: 93
    virtual int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    // vIndex: 94
    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    // vIndex: 95
    virtual bool attack(::Player* player, ::BlockPos const& pos) const;

    // vIndex: 96
    virtual bool shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    // vIndex: 98
    virtual bool canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos, ::BlockItem const& newItem) const;

    // vIndex: 97
    virtual bool canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 99
    virtual void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;

    // vIndex: 100
    virtual void executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    // vIndex: 101
    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    // vIndex: 102
    virtual bool shouldStopFalling(::Actor& entity) const;

    // vIndex: 103
    virtual bool pushesUpFallingBlocks() const;

    // vIndex: 104
    virtual bool canHaveExtraData() const;

    // vIndex: 105
    virtual bool hasComparatorSignal() const;

    // vIndex: 106
    virtual int
    getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    // vIndex: 107
    virtual bool canSlide(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 108
    virtual bool canInstatick() const;

    // vIndex: 109
    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    // vIndex: 110
    virtual void notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 111
    virtual bool causesFreezeEffect() const;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const;

    // vIndex: 113
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 114
    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    // vIndex: 115
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    // vIndex: 116
    virtual float getShadeBrightness(::Block const& block) const;

    // vIndex: 117
    virtual int telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const;

    // vIndex: 119
    virtual bool canSpawnOn(::Actor*) const;

    // vIndex: 120
    virtual ::Block const& getRenderBlock() const;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const;

    // vIndex: 122
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    // vIndex: 124
    virtual void animateTick(::BlockAnimateTickData const&) const;

    // vIndex: 125
    virtual ::BlockLegacy& init();

    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const&) const;

    // vIndex: 127
    virtual ::Block const* tryLegacyUpgrade(ushort) const;

    // vIndex: 128
    virtual bool dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;

    // vIndex: 129
    virtual ::Block const* tryGetInfested(::Block const&) const;

    // vIndex: 130
    virtual ::Block const* tryGetUninfested(::Block const&) const;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&);

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 133
    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    // vIndex: 135
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    // vIndex: 138
    virtual bool isInteractiveBlock() const;

    // vIndex: 140
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face, ::std::optional<::Vec3>) const;

    // vIndex: 139
    virtual bool use(::Player&, ::BlockPos const&, uchar) const;

    // vIndex: 141
    virtual bool allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    // vIndex: 142
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 143
    virtual ::BlockRenderLayer getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;

    // vIndex: 144
    virtual int getExtraRenderLayers() const;

    // vIndex: 145
    virtual ::Brightness getLight(::Block const&) const;

    // vIndex: 146
    virtual ::Brightness getEmissiveBrightness(::Block const&) const;

    // vIndex: 147
    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    // vIndex: 148
    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    // vIndex: 149
    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockLegacy(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _executeEvent(
        ::std::string const&                                                  name,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCAPI void _forceExecuteTrigger(
        ::DefinitionTrigger const&                                            trigger,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCAPI ::BlockLegacy& addBlockProperties(::BlockProperty addedProperties);

    MCAPI ::BlockLegacy& addComponent(::BlockComponentDescription const& blockComponentDescription);

    MCAPI ::BlockLegacy& addState(::BlockState const& state);

    MCAPI ::BlockLegacy& addState(::BlockState const& state, uint64 variationCount);

    MCAPI ::BlockLegacy& addTag(::HashedString const& tag);

    MCAPI ::BlockLegacy& addTrait(::BlockTrait::ITrait const& trait);

    MCAPI bool anyOf(::gsl::span<::std::reference_wrapper<::HashedString const> const> const& blockTypeIdList) const;

    MCAPI ::std::string buildDescriptionName(::Block const& block) const;

    MCAPI void createBlockPermutations(uint latestUpdaterVersion);

    MCAPI ::WeakPtr<::BlockLegacy> createWeakPtr() const;

    MCAPI void executeEvent(::std::string const& name, ::RenderParams& params) const;

    MCAPI bool executeTrigger(::DefinitionTrigger const& trigger, ::RenderParams& params) const;

    MCAPI void finalizeBlockComponentStorage();

    MCAPI void finalizeScriptCustomComponents(::ScriptBlockCustomComponentsFinalizer& finalizer);

    MCAPI void forEachBlockPermutation(::std::function<bool(::Block const&)> callback) const;

    MCAPI bool forEachBlockPermutationMutable(::std::function<bool(::Block&)> callback);

    MCAPI void forEachBlockStateInstance(::std::function<bool(::BlockStateInstance const&)> callback) const;

    MCAPI short getBlockItemId() const;

    MCAPI ::BlockState const* getBlockState(::HashedString const& name) const;

    MCAPI ::std::vector<::CommandName> getCommandNames() const;

    MCAPI void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI ::ResourceDrops
    getResourceDrops(::Block const& block, ::Randomize& randomize, ::ResourceDropsContext const& resourceDropsContext)
        const;

    MCAPI bool hasState(::BlockState const& stateType) const;

    MCAPI bool hasTag(::HashedString const& tag) const;

    MCAPI bool
    isValidSpawn(::BlockSource& region, ::Block const& state, ::BlockPos pos, ::br::spawn::EntityType const& entityType)
        const;

    MCAPI void onFallOnBase(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI ::BlockLegacy& overrideBlockProperties(::BlockProperty newProperties);

    MCAPI ::BlockLegacy& setAllowsRunes(bool interference);

    MCAPI ::BlockLegacy& setCanBeExtraBlock(bool state);

    MCAPI ::BlockLegacy& setCanBeOriginalSurface(bool canBeOriginalSurface);

    MCAPI ::BlockLegacy& setCategory(::CreativeItemCategory creativeCategory);

    MCAPI ::BlockLegacy& setCreativeGroup(::std::string const& value);

    MCAPI ::BlockLegacy& setExperienceDrop(::IntRange dropRange);

    MCAPI ::BlockLegacy& setFlammable(::FlameOdds flameOdds, ::BurnOdds burnOdds, ::LavaFlammable lavaFlammable);

    MCAPI ::BlockLegacy& setFriction(float f);

    MCAPI ::BlockLegacy& setInstrument(::NoteBlockInstrument instrument);

    MCAPI ::BlockLegacy& setIsHiddenInCommands(bool isHiddenInCommands);

    MCAPI ::BlockLegacy&
    setIsValidSpawn(bool (*predicate)(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&)
    );

    MCAPI ::BlockLegacy& setLightBlock(::Brightness brightness);

    MCAPI ::BlockLegacy& setLightEmission(::Brightness brightness);

    MCAPI ::BlockLegacy& setMapColor(::mce::Color const& color);

    MCAPI ::BlockLegacy& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI ::BlockLegacy& setNameId(::std::string const& id);

    MCAPI void setRandomTicking(bool tick) const;

    MCAPI ::BlockLegacy& setRequiresCorrectToolForDrops();

    MCAPI ::BlockLegacy& setTintMethod(::TintMethod tintMethod);

    MCAPI ::BlockLegacy& setTranslucency(float translucency);

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
    MCAPI static ::std::string buildDescriptionIdFromNameInfo(::BlockLegacy::NameInfo const& nameInfo);

    MCAPI static ::BlockLegacy::NameInfo extractBlockNameInfo(::std::string const& name);

    MCAPI static ::BlockLegacy::HorizontalDirectionBits
    getConnectedDirections(::Block const& thisBlock, ::BlockPos const& pos, ::IConstBlockSource const& region);

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

    MCAPI ::AABB
    $getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

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

    MCFOLD ::AABB const&
    $getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB)
        const;

    MCAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCAPI ::AABB const& $getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos, int& seed) const;

    MCFOLD ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

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

    MCFOLD bool $isRailBlock() const;

    MCFOLD bool $isButtonBlock() const;

    MCFOLD bool $isLeverBlock() const;

    MCFOLD bool $isCandleCakeBlock() const;

    MCFOLD bool $isMultifaceBlock() const;

    MCFOLD bool $isSignalSource() const;

    MCFOLD bool $isConsumerComponent() const;

    MCAPI bool $canBeOriginalSurface() const;

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

    MCFOLD void $onStructureNeighborBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCFOLD bool $isBounceBlock() const;

    MCFOLD bool $isPreservingMediumWhenPlaced(::BlockLegacy const* medium) const;

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

    MCFOLD bool $tryToPlace(
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

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI int $calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCFOLD bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCFOLD bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI bool $shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCFOLD bool $canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos, ::BlockItem const& newItem) const;

    MCAPI bool $canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos) const;

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

    MCFOLD ::BlockLegacy& $init();

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

    MCFOLD void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face, ::std::optional<::Vec3>) const;

    MCFOLD bool $use(::Player&, ::BlockPos const&, uchar) const;

    MCFOLD bool $allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;

    MCFOLD int $getExtraRenderLayers() const;

    MCAPI ::Brightness $getLight(::Block const&) const;

    MCFOLD ::Brightness $getEmissiveBrightness(::Block const&) const;

    MCFOLD ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCFOLD void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCFOLD void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
