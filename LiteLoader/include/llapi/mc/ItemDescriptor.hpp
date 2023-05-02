/**
 * @file  ItemDescriptor.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?serialize\@ItemDescriptor\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @vftbl 2
     * @symbol ?serialize\@ItemDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemDescriptor();
#endif
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@H\@Z
     */
    MCAPI ItemDescriptor(class std::basic_string_view<char, struct std::char_traits<char>>, int);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor const &);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptor(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptor();
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBUItemTag\@\@\@Z
     */
    MCAPI ItemDescriptor(struct ItemTag const &);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI ItemDescriptor(class Json::Value const &, class SemVersion const &);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVItem\@\@H\@Z
     */
    MCAPI ItemDescriptor(class Item const &, int);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ItemDescriptor(class ItemDescriptor &&);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI ItemDescriptor(class BlockLegacy const &);
    /**
     * @symbol ??0ItemDescriptor\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI ItemDescriptor(class Block const &);
    /**
     * @symbol ?forEachItemUntil\@ItemDescriptor\@\@QEBA_NV?$function\@$$A6A_NAEBVItem\@\@F\@Z\@std\@\@\@Z
     */
    MCAPI bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    /**
     * @symbol ?getAuxValue\@ItemDescriptor\@\@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @symbol ?getBlock\@ItemDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @symbol ?getFullName\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getFullName() const;
    /**
     * @symbol ?getHash\@ItemDescriptor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?getId\@ItemDescriptor\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @symbol ?getIdAux\@ItemDescriptor\@\@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @symbol ?getItem\@ItemDescriptor\@\@QEBAPEBVItem\@\@XZ
     */
    MCAPI class Item const * getItem() const;
    /**
     * @symbol ?getLegacyBlock\@ItemDescriptor\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @symbol ?getRawNameId\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @symbol ?getSerializedNameAndAux\@ItemDescriptor\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSerializedNameAndAux() const;
    /**
     * @symbol ?isDefinedAsItemName\@ItemDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isDefinedAsItemName() const;
    /**
     * @symbol ?isNull\@ItemDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ?isValid\@ItemDescriptor\@\@QEBA_N_N\@Z
     */
    MCAPI bool isValid(bool) const;
    /**
     * @symbol ??4ItemDescriptor\@\@QEAAX$$QEAV0\@\@Z
     */
    MCAPI void operator=(class ItemDescriptor &&);
    /**
     * @symbol ??4ItemDescriptor\@\@QEAAXAEBV0\@\@Z
     */
    MCAPI void operator=(class ItemDescriptor const &);
    /**
     * @symbol ??8ItemDescriptor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ItemDescriptor const &) const;
    /**
     * @symbol ?sameItem\@ItemDescriptor\@\@QEBA_NAEBV1\@_N\@Z
     */
    MCAPI bool sameItem(class ItemDescriptor const &, bool) const;
    /**
     * @symbol ?sameItem\@ItemDescriptor\@\@QEBA_NAEBVItemStack\@\@_N\@Z
     */
    MCAPI bool sameItem(class ItemStack const &, bool) const;
    /**
     * @symbol ?save\@ItemDescriptor\@\@QEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class CompoundTag> save() const;
    /**
     * @symbol ?bindType\@ItemDescriptor\@\@SAXXZ
     */
    MCAPI static void bindType();

//private:
    /**
     * @symbol ?_resolve\@ItemDescriptor\@\@AEBAXXZ
     */
    MCAPI void _resolve() const;
    /**
     * @symbol ?fromMap\@ItemDescriptor\@\@CAXAEAV1\@AEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBVBedrockLoadContext\@\@\@Z
     */
    MCAPI static void fromMap(class ItemDescriptor &, class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &, class BedrockLoadContext const &);
    /**
     * @symbol ?toMap\@ItemDescriptor\@\@CA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap(class ItemDescriptor const &);

private:

};
