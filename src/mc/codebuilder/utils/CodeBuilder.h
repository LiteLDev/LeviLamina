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
class ItemStack;
class ItemStackBase;
class LegacyTradeableComponent;
class LevelChunk;
class Player;
class Vec3;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// functions
// NOLINTBEGIN
MCNAPI ::Json::Value createMobObject(int mobType);

MCNAPI ::Json::Value createMobObject(int mobType, int variant, uchar color);

MCNAPI ::Json::Value createMobObjectWithId(int id, int mobType, int variant);

MCNAPI ::Json::Value createObject(::Actor const& actor);

MCNAPI ::Json::Value createObject(::LevelChunk const& chunk);

MCNAPI ::Json::Value createObject(::CommandOutput const& commandOutput);

MCNAPI ::Json::Value createObject(::ItemDescriptor const& item);

MCNAPI ::Json::Value createObject(::ItemStack const& item);

MCNAPI ::Json::Value createObject(::ItemStackBase const& item);

MCNAPI ::Json::Value createObject(::Player const& player);

MCNAPI ::Json::Value createObject(::Block const& val);

MCNAPI ::Json::Value createObject(::EconomyTradeableComponent const& val);

MCNAPI ::Json::Value createObject(::EnchantmentInstance const& val);

MCNAPI ::Json::Value createObject(::LegacyTradeableComponent const& val);

MCNAPI ::Json::Value createObject(::Vec3 const& vec);

MCNAPI ::Json::Value createObject(::Block const& val, int aux);

MCNAPI ::Json::Value createTraderObject(::Actor const& trader);

MCNAPI ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
// NOLINTEND

} // namespace Util::CodeBuilder
