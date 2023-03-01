#include "api/APIHelp.h"
#include "api/BaseAPI.h"
#include "api/BlockAPI.h"
#include "api/DeviceAPI.h"
#include "api/EntityAPI.h"
#include "api/PlayerAPI.h"
#include "api/DataAPI.h"
#include "api/McAPI.h"
#include "api/ContainerAPI.h"
#include "api/ItemAPI.h"
#include "api/GuiAPI.h"
#include "api/NbtAPI.h"
#include "api/PacketAPI.h"
#include "api/NativeAPI.h"
#include "engine/EngineOwnData.h"
#include "engine/GlobalShareData.h"
#include "main/EconomicSystem.h"
#include <llapi/mc/Attribute.hpp>
#include <llapi/mc/AttributeInstance.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/NetworkIdentifier.hpp>
#include <llapi/mc/Actor.hpp>
#include <llapi/mc/Container.hpp>
#include <llapi/mc/SimpleContainer.hpp>
#include <llapi/mc/Scoreboard.hpp>
#include <llapi/mc/Objective.hpp>
#include <llapi/mc/ScoreboardId.hpp>
#include <llapi/mc/ListTag.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/SynchedActorData.hpp>
#include <llapi/mc/SimulatedPlayer.hpp>
#include <llapi/mc/SharedAttributes.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/Command.hpp>
#include <llapi/mc/SynchedActorDataEntityWrapper.hpp>
#include <llapi/PlayerInfoAPI.h>
#include <llapi/mc/Biome.hpp>
#include "main/SafeGuardRecord.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


//////////////////// Class Definition ////////////////////

