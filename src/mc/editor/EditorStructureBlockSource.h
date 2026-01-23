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

    virtual void addListener(::BlockSourceListener&) /*override*/;

    virtual void removeListener(::BlockSourceListener&) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const*, ::AABB const&, bool, bool) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) /*override*/;

    virtual bool hasChunksAt(::Bounds const&, bool) const /*override*/;

    virtual bool hasChunksAt(::BlockPos const&, int, bool) const /*override*/;

    virtual bool hasChunksAt(::AABB const&, bool) const /*override*/;

    virtual bool setBlock(
        ::BlockPos const& pos,
        ::Block const&    block,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangeContext const&
    ) /*override*/;
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
