#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

struct MultiplayerBroadcastStateInfo {
public:
    // MultiplayerBroadcastStateInfo inner types define
    using GetBroadcastStateFn = ::std::function<int(::Settings::RegistryBuilder::IBuilderContext&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                       mTabPrefix;
    ::ll::TypedStorage<8, 64, ::std::function<int(::Settings::RegistryBuilder::IBuilderContext&)>> mGetBroadcastStateFn;
    ::ll::TypedStorage<1, 1, bool>                mShouldUseDescriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mIgnoredInvitations;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerBroadcastStateInfo& operator=(MultiplayerBroadcastStateInfo const&);
    MultiplayerBroadcastStateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiplayerBroadcastStateInfo(::Settings::MultiplayerBroadcastStateInfo const&);

    MCNAPI ~MultiplayerBroadcastStateInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::MultiplayerBroadcastStateInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings
