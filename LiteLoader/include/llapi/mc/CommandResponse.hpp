/**
 * @file  CommandResponse.hpp
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
 * @brief MC class CommandResponse.
 *
 */
class CommandResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRESPONSE
public:
    class CommandResponse& operator=(class CommandResponse const &) = delete;
    CommandResponse(class CommandResponse const &) = delete;
    CommandResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CommandResponse();
    /**
     * @hash   -785791011
     * @vftbl  1
     * @symbol  ?getName\@CommandResponse\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   1363959105
     * @vftbl  2
     * @symbol  ?executeAction\@CommandResponse\@\@UEBAXAEAVRenderParams\@\@\@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   1110199739
     * @vftbl  3
     * @symbol  ?buildSchema\@CommandResponse\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$Factory\@VEventResponse\@\@$$V\@\@\@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;

};