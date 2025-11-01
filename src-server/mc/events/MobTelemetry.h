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
    struct MobSpawnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk3e4262;
        ::ll::UntypedStorage<8, 32> mUnk9852a2;
        ::ll::UntypedStorage<8, 32> mUnk82407e;
        ::ll::UntypedStorage<8, 32> mUnke04d34;
        ::ll::UntypedStorage<8, 32> mUnkc59ab3;
        ::ll::UntypedStorage<8, 32> mUnk75451b;
        ::ll::UntypedStorage<4, 4> mUnk52c416;
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
    
    struct MobDeathData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkd528d8;
        ::ll::UntypedStorage<8, 32> mUnkcfb625;
        ::ll::UntypedStorage<8, 32> mUnk30c462;
        ::ll::UntypedStorage<1, 1> mUnkf8ba95;
        ::ll::UntypedStorage<1, 1> mUnk26b5ab;
        ::ll::UntypedStorage<1, 1> mUnk4dd58e;
        ::ll::UntypedStorage<4, 4> mUnk278457;
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
        ::ll::UntypedStorage<8, 32> mUnk99980a;
        ::ll::UntypedStorage<8, 32> mUnk669a26;
        ::ll::UntypedStorage<8, 32> mUnkb30790;
        ::ll::UntypedStorage<8, 32> mUnk87b967;
        ::ll::UntypedStorage<4, 4> mUnkbf8152;
        ::ll::UntypedStorage<4, 4> mUnk1b8f5f;
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
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4ffe85;
    ::ll::UntypedStorage<8, 136> mUnk42dc81;
    ::ll::UntypedStorage<8, 136> mUnkf8caa5;
    ::ll::UntypedStorage<8, 136> mUnk1932f5;
    ::ll::UntypedStorage<8, 136> mUnk4f073e;
    ::ll::UntypedStorage<8, 64> mUnk268af8;
    // NOLINTEND

public:
    // prevent constructor by default
    MobTelemetry& operator=(MobTelemetry const&);
    MobTelemetry(MobTelemetry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobTelemetry();

    MCNAPI void onMobDied(::std::string const& nameSpace, ::std::string const& name, ::std::string const& causeOfDeath, bool isTame, bool isBaby, bool hadPassenger);

    MCNAPI void onMobDroppedItem(::std::string const& mobNamespace, ::std::string const& mobName, ::std::string const& itemNamespace, ::std::string const& itemName, uint stackSize);

    MCNAPI void onMobPickedUpItem(::std::string const& mobNamespace, ::std::string const& mobName, ::std::string const& itemNamespace, ::std::string const& itemName, uint stackSize);

    MCNAPI void populateEvent(::Social::Events::Event& event);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};

}
