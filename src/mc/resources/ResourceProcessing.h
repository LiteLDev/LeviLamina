#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace SharedTypes::v1_26_50 { struct PreferredPathComponentDefinition; }
// clang-format on

namespace ResourceProcessing {
// functions
// NOLINTBEGIN
MCNAPI void validatePreferredPathComponent(
    ::SharedTypes::v1_26_50::PreferredPathComponentDefinition const& preferredPath,
    ::Puv::Logger&                                                   logger
);
// NOLINTEND

} // namespace ResourceProcessing
