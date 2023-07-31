#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemLockHelper {

public:
    // prevent constructor by default
    ItemLockHelper& operator=(ItemLockHelper const&) = delete;
    ItemLockHelper(ItemLockHelper const&)            = delete;
    ItemLockHelper()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addKeepOnDeath\@ItemLockHelper\@\@SA_NAEAVItemStackBase\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool addKeepOnDeath(class ItemStackBase&, class Json::Value const&);
    /**
     * @symbol ?canMoveItemSlots\@ItemLockHelper\@\@SA_NAEBVActor\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool canMoveItemSlots(class Actor const&, class ItemStackBase const&);
    /**
     * @symbol ?getItemLockMode\@ItemLockHelper\@\@SA?AW4ItemLockMode\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static enum class ItemLockMode getItemLockMode(class ItemStackBase const&);
    /**
     * @symbol ?isItemLocked\@ItemLockHelper\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isItemLocked(class ItemStackBase const&);
    /**
     * @symbol ?isItemLockedInSlot\@ItemLockHelper\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isItemLockedInSlot(class ItemStackBase const&);
    /**
     * @symbol ?setItemLockMode\@ItemLockHelper\@\@SAXAEAVItemStackBase\@\@W4ItemLockMode\@\@\@Z
     */
    MCAPI static void setItemLockMode(class ItemStackBase&, enum class ItemLockMode);
    /**
     * @symbol ?setKeepOnDeath\@ItemLockHelper\@\@SAXAEAVItemStackBase\@\@_N\@Z
     */
    MCAPI static void setKeepOnDeath(class ItemStackBase&, bool);
    /**
     * @symbol ?shouldKeepOnDeath\@ItemLockHelper\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const&);
    /**
     * @symbol ?shouldKeepOnDeath\@ItemLockHelper\@\@SA_NAEBVActor\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool shouldKeepOnDeath(class Actor const&, class ItemStackBase const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_parseItemLockMode\@ItemLockHelper\@\@CA_NAEAVItemStackBase\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool _parseItemLockMode(class ItemStackBase&, class Json::Value const&);
    // NOLINTEND
};
