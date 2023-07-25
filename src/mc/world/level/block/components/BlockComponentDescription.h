#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockComponentDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTDESCRIPTION
public:
    BlockComponentDescription& operator=(BlockComponentDescription const&) = delete;
    BlockComponentDescription(BlockComponentDescription const&)            = delete;
    BlockComponentDescription()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockComponentDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockComponentDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockComponentDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTDESCRIPTION
    /**
     * @symbol
     * ?buildSchema\@BlockComponentDescription\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    MCVAPI void
    buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&)
        const;
    /**
     * @symbol ?handleVersionBasedInitialization\@BlockComponentDescription\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    MCVAPI void handleVersionBasedInitialization(class SemVersion const&);
    /**
     * @symbol ?initializeComponent\@BlockComponentDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    MCVAPI void initializeComponent(class EntityContext&) const;
    /**
     * @symbol ?initializeComponent\@BlockComponentDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    MCVAPI void initializeComponent(class BlockComponentStorage&) const;
    /**
     * @symbol ?initializeComponentFromCode\@BlockComponentDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    MCVAPI void initializeComponentFromCode(class EntityContext&) const;
    /**
     * @symbol ?initializeFromNetwork\@BlockComponentDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    MCVAPI void initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockComponentDescription();
#endif
    /**
     * @symbol ?bindType\@BlockComponentDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
};
