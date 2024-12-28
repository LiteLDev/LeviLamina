#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"

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
class Material;
class Player;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class DoorBlock : public ::BlockLegacy {
public:
    // DoorBlock inner types define
    enum class DoorType : int {
        Oak                  = 0,
        Spruce               = 1,
        Birch                = 2,
        Jungle               = 3,
        Acacia               = 4,
        Darkoak              = 5,
        Iron                 = 6,
        Crimson              = 7,
        BlueNethershroom     = 8,
        Mangrove             = 9,
        Bamboo               = 10,
        Cherry               = 11,
        Copper               = 12,
        ExposedCopper        = 13,
        WeatheredCopper      = 14,
        OxidizedCopper       = 15,
        WaxedCopper          = 16,
        WaxedExposedCopper   = 17,
        WaxedWeatheredCopper = 18,
        WaxedOxidizedCopper  = 19,
        PaleOak              = 20,
        Count                = 21,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb06763;
    // NOLINTEND

public:
    // prevent constructor by default
    DoorBlock& operator=(DoorBlock const&);
    DoorBlock(DoorBlock const&);
    DoorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 2
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const /*override*/;

    // vIndex: 10
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB)
        const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue)
        const /*override*/;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 88
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;

    // vIndex: 142
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 61
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 51
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 49
    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 38
    virtual bool isDoorBlock() const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 149
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    // vIndex: 0
    virtual ~DoorBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DoorBlock(::std::string const& nameId, int id, ::Material const& material, ::DoorBlock::DoorType type);

    MCAPI ::Direction::Type getBlockedDirection(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCAPI int getDir(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCAPI void
    getDoorPosition(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& lowerPos, ::BlockPos& upperPos) const;

    MCAPI float getDoorThickness() const;

    MCAPI bool hasRightHinge(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isToggled(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void setToggled(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor, bool toggled) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isDoorComplete(::BlockSource const& region, ::BlockPos const& pos);

    MCAPI static void getDoorBlocks(
        ::IConstBlockSource const& region,
        ::BlockLegacy const&       expectedDoorBlockLegacy,
        ::BlockPos const&          pos,
        ::Block const*&            outLowerBlock,
        ::Block const*&            outUpperBlock
    );

    MCAPI static uchar getDoorFacing(int facing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material, ::DoorBlock::DoorType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;

    MCAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB)
        const;

    MCAPI ::AABB
    $getCollisionShape(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue)
        const;

    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCAPI bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI bool $isInteractiveBlock() const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $isDoorBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