ClassDefine<PlayerClass> PlayerClassBuilder =
    defineClass<PlayerClass>("LLSE_Player")
        .constructor(nullptr)
        .instanceFunction("asPointer", &PlayerClass::asPointer)

        .instanceProperty("name", &PlayerClass::getName)
        .instanceProperty("pos", &PlayerClass::getPos)
        .instanceProperty("feetPos", &PlayerClass::getFeetPos)
        .instanceProperty("blockPos", &PlayerClass::getBlockPos)
        .instanceProperty("lastDeathPos", &PlayerClass::getLastDeathPos)
        .instanceProperty("realName", &PlayerClass::getRealName)
        .instanceProperty("xuid", &PlayerClass::getXuid)
        .instanceProperty("uuid", &PlayerClass::getUuid)
        .instanceProperty("permLevel", &PlayerClass::getPermLevel)
        .instanceProperty("gameMode", &PlayerClass::getGameMode)
        .instanceProperty("canSleep", &PlayerClass::getCanSleep)
        .instanceProperty("canFly", &PlayerClass::getCanFly)
        .instanceProperty("canBeSeenOnMap", &PlayerClass::getCanBeSeenOnMap)
        .instanceProperty("canFreeze", &PlayerClass::getCanFreeze)
        .instanceProperty("canSeeDaylight", &PlayerClass::getCanSeeDaylight)
        .instanceProperty("canShowNameTag", &PlayerClass::getCanShowNameTag)
        .instanceProperty("canStartSleepInBed", &PlayerClass::getCanStartSleepInBed)
        .instanceProperty("canPickupItems", &PlayerClass::getCanPickupItems)
        .instanceProperty("maxHealth", &PlayerClass::getMaxHealth)
        .instanceProperty("health", &PlayerClass::getHealth)
        .instanceProperty("inAir", &PlayerClass::getInAir)
        .instanceProperty("inWater", &PlayerClass::getInWater)
        .instanceProperty("inLava", &PlayerClass::getInLava)
        .instanceProperty("inRain", &PlayerClass::getInRain)
        .instanceProperty("inSnow", &PlayerClass::getInSnow)
        .instanceProperty("inWall", &PlayerClass::getInWall)
        .instanceProperty("inWaterOrRain", &PlayerClass::getInWaterOrRain)
        .instanceProperty("inWorld", &PlayerClass::getInWorld)
        .instanceProperty("inClouds", &PlayerClass::getInClouds)
        .instanceProperty("sneaking", &PlayerClass::getSneaking)
        .instanceProperty("speed", &PlayerClass::getSpeed)
        .instanceProperty("direction", &PlayerClass::getDirection)
        .instanceProperty("uniqueId", &PlayerClass::getUniqueID)
        .instanceProperty("langCode", &PlayerClass::getLangCode)
        .instanceProperty("isLoading", &PlayerClass::isLoading)
        .instanceProperty("isInvisible", &PlayerClass::isInvisible)
        .instanceProperty("isInsidePortal", &PlayerClass::isInsidePortal)
        .instanceProperty("isHurt", &PlayerClass::isHurt)
        .instanceProperty("isTrusting", &PlayerClass::isTrusting)
        .instanceProperty("isTouchingDamageBlock", &PlayerClass::isTouchingDamageBlock)
        .instanceProperty("isHungry", &PlayerClass::isHungry)
        .instanceProperty("isOnFire", &PlayerClass::isOnFire)
        .instanceProperty("isOnGround", &PlayerClass::isOnGround)
        .instanceProperty("isOnHotBlock", &PlayerClass::isOnHotBlock)
        .instanceProperty("isTrading", &PlayerClass::isTrading)
        .instanceProperty("isAdventure", &PlayerClass::isAdventure)
        .instanceProperty("isGliding", &PlayerClass::isGliding)
        .instanceProperty("isSurvival", &PlayerClass::isSurvival)
        .instanceProperty("isSpectator", &PlayerClass::isSpectator)
        .instanceProperty("isRiding", &PlayerClass::isRiding)
        .instanceProperty("isDancing", &PlayerClass::isDancing)
        .instanceProperty("isCreative", &PlayerClass::isCreative)
        .instanceProperty("isFlying", &PlayerClass::isFlying)
        .instanceProperty("isSleeping", &PlayerClass::isSleeping)
        .instanceProperty("isMoving", &PlayerClass::isMoving)

        .instanceFunction("isOP", &PlayerClass::isOP)
        .instanceFunction("setPermLevel", &PlayerClass::setPermLevel)
        .instanceFunction("setGameMode", &PlayerClass::setGameMode)

        .instanceFunction("runcmd", &PlayerClass::runcmd)
        .instanceFunction("teleport", &PlayerClass::teleport)
        .instanceFunction("kill", &PlayerClass::kill)
        .instanceFunction("kick", &PlayerClass::kick)
        .instanceFunction("disconnect", &PlayerClass::kick)
        .instanceFunction("tell", &PlayerClass::tell)
        .instanceFunction("talkAs", &PlayerClass::talkAs)
        .instanceFunction("sendText", &PlayerClass::tell)
        .instanceFunction("setTitle", &PlayerClass::setTitle)
        .instanceFunction("rename", &PlayerClass::rename)
        .instanceFunction("setFire", &PlayerClass::setFire)
        .instanceFunction("stopFire", &PlayerClass::stopFire)
        .instanceFunction("transServer", &PlayerClass::transServer)
        .instanceFunction("crash", &PlayerClass::crash)
        .instanceFunction("hurt", &PlayerClass::hurt)
        .instanceFunction("heal", &PlayerClass::heal)
        .instanceFunction("setHealth", &PlayerClass::setHealth)
        .instanceFunction("setMaxHealth", &PlayerClass::setMaxHealth)
        .instanceFunction("setAbsorption", &PlayerClass::setAbsorption)
        .instanceFunction("setAttackDamage", &PlayerClass::setAttackDamage)
        .instanceFunction("setMaxAttackDamage", &PlayerClass::setMaxAttackDamage)
        .instanceFunction("setFollowRange", &PlayerClass::setFollowRange)
        .instanceFunction("setKnockbackResistance", &PlayerClass::setKnockbackResistance)
        .instanceFunction("setLuck", &PlayerClass::setLuck)
        .instanceFunction("setMovementSpeed", &PlayerClass::setMovementSpeed)
        .instanceFunction("setUnderwaterMovementSpeed", &PlayerClass::setUnderwaterMovementSpeed)
        .instanceFunction("setLavaMovementSpeed", &PlayerClass::setLavaMovementSpeed)
        .instanceFunction("setHungry", &PlayerClass::setHungry)
        .instanceFunction("refreshChunks", &PlayerClass::refreshChunks)
        .instanceFunction("giveItem", &PlayerClass::giveItem)
        .instanceFunction("clearItem", &PlayerClass::clearItem)
        .instanceFunction("isSprinting", &PlayerClass::isSprinting)
        .instanceFunction("setSprinting", &PlayerClass::setSprinting)
        .instanceFunction("sendToast", &PlayerClass::sendToast)
        .instanceFunction("distanceTo", &PlayerClass::distanceTo)
        .instanceFunction("distanceToSqr", &PlayerClass::distanceToSqr)

        .instanceFunction("getBlockStandingOn", &PlayerClass::getBlockStandingOn)
        .instanceFunction("getDevice", &PlayerClass::getDevice)
        .instanceFunction("getHand", &PlayerClass::getHand)
        .instanceFunction("getOffHand", &PlayerClass::getOffHand)
        .instanceFunction("getInventory", &PlayerClass::getInventory)
        .instanceFunction("getArmor", &PlayerClass::getArmor)
        .instanceFunction("getEnderChest", &PlayerClass::getEnderChest)
        .instanceFunction("getRespawnPosition", &PlayerClass::getRespawnPosition)
        .instanceFunction("setRespawnPosition", &PlayerClass::setRespawnPosition)
        .instanceFunction("refreshItems", &PlayerClass::refreshItems)

        .instanceFunction("getScore", &PlayerClass::getScore)
        .instanceFunction("setScore", &PlayerClass::setScore)
        .instanceFunction("addScore", &PlayerClass::addScore)
        .instanceFunction("reduceScore", &PlayerClass::reduceScore)
        .instanceFunction("deleteScore", &PlayerClass::deleteScore)
        .instanceFunction("setSidebar", &PlayerClass::setSidebar)
        .instanceFunction("removeSidebar", &PlayerClass::removeSidebar)
        .instanceFunction("setBossBar", &PlayerClass::setBossBar)
        .instanceFunction("removeBossBar", &PlayerClass::removeBossBar)
        .instanceFunction("addLevel", &PlayerClass::addLevel)
        .instanceFunction("reduceLevel", &PlayerClass::reduceLevel)
        .instanceFunction("getLevel", &PlayerClass::getLevel)
        .instanceFunction("setLevel", &PlayerClass::setLevel)
        .instanceFunction("setScale", &PlayerClass::setScale)
        .instanceFunction("resetLevel", &PlayerClass::resetLevel)
        .instanceFunction("addExperience", &PlayerClass::addExperience)
        .instanceFunction("reduceExperience", &PlayerClass::reduceExperience)
        .instanceFunction("getCurrentExperience", &PlayerClass::getCurrentExperience)
        .instanceFunction("setCurrentExperience", &PlayerClass::setCurrentExperience)
        .instanceFunction("getTotalExperience", &PlayerClass::getTotalExperience)
        .instanceFunction("setTotalExperience", &PlayerClass::setTotalExperience)
        .instanceFunction("getXpNeededForNextLevel", &PlayerClass::getXpNeededForNextLevel)
        .instanceFunction("setAbility", &PlayerClass::setAbility)
        .instanceFunction("getBiomeId", &PlayerClass::getBiomeId)
        .instanceFunction("getBiomeName", &PlayerClass::getBiomeName)

        .instanceFunction("getAllEffects", &PlayerClass::getAllEffects)
        .instanceFunction("addEffect", &PlayerClass::addEffect)
        .instanceFunction("removeEffect", &PlayerClass::removeEffect)

        .instanceFunction("sendSimpleForm", &PlayerClass::sendSimpleForm)
        .instanceFunction("sendModalForm", &PlayerClass::sendModalForm)
        .instanceFunction("sendCustomForm", &PlayerClass::sendCustomForm)
        .instanceFunction("sendForm", &PlayerClass::sendForm)
        .instanceFunction("sendPacket",&PlayerClass::sendPacket)

        .instanceFunction("setExtraData", &PlayerClass::setExtraData)
        .instanceFunction("getExtraData", &PlayerClass::getExtraData)
        .instanceFunction("delExtraData", &PlayerClass::delExtraData)

        .instanceFunction("setNbt", &PlayerClass::setNbt)
        .instanceFunction("getNbt", &PlayerClass::getNbt)
        .instanceFunction("addTag", &PlayerClass::addTag)
        .instanceFunction("removeTag", &PlayerClass::removeTag)
        .instanceFunction("hasTag", &PlayerClass::hasTag)
        .instanceFunction("getAllTags", &PlayerClass::getAllTags)
        .instanceFunction("getAbilities", &PlayerClass::getAbilities)
        .instanceFunction("getAttributes", &PlayerClass::getAttributes)
        .instanceFunction("getEntityFromViewVector", &PlayerClass::getEntityFromViewVector)
        .instanceFunction("getBlockFromViewVector", &PlayerClass::getBlockFromViewVector)
        .instanceFunction("quickEvalMolangScript", &PlayerClass::quickEvalMolangScript)

        // LLMoney
        .instanceFunction("getMoney", &PlayerClass::getMoney)
        .instanceFunction("setMoney", &PlayerClass::setMoney)
        .instanceFunction("addMoney", &PlayerClass::addMoney)
        .instanceFunction("reduceMoney", &PlayerClass::reduceMoney)
        .instanceFunction("transMoney", &PlayerClass::transMoney)
        .instanceFunction("getMoneyHistory", &PlayerClass::getMoneyHistory)

        // SimulatedPlayer API
        .instanceFunction("isSimulatedPlayer", &PlayerClass::isSimulatedPlayer)
        .instanceFunction("simulateSneak", &PlayerClass::simulateSneak)
        .instanceFunction("simulateAttack", &PlayerClass::simulateAttack)
        .instanceFunction("simulateDestroy", &PlayerClass::simulateDestroy)
        .instanceFunction("simulateDisconnect", &PlayerClass::simulateDisconnect)
        .instanceFunction("simulateInteract", &PlayerClass::simulateInteract)
        .instanceFunction("simulateRespawn", &PlayerClass::simulateRespawn)
        .instanceFunction("simulateJump", &PlayerClass::simulateJump)
        .instanceFunction("simulateLocalMove", &PlayerClass::simulateLocalMove)
        .instanceFunction("simulateWorldMove", &PlayerClass::simulateWorldMove)
        .instanceFunction("simulateMoveTo", &PlayerClass::simulateMoveTo)
        .instanceFunction("simulateLookAt", &PlayerClass::simulateLookAt)
        .instanceFunction("simulateSetBodyRotation", &PlayerClass::simulateSetBodyRotation)
        .instanceFunction("simulateNavigateTo", &PlayerClass::simulateNavigateTo)
        .instanceFunction("simulateUseItem", &PlayerClass::simulateUseItem)
        .instanceFunction("simulateStopDestroyingBlock", &PlayerClass::simulateStopDestroyingBlock)
        .instanceFunction("simulateStopInteracting", &PlayerClass::simulateStopInteracting)
        .instanceFunction("simulateStopMoving", &PlayerClass::simulateStopMoving)
        .instanceFunction("simulateStopUsingItem", &PlayerClass::simulateStopUsingItem)
        .instanceFunction("simulateStopSneaking", &PlayerClass::simulateStopSneaking)

        // For Compatibility
        .instanceProperty("ip", &PlayerClass::getIP)
        .instanceFunction("setTag", &PlayerClass::setNbt)
        .instanceFunction("getTag", &PlayerClass::getNbt)
        .instanceFunction("setOnFire", &PlayerClass::setOnFire)
        .instanceFunction("removeItem", &PlayerClass::removeItem)
        .instanceFunction("getAllItems", &PlayerClass::getAllItems)
        .instanceFunction("removeScore", &PlayerClass::deleteScore)
        .instanceFunction("distanceToPos", &PlayerClass::distanceTo)
        .build();


//////////////////// Classes ////////////////////

//生成函数
PlayerClass::PlayerClass(Player* p)
: ScriptClass(ScriptClass::ConstructFromCpp<PlayerClass>{}) {
    set(p);
}
Local<Object> PlayerClass::newPlayer(Player* p) {
    auto newp = new PlayerClass(p);
    return newp->getScriptObject();
}
Player* PlayerClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<PlayerClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<PlayerClass>(v)->get();
    else
        return nullptr;
}

