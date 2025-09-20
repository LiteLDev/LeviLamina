#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/LavaFlammable.h"
#include "mc/world/level/block/NoteBlockInstrument.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockItem;
class BlockPos;
class BlockSource;
class BlockState;
class Container;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IConstBlockSource;
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
struct BlockGraphicsModeChangeContext;
struct Brightness;
struct CommandName;
struct CopperBehavior;
struct IntRange;
struct ResourceDrops;
struct ResourceDropsContext;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockTrait { class ITrait; }
namespace br::spawn { struct EntityType; }
namespace mce { class Color; }
// clang-format on

class BlockType {
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
    struct NameInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk455b02;
        ::ll::UntypedStorage<8, 32> mUnk57d889;
        ::ll::UntypedStorage<8, 48> mUnk39e489;
        ::ll::UntypedStorage<8, 48> mUnk5f751a;
        // NOLINTEND

    public:
        // prevent constructor by default
        NameInfo& operator=(NameInfo const&);
        NameInfo(NameInfo const&);
        NameInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::BlockType::NameInfo& operator=(::BlockType::NameInfo&&);

        MCNAPI ~NameInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk809650;
        ::ll::UntypedStorage<1, 1> mUnkdac040;
        ::ll::UntypedStorage<1, 1> mUnk52ea6d;
        ::ll::UntypedStorage<1, 1> mUnk629661;
        // NOLINTEND

