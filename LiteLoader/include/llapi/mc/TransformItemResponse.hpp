/**
 * @file  TransformItemResponse.hpp
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
 * @brief MC class TransformItemResponse.
 *
 */
class TransformItemResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMITEMRESPONSE
public:
    class TransformItemResponse& operator=(class TransformItemResponse const &) = delete;
    TransformItemResponse(class TransformItemResponse const &) = delete;
    TransformItemResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TransformItemResponse();
    /**
     * @hash   421924073
     * @vftbl  1
     * @symbol ?getName@TransformItemResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1637810827
     * @vftbl  2
     * @symbol ?executeAction@TransformItemResponse@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   -538290665
     * @vftbl  3
     * @symbol ?buildSchema@TransformItemResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @hash   426572117
     * @symbol ?NameID@TransformItemResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;

};