/**
 * @file  BlockComponentDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "cereal.hpp"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getName\@BlockComponentDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockComponentDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockComponentDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage &) const;
    /**
     * @vftbl 4
     * @symbol ?initializeComponentFromCode\@BlockComponentDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponentFromCode(class EntityContext &) const;
    /**
     * @vftbl 5
     * @symbol ?initializeComponentFromCode\@BlockComponentDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponentFromCode(class BlockComponentStorage &) const;
    /**
     * @vftbl 6
     * @symbol ?buildSchema\@BlockComponentDescription\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /**
     * @vftbl 7
     * @symbol ?isNetworkComponent\@BlockComponentDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 8
     * @symbol ?buildNetworkTag\@BlockComponentDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;
    /**
     * @vftbl 9
     * @symbol ?initializeFromNetwork\@BlockComponentDescription\@\@UEAAXAEBVCompoundTag\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);
    /**
     * @vftbl 10
     * @symbol ?handleVersionBasedInitialization\@BlockComponentDescription\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockComponentDescription();
#endif
    /**
     * @symbol ?bindType\@BlockComponentDescription\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?registerVersionUpgrades\@BlockComponentDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};