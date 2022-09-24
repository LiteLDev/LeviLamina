/**
 * @file  BlockComponentDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockComponentDescription.
 *
 */
struct BlockComponentDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTDESCRIPTION
public:
    struct BlockComponentDescription& operator=(struct BlockComponentDescription const &) = delete;
    BlockComponentDescription(struct BlockComponentDescription const &) = delete;
    BlockComponentDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockComponentDescription();
    /**
     * @hash   -589626115
     * @vftbl  1
     * @symbol ?getName@BlockComponentDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
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
     * @hash   1010542277
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockComponentDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   303476775
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockComponentDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTDESCRIPTION
    /**
     * @hash   -292104312
     * @symbol ?buildSchema@BlockComponentDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
     */
    MCVAPI void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /**
     * @hash   -696872489
     * @symbol ?initializeComponent@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
     */
    MCVAPI void initializeComponent(class EntityContext &) const;
    /**
     * @hash   -1316845109
     * @symbol ?initializeFromNetwork@BlockComponentDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    MCVAPI void initializeFromNetwork(class CompoundTag const &);
#endif
    /**
     * @hash   1211040703
     * @symbol ?bindType@BlockComponentDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -557837760
     * @symbol ?registerVersionUpgrades@BlockComponentDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};