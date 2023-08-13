#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorEventResponse {

public:
    // prevent constructor by default
    ActorEventResponse& operator=(ActorEventResponse const&) = delete;
    ActorEventResponse(ActorEventResponse const&)            = delete;
    ActorEventResponse()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@ActorEventResponse\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol ?executeAction\@SetPropertyResponse\@\@UEBAXAEAVRenderParams\@\@\@Z
     */
    virtual void executeAction(class RenderParams&) const = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?buildSchema\@ActorEventResponse\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UActorEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$Factory\@VActorEventResponse\@\@$$V\@\@\@Z
     */
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;
    // NOLINTEND
};
