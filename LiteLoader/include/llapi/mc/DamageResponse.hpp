/**
 * @file  DamageResponse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageResponse.
 *
 */
class DamageResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGERESPONSE
public:
    class DamageResponse& operator=(class DamageResponse const &) = delete;
    DamageResponse(class DamageResponse const &) = delete;
    DamageResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DamageResponse();
    /**
     * @hash   -621365031
     * @vftbl  1
     * @symbol  ?getName\@DamageResponse\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   1397929605
     * @vftbl  2
     * @symbol  ?executeAction\@DamageResponse\@\@UEBAXAEAVRenderParams\@\@\@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   1850853879
     * @vftbl  3
     * @symbol  ?buildSchema\@DamageResponse\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$Factory\@VEventResponse\@\@$$V\@\@\@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @hash   -744886881
     * @symbol  ?NameID\@DamageResponse\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

//private:
    /**
     * @hash   2022546139
     * @symbol  ?repairOrHurtItem\@DamageResponse\@\@AEBAXAEBHAEAVRenderParams\@\@\@Z
     */
    MCAPI void repairOrHurtItem(int const &, class RenderParams &) const;

private:

};