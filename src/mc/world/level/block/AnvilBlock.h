#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/AnvilDamage.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class AnvilBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    AnvilBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const
        /*override*/;

    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual void animateTick(::BlockAnimateTickData const&) const /*override*/;

    virtual bool falling() const /*override*/;

    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isCraftingBlock() const /*override*/;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnvilBlock(::std::string const& nameId, int id);

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const& _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue);

#ifdef LL_PLAT_C
    MCFOLD static ::AnvilDamage getDamageEnumForName(::HashedString const& name);
#endif

    MCFOLD static int getDamageForName(::HashedString const& name);

    MCAPI static ::HashedString const& getNameForDamage(int damage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCFOLD void $animateTick(::BlockAnimateTickData const&) const;

    MCFOLD bool $falling() const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
