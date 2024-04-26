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
// symbol: ?createMobObject@CodeBuilder@Util@@YA?AVValue@Json@@H@Z
MCAPI class Json::Value createMobObject(int mobType);

// symbol: ?createMobObject@CodeBuilder@Util@@YA?AVValue@Json@@HHE@Z
MCAPI class Json::Value createMobObject(int mobType, int variant, uchar color);

// symbol: ?createMobObjectWithId@CodeBuilder@Util@@YA?AVValue@Json@@HHH@Z
MCAPI class Json::Value createMobObjectWithId(int id, int mobType, int variant);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVActor@@@Z
MCAPI class Json::Value createObject(class Actor const& actor);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVBlock@@@Z
MCAPI class Json::Value createObject(class Block const& val);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVCommandOutput@@@Z
MCAPI class Json::Value createObject(class CommandOutput const& commandOutput);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemDescriptor@@@Z
MCAPI class Json::Value createObject(class ItemDescriptor const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemInstance@@@Z
MCAPI class Json::Value createObject(class ItemInstance const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemStack@@@Z
MCAPI class Json::Value createObject(class ItemStack const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemStackBase@@@Z
MCAPI class Json::Value createObject(class ItemStackBase const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVLevelChunk@@@Z
MCAPI class Json::Value createObject(class LevelChunk const& chunk);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVPlayer@@@Z
MCAPI class Json::Value createObject(class Player const& player);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVBlock@@H@Z
MCAPI class Json::Value createObject(class Block const& val, int aux);

// symbol: ?createTraderObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVActor@@@Z
MCAPI class Json::Value createTraderObject(class Actor const& trader);

// symbol:
// ?translate@CodeBuilder@Util@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV34@@Z
MCAPI std::vector<std::string> translate(std::vector<std::string> const& in);
// NOLINTEND

}; // namespace Util::CodeBuilder
