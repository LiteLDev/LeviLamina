#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BiomeJsonDocumentUpgrader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doUpgradeFrom_v1_12_To_v1_13(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document
    );

    MCNAPI static ::std::optional<::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>>
    parseAndUpgradeBiomeJsonDocument(
        ::Core::Path const&      resourceName,
        ::std::string const&     jsonText,
        ::cereal::ReflectionCtx& ctx
    );
    // NOLINTEND
};
