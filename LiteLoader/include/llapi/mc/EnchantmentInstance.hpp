/**
 * @file  EnchantmentInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantmentInstance.
 *
 */
class EnchantmentInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTMENTINSTANCE
public:
    class EnchantmentInstance& operator=(class EnchantmentInstance const &) = delete;
    EnchantmentInstance(class EnchantmentInstance const &) = delete;
#endif

public:
    /**
     * @hash   -1877081656
     * @symbol ??0EnchantmentInstance@@QEAA@XZ
     */
    MCAPI EnchantmentInstance();
    /**
     * @hash   1814227008
     * @symbol ??0EnchantmentInstance@@QEAA@W4Type@Enchant@@H@Z
     */
    MCAPI EnchantmentInstance(enum Enchant::Type, int);
    /**
     * @hash   352117162
     * @symbol ?getEnchantLevel@EnchantmentInstance@@QEBAHXZ
     */
    MCAPI int getEnchantLevel() const;
    /**
     * @hash   2082585112
     * @symbol ?getEnchantType@EnchantmentInstance@@QEBA?AW4Type@Enchant@@XZ
     */
    MCAPI enum Enchant::Type getEnchantType() const;
    /**
     * @hash   1915477851
     * @symbol ??8EnchantmentInstance@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class EnchantmentInstance const &) const;
    /**
     * @hash   2049343212
     * @symbol ?setEnchantLevel@EnchantmentInstance@@QEAAXH@Z
     */
    MCAPI void setEnchantLevel(int);
    /**
     * @hash   -57022362
     * @symbol ?setEnchantType@EnchantmentInstance@@QEAAXW4Type@Enchant@@@Z
     */
    MCAPI void setEnchantType(enum Enchant::Type);

};