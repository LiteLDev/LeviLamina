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
        ::ll::TypedStorage<4, 4, ::SignBlock::SignInteractionResult::Result> mResult;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::std::optional<::std::string> getButtonTooltip() const;
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SignBlock::SignType> mSignType;
    ::ll::TypedStorage<1, 1, bool>                  mOnGround;
    // NOLINTEND

public:
    // prevent constructor by default
    SignBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual float getYRotationInDegrees(::Block const& block) const;

    virtual bool _canSurvive(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    virtual ::ItemInstance _getItemInstance() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignBlock(::std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);

#ifdef LL_PLAT_C
    MCFOLD ::SignBlock::SignType getSignType() const;
#endif

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _canUseDye(::SignBlockActor& blockActor, ::SignTextSide side, ::mce::Color const& dyeColor, ::Player& player);

    MCAPI static bool _canUseHoneyComb(::SignBlockActor& blockActor, ::Player& player);

    MCAPI static bool _canUseInkSac(::SignBlockActor& blockActor, ::SignTextSide side, ::Player& player);

    MCAPI static ::SignBlock::SignInteractionResult _getInteractResult(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      item,
        ::Player&         player,
        ::BlockPos const& pos,
        uchar             face
    );

    MCAPI static void _getShape(int facing, ::AABB& bufferValue);

    MCAPI static void _useDye(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      dyeStack,
        ::BlockPos const& pos,
        ::Player&         player
    );

    MCAPI static void
    _useHoneyComb(::SignBlockActor& blockActor, ::ItemStack& honeyCombStack, ::BlockPos const& pos, ::Player& player);

#ifdef LL_PLAT_C
    MCAPI static ::SignBlock::SignInteractionResult
    getInteractResult(::Player& player, ::BlockPos const& pos, uchar face);
#endif

    MCAPI static ::mce::Color getSignTextColorFromDyeItem(::Item const& dyeItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);
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

    MCFOLD bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI float $getYRotationInDegrees(::Block const& block) const;

    MCAPI bool $_canSurvive(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI ::ItemInstance $_getItemInstance() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
