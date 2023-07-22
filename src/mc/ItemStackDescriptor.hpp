/**
 * @file  ItemStackDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "ItemDescriptorCount.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackDescriptor.
 *
 */
class ItemStackDescriptor : public ItemDescriptorCount {

#define AFTER_EXTRA
// Add Member There
    char filler[88];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKDESCRIPTOR
public:
    class ItemStackDescriptor& operator=(class ItemStackDescriptor const &) = delete;
    ItemStackDescriptor(class ItemStackDescriptor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackDescriptor();
    /**
     * @symbol  ??0ItemStackDescriptor\@\@QEAA\@XZ
     */
    MCAPI ItemStackDescriptor();
    /**
     * @symbol  ??0ItemStackDescriptor\@\@QEAA\@AEBVItem\@\@HGPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackDescriptor(class Item const &, int, unsigned short, class CompoundTag const *);
    /**
     * @symbol  ??4ItemStackDescriptor\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ItemStackDescriptor & operator=(class ItemStackDescriptor &&);

};