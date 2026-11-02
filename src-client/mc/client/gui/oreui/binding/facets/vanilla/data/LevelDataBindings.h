#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
class TrialManager;
namespace OreUI { class ExperimentalFeatureToggle; }
// clang-format on

namespace OreUI {

struct LevelDataBindings {
public:
    // LevelDataBindings inner types declare
    // clang-format off
    struct General;
    struct Advanced;
    struct Multiplayer;
    struct Cheats;
    struct ResourcePacks;
    // clang-format on

    // LevelDataBindings inner types define
    struct General {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        // NOLINTEND

    public:
        // prevent constructor by default
        General(General const&);
        General();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int getDifficulty() const;

        MCNAPI int getGameMode() const;

        MCNAPI bool getPlayerHasDied() const;

        MCAPI ::std::string const& getWorldName() const;

        MCNAPI bool isHardcore() const;

        MCNAPI ::OreUI::LevelDataBindings::General& operator=(::OreUI::LevelDataBindings::General const& rhs);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::General const& rhs) const;

        MCNAPI void setDifficulty(int intDifficulty);

        MCNAPI void setGameMode(int mode);

        MCNAPI void setIsHardcore(bool isHardcore);

        MCNAPI void setWorldName(::std::string const& name);
        // NOLINTEND
    };

    struct Advanced {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                            mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&>             mLevelData;
        ::ll::TypedStorage<4, 4, ::GeneratorType>                 mInitialGeneratorType;
        ::ll::TypedStorage<8, 32, ::std::string>                  mRespawnRadiusString;
        ::ll::TypedStorage<1, 1, bool>                            mSeedFeatureEnabled;
        ::ll::TypedStorage<8, 32, ::std::string>                  mWorldSeed;
        ::ll::TypedStorage<1, 1, bool>                            mSleepSkipNight;
        ::ll::TypedStorage<4, 4, int>                             mSleepSkipNightPercent;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFlatWorldPresetIdStr;
        // NOLINTEND

    public:
        // prevent constructor by default
        Advanced(Advanced const&);
        Advanced();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::optional<::std::string> const& getFlatWorldPreset();

        MCAPI ::GeneratorType getGeneratorType() const;

        MCNAPI bool getRecipesUnlock() const;

        MCNAPI ::std::string const& getRespawnRadius() const;

        MCNAPI bool getShowCoordinates() const;

        MCNAPI bool getShowDaysPlayed() const;

        MCNAPI int getSimulationDistance() const;

        MCNAPI bool const getSleepSkipNight() const;

        MCNAPI int const getSleepSkipNightPercent() const;

        MCNAPI bool getStartWithMap() const;

        MCNAPI bool getUseBonusChest() const;

        MCNAPI bool getUseExplodingTnt() const;

        MCNAPI bool getUseFlatWorld() const;

        MCNAPI bool getUseFriendlyFire() const;

        MCNAPI bool getUseImmediateRespawn() const;

        MCNAPI bool getUseMobLoot() const;

        MCNAPI bool getUseNaturalRegeneration() const;

        MCNAPI bool getUseRespawnBlocksExplode() const;

        MCNAPI bool getUseSpreadingFire() const;

        MCNAPI bool getUseTileDrops() const;

        MCFOLD ::std::string const& getWorldSeed() const;

        MCNAPI ::OreUI::LevelDataBindings::Advanced& operator=(::OreUI::LevelDataBindings::Advanced const& rhs);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::Advanced const& rhs) const;

        MCAPI void setFlatWorldPreset(::std::string const& idStr);

        MCAPI void setGeneratorType(::GeneratorType generatorType);

        MCNAPI void setRecipesUnlock(bool recipesUnlock);

        MCNAPI void setRespawnRadius(::std::string const& respawnRadiusStr);

        MCNAPI void setShowCoordinates(bool showCoordinates);

        MCNAPI void setShowDaysPlayed(bool showDaysPlayed);

        MCNAPI void setSimulationDistance(int distance);

        MCNAPI void setSleepSkipNight(bool sleepSkipNight);

        MCNAPI void setSleepSkipNightPercent(int sleepSkipNightPercent);

        MCNAPI void setStartWithMap(bool startWithMap);

        MCNAPI void setUseBonusChest(bool useBonusChest);

        MCNAPI void setUseExplodingTnt(bool useExplodingTnt);

        MCNAPI void setUseFlatWorld(bool useFlatWorld);

        MCNAPI void setUseFriendlyFire(bool useFriendlyFire);

        MCNAPI void setUseImmediateRespawn(bool useImmediateRespawn);

        MCNAPI void setUseMobLoot(bool useMobLoot);

        MCNAPI void setUseNaturalRegeneration(bool useNaturalRegeneration);

        MCNAPI void setUseRespawnBlocksExplode(bool useRespawnBlocksExplode);

        MCNAPI void setUseSpreadingFire(bool useSpreadingFire);

        MCNAPI void setUseTileDrops(bool useTileDrops);

        MCAPI void setWorldSeed(::std::string const& worldSeedString);

        MCNAPI ~Advanced();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Multiplayer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        ::ll::TypedStorage<1, 1, bool>                mMultiplayerSupported;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastingSupported;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastOptionModifiable;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastInviteOptionSupported;
        ::ll::TypedStorage<1, 1, bool>                mPlatformBroadcastFriendsOfFriendsOptionSupported;
        ::ll::TypedStorage<4, 4, ::WorldSettingsRules::GeneralMultiplayerWarningState> mGeneralMultiplayerWarningState;
        // NOLINTEND

