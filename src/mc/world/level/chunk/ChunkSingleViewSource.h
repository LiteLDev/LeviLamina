#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class LevelChunk;
// clang-format on

class ChunkSingleViewSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunk>> mLevelChunk;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ChunkSingleViewSource();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const&) /*override*/;
#else // LL_PLAT_C
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ChunkSingleViewSource(::std::shared_ptr<::LevelChunk> lc);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::LevelChunk> lc);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& pos);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
