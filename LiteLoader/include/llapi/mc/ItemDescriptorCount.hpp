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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemDescriptorCount();
    /**
     * @hash   167273416
     * @vftbl  2
     * @symbol  ?serialize\@ItemDescriptorCount\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -633730295
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptorCount();
    /**
     * @hash   -1123937031
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(class gsl::basic_string_span<char const, -1>, int, unsigned short);
    /**
     * @hash   -988060168
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@AEBVItemDescriptor\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class ItemDescriptor const &, unsigned short);
    /**
     * @hash   -407916969
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@AEBVItem\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(class Item const &, int, unsigned short);
    /**
     * @hash   -1917938526
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@AEBVBlockLegacy\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class BlockLegacy const &, unsigned short);
    /**
     * @hash   1190078288
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@AEBVBlock\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class Block const &, unsigned short);
    /**
     * @hash   -301446974
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@AEBUItemTag\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(struct ItemTag const &, unsigned short);
    /**
     * @hash   1957929642
     * @symbol  ??0ItemDescriptorCount\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptorCount(class ReadOnlyBinaryStream &);
    /**
     * @hash   729341265
     * @symbol  ?getStackSize\@ItemDescriptorCount\@\@QEBAFXZ
     */
    MCAPI short getStackSize() const;
    /**
     * @hash   1265944623
     * @symbol  ?setStackSize\@ItemDescriptorCount\@\@QEAAXF\@Z
     */
    MCAPI void setStackSize(short);

};