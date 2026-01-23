#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/EffectDuration.h"
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
        ::ll::TypedStorage<8, 32, ::std::string>   descriptionId;
        ::ll::TypedStorage<4, 4, int>              id;
        ::ll::TypedStorage<4, 4, ::EffectDuration> duration;
        ::ll::TypedStorage<4, 4, int>              amplifier;
        ::ll::TypedStorage<4, 4, float>            chance;
        // NOLINTEND

    public:
        // prevent constructor by default
        Effect(Effect const&);
        Effect();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::FeedItem::Effect& operator=(::FeedItem::Effect&&);

        MCFOLD ::FeedItem::Effect& operator=(::FeedItem::Effect const&);

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
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                  mResultItem;
    ::ll::TypedStorage<4, 4, int>                                mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem::Effect>> mEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeedItem(::FeedItem const&);

    MCAPI void addEffect(::FeedItem::Effect const& effect);

    MCAPI ::FeedItem& operator=(::FeedItem&&);

    MCAPI ::FeedItem& operator=(::FeedItem const&);

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
