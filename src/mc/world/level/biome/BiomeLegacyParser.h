#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
namespace Core { class Path; }
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v1_21_110 { struct BiomeJsonDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BiomeLegacyParser {
// functions
// NOLINTBEGIN
MCNAPI ::SharedTypes::v1_21_110::BiomeJsonDocument parseBiomeLegacy(
    ::Puv::Input const&                                input,
    ::Puv::Logger&                                     logger,
    ::cereal::ReflectionCtx&                           ctx,
    ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
    ::Core::Path const&                                resourceName
);
// NOLINTEND

} // namespace BiomeLegacyParser
