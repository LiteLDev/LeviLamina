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
        MCAPI int getDifficulty() const;

        MCAPI int getGameMode() const;

        MCAPI bool getPlayerHasDied() const;

        MCAPI ::std::string const& getWorldName() const;

        MCAPI bool isHardcore() const;

        MCAPI ::OreUI::LevelDataBindings::General& operator=(::OreUI::LevelDataBindings::General const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::General const& rhs) const;

        MCAPI void setDifficulty(int intDifficulty);

        MCAPI void setGameMode(int mode);

        MCAPI void setIsHardcore(bool isHardcore);

        MCAPI void setWorldName(::std::string const& name);
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
        MCAPI ::std::optional<::std::string> const& getFlatWorldPreset();

        MCAPI ::GeneratorType getGeneratorType() const;

        MCAPI bool getRecipesUnlock() const;

        MCFOLD ::std::string const& getRespawnRadius() const;

        MCAPI bool getShowCoordinates() const;

        MCAPI bool getShowDaysPlayed() const;

        MCAPI int getSimulationDistance() const;

        MCAPI bool const getSleepSkipNight() const;

        MCAPI int const getSleepSkipNightPercent() const;

        MCAPI bool getStartWithMap() const;

        MCAPI bool getUseBonusChest() const;

        MCAPI bool getUseExplodingTnt() const;

        MCAPI bool getUseFlatWorld() const;

        MCFOLD bool getUseFriendlyFire() const;

        MCAPI bool getUseImmediateRespawn() const;

        MCAPI bool getUseMobLoot() const;

        MCAPI bool getUseNaturalRegeneration() const;

        MCAPI bool getUseRespawnBlocksExplode() const;

        MCAPI bool getUseSpreadingFire() const;

        MCAPI bool getUseTileDrops() const;

        MCFOLD ::std::string const& getWorldSeed() const;

        MCAPI ::OreUI::LevelDataBindings::Advanced& operator=(::OreUI::LevelDataBindings::Advanced const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::Advanced const& rhs) const;

        MCAPI void setFlatWorldPreset(::std::string const& idStr);

        MCAPI void setGeneratorType(::GeneratorType generatorType);

        MCAPI void setRecipesUnlock(bool recipesUnlock);

        MCAPI void setRespawnRadius(::std::string const& respawnRadiusStr);

        MCAPI void setShowCoordinates(bool showCoordinates);

        MCAPI void setShowDaysPlayed(bool showDaysPlayed);

        MCAPI void setSimulationDistance(int distance);

        MCAPI void setSleepSkipNight(bool sleepSkipNight);

        MCAPI void setSleepSkipNightPercent(int sleepSkipNightPercent);

        MCAPI void setStartWithMap(bool startWithMap);

        MCAPI void setUseBonusChest(bool useBonusChest);

        MCAPI void setUseExplodingTnt(bool useExplodingTnt);

        MCAPI void setUseFlatWorld(bool useFlatWorld);

        MCFOLD void setUseFriendlyFire(bool useFriendlyFire);

        MCAPI void setUseImmediateRespawn(bool useImmediateRespawn);

        MCAPI void setUseMobLoot(bool useMobLoot);

        MCAPI void setUseNaturalRegeneration(bool useNaturalRegeneration);

        MCAPI void setUseRespawnBlocksExplode(bool useRespawnBlocksExplode);

        MCAPI void setUseSpreadingFire(bool useSpreadingFire);

        MCAPI void setUseTileDrops(bool useTileDrops);

        MCAPI void setWorldSeed(::std::string const& worldSeedString);

        MCAPI ~Advanced();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        MCFOLD ::WorldSettingsRules::GeneralMultiplayerWarningState getGeneralMultiplayerWarningState() const;

        MCAPI int getMsPlayerAccess() const;

        MCAPI bool getMultiplayerGameEnabled() const;

        MCFOLD bool getMultiplayerSupported() const;

        MCAPI int getPlatformPlayerAccess() const;

        MCAPI bool getPlatformPlayerAccessEnabled() const;

        MCAPI bool getPlatformPlayerAccessSupported() const;

        MCAPI bool getPlatformPlayerFriendsOfFriendsAccessSupported() const;

        MCAPI bool getPlatformPlayerInviteAccessSupported() const;

        MCAPI int getPlayerPermissions() const;

        MCFOLD bool getUseFriendlyFire() const;

        MCAPI bool getVisibleToLanPlayers() const;

        MCAPI bool isLocatorBarEnabled() const;

        MCAPI ::OreUI::LevelDataBindings::Multiplayer& operator=(::OreUI::LevelDataBindings::Multiplayer const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::Multiplayer const& rhs) const;

        MCAPI void setLocatorBarEnabled(bool isLocatorBarEnabled);

        MCAPI void setMsPlayerAccess(int intMsPlayerAccess);

        MCAPI void setMultiplayerGameEnabled(bool useMultiplayerGame);

        MCAPI void setPlatformPlayerAccess(int intPlatformPlayerAccess);

        MCAPI void setPlayerPermissions(int intPlayerPermissionLevel);

        MCFOLD void setUseFriendlyFire(bool useFriendlyFire);

        MCAPI void setVisibleToLanPlayers(bool useVisibleToLanPlayers);
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
        MCAPI bool getCheatsEnabled() const;

        MCAPI int getDaylightCycle() const;

        MCAPI bool getEducationEdition() const;

        MCAPI bool getEntitiesDropLoot() const;

        MCAPI bool getKeepInventory() const;

        MCAPI bool getMobGriefing() const;

        MCAPI bool getMobSpawning() const;

        MCFOLD ::std::string const& getRandomTickSpeed() const;

        MCAPI bool getUseCommandBlocks() const;

        MCAPI bool getUseWeatherCycle() const;

        MCAPI ::OreUI::LevelDataBindings::Cheats& operator=(::OreUI::LevelDataBindings::Cheats const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::Cheats const& rhs) const;

        MCAPI void setCheatsEnabled(bool cheatsEnabled);

        MCAPI void setDaylightCycle(int cycle);

        MCAPI void setEducationEdition(bool educationEdition);

        MCAPI void setEntitiesDropLoot(bool entitiesDropLoot);

        MCAPI void setKeepInventory(bool keepInventory);

        MCAPI void setMobGriefing(bool mobGriefing);

        MCAPI void setMobSpawning(bool mobSpawning);

        MCAPI void setRandomTickSpeed(::std::string const& tickSpeedStr);

        MCAPI void setUseCommandBlocks(bool useCommandBlocks);

        MCAPI void setUseWeatherCycle(bool useCycles);

        MCAPI ~Cheats();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
        MCAPI bool getUseSharedPacks() const;

        MCAPI void setUseSharedPacks(bool value);
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
    LevelDataBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelDataBindings(::OreUI::LevelDataBindings const&);

    MCAPI LevelDataBindings(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);

    MCAPI bool getWorldTemplateOptionLocked();

    MCAPI bool isAchievementsDisabled() const;

    MCAPI bool isAchievementsPermanentlyDisabled() const;

    MCAPI bool isUsingTemplate() const;

    MCAPI ::OreUI::LevelDataBindings& operator=(::OreUI::LevelDataBindings const& rhs);

    MCAPI bool operator==(::OreUI::LevelDataBindings const& rhs) const;

    MCAPI void reset(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);

    MCAPI void setWorldTemplateOptionLocked(bool worldTemplateOptionLocked);

    MCAPI void updateCheatsForLevelDataChange();

    MCAPI ~LevelDataBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::LevelDataBindings const&);

    MCAPI void* $ctor(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