    public:
        // prevent constructor by default
        Multiplayer(Multiplayer const&);
        Multiplayer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::WorldSettingsRules::GeneralMultiplayerWarningState getGeneralMultiplayerWarningState() const;

        MCNAPI int getMsPlayerAccess() const;

        MCNAPI bool getMultiplayerGameEnabled() const;

        MCNAPI bool getMultiplayerSupported() const;

        MCNAPI int getPlatformPlayerAccess() const;

        MCNAPI bool getPlatformPlayerAccessEnabled() const;

        MCNAPI bool getPlatformPlayerAccessSupported() const;

        MCNAPI bool getPlatformPlayerFriendsOfFriendsAccessSupported() const;

        MCNAPI bool getPlatformPlayerInviteAccessSupported() const;

        MCNAPI int getPlayerPermissions() const;

        MCNAPI int getPlayerWaypointsMode() const;

        MCNAPI bool getUseFriendlyFire() const;

        MCNAPI bool getVisibleToLanPlayers() const;

        MCNAPI ::OreUI::LevelDataBindings::Multiplayer& operator=(::OreUI::LevelDataBindings::Multiplayer const& rhs);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::Multiplayer const& rhs) const;

        MCNAPI void setMsPlayerAccess(int intMsPlayerAccess);

        MCNAPI void setMultiplayerGameEnabled(bool useMultiplayerGame);

        MCNAPI void setPlatformPlayerAccess(int intPlatformPlayerAccess);

        MCNAPI void setPlayerPermissions(int intPlayerPermissionLevel);

        MCNAPI void setPlayerWaypointsMode(int playerWaypointsMode);

        MCNAPI void setUseFriendlyFire(bool useFriendlyFire);

        MCNAPI void setVisibleToLanPlayers(bool useVisibleToLanPlayers);
        // NOLINTEND
    };

    struct Cheats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        ::ll::TypedStorage<4, 4, int>                 mInitialTimeOfDay;
        ::ll::TypedStorage<8, 32, ::std::string>      mRandomTickSpeedString;
        // NOLINTEND

    public:
        // prevent constructor by default
        Cheats(Cheats const&);
        Cheats();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool getCheatsEnabled() const;

        MCNAPI int getDaylightCycle() const;

        MCNAPI bool getEducationEdition() const;

        MCNAPI bool getEntitiesDropLoot() const;

        MCNAPI bool getKeepInventory() const;

        MCNAPI bool getMobGriefing() const;

        MCNAPI bool getMobSpawning() const;

        MCNAPI ::std::string const& getRandomTickSpeed() const;

        MCNAPI bool getUseCommandBlocks() const;

        MCNAPI bool getUseWeatherCycle() const;

        MCNAPI ::OreUI::LevelDataBindings::Cheats& operator=(::OreUI::LevelDataBindings::Cheats const& rhs);

        MCNAPI bool operator==(::OreUI::LevelDataBindings::Cheats const& rhs) const;

        MCNAPI void setCheatsEnabled(bool cheatsEnabled);

        MCNAPI void setDaylightCycle(int cycle);

        MCNAPI void setEducationEdition(bool educationEdition);

        MCNAPI void setEntitiesDropLoot(bool entitiesDropLoot);

        MCNAPI void setKeepInventory(bool keepInventory);

        MCNAPI void setMobGriefing(bool mobGriefing);

        MCNAPI void setMobSpawning(bool mobSpawning);

        MCNAPI void setRandomTickSpeed(::std::string const& tickSpeedStr);

        MCNAPI void setUseCommandBlocks(bool useCommandBlocks);

        MCNAPI void setUseWeatherCycle(bool useCycles);

        MCNAPI ~Cheats();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ResourcePacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsDirty;
        ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourcePacks& operator=(ResourcePacks const&);
        ResourcePacks(ResourcePacks const&);
        ResourcePacks();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool getUseSharedPacks() const;

        MCNAPI void setUseSharedPacks(bool value);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::OreUI::LevelDataBindings::General>               mGeneral;
    ::ll::TypedStorage<8, 144, ::OreUI::LevelDataBindings::Advanced>             mAdvanced;
    ::ll::TypedStorage<8, 32, ::OreUI::LevelDataBindings::Multiplayer>           mMultiplayer;
    ::ll::TypedStorage<8, 56, ::OreUI::LevelDataBindings::Cheats>                mCheats;
    ::ll::TypedStorage<8, 16, ::OreUI::LevelDataBindings::ResourcePacks>         mResourcePacks;
    ::ll::TypedStorage<1, 1, bool>                                               mAchievementsPermanentlyDisabled;
    ::ll::TypedStorage<1, 1, bool>                                               mHasBehaviourPack;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mInitialTemplateLoadID;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ExperimentalFeatureToggle>> mExperimentalFeatureToggles;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDataBindings(LevelDataBindings const&);
    LevelDataBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelDataBindings(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);

    MCNAPI ::std::string getInitialTemplateLoadID() const;

    MCNAPI bool getWorldTemplateOptionLocked();

    MCNAPI bool isAchievementsDisabled() const;

    MCNAPI bool isAchievementsPermanentlyDisabled() const;

    MCNAPI bool isUsingTemplate() const;

    MCNAPI ::OreUI::LevelDataBindings& operator=(::OreUI::LevelDataBindings const& rhs);

    MCNAPI bool operator==(::OreUI::LevelDataBindings const& rhs) const;

    MCNAPI void reset(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);

    MCNAPI void setWorldTemplateOptionLocked(bool worldTemplateOptionLocked);

    MCNAPI void updateCheatsForLevelDataChange();

    MCNAPI ~LevelDataBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
