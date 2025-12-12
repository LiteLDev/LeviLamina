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
class ChunkSource;
class Dimension;
class Level;
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
    // prevent constructor by default
    EditorStructureBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorStructureBlockSource() /*override*/ = default;

    // vIndex: 28
    virtual void addListener(::BlockSourceListener&) /*override*/;

    // vIndex: 29
    virtual void removeListener(::BlockSourceListener&) /*override*/;

    // vIndex: 31
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const*, ::AABB const&, bool, bool) /*override*/;

    // vIndex: 30
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) /*override*/;

    // vIndex: 16
    virtual bool hasChunksAt(::Bounds const&, bool) const /*override*/;

    // vIndex: 15
    virtual bool hasChunksAt(::BlockPos const&, int, bool) const /*override*/;

    // vIndex: 14
    virtual bool hasChunksAt(::AABB const&, bool) const /*override*/;

    // vIndex: 32
    virtual bool setBlock(
        ::BlockPos const& pos,
        ::Block const&    block,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangeContext const&
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorStructureBlockSource(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& chunkSource,
        ::AABB const&  bounds,
        ::BlockPos     offset
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Level& level, ::Dimension& dimension, ::ChunkSource& chunkSource, ::AABB const& bounds, ::BlockPos offset);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addListener(::BlockSourceListener&);

    MCNAPI void $removeListener(::BlockSourceListener&);

    MCNAPI ::gsl::span<::gsl::not_null<::Actor*>> $fetchEntities(::Actor const*, ::AABB const&, bool, bool);

    MCNAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>);

    MCNAPI bool $hasChunksAt(::Bounds const&, bool) const;

    MCNAPI bool $hasChunksAt(::BlockPos const&, int, bool) const;

    MCNAPI bool $hasChunksAt(::AABB const&, bool) const;

    MCNAPI bool $setBlock(
        ::BlockPos const& pos,
        ::Block const&    block,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangeContext const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
