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
class Experiments;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class AnvilBlock : public ::FallingBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual void animateTick(::BlockAnimateTickData const&) const /*override*/;

    virtual bool falling() const /*override*/;

    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isCraftingBlock() const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual ~AnvilBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const& _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue);

    MCAPI_C static ::AnvilDamage getDamageEnumForName(::HashedString const& name);

    MCAPI_S static int getDamageForName(::HashedString const& name);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCFOLD void $animateTick(::BlockAnimateTickData const&) const;

    MCFOLD bool $falling() const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCFOLD bool $isInteractiveBlock() const;

#ifdef LL_PLAT_S
    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;
#endif

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
