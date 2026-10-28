#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleParties {

struct ScriptPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka7a094;
    ::ll::UntypedStorage<1, 1>  mUnkc30280;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyInfo& operator=(ScriptPartyInfo const&);
    ScriptPartyInfo(ScriptPartyInfo const&);
    ScriptPartyInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPartyInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::ScriptModuleParties::ScriptPartyInfo> fromPlayer(::Player const& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleParties
