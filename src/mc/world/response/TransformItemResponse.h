#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TransformItemResponse {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMITEMRESPONSE
public:
    TransformItemResponse& operator=(TransformItemResponse const&) = delete;
    TransformItemResponse(TransformItemResponse const&)            = delete;
    TransformItemResponse()                                        = delete;
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
     * ?getName\@TransformItemResponse\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol ?executeAction\@TransformItemResponse\@\@UEBAXAEAVRenderParams\@\@\@Z
     */
    virtual void executeAction(class RenderParams&) const;
    /**
     * @vftbl 3
     * @symbol
     * ?buildSchema\@TransformItemResponse\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$Factory\@VEventResponse\@\@$$V\@\@\@Z
     */
    virtual void
    buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&)
        const;
    /**
     * @symbol
     * ?NameID\@TransformItemResponse\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
};
