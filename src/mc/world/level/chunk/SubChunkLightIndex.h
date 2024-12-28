#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubChunkLightIndex {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            uint mUnk668c59 : 4;
            uint mUnk4f17c5 : 2;
            uint mUnk323870 : 4;
            uint mUnkcd69f1 : 2;
            uint mUnkc3724e : 4;
            uint mUnk350978 : 2;
            uint mUnka01ef0 : 8;
        };
        struct {
            uint mUnk7339ef : 18;
            uint mUnka4f1b8 : 14;
        };
        ::ll::UntypedStorage<4, 4> mUnk61bda9;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkLightIndex& operator=(SubChunkLightIndex const&);
    SubChunkLightIndex(SubChunkLightIndex const&);
    SubChunkLightIndex();
};
