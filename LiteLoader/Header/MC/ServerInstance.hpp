// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCE
public:
    class ServerInstance& operator=(class ServerInstance const &) = delete;
    ServerInstance(class ServerInstance const &) = delete;
    ServerInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCE
public:
    MCVAPI void onAppResumed();
    MCVAPI void onAppSuspended();
    MCVAPI void onCriticalDiskError(bool, enum Core::LevelStorageState const &);
    MCVAPI void onGameModeChanged();
    MCVAPI void onGameSessionReset();
    MCVAPI void onInternetUpdate();
    MCVAPI void onLevelCorrupt();
    MCVAPI void onLevelExit();
    MCVAPI void onLowDiskSpace(bool);
    MCVAPI void onLowMemory();
    MCVAPI void onOutOfDiskSpace(bool);
    MCVAPI void onTick(int, int);
    MCVAPI void updateScreens();
    MCVAPI ~ServerInstance();
#endif
    MCAPI ServerInstance(class IMinecraftApp &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator>> const &);
    MCAPI void disconnectAllClientsWithMessage(std::string);
    MCAPI bool enableItemStackNetManager() const;
    MCAPI bool initializeServer(class IMinecraftApp &, class AllowList &, class PermissionsFile *, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const &, std::string, class mce::UUID const &, class IMinecraftEventing &, class IResourcePackRepository &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, class ResourcePackManager &, class std::function<std::unique_ptr<class LevelStorage> (class Scheduler &)>, std::unique_ptr<class LevelLooseFileStorage>, std::string const &, class LevelData *, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager *, class std::function<void (void)>, class std::function<void (void)>, class ServerMetrics *, class DebugEndPoint *, bool, class std::shared_ptr<class Core::FileStorageArea>, unsigned short, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const &, enum TransportLayer, float);
    MCAPI void leaveGameSync();
    MCAPI void queueForServerThread(class std::function<void (void)>);
    MCAPI void setWakeupFrequency(int);
    MCAPI void startServerThread();
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;


//private:
    MCAPI void _threadSafeExecute(class std::function<void (void)>);
    MCAPI void _update();

};