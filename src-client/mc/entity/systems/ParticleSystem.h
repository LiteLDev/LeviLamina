#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
struct ConstDeserializeDataParams;
namespace JsonUtil { class EmptyClass; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { struct NodeParseData; }
namespace ParticleSystem { struct ParticleEffectData_Legacy; }
namespace Puv { class Input; }
namespace Puv { class Logger; }
// clang-format on

namespace ParticleSystem {
// functions
// NOLINTBEGIN
MCAPI ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ParticleSystem::NodeParseData>>
_buildParticleCurveBezierChainSchema();

MCAPI void _extractNodeParseData(
    ::ConstDeserializeDataParams const& deserializeDataParams,
    ::ParticleSystem::NodeParseData&    nodeParseData
);

MCAPI ::ParticleSystem::ParticleEffectData_Legacy parseParticleEffect(
    ::Puv::Input const&                                      input,
    ::Puv::Logger&                                           logger,
    ::MinEngineVersion                                       minEngineVersion,
    ::ParticleSystem::ParticleEffectComponentRegistry const* particleComponentRegistry
);
// NOLINTEND

} // namespace ParticleSystem
