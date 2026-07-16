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
        MCAPI ::OreUI::LevelDataBindings::General& operator=(::OreUI::LevelDataBindings::General const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::General const& rhs) const;
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
        MCAPI ::GeneratorType getGeneratorType() const;

        MCAPI bool getUseFlatWorld() const;

        MCAPI ::OreUI::LevelDataBindings::Advanced& operator=(::OreUI::LevelDataBindings::Advanced const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::Advanced const& rhs) const;

        MCAPI void setRespawnRadius(::std::string const& respawnRadiusStr);

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
        MCAPI ::OreUI::LevelDataBindings::Multiplayer& operator=(::OreUI::LevelDataBindings::Multiplayer const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::Multiplayer const& rhs) const;

        MCAPI void setMultiplayerGameEnabled(bool useMultiplayerGame);
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
        MCAPI ::OreUI::LevelDataBindings::Cheats& operator=(::OreUI::LevelDataBindings::Cheats const& rhs);

        MCAPI bool operator==(::OreUI::LevelDataBindings::Cheats const& rhs) const;

        MCAPI void setRandomTickSpeed(::std::string const& tickSpeedStr);

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
    MCAPI LevelDataBindings(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);

    MCAPI ::std::string getInitialTemplateLoadID() const;

    MCAPI bool getWorldTemplateOptionLocked();

    MCAPI bool isUsingTemplate() const;

    MCAPI ::OreUI::LevelDataBindings& operator=(::OreUI::LevelDataBindings const& rhs);

    MCAPI bool operator==(::OreUI::LevelDataBindings const& rhs) const;

    MCAPI void reset(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);

    MCAPI void updateCheatsForLevelDataChange();

    MCAPI ~LevelDataBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelDataWrapper& levelData, ::TrialManager const& trialManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
