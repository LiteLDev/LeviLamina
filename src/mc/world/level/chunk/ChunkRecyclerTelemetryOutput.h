#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkRecyclerTelemetryOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkea1c91;
    ::ll::UntypedStorage<8, 8>  mUnk2149ef;
    ::ll::UntypedStorage<8, 8>  mUnk902e0c;
    ::ll::UntypedStorage<8, 8>  mUnk1d38b7;
    ::ll::UntypedStorage<8, 8>  mUnk3688b4;
    ::ll::UntypedStorage<8, 8>  mUnk9dc987;
    ::ll::UntypedStorage<8, 8>  mUnka98e72;
    ::ll::UntypedStorage<8, 8>  mUnk3c1e5d;
    ::ll::UntypedStorage<4, 4>  mUnkee1333;
    ::ll::UntypedStorage<4, 4>  mUnkb3c66d;
    ::ll::UntypedStorage<1, 1>  mUnkf65eee;
    ::ll::UntypedStorage<1, 1>  mUnk565271;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRecyclerTelemetryOutput& operator=(ChunkRecyclerTelemetryOutput const&);
    ChunkRecyclerTelemetryOutput(ChunkRecyclerTelemetryOutput const&);
    ChunkRecyclerTelemetryOutput();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChunkRecyclerTelemetryOutput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
