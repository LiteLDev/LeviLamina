#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockSource.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockPos;
class BlockSourceListener;
struct Bounds;
// clang-format on

class EditorBlockSource : public ::BlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnkd207f9;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockSource& operator=(EditorBlockSource const&);
    EditorBlockSource(EditorBlockSource const&);
    EditorBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorBlockSource() /*override*/ = default;

    virtual void addListener(::BlockSourceListener& l) /*override*/;

    virtual void removeListener(::BlockSourceListener& l) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) /*override*/;

    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) /*override*/;

    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const /*override*/;

    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const /*override*/;

    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $addListener(::BlockSourceListener& l);

    MCNAPI void $removeListener(::BlockSourceListener& l);

    MCNAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities);

    MCNAPI bool $hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const;

    MCNAPI bool $hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const;

    MCNAPI bool $hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
