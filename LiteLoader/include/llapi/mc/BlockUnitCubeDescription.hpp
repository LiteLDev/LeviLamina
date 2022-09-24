/**
 * @file  BlockUnitCubeDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockUnitCubeDescription.
 *
 */
struct BlockUnitCubeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNITCUBEDESCRIPTION
public:
    struct BlockUnitCubeDescription& operator=(struct BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription(struct BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockUnitCubeDescription();
    /**
     * @hash   1633756275
     * @vftbl  1
     * @symbol ?getName@BlockUnitCubeDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1863028911
     * @vftbl  2
     * @symbol ?initializeComponent@BlockUnitCubeDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   -689320907
     * @vftbl  3
     * @symbol ?initializeFromNetwork@BlockUnitCubeDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   886202107
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockUnitCubeDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   285086093
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockUnitCubeDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -1513806405
     * @symbol ?NameID@BlockUnitCubeDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1543539661
     * @symbol ?bindType@BlockUnitCubeDescription@@SAXXZ
     */
    MCAPI static void bindType();

};