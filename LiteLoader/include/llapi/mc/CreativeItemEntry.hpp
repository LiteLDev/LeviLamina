/**
 * @file  CreativeItemEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreativeItemEntry.
 *
 */
class CreativeItemEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMENTRY
public:
    class CreativeItemEntry& operator=(class CreativeItemEntry const &) = delete;
    CreativeItemEntry(class CreativeItemEntry const &) = delete;
    CreativeItemEntry() = delete;
#endif

public:
    /**
     * @hash   -908090666
     * @symbol  ??0CreativeItemEntry\@\@QEAA\@PEAVCreativeItemRegistry\@\@AEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@AEBVItemInstance\@\@I\@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemRegistry *, class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &, unsigned int);
    /**
     * @hash   728934617
     * @symbol  ??0CreativeItemEntry\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemEntry &&);
    /**
     * @hash   -1367622589
     * @symbol  ?getCreativeNetId\@CreativeItemEntry\@\@QEBAAEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const & getCreativeNetId() const;
    /**
     * @hash   1686357879
     * @symbol  ?getGroup\@CreativeItemEntry\@\@QEBAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo * getGroup() const;
    /**
     * @hash   -1210066472
     * @symbol  ?getIndex\@CreativeItemEntry\@\@QEBAIXZ
     */
    MCAPI unsigned int getIndex() const;
    /**
     * @hash   961176506
     * @symbol  ?getItemInstance\@CreativeItemEntry\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getItemInstance() const;

//private:
    /**
     * @hash   1150186162
     * @symbol  ?_setGroup\@CreativeItemEntry\@\@AEAAXPEAVCreativeGroupInfo\@\@\@Z
     */
    MCAPI void _setGroup(class CreativeGroupInfo *);

private:

};