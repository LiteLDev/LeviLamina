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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEEDITEM_EFFECT
    public:
        Effect(Effect const&) = delete;
        Effect()              = delete;
#endif

    public:
        /**
         * @symbol ??4Effect\@FeedItem\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct FeedItem::Effect& operator=(struct FeedItem::Effect&&);
        /**
         * @symbol ??4Effect\@FeedItem\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct FeedItem::Effect& operator=(struct FeedItem::Effect const&);
        /**
         * @symbol ??1Effect\@FeedItem\@\@QEAA\@XZ
         */
        MCAPI ~Effect();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEEDITEM
public:
    FeedItem& operator=(FeedItem const&) = delete;
    FeedItem()                           = delete;
#endif

public:
    /**
     * @symbol ??0FeedItem\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI FeedItem(struct FeedItem const&);
    /**
     * @symbol ?addEffect\@FeedItem\@\@QEAAXAEBUEffect\@1\@\@Z
     */
    MCAPI void addEffect(struct FeedItem::Effect const&);
    /**
     * @symbol ??4FeedItem\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct FeedItem& operator=(struct FeedItem&&);
    /**
     * @symbol ??1FeedItem\@\@QEAA\@XZ
     */
    MCAPI ~FeedItem();
};
