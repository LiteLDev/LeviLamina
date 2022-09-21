/**
 * @file  MC/FeedItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2009071039
     * @symbol ??0FeedItem@@QEAA@AEBU0@@Z
     */
    MCAPI FeedItem(struct FeedItem const &);
    /**
     * @hash   1425422558
     * @symbol ?addEffect@FeedItem@@QEAAXAEBUEffect@1@@Z
     */
    MCAPI void addEffect(struct FeedItem::Effect const &);
    /**
     * @hash   -128559610
     * @symbol ??4FeedItem@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct FeedItem & operator=(struct FeedItem &&);
    /**
     * @hash   -219715749
     * @symbol ??1FeedItem@@QEAA@XZ
     */
    MCAPI ~FeedItem();

};