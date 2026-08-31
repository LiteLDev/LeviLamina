#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Category.h"
#include "mc/client/sound/CustomMusic.h"
#include "mc/client/sound/Music.h"
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/sound/MusicRepeatMode.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class LocalPlayer;
class Player;
class ResourceLoadManager;
class ResourcePackManager;
class SoundPlayerInterface;
struct BiomeIdType;
namespace Bedrock::Resources { class PreloadedPathHandle; }
// clang-format on

class MusicManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::CustomMusic>                                                  mCustomMusic;
    ::ll::TypedStorage<1, 1, bool>                                                             mPaused;
    ::ll::TypedStorage<4, 4, int>                                                              mNextSongDelay;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>>              mSoundPlayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Music>>                             mCurrentMusic;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Music>>                             mPausedMusic;
    ::ll::TypedStorage<4, 4, ::Category>                                                       mLastMusicCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mCurrentMusicName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::Music>>> mMusicDefinitions;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker>                              mDeferMusicRefCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPauseStateChangeSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsMusicReady;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MusicManager(::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer);

    MCAPI ::Bedrock::NonOwnerPointer<::Music> _findBiomeSpecificMusic(
        ::Player const&,
        ::std::string const&                  biomeName,
        ::std::optional<::std::string> const& biomeMusicDefinition
    ) const;

    MCAPI ::Bedrock::NonOwnerPointer<::Music> _getMusic(::std::string const& musicDefinition);

    MCAPI void _update(::Bedrock::NotNullNonOwnerPtr<::Music> desiredMusic);

    MCAPI ::Bedrock::NonOwnerPointer<::Music>
    getSituationalMusic(::LocalPlayer const* player, bool isCreditsScreen, bool isLoadingProgressScreen);

    MCAPI void load(
        ::ResourcePackManager&                                                      resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>                        resourceLoadManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>                          validator,
        ::std::shared_ptr<::std::vector<::Bedrock::Resources::PreloadedPathHandle>> preloadHandles
    );

    MCAPI void
    playCustomMusic(::std::string const& eventName, float volume, float fadeoutSeconds, ::MusicRepeatMode playMode);

    MCAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCAPI void update(::LocalPlayer const* player, bool isCreditsScreen, bool isLoadingProgressScreen);

    MCAPI ~MusicManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool shouldPlayCreativeMusic(bool playerIsCreative, ::BiomeIdType const biomeId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
