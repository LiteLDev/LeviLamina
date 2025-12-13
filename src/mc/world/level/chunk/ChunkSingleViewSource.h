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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos) /*override*/;

#ifdef LL_PLAT_S
    virtual ~ChunkSingleViewSource() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ChunkSingleViewSource() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& pos);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
