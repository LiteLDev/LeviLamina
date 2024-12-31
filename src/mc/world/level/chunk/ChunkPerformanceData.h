#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ILevelChunkEventManagerConnector;
class LevelChunk;
// clang-format on

struct ChunkPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkPerformanceData inner types declare
    // clang-format off
    class AtomicMemoryAccumulator;
    struct PaletteData;
    // clang-format on

    // ChunkPerformanceData inner types define
    class AtomicMemoryAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd86ca2;
        ::ll::UntypedStorage<8, 8> mUnk482aa0;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtomicMemoryAccumulator& operator=(AtomicMemoryAccumulator const&);
        AtomicMemoryAccumulator(AtomicMemoryAccumulator const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AtomicMemoryAccumulator();

        MCAPI uint64 getMemoryAverage() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

    struct PaletteData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka5207c;
        ::ll::UntypedStorage<8, 8> mUnk12ad51;
        ::ll::UntypedStorage<8, 8> mUnkcecb36;
        // NOLINTEND

    public:
        // prevent constructor by default
        PaletteData& operator=(PaletteData const&);
        PaletteData(PaletteData const&);
        PaletteData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5a059f;
    ::ll::UntypedStorage<8, 24> mUnkfe3cd1;
    ::ll::UntypedStorage<4, 4>  mUnkf7e477;
    ::ll::UntypedStorage<4, 76> mUnk611e06;
    ::ll::UntypedStorage<8, 8>  mUnk23a378;
    ::ll::UntypedStorage<1, 1>  mUnk362447;
    ::ll::UntypedStorage<4, 4>  mUnk554862;
    ::ll::UntypedStorage<4, 4>  mUnkbe5c38;
    ::ll::UntypedStorage<4, 4>  mUnkdae37f;
    ::ll::UntypedStorage<4, 4>  mUnka31665;
    ::ll::UntypedStorage<4, 4>  mUnk8b0f65;
    ::ll::UntypedStorage<4, 4>  mUnk89f1c6;
    ::ll::UntypedStorage<4, 4>  mUnk622846;
    ::ll::UntypedStorage<4, 4>  mUnkd2b0f0;
    ::ll::UntypedStorage<4, 4>  mUnke17c13;
    ::ll::UntypedStorage<4, 4>  mUnk9eba6b;
    ::ll::UntypedStorage<4, 4>  mUnk70ce12;
    ::ll::UntypedStorage<4, 4>  mUnka8212c;
    ::ll::UntypedStorage<4, 4>  mUnk4e4c68;
    ::ll::UntypedStorage<8, 8>  mUnka2fb26;
    ::ll::UntypedStorage<8, 8>  mUnke92fd1;
    ::ll::UntypedStorage<8, 8>  mUnk75a885;
    ::ll::UntypedStorage<8, 8>  mUnk97bc3f;
    ::ll::UntypedStorage<8, 8>  mUnk120313;
    ::ll::UntypedStorage<8, 8>  mUnk2dbe14;
    ::ll::UntypedStorage<8, 8>  mUnk3ea5a4;
    ::ll::UntypedStorage<8, 8>  mUnk505a95;
    ::ll::UntypedStorage<8, 8>  mUnkced8d7;
    ::ll::UntypedStorage<8, 8>  mUnk154ec9;
    ::ll::UntypedStorage<8, 8>  mUnk658c71;
    ::ll::UntypedStorage<8, 8>  mUnk189724;
    ::ll::UntypedStorage<8, 8>  mUnk6a4ffe;
    ::ll::UntypedStorage<8, 8>  mUnk1cb746;
    ::ll::UntypedStorage<8, 24> mUnk23e0ea;
    ::ll::UntypedStorage<8, 24> mUnk7364bf;
    ::ll::UntypedStorage<8, 24> mUnk2c74e4;
    ::ll::UntypedStorage<8, 24> mUnkc41f55;
    ::ll::UntypedStorage<8, 8>  mUnk7b56bf;
    ::ll::UntypedStorage<8, 8>  mUnk74ebc4;
    ::ll::UntypedStorage<1, 1>  mUnk2a91b6;
    ::ll::UntypedStorage<1, 1>  mUnka94c61;
    ::ll::UntypedStorage<1, 1>  mUnk892562;
    ::ll::UntypedStorage<1, 1>  mUnka35ff5;
    ::ll::UntypedStorage<1, 1>  mUnk4606a3;
    ::ll::UntypedStorage<8, 64> mUnk95f89a;
    ::ll::UntypedStorage<8, 64> mUnk77be69;
    ::ll::UntypedStorage<4, 4>  mUnk67e052;
    ::ll::UntypedStorage<4, 4>  mUnka92adc;
    ::ll::UntypedStorage<4, 4>  mUnk11e363;
    ::ll::UntypedStorage<4, 4>  mUnk78c4f8;
    ::ll::UntypedStorage<4, 4>  mUnkd19feb;
    ::ll::UntypedStorage<4, 4>  mUnk11abb0;
    ::ll::UntypedStorage<8, 16> mUnk2384b7;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkPerformanceData& operator=(ChunkPerformanceData const&);
    ChunkPerformanceData(ChunkPerformanceData const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkPerformanceData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkPerformanceData();

    MCAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& levelChunk, int);

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void resetAll();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
