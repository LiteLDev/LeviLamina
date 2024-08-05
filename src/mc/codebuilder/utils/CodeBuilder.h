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
// NOLINTBEGIN
MCAPI class Json::Value createMobObject(int mobType);

MCAPI class Json::Value createMobObject(int mobType, int variant, uchar color);

MCAPI class Json::Value createMobObjectWithId(int id, int mobType, int variant);

MCAPI class Json::Value createObject(class Actor const& actor);

MCAPI class Json::Value createObject(class Block const& val);

MCAPI class Json::Value createObject(class CommandOutput const& commandOutput);

MCAPI class Json::Value createObject(class ItemDescriptor const& item);

MCAPI class Json::Value createObject(class ItemInstance const& item);

MCAPI class Json::Value createObject(class ItemStack const& item);

MCAPI class Json::Value createObject(class ItemStackBase const& item);

MCAPI class Json::Value createObject(class LevelChunk const& chunk);

MCAPI class Json::Value createObject(class Player const& player);

MCAPI class Json::Value createObject(class Block const& val, int aux);

MCAPI class Json::Value createTraderObject(class Actor const& trader);

MCAPI std::vector<std::string> translate(std::vector<std::string> const& in);
// NOLINTEND

}; // namespace Util::CodeBuilder