    public:
        // prevent constructor by default
        HorizontalDirectionBits& operator=(HorizontalDirectionBits const&);
        HorizontalDirectionBits(HorizontalDirectionBits const&);
        HorizontalDirectionBits();
    };

    struct AlteredStateCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka7506e;
        // NOLINTEND

    public:
        // prevent constructor by default
        AlteredStateCollection& operator=(AlteredStateCollection const&);
        AlteredStateCollection(AlteredStateCollection const&);
        AlteredStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::optional<int> getState(::BlockType const&, int) const = 0;

        // vIndex: 1
        virtual ::Block const* setState(::BlockType const&, int, int) const = 0;

        // vIndex: 2
        virtual ~AlteredStateCollection() = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static bool _checkVersioningRequirements(::SemVersion const& removedSupportVersion);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

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
            ::ll::UntypedStorage<4, 4> mUnk4511c3;
            ::ll::UntypedStorage<8, 8> mUnkebc254;
            // NOLINTEND

        public:
            // prevent constructor by default
            SplitBlock& operator=(SplitBlock const&);
            SplitBlock(SplitBlock const&);
            SplitBlock();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk5eb912;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemovedStateCollection& operator=(RemovedStateCollection const&);
        RemovedStateCollection(RemovedStateCollection const&);
        RemovedStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::optional<int> getState(::BlockType const& blockType, int) const /*override*/;

        // vIndex: 1
        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const /*override*/;

        // vIndex: 2
        virtual ~RemovedStateCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void
        add(::BlockState const&                                              stateRef,
            ::std::vector<::BlockType::RemovedStateCollection::SplitBlock>&& splitBlocks,
            ::SemVersion const&                                              removedSupportVersion);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::std::optional<int> $getState(::BlockType const& blockType, int) const;

        MCNAPI ::Block const* $setState(::BlockType const& blockType, int blockData, int stateData) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd662de;
        ::ll::UntypedStorage<8, 64> mUnk88b9e8;
        // NOLINTEND

    public:
        // prevent constructor by default
        RearrangedStateCollection& operator=(RearrangedStateCollection const&);
        RearrangedStateCollection(RearrangedStateCollection const&);
        RearrangedStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::optional<int> getState(::BlockType const& blockType, int blockData) const /*override*/;

        // vIndex: 1
        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const /*override*/;

        // vIndex: 2
        virtual ~RearrangedStateCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RearrangedStateCollection(
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter
        );
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void
        add(::BlockType&                                                   blockType,
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter,
            ::SemVersion const&                                            removedSupportVersion);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter
        );
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::std::optional<int> $getState(::BlockType const& blockType, int blockData) const;

        MCNAPI ::Block const* $setState(::BlockType const& blockType, int blockData, int stateData) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk4d6512;
    ::ll::UntypedStorage<8, 104> mUnk71a1e0;
    ::ll::UntypedStorage<8, 176> mUnkbcbbef;
    ::ll::UntypedStorage<8, 8>   mUnk1d166c;
    ::ll::UntypedStorage<1, 1>   mUnkb1e89e;
    ::ll::UntypedStorage<1, 1>   mUnk24edd1;
    ::ll::UntypedStorage<1, 1>   mUnk7f6c25;
    ::ll::UntypedStorage<1, 1>   mUnk1dbd1a;
    ::ll::UntypedStorage<4, 4>   mUnkc0784b;
    ::ll::UntypedStorage<1, 1>   mUnk93982c;
    ::ll::UntypedStorage<1, 1>   mUnkc6dec4;
    ::ll::UntypedStorage<1, 1>   mUnke61c4b;
    ::ll::UntypedStorage<4, 4>   mUnk6c3a08;
    ::ll::UntypedStorage<8, 8>   mUnke3032a;
    ::ll::UntypedStorage<1, 1>   mUnk122f8b;
    ::ll::UntypedStorage<4, 4>   mUnkaa2e80;
    ::ll::UntypedStorage<4, 4>   mUnk405fe6;
    ::ll::UntypedStorage<8, 32>  mUnk86e62c;
    ::ll::UntypedStorage<1, 1>   mUnk343844;
    ::ll::UntypedStorage<1, 1>   mUnkc11623;
    ::ll::UntypedStorage<1, 1>   mUnk7e8786;
    ::ll::UntypedStorage<1, 1>   mUnkb8b15b;
    ::ll::UntypedStorage<1, 1>   mUnk786e0c;
    ::ll::UntypedStorage<1, 1>   mUnk8ee373;
    ::ll::UntypedStorage<1, 1>   mUnka7d9b1;
    ::ll::UntypedStorage<1, 1>   mUnkf5b94c;
    ::ll::UntypedStorage<1, 1>   mUnkf0120c;
    ::ll::UntypedStorage<1, 1>   mUnk3e052d;
    ::ll::UntypedStorage<4, 4>   mUnk5785fd;
    ::ll::UntypedStorage<1, 1>   mUnkb12268;
    ::ll::UntypedStorage<1, 1>   mUnk351cb0;
    ::ll::UntypedStorage<1, 1>   mUnk402b8c;
    ::ll::UntypedStorage<1, 1>   mUnk3ca674;
    ::ll::UntypedStorage<1, 1>   mUnk9ae304;
    ::ll::UntypedStorage<1, 1>   mUnk2513f2;
    ::ll::UntypedStorage<4, 4>   mUnk9db1fc;
    ::ll::UntypedStorage<4, 4>   mUnk51e5b3;
    ::ll::UntypedStorage<1, 1>   mUnkc8d83b;
    ::ll::UntypedStorage<4, 16>  mUnkec624d;
    ::ll::UntypedStorage<4, 4>   mUnk584f0e;
    ::ll::UntypedStorage<4, 4>   mUnk2baec7;
    ::ll::UntypedStorage<1, 1>   mUnk9bd1ee;
    ::ll::UntypedStorage<1, 1>   mUnk2cbda1;
    ::ll::UntypedStorage<2, 2>   mUnkdddb2a;
    ::ll::UntypedStorage<8, 32>  mUnk7b6032;
    ::ll::UntypedStorage<1, 1>   mUnkac02e6;
    ::ll::UntypedStorage<8, 24>  mUnk9f54ee;
    ::ll::UntypedStorage<8, 64>  mUnkafac50;
    ::ll::UntypedStorage<1, 1>   mUnk31bef8;
    ::ll::UntypedStorage<4, 24>  mUnk50de7e;
    ::ll::UntypedStorage<4, 4>   mUnke3a189;
    ::ll::UntypedStorage<4, 4>   mUnk9ee80b;
    ::ll::UntypedStorage<8, 16>  mUnkf222c0;
    ::ll::UntypedStorage<8, 64>  mUnkebdafb;
    ::ll::UntypedStorage<8, 8>   mUnkd926cd;
    ::ll::UntypedStorage<8, 24>  mUnkacef8d;
    ::ll::UntypedStorage<8, 8>   mUnk4669c8;
    ::ll::UntypedStorage<8, 24>  mUnkd42951;
    ::ll::UntypedStorage<8, 72>  mUnk49bfe1;
    ::ll::UntypedStorage<8, 8>   mUnkdfc8ae;
    ::ll::UntypedStorage<8, 8>   mUnkba2d4f;
    ::ll::UntypedStorage<4, 8>   mUnke271af;
    ::ll::UntypedStorage<1, 1>   mUnkff8988;
    ::ll::UntypedStorage<8, 104> mUnkd7d805;
    ::ll::UntypedStorage<8, 24>  mUnk8fc1c6;
    ::ll::UntypedStorage<1, 1>   mUnkf6a0f4;
    ::ll::UntypedStorage<8, 32>  mUnk56c3eb;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockType& operator=(BlockType const&);
    BlockType(BlockType const&);
    BlockType();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockType();

    // vIndex: 1
    virtual ::std::shared_ptr<::BlockActor> newBlockEntity(::BlockPos const& pos, ::Block const& block) const;

    // vIndex: 2
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const;

    // vIndex: 3
    virtual bool
    hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    // vIndex: 4
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

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
    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    // vIndex: 12
    virtual ::AABB const& getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    // vIndex: 14
    virtual bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    // vIndex: 15
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const;

    // vIndex: 16
    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    // vIndex: 17
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 18
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    // vIndex: 19
    virtual bool hasVariableLighting() const;

    // vIndex: 20
    virtual bool isStrippable(::Block const& srcBlock) const;

    // vIndex: 21
    virtual ::Block const& getStrippedBlock(::Block const& srcBlock) const;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;

    // vIndex: 23
    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const;

    // vIndex: 24
    virtual bool canConnect(::Block const&, uchar toOther, ::Block const& thisBlock) const;

    // vIndex: 25
    virtual bool isMovingBlock() const;

    // vIndex: 26
    virtual ::CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 27
    virtual bool isStemBlock() const;

    // vIndex: 28
    virtual bool isContainerBlock() const;

    // vIndex: 29
    virtual bool isCraftingBlock() const;

    // vIndex: 30
    virtual bool isLavaBlocking() const;

    // vIndex: 31
    virtual bool isFenceBlock() const;

    // vIndex: 32
    virtual bool isFenceGateBlock() const;

    // vIndex: 33
    virtual bool isThinFenceBlock() const;

    // vIndex: 34
    virtual bool isWallBlock() const;

    // vIndex: 35
    virtual bool isStairBlock() const;

    // vIndex: 36
    virtual bool isSlabBlock() const;

    // vIndex: 37
    virtual bool isDoorBlock() const;

    // vIndex: 38
    virtual bool isChestBlock() const;

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
    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const;

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
    virtual ::Block const& getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    // vIndex: 93
    virtual int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    // vIndex: 94
    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    // vIndex: 95
    virtual bool attack(::Player* player, ::BlockPos const& pos) const;

    // vIndex: 96
    virtual bool shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    // vIndex: 98
    virtual bool canBeBuiltOver(
        ::Block const&     block,
        ::BlockSource&     region,
        ::BlockPos const&  pos,
        ::BlockItem const& newItem
    ) const;

    // vIndex: 97
    virtual bool canBeBuiltOver(::Block const& block, ::BlockSource&, ::BlockPos const&) const;

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
    virtual ::BlockType& init();

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
    virtual bool isInteractiveBlock() const;

    // vIndex: 137
    virtual bool allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 139
    virtual ::BlockRenderLayer getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;

    // vIndex: 140
    virtual int getExtraRenderLayers() const;

    // vIndex: 141
    virtual ::HashedString const& getCullingLayer() const;

    // vIndex: 142
    virtual ::Brightness getLight(::Block const&) const;

    // vIndex: 143
    virtual ::Brightness getEmissiveBrightness(::Block const&) const;

    // vIndex: 144
    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    // vIndex: 145
    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    // vIndex: 146
    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockType(::std::string const& nameId, int id, ::Material const& material);

    MCNAPI void _executeEvent(
        ::std::string const&                                                  name,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCNAPI ::BlockType& addBlockProperties(::BlockProperty addedProperties);

    MCNAPI ::BlockType& addComponent(::BlockComponentDescription const& blockComponentDescription);

    MCNAPI ::BlockType& addState(::BlockState const& state);

    MCNAPI ::BlockType& addState(::BlockState const& state, uint64 variationCount);

    MCNAPI ::BlockType& addTag(::HashedString const& tag);

    MCNAPI ::BlockType& addTrait(::BlockTrait::ITrait const& trait);

    MCNAPI bool anyOf(::gsl::span<::std::reference_wrapper<::HashedString const> const> const& blockTypeIdList) const;

    MCNAPI ::std::string buildDescriptionName(::Block const& block) const;

    MCNAPI void createBlockPermutations(uint latestUpdaterVersion);

    MCNAPI ::WeakPtr<::BlockType> createWeakPtr() const;

    MCNAPI void executeEvent(::std::string const& name, ::RenderParams& params) const;

    MCNAPI void finalizeBlockComponentStorage();

    MCNAPI void forEachBlockPermutation(::brstd::function_ref<bool(::Block const&)> callback) const;

    MCNAPI short getBlockItemId() const;

    MCNAPI ::BlockState const* getBlockState(::HashedString const& name) const;

    MCNAPI ::std::vector<::CommandName> getCommandNames() const;

    MCNAPI void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCNAPI ::ResourceDrops getResourceDrops(
        ::Block const&                block,
        ::Randomize&                  randomize,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;

    MCNAPI ::Block const& getStateFromLegacyData(ushort data) const;

    MCNAPI bool hasState(::BlockState const& stateType) const;

    MCNAPI bool hasTag(::HashedString const& tag) const;

    MCNAPI bool isValidSpawn(
        ::BlockSource&                 region,
        ::Block const&                 state,
        ::BlockPos                     pos,
        ::br::spawn::EntityType const& entityType
    ) const;

    MCNAPI void onFallOnBase(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCNAPI ::BlockType& overrideBlockProperties(::BlockProperty newProperties);

    MCNAPI ::BlockType& setAllowsRunes(bool interference);

    MCNAPI ::BlockType& setCanBeExtraBlock(bool state);

    MCNAPI ::BlockType& setCanBeOriginalSurface(bool canBeOriginalSurface);

    MCNAPI ::BlockType& setCategory(::CreativeItemCategory creativeCategory);

    MCNAPI ::BlockType& setCreativeGroup(::std::string const& value);

    MCNAPI ::BlockType& setExperienceDrop(::IntRange dropRange);

    MCNAPI ::BlockType& setFlammable(::FlameOdds flameOdds, ::BurnOdds burnOdds, ::LavaFlammable lavaFlammable);

    MCNAPI ::BlockType& setFriction(float f);

    MCNAPI ::BlockType& setInstrument(::NoteBlockInstrument instrument);

    MCNAPI ::BlockType& setIsHiddenInCommands(bool isHiddenInCommands);

    MCNAPI ::BlockType& setIsValidSpawn(
        bool (*predicate)(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&)
    );

    MCNAPI ::BlockType& setLightBlock(::Brightness brightness);

    MCNAPI ::BlockType& setLightEmission(::Brightness brightness);

    MCNAPI ::BlockType& setMapColor(::mce::Color const& color);

    MCNAPI ::BlockType& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCNAPI ::BlockType& setNameId(::std::string const& id);

    MCNAPI ::BlockType& setRequiresCorrectToolForDrops();

    MCNAPI ::BlockType& setTintMethod(::TintMethod tintMethod);

    MCNAPI ::BlockType& setTranslucency(float translucency);

    MCNAPI bool shouldTriggerOnStandOn(::Actor& entity, ::BlockPos const& pos) const;

    MCNAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::Randomize&                  randomize,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;

    MCNAPI ::Block const* tryGetStateFromLegacyData(ushort data) const;

    MCNAPI bool updateTallestCollisionShape(
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
    MCNAPI static ::std::string buildDescriptionIdFromNameInfo(::BlockType::NameInfo const& nameInfo);

    MCNAPI static ::BlockType::NameInfo extractBlockNameInfo(::std::string const& name);

    MCNAPI static ::BlockType::HorizontalDirectionBits
    getConnectedDirections(::Block const& thisBlock, ::BlockPos const& pos, ::IConstBlockSource const& region);

    MCNAPI static uchar getPlacementFacingAll(::Actor const& entity, ::BlockPos const& pos, float yRotOffsetDegree);

    MCNAPI static ::ItemActor* popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemStack const& item);

    MCNAPI static ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const& itemInstance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();

    MCNAPI static float const& SIZE_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::BlockActor> $newBlockEntity(::BlockPos const& pos, ::Block const& block) const;

    MCNAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCNAPI bool
    $hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    MCNAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCNAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI ::AABB const& $getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCNAPI bool $isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;

    MCNAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCNAPI bool $hasVariableLighting() const;

    MCNAPI bool $isStrippable(::Block const& srcBlock) const;

    MCNAPI ::Block const& $getStrippedBlock(::Block const& srcBlock) const;

    MCNAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;

    MCNAPI bool $canProvideMultifaceSupport(::Block const& block, uchar face) const;

    MCNAPI bool $canConnect(::Block const&, uchar toOther, ::Block const& thisBlock) const;

    MCNAPI bool $isMovingBlock() const;

    MCNAPI ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCNAPI bool $isStemBlock() const;

    MCNAPI bool $isContainerBlock() const;

    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $isFenceBlock() const;

    MCNAPI bool $isFenceGateBlock() const;

    MCNAPI bool $isThinFenceBlock() const;

    MCNAPI bool $isWallBlock() const;

    MCNAPI bool $isStairBlock() const;

    MCNAPI bool $isSlabBlock() const;

    MCNAPI bool $isDoorBlock() const;

    MCNAPI bool $isChestBlock() const;

    MCNAPI bool $isRailBlock() const;

    MCNAPI bool $isButtonBlock() const;

    MCNAPI bool $isLeverBlock() const;

    MCNAPI bool $isCandleCakeBlock() const;

    MCNAPI bool $isMultifaceBlock() const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $isConsumerComponent() const;

    MCNAPI bool $canBeOriginalSurface() const;

    MCNAPI bool $isSilentWhenJumpingOff() const;

    MCNAPI bool $isValidAuxValue(int value) const;

    MCNAPI bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI ::Block const& $sanitizeFillBlock(::Block const& block) const;

    MCNAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCNAPI ::std::optional<::HashedString> $getRequiredMedium() const;

    MCNAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCNAPI void
    $handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $shouldDispense(::BlockSource& region, ::Container& container) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI void
    $transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;

    MCNAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCNAPI void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    MCNAPI bool $detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onStructureNeighborBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCNAPI bool $isBounceBlock() const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCNAPI bool $isFilteredOut(::BlockRenderLayer) const;

    MCNAPI bool $canRenderSelectionOverlay(::BlockRenderLayer) const;

    MCNAPI bool $ignoreEntitiesOnPistonMove(::Block const& block) const;

    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCNAPI bool $mayPick() const;

    MCNAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    MCNAPI bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI void
    $destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;

    MCNAPI bool $getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI int $calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;

    MCNAPI bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCNAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCNAPI bool $shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCNAPI bool $canBeBuiltOver(
        ::Block const&     block,
        ::BlockSource&     region,
        ::BlockPos const&  pos,
        ::BlockItem const& newItem
    ) const;

    MCNAPI bool $canBeBuiltOver(::Block const& block, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;

    MCNAPI void $executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    MCNAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCNAPI bool $shouldStopFalling(::Actor& entity) const;

    MCNAPI bool $pushesUpFallingBlocks() const;

    MCNAPI bool $canHaveExtraData() const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI bool $canSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canInstatick() const;

    MCNAPI bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;

    MCNAPI void $notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $causesFreezeEffect() const;

    MCNAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCNAPI bool $isAuxValueRelevantForPicking() const;

    MCNAPI bool $isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCNAPI float $getShadeBrightness(::Block const& block) const;

    MCNAPI int $telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI ::Block const& $getRenderBlock() const;

    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCNAPI ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;

    MCNAPI ::BlockType& $init();

    MCNAPI ::Brightness $getLightEmission(::Block const&) const;

    MCNAPI ::Block const* $tryLegacyUpgrade(ushort) const;

    MCNAPI bool $dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;

    MCNAPI ::Block const* $tryGetInfested(::Block const&) const;

    MCNAPI ::Block const* $tryGetUninfested(::Block const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCNAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCNAPI bool $shouldTickOnSetBlock() const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;

    MCNAPI int $getExtraRenderLayers() const;

    MCNAPI ::HashedString const& $getCullingLayer() const;

    MCNAPI ::Brightness $getLight(::Block const&) const;

    MCNAPI ::Brightness $getEmissiveBrightness(::Block const&) const;

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
