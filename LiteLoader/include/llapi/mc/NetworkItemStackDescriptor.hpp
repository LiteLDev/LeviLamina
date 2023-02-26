/**
 * @file  NetworkItemStackDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "ItemDescriptorCount.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ItemDescriptor.hpp"
#include "ItemStackNetIdVariant.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkItemStackDescriptor.
 *
 */
class NetworkItemStackDescriptor : public ItemDescriptorCount {

#define AFTER_EXTRA
// Add Member There
public:
    char filler[72];
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKITEMSTACKDESCRIPTOR
public:
    class NetworkItemStackDescriptor& operator=(class NetworkItemStackDescriptor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkItemStackDescriptor();
    /**
     * @symbol  ??0NetworkItemStackDescriptor\@\@QEAA\@AEBVItemStackDescriptor\@\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class ItemStackDescriptor const &);
    /**
     * @symbol  ??0NetworkItemStackDescriptor\@\@QEAA\@AEBVItemStack\@\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class ItemStack const &);
    /**
     * @symbol  ??0NetworkItemStackDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor &&);
    /**
     * @symbol  ??0NetworkItemStackDescriptor\@\@QEAA\@XZ
     */
    MCAPI NetworkItemStackDescriptor();
    /**
     * @symbol  ??0NetworkItemStackDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor const &);
    /**
     * @symbol  ?read\@NetworkItemStackDescriptor\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?setIncludeNetIds\@NetworkItemStackDescriptor\@\@QEBAX_N\@Z
     */
    MCAPI void setIncludeNetIds(bool) const;
    /**
     * @symbol  ?tryGetServerNetId\@NetworkItemStackDescriptor\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetServerNetId() const;
    /**
     * @symbol  ?write\@NetworkItemStackDescriptor\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;

//private:
    /**
     * @symbol  ?getItemStack\@NetworkItemStackDescriptor\@\@AEBA?AVItemStack\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI class ItemStack getItemStack(class BlockPalette const &) const;

private:

};