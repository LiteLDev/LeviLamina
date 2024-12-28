#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeedItem {
public:
    // FeedItem inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FeedItem inner types define
    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk6f8fa9;
        ::ll::UntypedStorage<4, 4>  mUnkd1c99e;
        ::ll::UntypedStorage<4, 4>  mUnka46569;
        ::ll::UntypedStorage<4, 4>  mUnkf3d006;
        ::ll::UntypedStorage<4, 4>  mUnk347709;
        // NOLINTEND

    public:
        // prevent constructor by default
        Effect(Effect const&);
        Effect();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::FeedItem::Effect& operator=(::FeedItem::Effect const&);

        MCAPI ::FeedItem::Effect& operator=(::FeedItem::Effect&&);

        MCAPI ~Effect();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9fe4ff;
    ::ll::UntypedStorage<4, 4>  mUnk72f8ed;
    ::ll::UntypedStorage<8, 24> mUnk32f85a;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedItem& operator=(FeedItem const&);
    FeedItem(FeedItem const&);
    FeedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addEffect(::FeedItem::Effect const& effect);

    MCAPI ~FeedItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
