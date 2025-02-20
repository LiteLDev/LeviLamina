#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

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
        MCFOLD void $dtor();
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
    MCAPI FeedItem(::FeedItem const&);

    MCAPI void addEffect(::FeedItem::Effect const& effect);

    MCAPI ::FeedItem& operator=(::FeedItem const&);

    MCAPI ::FeedItem& operator=(::FeedItem&&);

    MCAPI ~FeedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FeedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
