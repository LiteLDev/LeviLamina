#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct IBiomeComponentGlue;
// clang-format on

struct BiomeJsonDocumentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeComponentGlue>()>>>
        mComponentGlueFactories;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BiomeJsonDocumentGlueResolvedBiomeData> getResolvedBiomeData(
        ::SharedTypes::v1_26_0::BiomeJsonDocument::BiomeJsonObject const& biomeJsonDocument,
        ::BiomeRegistry const&                                            biomeRegistry
    ) const;
    // NOLINTEND
};
