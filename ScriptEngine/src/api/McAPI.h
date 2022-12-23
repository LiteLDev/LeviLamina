#pragma once
#include "api/APIHelp.h"
#include <string>


class McClass {
public:
    static Local<Value> getBDSVersion(const Arguments& args);
    static Local<Value> getServerProtocolVersion(const Arguments& args);

    static Local<Value> runcmd(const Arguments& args);
    static Local<Value> runcmdEx(const Arguments& args);
    static Local<Value> newCommand(const Arguments& args);
    static Local<Value> regPlayerCmd(const Arguments& args);
    static Local<Value> broadcast(const Arguments& args);

    static Local<Value> listen(const Arguments& args);

    static Local<Value> getPlayer(const Arguments& args);
    static Local<Value> getOnlinePlayers(const Arguments& args);
    static Local<Value> getAllEntities(const Arguments& args);

    static Local<Value> newItem(const Arguments& args);
    static Local<Value> spawnMob(const Arguments& args);
    static Local<Value> spawnItem(const Arguments& args);
    static Local<Value> spawnSimulatedPlayer(const Arguments& args);
    static Local<Value> explode(const Arguments& args);
    static Local<Value> cloneMob(const Arguments& args);

    static Local<Value> getBlock(const Arguments& args);
    static Local<Value> setBlock(const Arguments& args);
    static Local<Value> spawnParticle(const Arguments& args);

    static Local<Value> newSimpleForm(const Arguments& args);
    static Local<Value> newCustomForm(const Arguments& args);

    static Local<Value> regConsoleCmd(const Arguments& args);
    static Local<Value> setMotd(const Arguments& args);
    static Local<Value> sendCmdOutput(const Arguments& args);
    static Local<Value> crashBDS(const Arguments& args);

    static Local<Value> setMaxNumPlayers(const Arguments& args);

    static Local<Value> newIntPos(const Arguments& args);
    static Local<Value> newFloatPos(const Arguments& args);

    static Local<Value> getDisplayObjective(const Arguments& args);
    static Local<Value> clearDisplayObjective(const Arguments& args);
    static Local<Value> getScoreObjective(const Arguments& args);
    static Local<Value> newScoreObjective(const Arguments& args);
    static Local<Value> removeScoreObjective(const Arguments& args);
    static Local<Value> getAllScoreObjectives(const Arguments& args);
    static Local<Value> getStructure(const Arguments& args);
    static Local<Value> setStructure(const Arguments& args);

    static Local<Value> newParticleSpawner(const Arguments& args);

    static Local<Value> getPlayerNbt(const Arguments& args);
    static Local<Value> setPlayerNbt(const Arguments& args);
    static Local<Value> setPlayerNbtTags(const Arguments& args);
    static Local<Value> deletePlayerNbt(const Arguments& args);
};
extern ClassDefine<void> McClassBuilder;