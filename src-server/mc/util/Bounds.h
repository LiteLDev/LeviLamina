#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/Pos.h"

struct Bounds {
public:
    // Bounds inner types declare
    // clang-format off
    struct Iterator;
    // clang-format on
    
    // Bounds inner types define
    struct Iterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkf04f31;
        ::ll::UntypedStorage<8, 8> mUnkfc43ca;
        ::ll::UntypedStorage<4, 4> mUnk59a16e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Iterator& operator=(Iterator const&);
        Iterator(Iterator const&);
        Iterator();
    
    };
    
    enum class Option : int {
        Default = 0,
        Flatten = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Pos> mMin;
    ::ll::TypedStorage<4, 12, ::Pos> mMax;
    ::ll::TypedStorage<4, 12, ::Pos> mDim;
    ::ll::TypedStorage<4, 4, int> mArea;
    ::ll::TypedStorage<4, 4, int> mVolume;
    ::ll::TypedStorage<4, 4, int> mSide;
    // NOLINTEND

};
