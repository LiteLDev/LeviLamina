#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class Cord {
public:
    // Cord inner types declare
    // clang-format off
    class ChunkIterator;
    class CharIterator;
    class CharRange;
    class ChunkRange;
    class InlineRep;
    // clang-format on

    // Cord inner types define
    class ChunkIterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk5fe089;
        ::ll::UntypedStorage<8, 8>   mUnkd4b644;
        ::ll::UntypedStorage<8, 8>   mUnk2d7e78;
        ::ll::UntypedStorage<8, 120> mUnk495648;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkIterator& operator=(ChunkIterator const&);
        ChunkIterator(ChunkIterator const&);
        ChunkIterator();
    };

    class CharIterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnk6b8a90;
        // NOLINTEND

    public:
        // prevent constructor by default
        CharIterator& operator=(CharIterator const&);
        CharIterator(CharIterator const&);
        CharIterator();
    };

    class CharRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd9594d;
        // NOLINTEND

    public:
        // prevent constructor by default
        CharRange& operator=(CharRange const&);
        CharRange(CharRange const&);
        CharRange();
    };

    class ChunkRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7180ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkRange& operator=(ChunkRange const&);
        ChunkRange(ChunkRange const&);
        ChunkRange();
    };

    class InlineRep {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk6f99e6;
        // NOLINTEND

    public:
        // prevent constructor by default
        InlineRep& operator=(InlineRep const&);
        InlineRep(InlineRep const&);
        InlineRep();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb58770;
    // NOLINTEND

public:
    // prevent constructor by default
    Cord& operator=(Cord const&);
    Cord(Cord const&);
    Cord();
};

} // namespace absl
