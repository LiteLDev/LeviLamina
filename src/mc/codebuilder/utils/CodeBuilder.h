#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOutput;
class ItemDescriptor;
class ItemStackBase;
class Player;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// functions
// NOLINTBEGIN
MCNAPI ::Json::Value createObject(::Actor const& actor);

MCNAPI ::Json::Value createObject(::CommandOutput const& commandOutput);

MCNAPI ::Json::Value createObject(::ItemDescriptor const& item);

MCNAPI ::Json::Value createObject(::ItemStackBase const& item);

MCNAPI ::Json::Value createObject(::Player const& player);

MCNAPI ::Json::Value createTraderObject(::Actor const& trader);

MCNAPI ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
// NOLINTEND

} // namespace Util::CodeBuilder