//公用API
Local<Value> McClass::getPlayerNbt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto nbt = Player::getPlayerNbt(uuid);
        if (nbt != nullptr) {
            return NbtCompoundClass::pack(Player::getPlayerNbt(uuid));
        }
        else {
            return Local<Value>();
        }
    }
    CATCH("Fail in getPlayerNbt!")
}

Local<Value> McClass::setPlayerNbt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto nbt = NbtCompoundClass::extract(args[1]);
        Player::setPlayerNbt(uuid, nbt);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setPlayerNbt!")
}

Local<Value> McClass::setPlayerNbtTags(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kArray);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto nbt = NbtCompoundClass::extract(args[1]);
        auto arr = args[2].asArray();
        std::vector<std::string> tags;
        for (int i = 0; i < arr.size(); ++i) {
            auto value = arr.get(i);
            if (value.getKind() == ValueKind::kString) {
                tags.push_back(value.asString().toString());
            }
        }
        Player::setPlayerNbtTags(uuid, nbt, tags);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setPlayerNbtTags!")
}

Local<Value> McClass::deletePlayerNbt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        Player::deletePlayerNbt(uuid);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in deletePlayerNbt!")
}

Local<Value> McClass::getPlayerScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto obj = args[1].asString().toString();
        auto scorev = Scoreboard::queryPlayerScore(uuid,obj);
        if (scorev.has_value())
            return Number::newNumber(scorev.value());
        else
            return Local<Value>();
    }
    CATCH("Fail in getPlayerScore!")
}

Local<Value> McClass::setPlayerScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto obj = args[1].asString().toString();
        auto value = args[2].asNumber().toInt32();
        auto res = Scoreboard::forceModifyPlayerScore(uuid, obj, value, PlayerScoreSetFunction::Set);
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in setPlayerScore!")
}

Local<Value> McClass::addPlayerScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto obj = args[1].asString().toString();
        auto value = args[2].asNumber().toInt32();
        auto res = Scoreboard::forceModifyPlayerScore(uuid, obj, value, PlayerScoreSetFunction::Add);
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in addPlayerScore!")
}

Local<Value> McClass::reducePlayerScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto obj = args[1].asString().toString();
        auto value = args[2].asNumber().toInt32();
        auto res = Scoreboard::forceModifyPlayerScore(uuid, obj, value, PlayerScoreSetFunction::Remove);
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in reducePlayerScore!")
}

Local<Value> McClass::deletePlayerScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    try {
        auto uuid = mce::UUID::fromString(args[0].asString().toString());
        auto obj = args[1].asString().toString();
        auto res = Scoreboard::forceRemovePlayerScoreFromObjective(uuid, obj);
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in deletePlayerScore!")
}

Local<Value> McClass::getPlayer(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try {
        string target = args[0].toStr();
        if (target.empty())
            return Local<Value>();

        transform(target.begin(), target.end(), target.begin(), ::tolower); // lower case the string
        auto playerList = Level::getAllPlayers();
        int delta = 2147483647; // c++ int max
        Player* found = nullptr;

        for (Player* p : playerList) {
            if (p->getXuid() == target || std::to_string(p->getUniqueID().id) == target)
                return PlayerClass::newPlayer(p);

            string pName = p->getName();
            transform(pName.begin(), pName.end(), pName.begin(), ::tolower);

            if (pName.find(target) == 0) {
                // 0 ís the index where the "target" appear in "pName"
                int curDelta = pName.length() - target.length();
                if (curDelta == 0)
                    return PlayerClass::newPlayer(p);

                if (curDelta < delta) {
                    found = p;
                    delta = curDelta;
                }
            }
        }
        return found ? PlayerClass::newPlayer(found) : Local<Value>(); // Player/Null
    }
    CATCH("Fail in GetPlayer!")
}

Local<Value> McClass::getOnlinePlayers(const Arguments& args) {
    try {
        auto players = Level::getAllPlayers();
        Local<Array> list = Array::newArray();
        for (auto p : players)
            list.add(PlayerClass::newPlayer(p));
        return list;
    }
    CATCH("Fail in GetOnlinePlayers!")
}

Local<Value> McClass::broadcast(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try {
        TextType type = TextType::RAW;
        if (args.size() >= 2 && args[1].isNumber()) {
            int newType = args[1].asNumber().toInt32();
            if (newType >= 0 && newType <= 9)
                type = (TextType)newType;
        }
        Level::broadcastText(args[0].toStr(), type);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in Broadcast!")
}

//成员函数
void PlayerClass::set(Player* player) {
    __try {
        id = player->getUniqueID();
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        isValid = false;
    }
}

Player* PlayerClass::get() {
    if (!isValid)
        return nullptr;
    else
        return Global<Level>->getPlayer(id);
}

Local<Value> PlayerClass::getName() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return String::newString(player->getName());
    }
    CATCH("Fail in getPlayerName!")
}

Local<Value> PlayerClass::getPos() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return FloatPos::newPos(player->getPosition(), player->getDimensionId());
    }
    CATCH("Fail in getPlayerPos!")
}

Local<Value> PlayerClass::getFeetPos() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return FloatPos::newPos(player->getFeetPosition(), player->getDimensionId());
    }
    CATCH("Fail in getPlayerFeetPos!")
}

Local<Value> PlayerClass::getBlockPos() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return IntPos::newPos(player->getBlockPos(), player->getDimensionId());
    }
    CATCH("Fail in getPlayerBlockPos!")
}

Local<Value> PlayerClass::getLastDeathPos() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }
        auto pos = player->getLastDeathPosition();
        if (pos.second == -1) {
            return Local<Value>();
        }
        return IntPos::newPos(pos.first, pos.second);
    }
    CATCH("Fail in getLastDeathPos!")
}

Local<Value> PlayerClass::getXuid() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string xuid;
        try {
            xuid = player->getXuid();
        } catch (...) {
            logger.debug("Fail in getXuid!");
            xuid = PlayerInfo::getXuid(player->getRealName());
        }
        return String::newString(xuid);
    }
    CATCH("Fail in getXuid!")
}

Local<Value> PlayerClass::getUuid() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string uuid;
        try {
            uuid = player->getUuid();
        } catch (...) {
            logger.debug("Fail in getUuid!");
            uuid = PlayerInfo::getUUID(player->getRealName());
        }
        return String::newString(uuid);
    }
    CATCH("Fail in getUuid!")
}

Local<Value> PlayerClass::getRealName() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return String::newString(player->getRealName());
    }
    CATCH("Fail in getRealName!")
}

Local<Value> PlayerClass::getIP() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return String::newString(player->getNetworkIdentifier()->getIP());
    }
    CATCH("Fail in GetIP!")
}

Local<Value> PlayerClass::getPermLevel() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(magic_enum::enum_integer(player->getCommandPermissionLevel()));
    }
    CATCH("Fail in getPlayerPermLevel!")
}

Local<Value> PlayerClass::getGameMode() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber((int)player->getPlayerGameType()); //==========???
    }
    CATCH("Fail in getGameMode!")
}

Local<Value> PlayerClass::getCanSleep() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->canSleep());
    }
    CATCH("Fail in getCanSleep!")
}

Local<Value> PlayerClass::getCanFly() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->canFly());
    }
    CATCH("Fail in getCanFly!")
}

Local<Value> PlayerClass::getCanBeSeenOnMap() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->canBeSeenOnMap());
    }
    CATCH("Fail in getCanBeSeenOnMap!")
}

Local<Value> PlayerClass::getCanFreeze() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->canFreeze());
    }
    CATCH("Fail in getCanFreeze!")
}

Local<Value> PlayerClass::getCanSeeDaylight() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->canSeeDaylight());
    }
    CATCH("Fail in getCanSeeDaylight!")
}

Local<Value> PlayerClass::getCanShowNameTag() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->canShowNameTag());
    }
    CATCH("Fail in getCanShowNameTag!")
}

Local<Value> PlayerClass::getCanStartSleepInBed() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->canStartSleepInBed());
    }
    CATCH("Fail in getCanStartSleepInBed!")
}

