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
        // member functions
        // NOLINTBEGIN
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
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                  mResultItem;
    ::ll::TypedStorage<4, 4, int>                                mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem::Effect>> mEffects;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addEffect(::FeedItem::Effect const& effect);

    MCNAPI ~FeedItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
