/**
 * @file  MC/ItemDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemDescriptor.
 *
 */
class ItemDescriptor {

#define AFTER_EXTRA
// Add Member There
    char filler[8];

#define DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTOR
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTOR
public:
    class ItemDescriptor& operator=(class ItemDescriptor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemDescriptor();
    /**
     * @vftbl  1
     * @symbol ?serialize@ItemDescriptor@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @vftbl  2
     * @symbol ?serialize@ItemDescriptor@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -242751154
     * @symbol ??0ItemDescriptor@@QEAA@XZ
     */
    MCAPI ItemDescriptor();
    /**
     * @hash   -2041154988
     * @symbol ??0ItemDescriptor@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@H@Z
     */
    MCAPI ItemDescriptor(class gsl::basic_string_span<char const, -1>, int);
    /**
     * @hash   -180835234
     * @symbol ??0ItemDescriptor@@QEAA@AEBVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI ItemDescriptor(class Json::Value const &, class SemVersion const &);
    /**
     * @hash   -633414618
     * @symbol ??0ItemDescriptor@@QEAA@AEBVItem@@H@Z
     */
    MCAPI ItemDescriptor(class Item const &, int);
    /**
     * @hash   -1479688757
     * @symbol ??0ItemDescriptor@@QEAA@AEBVBlockLegacy@@@Z
     */
    MCAPI ItemDescriptor(class BlockLegacy const &);
    /**
     * @hash   1790547021
     * @symbol ??0ItemDescriptor@@QEAA@AEBVBlock@@@Z
     */
    MCAPI ItemDescriptor(class Block const &);
    /**
     * @hash   -50633231
     * @symbol ??0ItemDescriptor@@QEAA@AEBV0@@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor const &);
    /**
     * @hash   -222287861
     * @symbol ??0ItemDescriptor@@QEAA@AEBUItemTag@@@Z
     */
    MCAPI ItemDescriptor(struct ItemTag const &);
    /**
     * @hash   366979853
     * @symbol ??0ItemDescriptor@@QEAA@$$QEAV0@@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor &&);
    /**
     * @symbol ?forEachItemUntil@ItemDescriptor@@QEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
     */
    MCAPI bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    /**
     * @hash   348982139
     * @symbol ?getAuxValue@ItemDescriptor@@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @hash   2021731669
     * @symbol ?getBlock@ItemDescriptor@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   1288260874
     * @symbol ?getFullName@ItemDescriptor@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getFullName() const;
    /**
     * @symbol ?getHash@ItemDescriptor@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   -1360703253
     * @symbol ?getId@ItemDescriptor@@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @hash   -1201720296
     * @symbol ?getIdAux@ItemDescriptor@@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @hash   -1820113873
     * @symbol ?getItem@ItemDescriptor@@QEBAPEBVItem@@XZ
     */
    MCAPI class Item const * getItem() const;
    /**
     * @hash   478717613
     * @symbol ?getLegacyBlock@ItemDescriptor@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @hash   -464998488
     * @symbol ?getRawNameId@ItemDescriptor@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @hash   -1673089058
     * @symbol ?getSerializedNameAndAux@ItemDescriptor@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSerializedNameAndAux() const;
    /**
     * @hash   -849612150
     * @symbol ?isDefinedAsItemName@ItemDescriptor@@QEBA_NXZ
     */
    MCAPI bool isDefinedAsItemName() const;
    /**
     * @hash   -962425300
     * @symbol ?isNull@ItemDescriptor@@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   -551695771
     * @symbol ?isValid@ItemDescriptor@@QEBA_N_N@Z
     */
    MCAPI bool isValid(bool) const;
    /**
     * @hash   -540349591
     * @symbol ??4ItemDescriptor@@QEAAXAEBV0@@Z
     */
    MCAPI void operator=(class ItemDescriptor const &);
    /**
     * @hash   1506764325
     * @symbol ??4ItemDescriptor@@QEAAX$$QEAV0@@Z
     */
    MCAPI void operator=(class ItemDescriptor &&);
    /**
     * @hash   -1614077963
     * @symbol ??8ItemDescriptor@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class ItemDescriptor const &) const;
    /**
     * @hash   -1754661045
     * @symbol ?sameItem@ItemDescriptor@@QEBA_NAEBV1@_N@Z
     */
    MCAPI bool sameItem(class ItemDescriptor const &, bool) const;
    /**
     * @hash   1474996064
     * @symbol ?sameItem@ItemDescriptor@@QEBA_NAEBVItemStack@@_N@Z
     */
    MCAPI bool sameItem(class ItemStack const &, bool) const;
    /**
     * @hash   228835999
     * @symbol ?save@ItemDescriptor@@QEBA?AV?$optional@VCompoundTag@@@std@@XZ
     */
    MCAPI class std::optional<class CompoundTag> save() const;
    /**
     * @hash   -477389
     * @symbol ?bindType@ItemDescriptor@@SAXXZ
     */
    MCAPI static void bindType();

//private:
    /**
     * @hash   -416470650
     * @symbol ?_resolve@ItemDescriptor@@AEBAXXZ
     */
    MCAPI void _resolve() const;
    /**
     * @hash   -43758797
     * @symbol ?fromMap@ItemDescriptor@@CAXAEAV1@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBVBedrockLoadContext@@@Z
     */
    MCAPI static void fromMap(class ItemDescriptor &, class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &, class BedrockLoadContext const &);
    /**
     * @hash   52451083
     * @symbol ?toMap@ItemDescriptor@@CA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV1@@Z
     */
    MCAPI static class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap(class ItemDescriptor const &);

private:

};