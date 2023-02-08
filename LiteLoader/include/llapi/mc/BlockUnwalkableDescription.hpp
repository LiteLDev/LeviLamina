/**
 * @file  BlockUnwalkableDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockUnwalkableDescription.
 *
 */
class BlockUnwalkableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNWALKABLEDESCRIPTION
public:
    class BlockUnwalkableDescription& operator=(class BlockUnwalkableDescription const &) = delete;
    BlockUnwalkableDescription(class BlockUnwalkableDescription const &) = delete;
    BlockUnwalkableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockUnwalkableDescription();
    /**
     * @hash   -247561754
     * @vftbl  1
     * @symbol  ?getName\@BlockUnwalkableDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   484945470
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockUnwalkableDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   2005118289
     * @vftbl  3
     * @symbol  ?buildSchema\@BlockUnwalkableDescription\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UBlockComponentGroupDescription\@\@\@JsonUtil\@\@\@std\@\@AEBVBlockComponentFactory\@\@\@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /**
     * @hash   -214940722
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockUnwalkableDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   480091184
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockUnwalkableDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1797339538
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockUnwalkableDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   434982313
     * @symbol  ?NameID\@BlockUnwalkableDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

};