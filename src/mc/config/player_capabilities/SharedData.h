#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/config/player_capabilities/ISharedData.h"

// auto generated forward declare list
// clang-format off
class Level;
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct SharedData : public ::PlayerCapabilities::ISharedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level const&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedData& operator=(SharedData const&);
    SharedData(SharedData const&);
    SharedData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<bool> isGameRuleEnabled(::GameRuleId const rule) const /*override*/;

    // vIndex: 2
    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const /*override*/;

    // vIndex: 0
    virtual ~SharedData() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<bool> $isGameRuleEnabled(::GameRuleId const rule) const;

    MCAPI ::ChatRestrictionLevel $getChatRestrictionLevel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
