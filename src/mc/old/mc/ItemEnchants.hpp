/**
 * @file  ItemEnchants.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemEnchants.
 *
 */
class ItemEnchants {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMENCHANTS
public:
    class ItemEnchants& operator=(class ItemEnchants const &) = delete;
    ItemEnchants(class ItemEnchants const &) = delete;
    ItemEnchants() = delete;
#endif

public:
    /**
     * @symbol  ??0ItemEnchants\@\@QEAA\@HAEBVListTag\@\@\@Z
     */
    MCAPI ItemEnchants(int, class ListTag const &);
    /**
     * @symbol  ??0ItemEnchants\@\@QEAA\@H\@Z
     */
    MCAPI ItemEnchants(int);
    /**
     * @symbol  ?addEnchant\@ItemEnchants\@\@QEAA_NVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI bool addEnchant(class EnchantmentInstance, bool);
    /**
     * @symbol  ?addEnchants\@ItemEnchants\@\@QEAAHAEBV1\@_N\@Z
     */
    MCAPI int addEnchants(class ItemEnchants const &, bool);
    /**
     * @symbol  ?canEnchant\@ItemEnchants\@\@QEAA?AUEnchantResult\@\@VEnchantmentInstance\@\@_N\@Z
     */
    MCAPI struct EnchantResult canEnchant(class EnchantmentInstance, bool);
    /**
     * @symbol  ?getAllEnchants\@ItemEnchants\@\@QEBA?AV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class EnchantmentInstance> getAllEnchants() const;
    /**
     * @symbol  ?getEnchantNames\@ItemEnchants\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getEnchantNames() const;
    /**
     * @symbol  ?getEnchantment\@ItemEnchants\@\@QEAA?AVEnchantmentInstance\@\@W4Type\@Enchant\@\@\@Z
     */
    MCAPI class EnchantmentInstance getEnchantment(enum class Enchant::Type);
    /**
     * @symbol  ?getEnchants\@ItemEnchants\@\@QEBAAEBV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class EnchantmentInstance> const & getEnchants(int) const;
    /**
     * @symbol  ?getSlot\@ItemEnchants\@\@QEBAHXZ
     */
    MCAPI int getSlot() const;
    /**
     * @symbol  ?getTotalValue\@ItemEnchants\@\@QEBAH_N\@Z
     */
    MCAPI int getTotalValue(bool) const;
    /**
     * @symbol  ?hasEnchant\@ItemEnchants\@\@QEBAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI int hasEnchant(enum class Enchant::Type) const;
    /**
     * @symbol  ?isEmpty\@ItemEnchants\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ?read\@ItemEnchants\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?removeEnchantment\@ItemEnchants\@\@QEAAXW4Type\@Enchant\@\@\@Z
     */
    MCAPI void removeEnchantment(enum class Enchant::Type);
    /**
     * @symbol  ??1ItemEnchants\@\@QEAA\@XZ
     */
    MCAPI ~ItemEnchants();

//private:
    /**
     * @symbol  ?_fromList\@ItemEnchants\@\@AEAAXAEBVListTag\@\@\@Z
     */
    MCAPI void _fromList(class ListTag const &);
    /**
     * @symbol  ?_toList\@ItemEnchants\@\@AEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> _toList() const;

private:

};