Local<Value> PlayerClass::getCanPickupItems() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->getCanPickupItems());
    }
    CATCH("Fail in getCanPickupItems!")
}

Local<Value> PlayerClass::getSneaking() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isSneaking());
    }
    CATCH("Fail in getSneaking!")
}

Local<Value> PlayerClass::getSpeed() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getSpeed());
    }
    CATCH("Fail in getSpeed!")
}

Local<Value> PlayerClass::getDirection() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        Vec2 rot = player->getRotation();
        return DirectionAngle::newAngle(rot.x, rot.y);
    }
    CATCH("Fail in getDirection!")
}

Local<Value> PlayerClass::getMaxHealth() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getMaxHealth());
    }
    CATCH("Fail in GetMaxHealth!")
}

Local<Value> PlayerClass::getHealth() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getHealth());
    }
    CATCH("Fail in GetHealth!")
}

Local<Value> PlayerClass::getInAir() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(!player->isOnGround() && !player->isInWater());
    }
    CATCH("Fail in GetInAir!")
}

Local<Value> PlayerClass::getInWater() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInWater());
    }
    CATCH("Fail in getInWater!")
}

Local<Value> PlayerClass::getInLava() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInLava());
    }
    CATCH("Fail in getInLava!")
}

Local<Value> PlayerClass::getInRain() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInRain());
    }
    CATCH("Fail in getInRain!")
}

Local<Value> PlayerClass::getInSnow() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInSnow());
    }
    CATCH("Fail in getInSnow!")
}

Local<Value> PlayerClass::getInWall() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInWall());
    }
    CATCH("Fail in getInWall!")
}

Local<Value> PlayerClass::getInWaterOrRain() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInWaterOrRain());
    }
    CATCH("Fail in getInWaterOrRain!")
}

Local<Value> PlayerClass::getInWorld() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isInWorld());
    }
    CATCH("Fail in getInWorld!")
}

Local<Value> PlayerClass::getInClouds() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isInClouds());
    }
    CATCH("Fail in getInClouds!")
}

Local<Value> PlayerClass::asPointer(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        else
            return NativePointer::newNativePointer(player);
    }
    CATCH("Fail in asPointer!")
}

Local<Value> PlayerClass::getUniqueID() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        else
            return String::newString(std::to_string(player->getUniqueID().id));
    }
    CATCH("Fail in getUniqueID!")
}

Local<Value> PlayerClass::getLangCode() {
    try {
        auto result = get()->getLanguageCode();
        return String::newString(result);
    }
    CATCH("Fail in getLangCode!");
}

Local<Value> PlayerClass::isLoading() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isLoading());
    }
    CATCH("Fail in isLoading!")
}

Local<Value> PlayerClass::isInvisible() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isInvisible());
    }
    CATCH("Fail in isInvisible!")
}

Local<Value> PlayerClass::isInsidePortal() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isInsidePortal());
    }
    CATCH("Fail in isInsidePortal!")
}

Local<Value> PlayerClass::isHurt() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isHurt());
    }
    CATCH("Fail in isHurt!")
}

Local<Value> PlayerClass::isTrusting() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isTrusting());
    }
    CATCH("Fail in isTrusting!")
}

Local<Value> PlayerClass::isTouchingDamageBlock() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isTouchingDamageBlock());
    }
    CATCH("Fail in isTouchingDamageBlock!")
}

Local<Value> PlayerClass::isHungry() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isHungry());
    }
    CATCH("Fail in isHungry!")
}

Local<Value> PlayerClass::isOnFire() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isOnFire());
    }
    CATCH("Fail in isOnFire!")
}

Local<Value> PlayerClass::isOnGround() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isOnGround());
    }
    CATCH("Fail in isOnGround!")
}

Local<Value> PlayerClass::isOnHotBlock() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isOnHotBlock());
    }
    CATCH("Fail in isOnHotBlock!")
}

Local<Value> PlayerClass::isTrading() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isTrading());
    }
    CATCH("Fail in isTrading!")
}

Local<Value> PlayerClass::isAdventure() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isAdventure());
    }
    CATCH("Fail in isAdventure!")
}

Local<Value> PlayerClass::isGliding() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isGliding());
    }
    CATCH("Fail in isGliding!")
}

Local<Value> PlayerClass::isSurvival() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isSurvival());
    }
    CATCH("Fail in isSurvival!")
}

Local<Value> PlayerClass::isSpectator() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isSpectator());
    }
    CATCH("Fail in isSpectator!")
}

Local<Value> PlayerClass::isRiding() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isRiding());
    }
    CATCH("Fail in isRiding!")
}

Local<Value> PlayerClass::isDancing() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isDancing());
    }
    CATCH("Fail in isDancing!")
}

Local<Value> PlayerClass::isCreative() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isCreative());
    }
    CATCH("Fail in isCreative!")
}

Local<Value> PlayerClass::isFlying() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isFlying());
    }
    CATCH("Fail in isFlying!")
}

Local<Value> PlayerClass::isSleeping() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isSleeping());
    }
    CATCH("Fail in isSleeping!")
}

Local<Value> PlayerClass::isMoving() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Boolean::newBoolean(player->isMoving());
    }
    CATCH("Fail in isMoving!")
}

Local<Value> PlayerClass::teleport(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        Player* player = get();
        if (!player)
            return Boolean::newBoolean(false);
        float pitch;
        float yaw;
        FloatVec4 pos;
        bool rotationIsValid = false;

        if (args.size() <= 2) {
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Boolean::newBoolean(false);
            }
            if (args.size() == 2 && IsInstanceOf<DirectionAngle>(args[1])) {
                auto angle = DirectionAngle::extract(args[1]);
                pitch = angle->pitch;
                yaw = angle->yaw;
                rotationIsValid = true;
            }
        } else if (args.size() <= 5) { // teleport(x,y,z,dimid[,rot])
            // number pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);

            pos.x = args[0].asNumber().toFloat();
            pos.y = args[1].asNumber().toFloat();
            pos.z = args[2].asNumber().toFloat();
            pos.dim = args[3].toInt();
            if (args.size() == 5 && IsInstanceOf<DirectionAngle>(args[4])) {
                auto angle = DirectionAngle::extract(args[4]);
                pitch = angle->pitch;
                yaw = angle->yaw;
                rotationIsValid = true;
            }
        } else {
            LOG_WRONG_ARG_TYPE();
            return Boolean::newBoolean(false);
        }
        if (!rotationIsValid) {
            auto ang = player->getRotation();
            pitch = ang.x;
            yaw = ang.y;
        }
        return Boolean::newBoolean(player->teleport(pos.getVec3(), pos.dim, pitch, yaw));
    }
    CATCH("Fail in TeleportPlayer!")
}

Local<Value> PlayerClass::kill(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->kill();
        return Boolean::newBoolean(true); //=======???
    }
    CATCH("Fail in KillPlayer!")
}

Local<Value> PlayerClass::isOP(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isOperator());
    }
    CATCH("Fail in IsOP!")
}

Local<Value> PlayerClass::setPermLevel(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        bool res = false;
        int newPerm = args[0].asNumber().toInt32();
        if (newPerm >= 0 && newPerm <= 4) {
            RecordOperation(ENGINE_OWN_DATA()->pluginName, "Set Permission Level",
                            fmt::format("Set Player {} Permission Level as {}.", player->getRealName(), newPerm));
            player->setPermissions((CommandPermissionLevel)newPerm);
            res = true;
        }
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in setPlayerPermLevel!");
}

Local<Value> PlayerClass::setGameMode(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        bool res = false;
        int newMode = args[0].asNumber().toInt32();
        if (newMode >= 0 || newMode <= 3) {
            player->setPlayerGameType((GameType)newMode);
            res = true;
        }
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in setGameMode!");
}

Local<Value> PlayerClass::runcmd(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->runcmd(args[0].toStr()));
    }
    CATCH("Fail in runcmd!");
}

Local<Value> PlayerClass::kick(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string msg = "disconnectionScreen.disconnected";
        if (args.size() >= 1)
            msg = args[0].toStr();

        player->kick(msg);
        return Boolean::newBoolean(true); //=======???
    }
    CATCH("Fail in kickPlayer!");
}

