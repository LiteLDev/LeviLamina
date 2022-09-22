/**
 * @file  BlockRotationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockRotationDescription.
 *
 */
struct BlockRotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKROTATIONDESCRIPTION
public:
    struct BlockRotationDescription& operator=(struct BlockRotationDescription const &) = delete;
    BlockRotationDescription(struct BlockRotationDescription const &) = delete;
    BlockRotationDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockRotationDescription();
    /**
     * @hash   1440853400
     * @vftbl  1
     * @symbol ?getName@BlockRotationDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -2007731060
     * @vftbl  2
     * @symbol ?initializeComponent@BlockRotationDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   2060190720
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockRotationDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   1232037602
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockRotationDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -23000176
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockRotationDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -661217787
     * @symbol ?NameID@BlockRotationDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   1393299635
     * @symbol ?bindType@BlockRotationDescription@@SAXXZ
     */
    MCAPI static void bindType();

};