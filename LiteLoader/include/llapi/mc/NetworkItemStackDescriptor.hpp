/**
 * @file  MC/NetworkItemStackDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~NetworkItemStackDescriptor();
    /**
     * @hash   -1112845973
     * @symbol ??0NetworkItemStackDescriptor@@QEAA@AEBVItemStackDescriptor@@@Z
     */
    MCAPI NetworkItemStackDescriptor(class ItemStackDescriptor const &);
    /**
     * @hash   -1567195063
     * @symbol ??0NetworkItemStackDescriptor@@QEAA@AEBVItemStack@@@Z
     */
    MCAPI NetworkItemStackDescriptor(class ItemStack const &);
    /**
     * @symbol ??0NetworkItemStackDescriptor@@QEAA@XZ
     */
    MCAPI NetworkItemStackDescriptor();
    /**
     * @symbol ??0NetworkItemStackDescriptor@@QEAA@AEBV0@@Z
     */
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor const &);
    /**
     * @hash   661902821
     * @symbol ??0NetworkItemStackDescriptor@@QEAA@$$QEAV0@@Z
     */
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor &&);
    /**
     * @hash   -1644690074
     * @symbol ?read@NetworkItemStackDescriptor@@QEAAXAEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1029300426
     * @symbol ?setIncludeNetIds@NetworkItemStackDescriptor@@QEBAX_N@Z
     */
    MCAPI void setIncludeNetIds(bool) const;
    /**
     * @hash   897369710
     * @symbol ?tryGetServerNetId@NetworkItemStackDescriptor@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetServerNetId() const;
    /**
     * @hash   -1313731644
     * @symbol ?write@NetworkItemStackDescriptor@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void write(class BinaryStream &) const;

//private:
    /**
     * @hash   -1674561695
     * @symbol ?getItemStack@NetworkItemStackDescriptor@@AEBA?AVItemStack@@AEBVBlockPalette@@@Z
     */
    MCAPI class ItemStack getItemStack(class BlockPalette const &) const;

private:

};