Local<Value> PlayerClass::tell(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        TextType type = TextType::RAW;
        if (args.size() >= 2 && args[1].isNumber()) {
            int newType = args[1].asNumber().toInt32();
            if (newType >= 0 && newType <= 9)
                type = (TextType)newType;
        }

        player->sendTextPacket(args[0].toStr(), type);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in tell!");
}

Local<Value> PlayerClass::setTitle(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string content;
        TitleType type = TitleType::SetTitle;
        int fadeInTime = 10;
        int stayTime = 70;
        int fadeOutTime = 20;

        if (args.size() >= 1)
        {
            CHECK_ARG_TYPE(args[0], ValueKind::kString);
            content = args[0].toStr();
        }
        if (args.size() >= 2)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            type = (TitleType)args[1].toInt();
        }
        if (args.size() >= 5)
        {
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
            fadeInTime = args[2].toInt();
            stayTime = args[3].toInt();
            fadeOutTime = args[4].toInt();
        }

        return Boolean::newBoolean(player->sendTitlePacket(content,type,fadeInTime,stayTime,fadeOutTime));
    }
    CATCH("Fail in setTitle!");
}

Local<Value> PlayerClass::talkAs(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->sendTextTalkPacket(args[0].toStr(), nullptr);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in talkAs!");
}

Local<Value> PlayerClass::talkTo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* target = PlayerClass::extract(args[1]);
        if (!target)
            return Local<Value>();
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->sendTextTalkPacket(args[0].toStr(), target);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in talkTo!");
}

Local<Value> PlayerClass::getHand(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return ItemClass::newItem(player->getHandSlot());
    }
    CATCH("Fail in getHand!");
}

Local<Value> PlayerClass::getOffHand(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return ItemClass::newItem((ItemStack*)&player->getOffhandSlot());
    }
    CATCH("Fail in getOffHand!");
}

Local<Value> PlayerClass::getInventory(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return ContainerClass::newContainer(&player->getInventory());
    }
    CATCH("Fail in getInventory!");
}

Local<Value> PlayerClass::getArmor(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return ContainerClass::newContainer(&player->getArmorContainer());
    }
    CATCH("Fail in getArmor!");
}

Local<Value> PlayerClass::getEnderChest(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return ContainerClass::newContainer(player->getEnderChestContainer());
    }
    CATCH("Fail in getEnderChest!");
}

Local<Value> PlayerClass::getRespawnPosition(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto position = player->getRespawnPosition();
        return IntPos::newPos(position.first, position.second);
    }
    CATCH("Fail in getRespawnPosition!")
}

Local<Value> PlayerClass::setRespawnPosition(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        IntVec4 pos;
        if (args.size() == 1) {
            // IntPos
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = posObj->toIntVec4();
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 4) {
            // Number Pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            pos = {args[0].toInt(), args[1].toInt(), args[2].toInt(), args[3].toInt()};
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }
        player->setRespawnPosition(pos.getBlockPos(), pos.dim);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setRespawnPosition!")
}

Local<Value> PlayerClass::refreshItems(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->refreshInventory());
    }
    CATCH("Fail in refreshItems!");
}

Local<Value> PlayerClass::rename(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->rename(args[0].toStr()));
    }
    CATCH("Fail in RenamePlayer!");
}

Local<Value> PlayerClass::addLevel(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->addLevels(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in addLevel!");
}

Local<Value> PlayerClass::reduceLevel(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        player->addLevels(-args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in reduceLevel!");
}

Local<Value> PlayerClass::getLevel(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getPlayerLevel());
    }
    CATCH("Fail in getLevel!")
}

Local<Value> PlayerClass::setLevel(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->addLevels(args[0].toInt() - player->getPlayerLevel());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setLevel!");
}

Local<Value> PlayerClass::setScale(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->getEntityData().set(ActorDataKeys::SCALE, args[0].asNumber().toFloat());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setScale!");
}

Local<Value> PlayerClass::resetLevel(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->resetPlayerLevel();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in resetLevel!")
}

Local<Value> PlayerClass::addExperience(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->addExperience(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in addExperience!");
}

Local<Value> PlayerClass::reduceExperience(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        player->reduceExperience(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in reduceExperience!");
}

Local<Value> PlayerClass::getCurrentExperience(const Arguments& arg) {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }
        return Number::newNumber(player->getCurrentExperience());
    }
    CATCH("Fail in getCurrentExperience!")
}

Local<Value> PlayerClass::setCurrentExperience(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        player->setCurrentExperience(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setCurrentExperience!");
}

Local<Value> PlayerClass::getTotalExperience(const Arguments& arg) {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }
        return Number::newNumber((int64_t)player->getTotalExperience());
    }
    CATCH("Fail in getTotalExperience!")
}

Local<Value> PlayerClass::setTotalExperience(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        player->setTotalExperience(args[0].asNumber().toInt64());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setTotalExperience!");
}

Local<Value> PlayerClass::getXpNeededForNextLevel(const Arguments& args) {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }

        return Number::newNumber(player->getXpNeededForNextLevel());
    }
    CATCH("Fail in getXpNeededForNextLevel!")
}

Local<Value> PlayerClass::transServer(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->transferServer(args[0].toStr(), (short)args[1].toInt()));
    }
    CATCH("Fail in transServer!");
}

Local<Value> PlayerClass::crash(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        RecordOperation(ENGINE_OWN_DATA()->pluginName, "Crash Player",
                        "Execute player.crash() to crash player <" + player->getRealName() + ">");
        return Boolean::newBoolean(player->crashClient());
    }
    CATCH("Fail in crashPlayer!");
}

Local<Value> PlayerClass::getBlockStandingOn(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return BlockClass::newBlock(player->getBlockPosCurrentlyStandingOn(nullptr), player->getDimensionId());
    }
    CATCH("Fail in getBlockStandingOn!");
}

Local<Value> PlayerClass::getDevice(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return DeviceClass::newDevice(player);
    }
    CATCH("Fail in getDevice!");
}

Local<Value> PlayerClass::getScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(Scoreboard::getScore(player, args[0].toStr()));
    }
    CATCH("Fail in getScore!");
}

Local<Value> PlayerClass::setScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(::Global<Scoreboard>->setScore(player, args[0].toStr(), args[1].toInt()));
    }
    CATCH("Fail in setScore!");
}

Local<Value> PlayerClass::addScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(::Global<Scoreboard>->addScore(player, args[0].toStr(), args[1].toInt()));
    }
    CATCH("Fail in addScore!");
}

Local<Value> PlayerClass::reduceScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(::Global<Scoreboard>->reduceScore(player, args[0].toStr(), args[1].toInt()));
    }
    CATCH("Fail in reduceScore!");
}

Local<Value> PlayerClass::deleteScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(::Global<Scoreboard>->deleteScore(player, args[0].toStr()));
    }
    CATCH("Fail in deleteScore!");
}

Local<Value> PlayerClass::setSidebar(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kObject);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        std::vector<std::pair<std::string, int>> data;
        auto source = args[1].asObject();
        auto keys = source.getKeyNames();
        for (auto& key : keys) {
            data.push_back(make_pair(key, source.get(key).toInt()));
        }

        int sortOrder = 1;
        if (args.size() >= 3)
            sortOrder = args[2].toInt();

        return Boolean::newBoolean(player->setSidebar(args[0].toStr(), data, (ObjectiveSortOrder)sortOrder));
    }
    CATCH("Fail in setSidebar!")
}

Local<Value> PlayerClass::removeSidebar(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->removeSidebar());
    }
    CATCH("Fail in removeSidebar!")
}

