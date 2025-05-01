#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

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
        ::ll::UntypedStorage<4, 4>  mUnk130c03;
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
        MCNAPI ::FeedItem::Effect& operator=(::FeedItem::Effect const&);

        MCNAPI ::FeedItem::Effect& operator=(::FeedItem::Effect&&);

        MCNAPI ~Effect();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                  mItemDescriptor;
    ::ll::TypedStorage<4, 4, int>                                mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem::Effect>> mEffects;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeedItem(::FeedItem const&);

    MCNAPI void addEffect(::FeedItem::Effect const& effect);

    MCNAPI ::FeedItem& operator=(::FeedItem const&);

    MCNAPI ::FeedItem& operator=(::FeedItem&&);

    MCNAPI ~FeedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
