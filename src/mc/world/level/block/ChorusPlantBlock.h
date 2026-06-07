#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ChorusPlantBlock : public ::BlockType {
public:
    // prevent constructor by default
    ChorusPlantBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             region,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& region, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const
        /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChorusPlantBlock(::std::string const& nameId, int id);

    MCAPI ::AABB const& _getShape(::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const;

#ifdef LL_PLAT_C
    MCAPI bool connectsTo(::IConstBlockSource const& region, ::BlockPos const&, ::BlockPos const& otherPos) const;
#endif

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& PLANT_ITEM_DIMENSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             region,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& region, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const;

    MCFOLD bool $isLavaBlocking() const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
