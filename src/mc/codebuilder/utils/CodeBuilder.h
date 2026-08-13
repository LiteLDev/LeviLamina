#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class EconomyTradeableComponent;
class ItemDescriptor;
class ItemStackBase;
class LegacyTradeableComponent;
class LevelChunk;
class Player;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// functions
// NOLINTBEGIN
MCNAPI ::Json::Value createMobObject(int mobType);

MCNAPI ::Json::Value createMobObject(int mobType, int variant, uchar color);

MCNAPI ::Json::Value createObject(::Actor const& actor);

MCNAPI ::Json::Value createObject(::LevelChunk const& chunk);

MCNAPI ::Json::Value createObject(::ItemStackBase const& item);

MCNAPI ::Json::Value createObject(::ItemDescriptor const& item);

MCNAPI ::Json::Value createObject(::Player const& player);

MCNAPI ::Json::Value createObject(::EconomyTradeableComponent const& val);

MCNAPI ::Json::Value createObject(::LegacyTradeableComponent const& val);

MCNAPI ::Json::Value createObject(::Block const& val, int aux);

MCNAPI ::Json::Value createTraderObject(::Actor const& trader);
// NOLINTEND

} // namespace Util::CodeBuilder
