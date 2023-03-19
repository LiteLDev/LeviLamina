/**
 * @file  ItemDescriptorCount.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "ItemDescriptor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ItemDescriptor.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemDescriptorCount.
 *
 */
class ItemDescriptorCount : public ItemDescriptor {

#define AFTER_EXTRA
// Add Member There
    unsigned short mCount;
    char mfiller[6];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTORCOUNT
public:
    class ItemDescriptorCount& operator=(class ItemDescriptorCount const &) = delete;
    ItemDescriptorCount(class ItemDescriptorCount const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serialize\@ItemDescriptorCount\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTORCOUNT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemDescriptorCount();
#endif
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptorCount(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVBlock\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class Block const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(class std::basic_string_view<char, struct std::char_traits<char>>, int, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVItem\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(class Item const &, int, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBUItemTag\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(struct ItemTag const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVBlockLegacy\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class BlockLegacy const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVItemDescriptor\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class ItemDescriptor const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptorCount();
    /**
     * @symbol ?getStackSize\@ItemDescriptorCount\@\@QEBAFXZ
     */
    MCAPI short getStackSize() const;
    /**
     * @symbol ?setStackSize\@ItemDescriptorCount\@\@QEAAXF\@Z
     */
    MCAPI void setStackSize(short);

};
