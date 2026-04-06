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
    // member functions
    // NOLINTBEGIN
    MCAPI ~MultiplayerBroadcastStateInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings
