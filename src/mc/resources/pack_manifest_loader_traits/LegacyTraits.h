#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class SubpackInfoCollection;
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct PackManifestDocument; }
// clang-format on

namespace PackManifestLoaderTraits {

struct LegacyTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument legacyParseFn(
        ::Puv::Input const& input,
        ::Puv::Logger&,
        ::PackManifest*                 manifest,
        ::PackReport*                   report,
        ::SubpackInfoCollection*        subpackInfoStack,
        ::PackCapabilityRegistry const* packReg
    );
    // NOLINTEND
};

} // namespace PackManifestLoaderTraits