Local<Value> PlayerClass::setBossBar(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    if (args[0].getKind() == ValueKind::kNumber) {
        CHECK_ARGS_COUNT(args, 4);
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
        CHECK_ARG_TYPE(args[1], ValueKind::kString);
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
        CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
        try {
            Player* player = get();
            if (!player)
                return Local<Value>();

            int64_t uid = args[0].asNumber().toInt64();
            int percent = args[2].toInt();
            if (percent < 0)
                percent = 0;
            else if (percent > 100)
                percent = 100;
            float value = (float)percent / 100;
            BossEventColour colour = (BossEventColour)args[3].toInt();
            player->updateBossEvent(uid, args[1].toStr(), value, colour);
            return Boolean::newBoolean(true);
        }
        CATCH("Fail in addBossBar!")
    }
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    if (args.size() >= 3)
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        int percent = args[1].toInt();
        if (percent < 0)
            percent = 0;
        else if (percent > 100)
            percent = 100;
        float value = (float)percent / 100;
        BossEventColour colour = BossEventColour::Red;
        if (args.size() >= 3)
            colour = (BossEventColour)args[2].toInt();
        player->sendBossEventPacket(BossEvent::Show, args[0].toStr(), value, colour);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setBossBar!")
}

Local<Value> PlayerClass::removeBossBar(const Arguments& args) {
    if (args.size() == 0) {
        try {
            Player* player = get();
            if (!player)
                return Local<Value>();

            player->sendBossEventPacket(BossEvent::Hide, "", 0, BossEventColour::Red); // Remove
            return Boolean::newBoolean(true);
        }
        CATCH("Fail in removeBossBar!")
    } else {
        CHECK_ARGS_COUNT(args, 1);
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
        try {
            Player* player = get();
            if (!player)
                return Local<Value>();
            int64_t uid = args[0].asNumber().toInt64();
            player->removeBossEvent(uid); // Remove
            return Boolean::newBoolean(true);
        }
        CATCH("Fail in removeBossBar!")
    }
}

Local<Value> PlayerClass::sendSimpleForm(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 4);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kArray);
    CHECK_ARG_TYPE(args[3], ValueKind::kArray);
    CHECK_ARG_TYPE(args[4], ValueKind::kFunction);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        // 普通格式
        auto textsArr = args[2].asArray();
        if (textsArr.size() == 0 || !textsArr.get(0).isString())
            return Local<Value>();
        auto imagesArr = args[3].asArray();
        if (imagesArr.size() != textsArr.size() || !imagesArr.get(0).isString())
            return Local<Value>();

        vector<string> texts, images;
        for (int i = 0; i < textsArr.size(); ++i) {
            texts.push_back(textsArr.get(i).toStr());
        }
        for (int i = 0; i < imagesArr.size(); ++i) {
            images.push_back(imagesArr.get(i).toStr());
        }

        player->sendSimpleFormPacket(args[0].toStr(), args[1].toStr(), texts, images,
                                     [id{player->getUniqueID()}, engine{EngineScope::currentEngine()},
                                      callback{script::Global(args[4].asFunction())}](int chosen) {
                                         if (ll::isServerStopping())
                                             return;
                                         if (!EngineManager::isValid(engine))
                                             return;

                                         Player* pl = Global<Level>->getPlayer(id);
                                         if (!pl)
                                             return;

                                         EngineScope scope(engine);
                                         try {
                                             callback.get().call({}, PlayerClass::newPlayer(pl),
                                                                 chosen >= 0 ? Number::newNumber(chosen) : Local<Value>());
                                         }
                                         CATCH_IN_CALLBACK("sendSimpleForm")
                                     });

        return Number::newNumber(1);
    }
    CATCH("Fail in sendSimpleForm!");
}

Local<Value> PlayerClass::sendModalForm(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 5);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kString);
    CHECK_ARG_TYPE(args[3], ValueKind::kString);
    CHECK_ARG_TYPE(args[4], ValueKind::kFunction);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->sendModalFormPacket(args[0].toStr(), args[1].toStr(), args[2].toStr(), args[3].toStr(),
                                    [id{player->getUniqueID()}, engine{EngineScope::currentEngine()},
                                     callback{script::Global(args[4].asFunction())}](bool chosen) {
                                        if (ll::isServerStopping())
                                            return;
                                        if (!EngineManager::isValid(engine))
                                            return;

                                        Player* pl = Global<Level>->getPlayer(id);
                                        if (!pl)
                                            return;

                                        EngineScope scope(engine);
                                        try {
                                            callback.get().call({}, PlayerClass::newPlayer(pl),
                                                                chosen >= 0 ? Boolean::newBoolean(chosen) : Local<Value>());
                                        }
                                        CATCH_IN_CALLBACK("sendModalForm")
                                    });

        return Number::newNumber(2);
    }
    CATCH("Fail in sendModalForm!");
}

Local<Value> PlayerClass::sendCustomForm(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string data = fifo_json::parse(args[0].toStr()).dump();

        player->sendCustomFormPacket(data,
                                     [id{player->getUniqueID()}, engine{EngineScope::currentEngine()},
                                      callback{script::Global(args[1].asFunction())}](string result) {
                                         if (ll::isServerStopping())
                                             return;
                                         if (!EngineManager::isValid(engine))
                                             return;

                                         Player* pl = Global<Level>->getPlayer(id);
                                         if (!pl)
                                             return;

                                         EngineScope scope(engine);
                                         try {
                                             callback.get().call({}, PlayerClass::newPlayer(pl),
                                                                 result != "null" ? JsonToValue(result) : Local<Value>());
                                         }
                                         CATCH_IN_CALLBACK("sendCustomForm")
                                     });
        return Number::newNumber(3);
    } catch (const fifo_json::exception& e) {
        logger.error("Fail to parse Json string in sendCustomForm!");
        logger.error(TextEncoding::toUTF8(e.what()));
        PrintScriptStackTrace();
        return Local<Value>();
    }
    CATCH("Fail in sendCustomForm!");
}

Local<Value> PlayerClass::sendForm(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        bool res = false;

        Form::SimpleForm* form = SimpleFormClass::extract(args[0]);
        if (IsInstanceOf<SimpleFormClass>(args[0])) {
            Local<Function> callback = args[1].asFunction();
            res = SimpleFormClass::sendForm(SimpleFormClass::extract(args[0]), player, callback);
        } else if (IsInstanceOf<CustomFormClass>(args[0])) {
            Local<Function> callback = args[1].asFunction();
            res = CustomFormClass::sendForm(CustomFormClass::extract(args[0]), player, callback);
        } else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        return Boolean::newBoolean(res);
    }
    CATCH("Fail in sendForm!");
}

Local<Value> PlayerClass::sendPacket(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kObject);

    try
    {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto pkt = PacketClass::extract(args[0]);
		if (!pkt)
            return Boolean::newBoolean(false);  
        player->sendNetworkPacket(*pkt);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in sendPacket");
    return Local<Value>();
}

Local<Value> PlayerClass::setExtraData(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string key = args[0].toStr();
        if (key.empty())
            return Boolean::newBoolean(false);

        ENGINE_OWN_DATA()->playerDataDB[player->getRealName() + "-" + key] = args[1];
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setExtraData!");
}

Local<Value> PlayerClass::getExtraData(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string key = args[0].toStr();
        if (key.empty())
            return Local<Value>();

        auto& db = ENGINE_OWN_DATA()->playerDataDB;
        auto res = db.find(player->getRealName() + "-" + key);
        if (res == db.end() || res->second.isEmpty())
            return Local<Value>();
        else
            return res->second.get();
    }
    CATCH("Fail in getExtraData!");
}

Local<Value> PlayerClass::delExtraData(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        string key = args[0].toStr();
        if (key.empty())
            return Boolean::newBoolean(false);

        ENGINE_OWN_DATA()->playerDataDB.erase(player->getRealName() + "-" + key);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in delExtraData!")
}

Local<Value> PlayerClass::hurt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        int damage = args[0].toInt();
        return Boolean::newBoolean(player->hurtEntity(damage));
    }
    CATCH("Fail in hurt!");
}

