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
        // prevent constructor by default
        Effect(Effect const&);
        Effect();

    public:
        // NOLINTBEGIN
        MCAPI struct FeedItem::Effect& operator=(struct FeedItem::Effect&&);

        MCAPI struct FeedItem::Effect& operator=(struct FeedItem::Effect const&);

        MCAPI ~Effect();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeedItem();

public:
    // NOLINTBEGIN
    MCAPI FeedItem(struct FeedItem const&);

    MCAPI void addEffect(struct FeedItem::Effect const& effect);

    MCAPI struct FeedItem& operator=(struct FeedItem&&);

    MCAPI struct FeedItem& operator=(struct FeedItem const&);

    MCAPI ~FeedItem();

    // NOLINTEND
};
