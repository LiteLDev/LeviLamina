#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengersToPositionComponent {
public:
    // PassengersToPositionComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // PassengersToPositionComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk140c93;
        ::ll::UntypedStorage<4, 8> mUnk2073b7;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4cf956;
    ::ll::UntypedStorage<8, 24> mUnkb8156a;
    // NOLINTEND

public:
    // prevent constructor by default
    PassengersToPositionComponent& operator=(PassengersToPositionComponent const&);
    PassengersToPositionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PassengersToPositionComponent(::PassengersToPositionComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PassengersToPositionComponent const&);
    // NOLINTEND
};
