/**
 * @file  MC/OnFallOnTriggerDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnFallOnTriggerDescription.
 *
 */
class OnFallOnTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFALLONTRIGGERDESCRIPTION
public:
    class OnFallOnTriggerDescription& operator=(class OnFallOnTriggerDescription const &) = delete;
    OnFallOnTriggerDescription(class OnFallOnTriggerDescription const &) = delete;
    OnFallOnTriggerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OnFallOnTriggerDescription();
    /**
     * @hash   -638261508
     * @vftbl  1
     * @symbol ?getName@OnFallOnTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1444403032
     * @vftbl  2
     * @symbol ?initializeComponent@OnFallOnTriggerDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   -53430713
     * @vftbl  3
     * @symbol ?buildSchema@OnFallOnTriggerDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /**
     * @hash   1676725213
     * @symbol ?NameID@OnFallOnTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;

};