#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockComponentDirectData {
public:
    // BlockComponentDirectData inner types define
    enum class LayerBitMask : int {
        None      = 0,
        Init      = 1,
        Rendering = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb0c407;
    ::ll::UntypedStorage<8, 8> mUnk9d5ce7;
    ::ll::UntypedStorage<8, 8> mUnkc58c4d;
    ::ll::UntypedStorage<8, 8> mUnk3708df;
    ::ll::UntypedStorage<8, 8> mUnkc655c3;
    ::ll::UntypedStorage<8, 8> mUnkf1ecf5;
    ::ll::UntypedStorage<8, 8> mUnk219668;
    ::ll::UntypedStorage<1, 1> mUnkf938af;
    ::ll::UntypedStorage<1, 1> mUnk655f5d;
    ::ll::UntypedStorage<1, 1> mUnk447d20;
    ::ll::UntypedStorage<1, 1> mUnke8f499;
    ::ll::UntypedStorage<1, 1> mUnkda4e0e;
    ::ll::UntypedStorage<1, 1> mUnkce59a7;
    ::ll::UntypedStorage<4, 4> mUnkda06ee;
    ::ll::UntypedStorage<4, 4> mUnk2c97b4;
    ::ll::UntypedStorage<4, 4> mUnk2a895e;
    ::ll::UntypedStorage<4, 4> mUnk75da08;
    ::ll::UntypedStorage<4, 4> mUnkc08fbd;
    ::ll::UntypedStorage<1, 4> mUnkd3e7c9;
    ::ll::UntypedStorage<4, 4> mUnk78fd87;
    ::ll::UntypedStorage<8, 8> mUnk84a8b9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentDirectData& operator=(BlockComponentDirectData const&);
    BlockComponentDirectData(BlockComponentDirectData const&);
    BlockComponentDirectData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _finalizeInit(::Block const& block);
    // NOLINTEND
};
