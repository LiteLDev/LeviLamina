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
        Effect(Effect const&) = delete;
        Effect()              = delete;

    public:
        /**
         * @symbol ??4Effect\@FeedItem\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct FeedItem::Effect& operator=(struct FeedItem::Effect&&); // NOLINT
        /**
         * @symbol ??4Effect\@FeedItem\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct FeedItem::Effect& operator=(struct FeedItem::Effect const&); // NOLINT
        /**
         * @symbol ??1Effect\@FeedItem\@\@QEAA\@XZ
         */
        MCAPI ~Effect(); // NOLINT
    };

public:
    // prevent constructor by default
    FeedItem& operator=(FeedItem const&) = delete;
    FeedItem()                           = delete;

public:
    /**
     * @symbol ??0FeedItem\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI FeedItem(struct FeedItem const&); // NOLINT
    /**
     * @symbol ?addEffect\@FeedItem\@\@QEAAXAEBUEffect\@1\@\@Z
     */
    MCAPI void addEffect(struct FeedItem::Effect const&); // NOLINT
    /**
     * @symbol ??4FeedItem\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct FeedItem& operator=(struct FeedItem&&); // NOLINT
    /**
     * @symbol ??1FeedItem\@\@QEAA\@XZ
     */
    MCAPI ~FeedItem(); // NOLINT
};
