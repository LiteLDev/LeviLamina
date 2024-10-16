#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ParticleEffectResponse : public ::EventResponse {
public:
    // prevent constructor by default
    ParticleEffectResponse& operator=(ParticleEffectResponse const&);
    ParticleEffectResponse(ParticleEffectResponse const&);
    ParticleEffectResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleEffectResponse() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void executeAction(class RenderParams& params) const;

    // vIndex: 3
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void buildSchema$(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    MCAPI void executeAction$(class RenderParams& params) const;

    MCAPI std::string const& getName$() const;

    MCAPI static std::string const& NameID();

    // NOLINTEND
};
