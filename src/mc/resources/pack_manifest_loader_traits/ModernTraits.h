#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct PackManifestDocument; }
// clang-format on

namespace PackManifestLoaderTraits {

struct ModernTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void validateFunction(
        ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const& doc,
        ::Puv::Logger&                                                             logger
    );
    // NOLINTEND
};

} // namespace PackManifestLoaderTraits
