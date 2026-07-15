#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/biome/BiomeJsonDocument.h"
#include "mc/deps/shared_types/v1_26_30/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
// clang-format on

class BiomeJsonDocumentLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_30::BiomeJsonDocument::BiomeJsonObject,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject>>
        mPuvBiomeLoader;
    // NOLINTEND
};
