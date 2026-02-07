#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackSource;
struct PackInstanceId;
struct PackModel;
// clang-format on

class PacksModelFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::PackInstanceId> deserializeFile(::std::istream& file);

    MCAPI static void loadPacks(
        ::std::vector<::PackInstanceId> const&                            packInstanceIds,
        ::PackSource&                                                     packSource,
        ::std::vector<::PackModel>&                                       selectedPacks,
        ::std::vector<::PackModel>&                                       availablePacks,
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND
};
