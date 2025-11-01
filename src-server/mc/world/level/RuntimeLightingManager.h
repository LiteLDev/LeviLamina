#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct Brightness;
// clang-format on

class RuntimeLightingManager {
public:
    // RuntimeLightingManager inner types declare
    // clang-format off
    struct RelightingChunkElement;
    struct RuntimeLightingSubchunkList;
    // clang-format on

    // RuntimeLightingManager inner types define
    struct RelightingChunkElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk7fba0a;
        ::ll::UntypedStorage<8, 8> mUnk3e689f;
        ::ll::UntypedStorage<8, 8> mUnk5ba057;
        ::ll::UntypedStorage<8, 8> mUnkda89a1;
        // NOLINTEND

    public:
        // prevent constructor by default
        RelightingChunkElement& operator=(RelightingChunkElement const&);
        RelightingChunkElement(RelightingChunkElement const&);
        RelightingChunkElement();
    };

    struct RuntimeLightingSubchunkList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkd60eed;
        // NOLINTEND

    public:
        // prevent constructor by default
        RuntimeLightingSubchunkList& operator=(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RuntimeLightingSubchunkList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8c931b;
    ::ll::UntypedStorage<8, 24> mUnk7ccccf;
    ::ll::UntypedStorage<8, 24> mUnkbca36c;
    ::ll::UntypedStorage<8, 24> mUnk374d9f;
    ::ll::UntypedStorage<8, 8>  mUnk62ed05;
    ::ll::UntypedStorage<1, 1>  mUnk3f50c8;
    ::ll::UntypedStorage<8, 8>  mUnk6ca0a7;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&);
    RuntimeLightingManager(RuntimeLightingManager const&);
    RuntimeLightingManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RuntimeLightingManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _getListOfChunksWithPlayerDistance();

    MCNAPI void _relightChunks(::std::chrono::nanoseconds timeLimit);

    MCNAPI void _removeProcessedSubchunks();

    MCNAPI void updateBlockLight(
        ::BlockPos const& blockPos,
        ::Brightness      oldBrightness,
        ::Brightness      newBrightness,
        ::Brightness      oldAbsorption,
        ::Brightness      newAbsorption,
        bool              isSkyLight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
