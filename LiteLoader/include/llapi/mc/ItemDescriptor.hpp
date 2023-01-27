/**
 * @file  ItemDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemDescriptor();
    /**
     * @hash   1636067125
     * @vftbl  1
     * @symbol  ?serialize\@ItemDescriptor\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @hash   -1766449971
     * @vftbl  2
     * @symbol  ?serialize\@ItemDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -220935602
     * @symbol  ??0ItemDescriptor\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptor();
    /**
     * @hash   -1634644300
     * @symbol  ??0ItemDescriptor\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@H\@Z
     */
    MCAPI ItemDescriptor(class gsl::basic_string_span<char const, -1>, int);
    /**
     * @hash   225644702
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI ItemDescriptor(class Json::Value const &, class SemVersion const &);
    /**
     * @hash   -227026938
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEBVItem\@\@H\@Z
     */
    MCAPI ItemDescriptor(class Item const &, int);
    /**
     * @hash   -1073393333
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI ItemDescriptor(class BlockLegacy const &);
    /**
     * @hash   -2098217107
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI ItemDescriptor(class Block const &);
    /**
     * @hash   355523809
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor const &);
    /**
     * @hash   183853803
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEBUItemTag\@\@\@Z
     */
    MCAPI ItemDescriptor(struct ItemTag const &);
    /**
     * @hash   -1930213777
     * @symbol  ??0ItemDescriptor\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptor(class ReadOnlyBinaryStream &);
    /**
     * @hash   430638093
     * @symbol  ??0ItemDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor &&);
    /**
     * @hash   -931542687
     * @symbol  ?forEachItemUntil\@ItemDescriptor\@\@QEBA_NV?$function\@$$A6A_NAEBVItem\@\@F\@Z\@std\@\@\@Z
     */
    MCAPI bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    /**
     * @hash   761996875
     * @symbol  ?getAuxValue\@ItemDescriptor\@\@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @hash   -1860220891
     * @symbol  ?getBlock\@ItemDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   1701275610
     * @symbol  ?getFullName\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getFullName() const;
    /**
     * @hash   1626165359
     * @symbol  ?getHash\@ItemDescriptor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   -947319493
     * @symbol  ?getId\@ItemDescriptor\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @hash   -788321160
     * @symbol  ?getIdAux\@ItemDescriptor\@\@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @hash   -1406699361
     * @symbol  ?getItem\@ItemDescriptor\@\@QEBAPEBVItem\@\@XZ
     */
    MCAPI class Item const * getItem() const;
    /**
     * @hash   892132125
     * @symbol  ?getLegacyBlock\@ItemDescriptor\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @hash   -51568600
     * @symbol  ?getRawNameId\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @hash   -1259659170
     * @symbol  ?getSerializedNameAndAux\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSerializedNameAndAux() const;
    /**
     * @hash   -435582598
     * @symbol  ?isDefinedAsItemName\@ItemDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isDefinedAsItemName() const;
    /**
     * @hash   -548380372
     * @symbol  ?isNull\@ItemDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   -137635467
     * @symbol  ?isValid\@ItemDescriptor\@\@QEBA_N_N\@Z
     */
    MCAPI bool isValid(bool) const;
    /**
     * @hash   -133792775
     * @symbol  ??4ItemDescriptor\@\@QEAAXAEBV0\@\@Z
     */
    MCAPI void operator=(class ItemDescriptor const &);
    /**
     * @hash   1913305765
     * @symbol  ??4ItemDescriptor\@\@QEAAX$$QEAV0\@\@Z
     */
    MCAPI void operator=(class ItemDescriptor &&);
    /**
     * @hash   -1207505771
     * @symbol  ??8ItemDescriptor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ItemDescriptor const &) const;
    /**
     * @hash   -1340108709
     * @symbol  ?sameItem\@ItemDescriptor\@\@QEBA_NAEBV1\@_N\@Z
     */
    MCAPI bool sameItem(class ItemDescriptor const &, bool) const;
    /**
     * @hash   1889548400
     * @symbol  ?sameItem\@ItemDescriptor\@\@QEBA_NAEBVItemStack\@\@_N\@Z
     */
    MCAPI bool sameItem(class ItemStack const &, bool) const;
    /**
     * @hash   643142319
     * @symbol  ?save\@ItemDescriptor\@\@QEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class CompoundTag> save() const;
    /**
     * @hash   406525331
     * @symbol  ?bindType\@ItemDescriptor\@\@SAXXZ
     */
    MCAPI static void bindType();

//private:
    /**
     * @hash   -9498682
     * @symbol  ?_resolve\@ItemDescriptor\@\@AEBAXXZ
     */
    MCAPI void _resolve() const;
    /**
     * @hash   369501955
     * @symbol  ?fromMap\@ItemDescriptor\@\@CAXAEAV1\@AEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBVBedrockLoadContext\@\@\@Z
     */
    MCAPI static void fromMap(class ItemDescriptor &, class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &, class BedrockLoadContext const &);
    /**
     * @hash   467464699
     * @symbol  ?toMap\@ItemDescriptor\@\@CA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap(class ItemDescriptor const &);

private:

};