Local<Value> PlayerClass::heal(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->heal(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in heal!");
}

Local<Value> PlayerClass::setHealth(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* healthAttribute = player->getMutableAttribute(Global<SharedAttributes>->HEALTH);

        healthAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setHealth!");
}

Local<Value> PlayerClass::setMaxHealth(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* healthAttribute = player->getMutableAttribute(Global<SharedAttributes>->HEALTH);

        healthAttribute->setMaxValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setMaxHealth!");
}

Local<Value> PlayerClass::setAbsorption(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* absorptionAttribute = player->getMutableAttribute(Global<SharedAttributes>->ABSORPTION);

        absorptionAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAbsorptionAttribute!");
}

Local<Value> PlayerClass::setAttackDamage(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* attactDamageAttribute = player->getMutableAttribute(Global<SharedAttributes>->ATTACK_DAMAGE);

        attactDamageAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAttackDamage!");
}

Local<Value> PlayerClass::setMaxAttackDamage(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* attactDamageAttribute = player->getMutableAttribute(Global<SharedAttributes>->ATTACK_DAMAGE);

        attactDamageAttribute->setMaxValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setMaxAttackDamage!");
}

Local<Value> PlayerClass::setFollowRange(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* followRangeAttribute = player->getMutableAttribute(Global<SharedAttributes>->FOLLOW_RANGE);

        followRangeAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setFollowRange!");
}

Local<Value> PlayerClass::setKnockbackResistance(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* knockbackResistanceAttribute = player->getMutableAttribute(Global<SharedAttributes>->KNOCKBACK_RESISTANCE);

        knockbackResistanceAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setKnockbackResistance!");
}

Local<Value> PlayerClass::setLuck(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* luckAttribute = player->getMutableAttribute(Global<SharedAttributes>->LUCK);

        luckAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setLuck!");
}

Local<Value> PlayerClass::setMovementSpeed(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* movementSpeedAttribute = player->getMutableAttribute(Global<SharedAttributes>->MOVEMENT_SPEED);

        movementSpeedAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setMovementSpeed!");
}

Local<Value> PlayerClass::setUnderwaterMovementSpeed(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* underwaterMovementSpeedAttribute = player->getMutableAttribute(Global<SharedAttributes>->UNDERWATER_MOVEMENT_SPEED);

        underwaterMovementSpeedAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setUnderwaterMovementSpeed!");
}

Local<Value> PlayerClass::setLavaMovementSpeed(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* lavaMovementSpeedAttribute = player->getMutableAttribute(Global<SharedAttributes>->LAVA_MOVEMENT_SPEED);

        lavaMovementSpeedAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setLavaMovementSpeed!");
}

Local<Value> PlayerClass::setHungry(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        AttributeInstance* healthAttribute = player->getMutableAttribute(player->HUNGER);

        healthAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setHungry!");
}

Local<Value> PlayerClass::setFire(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        int time = args[0].toInt();
        bool isEffectValue = args[1].asBoolean().value();

        bool result = player->setOnFire(time, isEffectValue);
        return Boolean::newBoolean(result);
    }
    CATCH("Fail in setFire!");
}

Local<Value> PlayerClass::stopFire(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->stopFire());
    }
    CATCH("Fail in stopFire!");
}

// For Compatibility
Local<Value> PlayerClass::setOnFire(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        int time = args[0].toInt();

        bool result = player->setOnFire(time, true);
        return Boolean::newBoolean(result);
    }
    CATCH("Fail in setOnFire!");
}

Local<Value> PlayerClass::refreshChunks(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->resendAllChunks();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in refreshChunks!");
}

Local<Value> PlayerClass::giveItem(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        auto item = ItemClass::extract(args[0]);
        if (!item)
            return Local<Value>(); // Null
        if (args.size() >= 2)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            return Boolean::newBoolean(player->giveItem(item, args[1].toInt()));
        }
        return Boolean::newBoolean(player->giveItem(item));
    }
    CATCH("Fail in giveItem!");
}

Local<Value> PlayerClass::clearItem(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->clearItem(args[0].toStr()));
    }
    CATCH("Fail in clearItem!");
}

Local<Value> PlayerClass::isSprinting(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 0);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->isSprinting());
    }
    CATCH("Fail in isSprinting!");
}

Local<Value> PlayerClass::setSprinting(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kBoolean);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        player->setSprinting(args[0].asBoolean().value());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setSprinting!");
}

Local<Value> PlayerClass::getNbt(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return NbtCompoundClass::pack(player->getNbt());
    }
    CATCH("Fail in getNbt!")
}

Local<Value> PlayerClass::setNbt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        auto nbt = NbtCompoundClass::extract(args[0]);
        if (!nbt)
            return Local<Value>(); // Null

        return Boolean::newBoolean(player->setNbt(nbt));
    }
    CATCH("Fail in setNbt!")
}

Local<Value> PlayerClass::addTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->addTag(args[0].toStr()));
    }
    CATCH("Fail in addTag!");
}

Local<Value> PlayerClass::removeTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->removeTag(args[0].toStr()));
    }
    CATCH("Fail in removeTag!");
}

Local<Value> PlayerClass::hasTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        return Boolean::newBoolean(player->hasTag(args[0].toStr()));
    }
    CATCH("Fail in hasTag!");
}

Local<Value> PlayerClass::getAllTags(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        auto res = player->getAllTags();
        Local<Array> arr = Array::newArray();
        for (auto& tag : res)
            arr.add(String::newString(tag));
        return arr;
    }
    CATCH("Fail in getAllTags!");
}

Local<Value> PlayerClass::getAbilities(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        auto list = player->getNbt();
        try {
            return Tag2Value((Tag*)list->getCompoundTag("abilities"), true);
        } catch (...) {
            return Object::newObject();
        }
    }
    CATCH("Fail in getAbilities!");
}

Local<Value> PlayerClass::getAttributes(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        Local<Array> res = Array::newArray();

        auto list = player->getNbt();
        try {
            ListTag* attr = (ListTag*)list->getListTag("Attributes");

            Local<Array> arr = Array::newArray();
            for (auto& tag : attr->value()) {
                arr.add(Tag2Value(tag, true));
            }
            return arr;
        } catch (...) {
            return Array::newArray();
        }
    }
    CATCH("Fail in getAttributes!");
}

Local<Value> PlayerClass::getEntityFromViewVector(const Arguments& args) {

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        float maxDistance = 5.25f;
        if (args.size() > 0) {
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            maxDistance = args[0].asNumber().toFloat();
        }
        auto entity = player->getActorFromViewVector(maxDistance);
        if (entity)
            return EntityClass::newEntity(entity);
        return Local<Value>();
    }
    CATCH("Fail in getEntityFromViewVector!");
}

Local<Value> PlayerClass::getBlockFromViewVector(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        bool includeLiquid = false;
        bool solidOnly = false;
        float maxDistance = 5.25f;
        bool ignoreBorderBlocks = true;
        bool fullOnly = false;
        if (args.size() > 0) {
            CHECK_ARG_TYPE(args[0], ValueKind::kBoolean);
            includeLiquid = args[0].asBoolean().value();
        }
        if (args.size() > 1) {
            CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);
            solidOnly = args[1].asBoolean().value();
        }
        if (args.size() > 2) {
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            maxDistance = args[2].asNumber().toFloat();
        }
        if (args.size() > 3) {
            CHECK_ARG_TYPE(args[3], ValueKind::kBoolean);
            fullOnly = args[3].asBoolean().value();
        }
        auto blockInstance = player->getBlockFromViewVector(includeLiquid, solidOnly, maxDistance, ignoreBorderBlocks, fullOnly);
        if (blockInstance.isNull())
            return Local<Value>();
        return BlockClass::newBlock(std::move(blockInstance));
    }
    CATCH("Fail in getBlockFromViewVector!");
}

Local<Value> PlayerClass::isSimulatedPlayer(const Arguments& args) {
    try {
        return Boolean::newBoolean(get()->isSimulatedPlayer());
    }
    CATCH("Fail in isSimulatedPlayer!");
}

Local<Value> PlayerClass::quickEvalMolangScript(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        Player* actor = get();
        if (!actor)
            return Local<Value>();
        return Number::newNumber(actor->quickEvalMolangScript(args[0].toStr()));
    }
    CATCH("Fail in quickEvalMolangScript!");
}

//////////////////// For LLMoney ////////////////////

Local<Value> PlayerClass::getMoney(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto xuid = player->getXuid();
        return xuid.empty() ? Local<Value>() : Number::newNumber(EconomySystem::getMoney(xuid));
    }
    CATCH("Fail in getMoney!");
}

Local<Value> PlayerClass::reduceMoney(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto xuid = player->getXuid();
        return xuid.empty() ? Local<Value>() : Boolean::newBoolean(
                                                   EconomySystem::reduceMoney(
                                                       xuid,
                                                       args[0].asNumber().toInt64())
                                                   );
    }
    CATCH("Fail in reduceMoney!");
}

