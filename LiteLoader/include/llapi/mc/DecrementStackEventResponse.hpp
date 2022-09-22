/**
 * @file  DecrementStackEventResponse.hpp
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
 * @brief MC class DecrementStackEventResponse.
 *
 */
class DecrementStackEventResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECREMENTSTACKEVENTRESPONSE
public:
    class DecrementStackEventResponse& operator=(class DecrementStackEventResponse const &) = delete;
    DecrementStackEventResponse(class DecrementStackEventResponse const &) = delete;
    DecrementStackEventResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DecrementStackEventResponse();
    /**
     * @hash   -1270391533
     * @vftbl  1
     * @symbol ?getName@DecrementStackEventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   86013867
     * @vftbl  2
     * @symbol ?executeAction@DecrementStackEventResponse@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   1067818369
     * @vftbl  3
     * @symbol ?buildSchema@DecrementStackEventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @hash   638474057
     * @symbol ?NameID@DecrementStackEventResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;

};