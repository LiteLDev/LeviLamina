#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayerData.h"

namespace OreUI {

struct SocialPlayer : public ::OreUI::SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> maybeXuid;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> maybePlatformId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> maybeActorId;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialPlayer& operator=(SocialPlayer const&);
    SocialPlayer(SocialPlayer const&);
    SocialPlayer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SocialPlayer(::OreUI::SocialPlayer&&);

    MCAPI explicit SocialPlayer(::OreUI::SocialPlayerData const& data);

    MCAPI ::std::string const& getActiveProfileImageUrl() const;

    MCAPI ~SocialPlayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::SocialPlayer&&);

    MCAPI void* $ctor(::OreUI::SocialPlayerData const& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
