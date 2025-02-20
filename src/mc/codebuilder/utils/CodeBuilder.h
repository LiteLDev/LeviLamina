#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOutput;
class EconomyTradeableComponent;
class EnchantmentInstance;
class ItemDescriptor;
class ItemStackBase;
class LevelChunk;
class Player;
class Vec3;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// functions
// NOLINTBEGIN
MCAPI ::Json::Value createMobObject(int mobType, int variant, uchar color);

MCAPI ::Json::Value createObject(::Actor const& actor);

MCAPI ::Json::Value createObject(::LevelChunk const& chunk);

MCAPI ::Json::Value createObject(::CommandOutput const& commandOutput);

MCAPI ::Json::Value createObject(::ItemDescriptor const& item);

MCAPI ::Json::Value createObject(::ItemStackBase const& item);

MCAPI ::Json::Value createObject(::Player const& player);

MCAPI ::Json::Value createObject(::EconomyTradeableComponent const& val);

MCAPI ::Json::Value createObject(::EnchantmentInstance const& val);

MCAPI ::Json::Value createObject(::Vec3 const& vec);

MCAPI ::Json::Value createObject(::Block const& val, int aux);

MCAPI ::Json::Value createTraderObject(::Actor const& trader);

MCFOLD ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
// NOLINTEND

} // namespace Util::CodeBuilder
