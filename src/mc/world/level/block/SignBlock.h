#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/actor/SignTextSide.h"

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
class Item;
class ItemInstance;
class ItemStack;
class Player;
class SignBlockActor;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class SignBlock : public ::ActorBlock {
public:
    // SignBlock inner types declare
    // clang-format off
    struct SignInteractionResult;
    // clang-format on

    // SignBlock inner types define
    enum class SignType : int {
        Oak                 = 0,
        Spruce              = 1,
        Birch               = 2,
        Jungle              = 3,
        Acacia              = 4,
        DarkOak             = 5,
        RedBigNetherShroom  = 6,
        BlueBigNetherShroom = 7,
        Mangrove            = 8,
        Bamboo              = 9,
        Cherry              = 10,
        PaleOak             = 11,
    };

    struct SignInteractionResult {
    public:
        // SignInteractionResult inner types define
        enum class Result : int {
            NoInteraction  = 0,
            FailWaxedSign  = 1,
            UseDye         = 2,
            UseGlowInkSac  = 3,
            UseInkSac      = 4,
            UseHoneyComb   = 5,
            OpenForEditing = 6,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk858913;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignInteractionResult& operator=(SignInteractionResult const&);
        SignInteractionResult(SignInteractionResult const&);
        SignInteractionResult();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SignBlock::SignType> mSignType;
    ::ll::TypedStorage<1, 1, bool>                  mOnGround;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 147
    virtual float getYRotationInDegrees(::Block const& block) const;

    // vIndex: 148
    virtual bool _canSurvive(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    // vIndex: 149
    virtual ::ItemInstance _getItemInstance() const;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SignBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canChangeSign(::SignBlockActor& blockActor, ::Player& player);

    MCAPI static ::SignBlock::SignInteractionResult _getInteractResult(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      item,
        ::Player&         player,
        ::BlockPos const& pos,
        uchar             face
    );

    MCAPI static void _useDye(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      dyeStack,
        ::BlockPos const& pos,
        ::Player&         player
    );

    MCAPI static void _useGlowInkSac(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      glowInkSacStack,
        ::BlockPos const& pos,
        ::Player&         player
    );

    MCAPI static void
    _useHoneyComb(::SignBlockActor& blockActor, ::ItemStack& honeyCombStack, ::BlockPos const& pos, ::Player& player);

    MCAPI static void _useInkSac(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      inkSacStack,
        ::BlockPos const& pos,
        ::Player&         player
    );

    MCAPI static ::mce::Color getSignTextColorFromDyeItem(::Item const& dyeItem);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI float $getYRotationInDegrees(::Block const& block) const;

    MCAPI bool $_canSurvive(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI ::ItemInstance $_getItemInstance() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
