#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct ExperiencePromotion;
namespace Core { class Path; }
// clang-format on

class ThirdPartyServer {
public:
    // ThirdPartyServer inner types declare
    // clang-format off
    struct AvailableGame;
    // clang-format on

    // ThirdPartyServer inner types define
    struct AvailableGame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkb79660;
        ::ll::UntypedStorage<8, 32> mUnk41db28;
        ::ll::UntypedStorage<8, 32> mUnk59a9eb;
        ::ll::UntypedStorage<8, 32> mUnkcbcd98;
        // NOLINTEND

    public:
        // prevent constructor by default
        AvailableGame& operator=(AvailableGame const&);
        AvailableGame(AvailableGame const&);
        AvailableGame();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~AvailableGame();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkffba03;
    ::ll::UntypedStorage<8, 32>  mUnk9f859a;
    ::ll::UntypedStorage<8, 32>  mUnk3fadde;
    ::ll::UntypedStorage<8, 32>  mUnk2cfcd0;
    ::ll::UntypedStorage<8, 24>  mUnke5c0bb;
    ::ll::UntypedStorage<8, 32>  mUnka1f92e;
    ::ll::UntypedStorage<8, 24>  mUnka01361;
    ::ll::UntypedStorage<8, 32>  mUnkb40281;
    ::ll::UntypedStorage<8, 32>  mUnk28b564;
    ::ll::UntypedStorage<8, 32>  mUnk6a9d9c;
    ::ll::UntypedStorage<8, 32>  mUnk355d8b;
    ::ll::UntypedStorage<8, 32>  mUnka71eec;
    ::ll::UntypedStorage<8, 32>  mUnk4c7a20;
    ::ll::UntypedStorage<8, 32>  mUnk378853;
    ::ll::UntypedStorage<8, 32>  mUnk83a3e3;
    ::ll::UntypedStorage<8, 32>  mUnkac0fd4;
    ::ll::UntypedStorage<8, 32>  mUnk6a061b;
    ::ll::UntypedStorage<2, 2>   mUnk571140;
    ::ll::UntypedStorage<1, 1>   mUnk6977bb;
    ::ll::UntypedStorage<1, 1>   mUnk1d5f2b;
    ::ll::UntypedStorage<4, 8>   mUnk2eacee;
    ::ll::UntypedStorage<8, 248> mUnk1cb960;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ThirdPartyServer& operator=(ThirdPartyServer const&);
    ThirdPartyServer(ThirdPartyServer const&);
    ThirdPartyServer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ThirdPartyServer& operator=(ThirdPartyServer const&);
    ThirdPartyServer(ThirdPartyServer const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThirdPartyServer();

    MCNAPI void addAvailableGameToArray(
        ::Core::Path const&  imagePath,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::std::string const& description
    );

    MCNAPI void addScreenshotPath(::Core::Path const& imagePath);

    MCNAPI int const getAvailableGameCount() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getBadgePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getBannerPath() const;

    MCNAPI ::std::string const& getCreatorName() const;

    MCNAPI ::std::string const& getDescription() const;

    MCNAPI ::std::string const& getExperienceId() const;

    MCNAPI ::std::string const& getGameDescriptionAt(uint gameIndex) const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getGameImagePathAt(uint gameIndex) const;

    MCNAPI ::std::string const& getGameSubtitleAt(uint gameIndex) const;

    MCNAPI ::std::string const& getGameTitleAt(uint gameIndex) const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getIconPath() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getImagePath() const;

    MCNAPI ::std::string const& getNews() const;

    MCNAPI ::std::string const& getNewsTitle() const;

    MCNAPI ::std::optional<uint> getOptionalRank() const;

    MCNAPI ushort getPort() const;

    MCNAPI ::std::string const& getProductId() const;

    MCNAPI ::std::optional<::ExperiencePromotion> const& getPromotion() const;

    MCNAPI int const getScreenshotCount() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getScreenshotPathAt(uint screenshotIndex) const;

    MCNAPI ::std::string const& getStorePageId() const;

    MCNAPI ::std::string const& getTitle() const;

    MCNAPI ::std::string const& getUrl() const;

    MCNAPI bool hasRank() const;

    MCNAPI bool isExperience() const;

    MCNAPI void setBadgePath(::Core::Path const& badgePath);

    MCNAPI void setBannerPath(::Core::Path const& bannerPath);

    MCNAPI void setIconPath(::Core::Path const& iconPath);

    MCNAPI void setImagePath(::Core::Path const& path);

    MCNAPI ~ThirdPartyServer();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
