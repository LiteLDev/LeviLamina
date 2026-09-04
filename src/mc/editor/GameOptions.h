#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/editor/ProjectExportType.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/VanillaPlayerWaypointMode.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

namespace Editor {

class GameOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mWorldName;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                           mSpawnPosition;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameType>>                        mGameMode;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::Difficulty>> mDifficulty;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mHardcore;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mKeepPlayerData;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mStartingMap;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mBonusChest;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mShowCoordinates;
    ::ll::TypedStorage<4, 8, ::std::optional<::VanillaPlayerWaypointMode>>       mPlayerWaypoints;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mShowDaysPlayed;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mRecipeUnlocking;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mLimitedCrafting;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mFireSpreads;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mTNTExplodes;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mRespawnBlocksExplode;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mMobLoot;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mNaturalRegeneration;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mTileDrops;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mBedsWork;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mSleepSkipPercent;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mImmediateRespawn;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mShowDeathMessage;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mRespawnRadius;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mDimensionId;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mSimulationDistance;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mShowItemTags;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mMultiplayerGame;
    ::ll::TypedStorage<4, 8, ::std::optional<::Social::GamePublishSetting>>      mPlayerAccess;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>>           mPlayerPermissions;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mLANVisibility;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mFriendlyFire;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mCheats;
    ::ll::TypedStorage<1, 2, ::std::optional<::DaylightCycle>>                   mDaylightCycle;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mTimeOfDay;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mWeather;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mKeepInventory;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mMobSpawning;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mMobGriefing;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mEntitiesDropLoot;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mDisableWeather;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mEducationEdition;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mCommandBlockEnabled;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mCommandBlockOutput;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mSendCommandFeedback;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mMaxCommandChainLength;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mFireDamage;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mFreezeDamage;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mFallDamage;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mDrowningDamage;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mInsomnia;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                              mShowBorderEffect;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mFunctionCommandLimit;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mRandomTickSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<::Editor::ProjectExportType>>       mExportType;
    // NOLINTEND

public:
    // prevent constructor by default
    GameOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameOptions(::Editor::GameOptions const&);

    MCAPI void applyToLevelData(::LevelData& levelData) const;

    MCAPI ::Editor::GameOptions& operator=(::Editor::GameOptions const&);

    MCAPI ~GameOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::GameOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
