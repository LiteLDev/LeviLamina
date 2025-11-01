#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Player;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class DoorBlock : public ::BlockType {
public:
    // DoorBlock inner types define
    enum class DoorType : int {
        Oak = 0,
        Spruce = 1,
        Birch = 2,
        Jungle = 3,
        Acacia = 4,
        Darkoak = 5,
        Iron = 6,
        Crimson = 7,
        BlueNethershroom = 8,
        Mangrove = 9,
        Bamboo = 10,
        Cherry = 11,
        Copper = 12,
        ExposedCopper = 13,
        WeatheredCopper = 14,
        OxidizedCopper = 15,
        WaxedCopper = 16,
        WaxedExposedCopper = 17,
        WaxedWeatheredCopper = 18,
        WaxedOxidizedCopper = 19,
        PaleOak = 20,
        Count = 21,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DoorBlock::DoorType> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 2
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    // vIndex: 10
    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const /*override*/;

    // vIndex: 13
    virtual bool getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const /*override*/;

    // vIndex: 86
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const /*override*/;

    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 87
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const /*override*/;

    // vIndex: 137
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 88
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 78
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 66
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 61
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const /*override*/;

    // vIndex: 135
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const /*override*/;

    // vIndex: 51
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 49
    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 37
    virtual bool isDoorBlock() const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 146
    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    // vIndex: 144
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    // vIndex: 0
    virtual ~DoorBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Direction::Type getBlockedDirection(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isToggled(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void setToggled(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor, bool toggled) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getDoorBlocks(::IConstBlockSource const& region, ::BlockType const& expectedDoorBlockType, ::BlockPos const& pos, ::Block const*& outLowerBlock, ::Block const*& outUpperBlock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCFOLD ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCAPI ::AABB const& $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB) const;

    MCAPI ::AABB $getCollisionShape(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>) const;

    MCFOLD ::AABB const& $getOutline(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI bool $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCFOLD bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $isDoorBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
