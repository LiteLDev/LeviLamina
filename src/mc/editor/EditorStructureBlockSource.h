#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/structure/EditorStructureTemplate.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockChangeContext;
class BlockSourceListener;
struct ActorBlockSyncMessage;
struct Bounds;
// clang-format on

class EditorStructureBlockSource : public ::BlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB>                             mBounds;
    ::ll::TypedStorage<8, 408, ::Editor::EditorStructureTemplate> mTemplate;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                   mOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorStructureBlockSource() /*override*/ = default;

    virtual void addListener(::BlockSourceListener& l) /*override*/;

    virtual void removeListener(::BlockSourceListener& l) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    ) /*override*/;

    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const /*override*/;

    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const /*override*/;

    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const /*override*/;

    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addListener(::BlockSourceListener& l);

    MCNAPI void $removeListener(::BlockSourceListener& l);

    MCNAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities);

    MCNAPI ::gsl::span<::gsl::not_null<::Actor*>> $fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    );

    MCNAPI bool $hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const;

    MCNAPI bool $hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const;

    MCNAPI bool $hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const;

    MCNAPI bool $setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
