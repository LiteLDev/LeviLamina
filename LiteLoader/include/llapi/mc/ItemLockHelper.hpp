/**
 * @file  ItemLockHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemLockHelper.
 *
 */
class ItemLockHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMLOCKHELPER
public:
    class ItemLockHelper& operator=(class ItemLockHelper const &) = delete;
    ItemLockHelper(class ItemLockHelper const &) = delete;
    ItemLockHelper() = delete;
#endif

public:
    /**
     * @hash   843957512
     * @symbol  ?addItemLockMode\@ItemLockHelper\@\@SA_NAEAVItemStackBase\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool addItemLockMode(class ItemStackBase &, class Json::Value const &);
    /**
     * @hash   -928092982
     * @symbol  ?addKeepOnDeath\@ItemLockHelper\@\@SA_NAEAVItemStackBase\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool addKeepOnDeath(class ItemStackBase &, class Json::Value const &);
    /**
     * @hash   278568408
     * @symbol  ?canMoveItemSlots\@ItemLockHelper\@\@SA_NAEBVActor\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool canMoveItemSlots(class Actor const &, class ItemStackBase const &);
    /**
     * @hash   -63900681
     * @symbol  ?getItemLockMode\@ItemLockHelper\@\@SA?AW4ItemLockMode\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static enum class ItemLockMode getItemLockMode(class ItemStackBase const &);
    /**
     * @hash   -1706948305
     * @symbol  ?isItemLocked\@ItemLockHelper\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isItemLocked(class ItemStackBase const &);
    /**
     * @hash   -1824521399
     * @symbol  ?isItemLockedInSlot\@ItemLockHelper\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isItemLockedInSlot(class ItemStackBase const &);
    /**
     * @hash   1898739874
     * @symbol  ?shouldKeepOnDeath\@ItemLockHelper\@\@SA_NAEBVActor\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool shouldKeepOnDeath(class Actor const &, class ItemStackBase const &);
    /**
     * @hash   -286951327
     * @symbol  ?shouldKeepOnDeath\@ItemLockHelper\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const &);

//private:
    /**
     * @hash   1289323117
     * @symbol  ?_parseItemLockMode\@ItemLockHelper\@\@CA_NAEAVItemStackBase\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool _parseItemLockMode(class ItemStackBase &, class Json::Value const &);

private:

};