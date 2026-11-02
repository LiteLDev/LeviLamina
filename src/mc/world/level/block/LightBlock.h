#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
struct ActorBlockSyncMessage;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class LightBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const> mNextLightLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    LightBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    virtual bool canBeBuiltOver(
        ::Block const&       block,
        ::BlockSource const& region,
        ::BlockPos const&    pos,
        ::BlockType const&   newBlock
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LightBlock(::std::string const& nameId, int id, ::HashedString const& nextLightLevel);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, ::HashedString const& nextLightLevel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI bool $isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $canBeBuiltOver(
        ::Block const&       block,
        ::BlockSource const& region,
        ::BlockPos const&    pos,
        ::BlockType const&   newBlock
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
