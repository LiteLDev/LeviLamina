#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class PacketSender;
class WorldClock;
// clang-format on

class WorldClockRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::UniqueOwnerPointer<::WorldClock>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::UniqueOwnerPointer<::WorldClock>>>>
        mClocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistry();

    virtual void tick(::PacketSender&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::Bedrock::NonOwnerPointer<::WorldClock const> const tryGetClock(uint64 clockId) const;

    MCAPI ::Bedrock::NonOwnerPointer<::WorldClock const> const tryGetClock(::HashedString const& name) const;
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
