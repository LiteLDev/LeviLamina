/**
 * @file  FeedItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure FeedItem.
 *
 */
struct FeedItem {

#define AFTER_EXTRA
// Add Member There
struct Effect {
    Effect() = delete;
    Effect(Effect const&) = delete;
    Effect(Effect const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEEDITEM
public:
    struct FeedItem& operator=(struct FeedItem const &) = delete;
    FeedItem() = delete;
#endif

public:
    /**
     * @hash   2135046607
     * @symbol  ??0FeedItem\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI FeedItem(struct FeedItem const &);
    /**
     * @hash   839427822
     * @symbol  ?addEffect\@FeedItem\@\@QEAAXAEBUEffect\@1\@\@Z
     */
    MCAPI void addEffect(struct FeedItem::Effect const &);
    /**
     * @hash   1743406886
     * @symbol  ??4FeedItem\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct FeedItem & operator=(struct FeedItem &&);
    /**
     * @hash   -93694053
     * @symbol  ??1FeedItem\@\@QEAA\@XZ
     */
    MCAPI ~FeedItem();

};