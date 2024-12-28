#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOutput;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LevelChunk;
class Player;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// functions
// NOLINTBEGIN
MCAPI ::Json::Value createMobObject(int mobType);

MCAPI ::Json::Value createMobObject(int mobType, int variant, uchar color);

MCAPI ::Json::Value createMobObjectWithId(int id, int mobType, int variant);

MCAPI ::Json::Value createObject(::ItemStack const& item);

MCAPI ::Json::Value createObject(::ItemDescriptor const& item);

MCAPI ::Json::Value createObject(::Player const& player);

MCAPI ::Json::Value createObject(::ItemInstance const&);

MCAPI ::Json::Value createObject(::Actor const& actor);

MCAPI ::Json::Value createObject(::LevelChunk const& chunk);

MCAPI ::Json::Value createObject(::CommandOutput const& commandOutput);

MCAPI ::Json::Value createObject(::ItemStackBase const& item);

MCAPI ::Json::Value createObject(::Block const& val);

MCAPI ::Json::Value createObject(::Block const& val, int aux);

MCAPI ::Json::Value createTraderObject(::Actor const& trader);
// NOLINTEND

} // namespace Util::CodeBuilder
