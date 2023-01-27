/**
 * @file  NetworkItemInstanceDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../ItemDescriptorCount.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkItemInstanceDescriptor.
 *
 */
class NetworkItemInstanceDescriptor : public ItemDescriptorCount {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKITEMINSTANCEDESCRIPTOR
public:
    class NetworkItemInstanceDescriptor& operator=(class NetworkItemInstanceDescriptor const &) = delete;
    NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor const &) = delete;
    NetworkItemInstanceDescriptor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkItemInstanceDescriptor();
    /**
     * @hash   -99591396
     * @symbol  ??0NetworkItemInstanceDescriptor\@\@QEAA\@AEBVItemStackDescriptor\@\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemStackDescriptor const &);
    /**
     * @hash   -777832554
     * @symbol  ??0NetworkItemInstanceDescriptor\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemInstance const &);
    /**
     * @hash   -265776109
     * @symbol  ??0NetworkItemInstanceDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor &&);
    /**
     * @hash   -1523630815
     * @symbol  ?getItemInstance\@NetworkItemInstanceDescriptor\@\@QEBA?AVItemInstance\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI class ItemInstance getItemInstance(class BlockPalette const &) const;
    /**
     * @hash   -44296498
     * @symbol  ?read\@NetworkItemInstanceDescriptor\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   79225842
     * @symbol  ?write\@NetworkItemInstanceDescriptor\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;

};