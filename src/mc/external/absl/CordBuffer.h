#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class CordBuffer {
public:
    // CordBuffer inner types declare
    // clang-format off
    struct Rep;
    // clang-format on

    // CordBuffer inner types define
    struct Rep {
    public:
        // Rep inner types declare
        // clang-format off
        struct Long;
        struct Short;
        // clang-format on

        // Rep inner types define
        struct Long {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnke7d8aa;
            ::ll::UntypedStorage<8, 8> mUnk674eae;
            // NOLINTEND

        public:
            // prevent constructor by default
            Long& operator=(Long const&);
            Long(Long const&);
            Long();
        };

        struct Short {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1>  mUnk7c765c;
            ::ll::UntypedStorage<1, 15> mUnkccaa24;
            // NOLINTEND

        public:
            // prevent constructor by default
            Short& operator=(Short const&);
            Short(Short const&);
            Short();
        };

    public:
        // member variables
        // NOLINTBEGIN
        union {
            ::ll::UntypedStorage<8, 16> mUnk7ca06a;
            ::ll::UntypedStorage<1, 16> mUnkc4e236;
        };
        // NOLINTEND

    public:
        // prevent constructor by default
        Rep& operator=(Rep const&);
        Rep(Rep const&);
        Rep();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2c72d9;
    // NOLINTEND

public:
    // prevent constructor by default
    CordBuffer& operator=(CordBuffer const&);
    CordBuffer(CordBuffer const&);
    CordBuffer();
};

} // namespace absl
