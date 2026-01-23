#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBubbleColumnBlockComponent {
public:
    // InsideBubbleColumnBlockComponent inner types declare
    // clang-format off
    struct AboveColumnData;
    struct InsideColumnData;
    // clang-format on

    // InsideBubbleColumnBlockComponent inner types define
    struct AboveColumnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk5b361c;
        ::ll::UntypedStorage<1, 1>  mUnkbf7308;
        // NOLINTEND

    public:
        // prevent constructor by default
        AboveColumnData& operator=(AboveColumnData const&);
        AboveColumnData(AboveColumnData const&);
        AboveColumnData();
    };

    struct InsideColumnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkada1bd;
        ::ll::UntypedStorage<1, 1>  mUnk38a401;
        // NOLINTEND

    public:
        // prevent constructor by default
        InsideColumnData& operator=(InsideColumnData const&);
        InsideColumnData(InsideColumnData const&);
        InsideColumnData();
    };

    using DataVariant = ::std::variant<
        ::InsideBubbleColumnBlockComponent::AboveColumnData,
        ::InsideBubbleColumnBlockComponent::InsideColumnData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::InsideBubbleColumnBlockComponent::AboveColumnData,
            ::InsideBubbleColumnBlockComponent::InsideColumnData>>>
        mData;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBubbleColumnBlockComponent& operator=(InsideBubbleColumnBlockComponent const&);
    InsideBubbleColumnBlockComponent(InsideBubbleColumnBlockComponent const&);
    InsideBubbleColumnBlockComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InsideBubbleColumnBlockComponent& operator=(::InsideBubbleColumnBlockComponent&&);
    // NOLINTEND
};
