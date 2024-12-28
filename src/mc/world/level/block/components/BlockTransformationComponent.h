#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTransformationComponent {
public:
    // BlockTransformationComponent inner types declare
    // clang-format off
    struct RotationType;
    struct ScaleType;
    // clang-format on

    // BlockTransformationComponent inner types define
    struct RotationType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnka67572;
        ::ll::UntypedStorage<4, 4>  mUnk5c5919;
        ::ll::UntypedStorage<4, 4>  mUnkb59fca;
        ::ll::UntypedStorage<4, 12> mUnk414d5a;
        // NOLINTEND

    public:
        // prevent constructor by default
        RotationType& operator=(RotationType const&);
        RotationType(RotationType const&);
        RotationType();
    };

    struct ScaleType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk32f679;
        ::ll::UntypedStorage<4, 12> mUnk5dbe5e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScaleType& operator=(ScaleType const&);
        ScaleType(ScaleType const&);
        ScaleType();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk53772d;
    ::ll::UntypedStorage<4, 12> mUnk5bbee8;
    ::ll::UntypedStorage<4, 24> mUnkfbfec2;
    ::ll::UntypedStorage<4, 24> mUnkdb3432;
    ::ll::UntypedStorage<4, 64> mUnk7ece44;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTransformationComponent& operator=(BlockTransformationComponent const&);
    BlockTransformationComponent(BlockTransformationComponent const&);
    BlockTransformationComponent();
};
