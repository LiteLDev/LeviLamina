/**
 * @file  MC/BlockPlacementFilterDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPlacementFilterDescription.
 *
 */
struct BlockPlacementFilterDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTFILTERDESCRIPTION
public:
    struct BlockPlacementFilterDescription& operator=(struct BlockPlacementFilterDescription const &) = delete;
    BlockPlacementFilterDescription(struct BlockPlacementFilterDescription const &) = delete;
    BlockPlacementFilterDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockPlacementFilterDescription();
    /**
     * @hash   -1412187331
     * @vftbl  1
     * @symbol ?getName@BlockPlacementFilterDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   287407751
     * @vftbl  2
     * @symbol ?initializeComponent@BlockPlacementFilterDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -931772699
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockPlacementFilterDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   1746095399
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockPlacementFilterDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1809414859
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockPlacementFilterDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1933293989
     * @symbol ?NameID@BlockPlacementFilterDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1286219361
     * @symbol ?bindType@BlockPlacementFilterDescription@@SAXXZ
     */
    MCAPI static void bindType();

};