Local<Value> PlayerClass::setMoney(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto xuid = player->getXuid();
        return xuid.empty() ? Local<Value>() : Boolean::newBoolean(
                                                   EconomySystem::setMoney(
                                                       xuid,args[0].asNumber().toInt64())
                                                   );
    }
    CATCH("Fail in setMoney!");
}

Local<Value> PlayerClass::addMoney(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto xuid = player->getXuid();
        return xuid.empty() ? Local<Value>() : Boolean::newBoolean(
                                                   EconomySystem::addMoney(
                                                       xuid,
                                                       args[0].asNumber().toInt64())
                                                   );
    }
    CATCH("Fail in addMoney!");
}

Local<Value> PlayerClass::transMoney(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    // nocheck: args[0] maybe Player or XUID.
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto xuid = player->getXuid();
        string targetXuid;
        string note;
        if (args[0].getKind() == ValueKind::kString)
            targetXuid = args[0].toStr();
        else
            targetXuid = PlayerClass::extract(args[0])->getXuid();
        if (args.size() >= 3)
        {
            CHECK_ARG_TYPE(args[2], ValueKind::kString);
            note = args[2].toStr();
        }
        return xuid.empty() ? Local<Value>() : Boolean::newBoolean(
                                                   EconomySystem::transMoney(
                                                       xuid,
                                                       targetXuid,args[0].asNumber().toInt64(),
                                                       note)
                                                   );
    }
    CATCH("Fail in transMoney!");
}

Local<Value> PlayerClass::getMoneyHistory(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto xuid = player->getXuid();
        return xuid.empty() ? Local<Value>() : objectificationMoneyHistory(EconomySystem::getMoneyHist(xuid,args[0].toInt()));
    }
    CATCH("Fail in getMoneyHistory!");
}

//////////////////// For Compatibility ////////////////////

Local<Value> PlayerClass::getAllItems(const Arguments& args) {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        ItemStack* hand = player->getHandSlot();
        ItemStack* offHand = (ItemStack*)&player->getOffhandSlot();
        vector<const ItemStack*> inventory = player->getInventory().getAllSlots();
        vector<const ItemStack*> armor = player->getArmorContainer().getAllSlots();
        vector<const ItemStack*> endChest = player->getEnderChestContainer()->getAllSlots();

        Local<Object> result = Object::newObject();

        // hand
        result.set("hand", ItemClass::newItem(hand));

        // offHand
        result.set("offHand", ItemClass::newItem(offHand));

        // inventory
        Local<Array> inventoryArr = Array::newArray();
        for (const ItemStack* item : inventory) {
            inventoryArr.add(ItemClass::newItem((ItemStack*)item));
        }
        result.set("inventory", inventoryArr);

        // armor
        Local<Array> armorArr = Array::newArray();
        for (const ItemStack* item : armor) {
            armorArr.add(ItemClass::newItem((ItemStack*)item));
        }
        result.set("armor", armorArr);

        // endChest
        Local<Array> endChestArr = Array::newArray();
        for (const ItemStack* item : endChest) {
            endChestArr.add(ItemClass::newItem((ItemStack*)item));
        }
        result.set("endChest", endChestArr);

        return result;
    }
    CATCH("Fail in getAllItems!")
}

Local<Value> PlayerClass::removeItem(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();

        int inventoryId = args[0].toInt();
        int count = args[1].toInt();

        Container& container = player->getInventory();
        if (inventoryId > container.getSize())
            return Boolean::newBoolean(false);
        container.removeItem(inventoryId, count);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in removeItem!")
}


Local<Value> PlayerClass::sendToast(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    try {
        Player* player = get();

        if (!player)
            return Local<Value>();

        player->sendToastPacket(args[0].toStr(), args[1].toStr());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in sendToast!");
}

Local<Value> PlayerClass::distanceTo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        FloatVec4 pos{};

        Player* player = get();
        if (!player)
            return Local<Value>();

        if (args.size() == 1) { // pos | player | entity
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos = *posObj;
                }
            } else if (IsInstanceOf<PlayerClass>(args[0]) || IsInstanceOf<EntityClass>(args[0])) {
                // Player or Entity

                Actor* targetActor = EntityClass::tryExtractActor(args[0]).value();
                if (!targetActor)
                    return Local<Value>();

                Vec3 targetActorPos = targetActor->getPosition();

                pos.x = targetActorPos.x;
                pos.y = targetActorPos.y;
                pos.z = targetActorPos.z;
                pos.dim = targetActor->getDimensionId();
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 4) { // x, y, z, dimId
            // number pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);

            pos.x = args[0].asNumber().toFloat();
            pos.y = args[1].asNumber().toFloat();
            pos.z = args[2].asNumber().toFloat();
            pos.dim = args[3].toInt();
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        if (player->getDimensionId() != pos.dim)
            return Number::newNumber(INT_MAX);

        return Number::newNumber(player->distanceTo(pos.getVec3()));
    }
    CATCH("Fail in distanceTo!")
}

Local<Value> PlayerClass::distanceToSqr(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        FloatVec4 pos;

        Player* player = get();
        if (!player)
            return Local<Value>();

        if (args.size() == 1) {
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos = *posObj;
                }
            } else if (IsInstanceOf<PlayerClass>(args[0]) || IsInstanceOf<EntityClass>(args[0])) {
                // Player or Entity

                Actor* targetActor = EntityClass::tryExtractActor(args[0]).value();
                if (!targetActor)
                    return Local<Value>();

                Vec3 targetActorPos = targetActor->getPosition();

                pos.x = targetActorPos.x;
                pos.y = targetActorPos.y;
                pos.z = targetActorPos.z;
                pos.dim = targetActor->getDimensionId();
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 4) {
            // number pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);

            pos.x = args[0].asNumber().toFloat();
            pos.y = args[1].asNumber().toFloat();
            pos.z = args[2].asNumber().toFloat();
            pos.dim = args[3].toInt();
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        if (player->getDimensionId() != pos.dim)
            return Number::newNumber(INT_MAX);

        return Number::newNumber(player->distanceToSqr(pos.getVec3()));
    }
    CATCH("Fail in distanceToSqr!")
}

Local<Value> PlayerClass::setAbility(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);

    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        player->setAbility(AbilitiesIndex(args[0].asNumber().toInt32()), args[1].asBoolean().value());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAbility!");
}

Local<Value> PlayerClass::getBiomeId() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto bio = player->getBiome();
        return Number::newNumber(bio->getId());
    }
    CATCH("Fail in getBiomeId!");
}

Local<Value> PlayerClass::getBiomeName() {
    try {
        Player* player = get();
        if (!player)
            return Local<Value>();
        auto bio = player->getBiome();
        return String::newString(bio->getName());
    }
    CATCH("Fail in getBiomeName!");
}

Local<Value> PlayerClass::getAllEffects() {
    try {
        Player* player = get();
        if (!player) {
            return Local<Value>();
        }
        auto effects = player->getAllEffects();
        if (effects.size() == 0) {
            return Local<Value>();
        }
        Local<Array> effectlist = Array::newArray();
        for (auto effect : effects)
            effectlist.add(Number::newNumber((int)effect.getId()));
        return effectlist;
    }
    CATCH("Fail in getAllEffects!")
}

Local<Value> PlayerClass::addEffect(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 4);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[3], ValueKind::kBoolean);
    try {
        Player* player = get();
        if (!player) {
            return Boolean::newBoolean(false);
        }
        unsigned int id = args[0].asNumber().toInt32();
        int tick = args[1].asNumber().toInt32();
        int level = args[2].asNumber().toInt32();
        bool showParticles = args[3].asBoolean().value();
        MobEffectInstance effect = MobEffectInstance(id, tick, level, false, showParticles, false);
        player->addEffect(effect);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in addEffect!");
}

Local<Value> PlayerClass::removeEffect(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    try {
        Player* player = get();
        if (!player) {
            return Boolean::newBoolean(false);
        }
        int id = args[0].asNumber().toInt32();
        player->removeEffect(id);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in removeEffect!");
}