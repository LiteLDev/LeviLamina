/**
 * @file  BlockReducer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockReducer.
 *
 */
class BlockReducer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKREDUCER
public:
    class BlockReducer& operator=(class BlockReducer const &) = delete;
    BlockReducer(class BlockReducer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockReducer();
    /**
     * @hash   -493127164
     * @vftbl  1
     * @symbol ?registerBlock@BlockReducer@@UEAAXAEBVItemStack@@$$QEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     */
    virtual void registerBlock(class ItemStack const &, std::vector<class ItemStack> &&);
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   2005074346
     * @symbol ?getReductionMap@BlockReducer@@QEBAAEBV?$unordered_map@HV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<int, std::vector<class ItemStack>, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::vector<class ItemStack>>>> const & getReductionMap() const;
    /**
     * @hash   1550055467
     * @symbol ??0BlockReducer@@QEAA@XZ
     */
    MCAPI BlockReducer();
    /**
     * @hash   -728218640
     * @symbol ?getReduction@BlockReducer@@QEBAPEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemStackBase@@@Z
     */
    MCAPI std::vector<class ItemStack> const * getReduction(class ItemStackBase const &) const;
    /**
     * @hash   2005074346
     * @symbol ?getReductionMap@BlockReducer@@QEBAAEBV?$unordered_map@HV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<int, std::vector<class ItemStack>, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::vector<class ItemStack>>>> const & getReductionMap() const;

};