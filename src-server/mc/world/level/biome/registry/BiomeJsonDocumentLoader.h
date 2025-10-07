#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace Core { class Path; }
namespace SharedTypes::v1_21_110 { struct BiomeJsonDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BiomeJsonDocumentLoader {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::SharedTypes::v1_21_110::BiomeJsonDocument> loadBiomeJsonDocumentFromRapidJson(
    ::cereal::ReflectionCtx& ctx,
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator> const& rapidJsonDocument,
    ::Core::Path const&                   biomePath,
    ::BedrockLoadContext&                 loadContext
);
// NOLINTEND

} // namespace BiomeJsonDocumentLoader
