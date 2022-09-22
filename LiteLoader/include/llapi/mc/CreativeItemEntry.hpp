/**
 * @file  CreativeItemEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1765917706
     * @symbol ??0CreativeItemEntry@@QEAA@PEAVCreativeItemRegistry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@AEBVItemInstance@@I@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemRegistry *, class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &, unsigned int);
    /**
     * @hash   -128892423
     * @symbol ??0CreativeItemEntry@@QEAA@$$QEAV0@@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemEntry &&);
    /**
     * @hash   2073284787
     * @symbol ?getCreativeNetId@CreativeItemEntry@@QEBAAEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const & getCreativeNetId() const;
    /**
     * @hash   828530839
     * @symbol ?getGroup@CreativeItemEntry@@QEBAPEAVCreativeGroupInfo@@XZ
     */
    MCAPI class CreativeGroupInfo * getGroup() const;
    /**
     * @hash   -365924072
     * @symbol ?getIndex@CreativeItemEntry@@QEBAIXZ
     */
    MCAPI unsigned int getIndex() const;
    /**
     * @hash   707933786
     * @symbol ?getItemInstance@CreativeItemEntry@@QEBAAEBVItemInstance@@XZ
     */
    MCAPI class ItemInstance const & getItemInstance() const;

//private:
    /**
     * @hash   292359122
     * @symbol ?_setGroup@CreativeItemEntry@@AEAAXPEAVCreativeGroupInfo@@@Z
     */
    MCAPI void _setGroup(class CreativeGroupInfo *);

private:

};