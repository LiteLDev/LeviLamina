#pragma once

#include <vector>

#include "ScriptCallbackInterface.h"
#include "ScriptEngine.h"

namespace ScriptApi {
class ScriptObjectHandle;
class ScriptVersionInfo;
class ScriptReportItem;
} // namespace ScriptApi

class MinecraftServerScriptEngine : public ScriptEngine, public ScriptApi::ScriptCallbackInterface {
public:
    virtual ~MinecraftServerScriptEngine();
    virtual bool initialize(void);
    virtual bool shutdown(void);
    virtual bool onLogReceived(std::string const&);
    virtual bool onInfoReceived(std::string const&);
    virtual bool onWarnReceived(std::string const&);
    virtual bool onErrorReceived(std::string const&);
    virtual bool helpDefineActor(struct ActorUniqueID const&, ScriptApi::ScriptObjectHandle&);
    virtual bool helpDefineActor(class Actor const&, ScriptApi::ScriptObjectHandle&);
    virtual bool helpGetActor(class ScriptObjectBinder const&, class Actor**);
    virtual bool helpGetBlockSource(class ScriptObjectBinder const&, class BlockSource**);
    virtual bool helpGetBlock(class ScriptObjectBinder const&, class Block const**, class BlockSource const&);
    virtual bool helpGetBlockPos(class ScriptObjectBinder const&, class BlockPos&);
    virtual bool helpDefineLevel(ScriptApi::ScriptObjectHandle&);
    virtual bool helpGetLevel(class ScriptObjectBinder const&, class Level**);
    virtual bool helpDefineItemStack(class ItemInstance const&, ScriptApi::ScriptObjectHandle&);
    virtual void helpPopulateEcsID(class Json::Value&);
    virtual bool setupInterface(void);
    virtual bool
        registerEventData(ScriptApi::ScriptVersionInfo const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual bool
                 createEventData(ScriptApi::ScriptVersionInfo const&, std::string const&, ScriptApi::ScriptObjectHandle&);
    virtual bool onEventReceivedFromScriptEngine(
        ScriptApi::ScriptVersionInfo const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual bool createEntity(ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&);
    virtual bool createEntity(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&, std::string const&, std::string const&);
    virtual bool destroyEntity(ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&);
    virtual bool isValidEntity(ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, bool&);
    virtual bool
                 registerComponent(ScriptApi::ScriptVersionInfo const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual bool createComponent(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, std::string const&,
        ScriptApi::ScriptObjectHandle&);
    virtual bool getComponent(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, std::string const&,
        ScriptApi::ScriptObjectHandle&);
    virtual bool hasComponent(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, std::string const&, bool&);
    virtual bool
                 destroyComponent(ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, std::string const&);
    virtual bool applyComponentChanges(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&,
        ScriptApi::ScriptObjectHandle const&);
    virtual bool registerScriptOnlyComponent(
        ScriptApi::ScriptVersionInfo const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual bool registerQuery(ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&);
    virtual bool registerQuery(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&, std::string const&, std::string const&,
        std::string const&, std::string const&);
    virtual bool getEntitiesFromQuery(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&,
        std::vector<ScriptApi::ScriptObjectHandle>&);
    virtual bool getEntitiesFromQuery(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, double, double, double, double,
        double, double, std::vector<ScriptApi::ScriptObjectHandle>&);
    virtual bool
                 addFilter(ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle const&, std::string const&);
    virtual bool getBlock(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&, class BlockPos const&,
        ScriptApi::ScriptObjectHandle const&, class ScriptObjectBinder const&);
    virtual bool helpDefineTickingArea(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&, class ITickingArea const&);
    virtual bool helpDefineTickingArea(
        ScriptApi::ScriptVersionInfo const&, ScriptApi::ScriptObjectHandle&, struct ActorUniqueID const&);
    virtual void             onExecuteCommandCalled(ScriptApi::ScriptVersionInfo const&, struct ScriptCommand&&);
    virtual bool             executeCommand(struct ScriptCommand const&);
    virtual bool             onCommandOutputCallback(unsigned int, class Json::Value&&);
    virtual bool             _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    virtual bool             _hasEvent(std::string const&) const;
    virtual bool             _helpRegisterSystemCallbacks(ScriptApi::ScriptObjectHandle const&);
    virtual void             _handleError(ScriptApi::ScriptReportItem const&);
    virtual void             _handleWarning(ScriptApi::ScriptReportItem const&);
    virtual enum EventResult onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual enum EventResult onServerUpdateStart(class ServerInstance&);
    virtual enum EventResult onServerUpdateEnd(class ServerInstance&);
    virtual enum EventResult onServerThreadStarted(class ServerInstance&);
    virtual enum EventResult onLeaveGameDone(class ServerInstance&);
    virtual enum EventResult onLevelTick(void);
};