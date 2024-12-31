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
    ::ll::UntypedStorage<8, 16> mUnkf520ff;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkSingleViewSource& operator=(ChunkSingleViewSource const&);
    ChunkSingleViewSource(ChunkSingleViewSource const&);
    ChunkSingleViewSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const&) /*override*/;

    // vIndex: 0
    virtual ~ChunkSingleViewSource() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
