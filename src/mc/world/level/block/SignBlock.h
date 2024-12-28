#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockLegacy;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Item;
class ItemInstance;
class ItemStack;
class Player;
class Random;
class SignBlockActor;
namespace mce { class Color; }
// clang-format on

class SignBlock : public ::ActorBlockBase<::BlockLegacy> {
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
    ::ll::UntypedStorage<4, 4> mUnk7356bc;
    ::ll::UntypedStorage<1, 1> mUnk7f42c3;
    // NOLINTEND

public:
    // prevent constructor by default
    SignBlock& operator=(SignBlock const&);
    SignBlock(SignBlock const&);
    SignBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

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

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 142
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 151
    virtual float getYRotationInDegrees(::Block const& block) const;

    // vIndex: 152
    virtual bool _canSurvive(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    // vIndex: 153
    virtual ::ItemInstance _getItemInstance() const;

    // vIndex: 0
    virtual ~SignBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignBlock(::std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SignBlock::SignInteractionResult _getInteractResult(
        ::SignBlockActor& blockActor,
        ::SignTextSide    side,
        ::ItemStack&      item,
        ::Player&         player,
        ::BlockPos const& pos,
        uchar             face
    );

    MCAPI static ::mce::Color getSignTextColorFromDyeItem(::Item const& dyeItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $isInteractiveBlock() const;

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
