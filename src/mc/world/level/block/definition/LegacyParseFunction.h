#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class BlockDefinitionGroup;
class PackLoadContext;
struct BlockDefinition;
namespace Puv { class Input; }
namespace Puv { class Logger; }
// clang-format on

namespace LegacyParseFunction {
// functions
// NOLINTBEGIN
MCAPI ::BlockDefinition parseBlockDataVCurr(
    ::Puv::Input const&                                       input,
    ::Puv::Logger&                                            logger,
    ::gsl::not_null<::BlockDefinitionGroup*>                  group,
    ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
    ::std::string                                             resourcePackLocation,
    ::gsl::not_null<::PackLoadContext*>                       packLoadContext
);
// NOLINTEND

} // namespace LegacyParseFunction
