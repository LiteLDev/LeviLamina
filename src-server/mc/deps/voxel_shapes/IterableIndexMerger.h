#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class IterableIndexMerger {
public:
    // IterableIndexMerger inner types declare
    // clang-format off
    struct Iterator;
    struct StartPoint;
    // clang-format on
    
    // IterableIndexMerger inner types define
    struct Iterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb372ab;
        ::ll::UntypedStorage<1, 2> mUnk25401a;
        ::ll::UntypedStorage<4, 4> mUnkc36fe4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Iterator& operator=(Iterator const&);
        Iterator(Iterator const&);
        Iterator();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::VoxelShapes::IterableIndexMerger::Iterator& operator++();
        // NOLINTEND
    
    };
    
    struct StartPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb0a14a;
        ::ll::UntypedStorage<1, 1> mUnkee14f3;
        ::ll::UntypedStorage<4, 4> mUnk87f8b9;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        StartPoint& operator=(StartPoint const&);
        StartPoint(StartPoint const&);
        StartPoint();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd610d5;
    ::ll::UntypedStorage<8, 8> mUnkb22d02;
    ::ll::UntypedStorage<1, 1> mUnk232ca0;
    ::ll::UntypedStorage<1, 1> mUnkf13dd0;
    ::ll::UntypedStorage<4, 8> mUnk39f5ae;
    ::ll::UntypedStorage<1, 1> mUnkbbf2f6;
    // NOLINTEND

public:
    // prevent constructor by default
    IterableIndexMerger& operator=(IterableIndexMerger const&);
    IterableIndexMerger(IterableIndexMerger const&);
    IterableIndexMerger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VoxelShapes::IterableIndexMerger::StartPoint findStart() const;
    // NOLINTEND

};

}
