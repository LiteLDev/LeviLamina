#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class MobTelemetry {
public:
    // MobTelemetry inner types declare
    // clang-format off
    struct MobDeathData;
    struct MobItemData;
    struct MobSpawnData;
    // clang-format on

    // MobTelemetry inner types define
    struct MobDeathData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk999eac;
        ::ll::UntypedStorage<8, 32> mUnkcae677;
        ::ll::UntypedStorage<8, 32> mUnk648df8;
        ::ll::UntypedStorage<1, 1>  mUnkf8ba95;
        ::ll::UntypedStorage<1, 1>  mUnk26b5ab;
        ::ll::UntypedStorage<1, 1>  mUnk4dd58e;
        ::ll::UntypedStorage<4, 4>  mUnk278457;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobDeathData& operator=(MobDeathData const&);
        MobDeathData(MobDeathData const&);
        MobDeathData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Social::Events::MobTelemetry::MobDeathData& operator=(::Social::Events::MobTelemetry::MobDeathData&&);

        MCNAPI ~MobDeathData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MobItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkfacb8a;
        ::ll::UntypedStorage<8, 32> mUnk369bb2;
        ::ll::UntypedStorage<8, 32> mUnkb811c4;
        ::ll::UntypedStorage<8, 32> mUnkab78ef;
        ::ll::UntypedStorage<4, 4>  mUnkbf8152;
        ::ll::UntypedStorage<4, 4>  mUnk1b8f5f;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobItemData& operator=(MobItemData const&);
        MobItemData(MobItemData const&);
        MobItemData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Social::Events::MobTelemetry::MobItemData& operator=(::Social::Events::MobTelemetry::MobItemData&&);

        MCNAPI ~MobItemData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MobSpawnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk9dbec1;
        ::ll::UntypedStorage<8, 32> mUnke877c6;
        ::ll::UntypedStorage<1, 1>  mUnkf371d3;
        ::ll::UntypedStorage<8, 32> mUnk206aee;
        ::ll::UntypedStorage<8, 32> mUnk38f497;
        ::ll::UntypedStorage<8, 32> mUnk91534b;
        ::ll::UntypedStorage<8, 32> mUnk848ac4;
        ::ll::UntypedStorage<4, 4>  mUnk52c416;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobSpawnData& operator=(MobSpawnData const&);
        MobSpawnData(MobSpawnData const&);
        MobSpawnData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MobSpawnData(::Social::Events::MobTelemetry::MobSpawnData&&);

        MCNAPI ::Social::Events::MobTelemetry::MobSpawnData& operator=(::Social::Events::MobTelemetry::MobSpawnData&&);

        MCNAPI ~MobSpawnData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Social::Events::MobTelemetry::MobSpawnData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk4ffe85;
    ::ll::UntypedStorage<8, 128> mUnk37be35;
    ::ll::UntypedStorage<8, 128> mUnk54b273;
    ::ll::UntypedStorage<8, 128> mUnk27fe54;
    ::ll::UntypedStorage<8, 128> mUnk9afd7f;
    ::ll::UntypedStorage<8, 64>  mUnk268af8;
    // NOLINTEND

public:
    // prevent constructor by default
    MobTelemetry& operator=(MobTelemetry const&);
    MobTelemetry(MobTelemetry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobTelemetry();

    MCNAPI void onMobDied(
        ::std::string const& nameSpace,
        ::std::string const& name,
        ::std::string const& causeOfDeath,
        bool                 isTame,
        bool                 isBaby,
        bool                 hadPassenger
    );

    MCNAPI void onMobDroppedItem(
        ::std::string const& mobNamespace,
        ::std::string const& mobName,
        ::std::string const& itemNamespace,
        ::std::string const& itemName,
        uint                 stackSize
    );

    MCNAPI void onMobPickedUpItem(
        ::std::string const& mobNamespace,
        ::std::string const& mobName,
        ::std::string const& itemNamespace,
        ::std::string const& itemName,
        uint                 stackSize
    );

    MCNAPI void populateEvent(::Social::Events::Event& event);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social::Events
