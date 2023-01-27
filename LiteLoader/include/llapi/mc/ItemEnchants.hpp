/**
 * @file  ItemEnchants.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Enchant.hpp"

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
     * @hash   2064688163
     * @symbol  ??0ItemEnchants\@\@QEAA\@HAEBVListTag\@\@\@Z
     */
    MCAPI ItemEnchants(int, class ListTag const &);
    /**
     * @hash   1052964018
     * @symbol  ??0ItemEnchants\@\@QEAA\@H\@Z
     */
    MCAPI ItemEnchants(int);
    /**
     * @hash   965851300
     * @symbol  ?addEnchant\@ItemEnchants\@\@QEAA_NVEnchantmentInstance\@\@_N\@Z
     */
    MCAPI bool addEnchant(class EnchantmentInstance, bool);
    /**
     * @hash   691161442
     * @symbol  ?addEnchants\@ItemEnchants\@\@QEAAHAEBV1\@_N\@Z
     */
    MCAPI int addEnchants(class ItemEnchants const &, bool);
    /**
     * @hash   1401334942
     * @symbol  ?canEnchant\@ItemEnchants\@\@QEAA?AUEnchantResult\@\@VEnchantmentInstance\@\@_N\@Z
     */
    MCAPI struct EnchantResult canEnchant(class EnchantmentInstance, bool);
    /**
     * @hash   1188189192
     * @symbol  ?getAllEnchants\@ItemEnchants\@\@QEBA?AV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class EnchantmentInstance> getAllEnchants() const;
    /**
     * @hash   -312484281
     * @symbol  ?getEnchantNames\@ItemEnchants\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getEnchantNames() const;
    /**
     * @hash   1810517881
     * @symbol  ?getEnchantment\@ItemEnchants\@\@QEAA?AVEnchantmentInstance\@\@W4Type\@Enchant\@\@\@Z
     */
    MCAPI class EnchantmentInstance getEnchantment(enum class Enchant::Type);
    /**
     * @hash   1732092415
     * @symbol  ?getEnchants\@ItemEnchants\@\@QEBAAEBV?$vector\@VEnchantmentInstance\@\@V?$allocator\@VEnchantmentInstance\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class EnchantmentInstance> const & getEnchants(int) const;
    /**
     * @hash   -17514202
     * @symbol  ?getSlot\@ItemEnchants\@\@QEBAHXZ
     */
    MCAPI int getSlot() const;
    /**
     * @hash   1828357129
     * @symbol  ?getTotalValue\@ItemEnchants\@\@QEBAH_N\@Z
     */
    MCAPI int getTotalValue(bool) const;
    /**
     * @hash   -2062853563
     * @symbol  ?hasEnchant\@ItemEnchants\@\@QEBAHW4Type\@Enchant\@\@\@Z
     */
    MCAPI int hasEnchant(enum class Enchant::Type) const;
    /**
     * @hash   1072156060
     * @symbol  ?isEmpty\@ItemEnchants\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   753400804
     * @symbol  ?read\@ItemEnchants\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1361998654
     * @symbol  ?removeEnchantment\@ItemEnchants\@\@QEAAXW4Type\@Enchant\@\@\@Z
     */
    MCAPI void removeEnchantment(enum class Enchant::Type);
    /**
     * @hash   -204949225
     * @symbol  ??1ItemEnchants\@\@QEAA\@XZ
     */
    MCAPI ~ItemEnchants();

//private:
    /**
     * @hash   1893454311
     * @symbol  ?_fromList\@ItemEnchants\@\@AEAAXAEBVListTag\@\@\@Z
     */
    MCAPI void _fromList(class ListTag const &);
    /**
     * @hash   -836421289
     * @symbol  ?_toList\@ItemEnchants\@\@AEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> _toList() const;

private:

};