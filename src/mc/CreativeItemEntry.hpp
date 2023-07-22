/**
 * @file  CreativeItemEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0CreativeItemEntry\@\@QEAA\@PEAVCreativeItemRegistry\@\@AEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@AEBVItemInstance\@\@I\@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemRegistry *, class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &, unsigned int);
    /**
     * @symbol  ??0CreativeItemEntry\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemEntry &&);
    /**
     * @symbol  ?getCreativeNetId\@CreativeItemEntry\@\@QEBAAEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const & getCreativeNetId() const;
    /**
     * @symbol  ?getGroup\@CreativeItemEntry\@\@QEBAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo * getGroup() const;
    /**
     * @symbol  ?getIndex\@CreativeItemEntry\@\@QEBAIXZ
     */
    MCAPI unsigned int getIndex() const;
    /**
     * @symbol  ?getItemInstance\@CreativeItemEntry\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getItemInstance() const;

//private:
    /**
     * @symbol  ?_setGroup\@CreativeItemEntry\@\@AEAAXPEAVCreativeGroupInfo\@\@\@Z
     */
    MCAPI void _setGroup(class CreativeGroupInfo *);

private:

};