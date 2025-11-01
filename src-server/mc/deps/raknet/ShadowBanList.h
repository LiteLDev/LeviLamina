#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ShadowBanList {
public:
    // ShadowBanList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on
    
    // ShadowBanList inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 16> mUnkf16431;
        ::ll::UntypedStorage<8, 8> mUnke80799;
        ::ll::UntypedStorage<2, 2> mUnk309783;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk36ad48;
    ::ll::UntypedStorage<8, 8> mUnk1af0c9;
    ::ll::UntypedStorage<8, 10240> mUnk515729;
    ::ll::UntypedStorage<8, 64> mUnkade020;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowBanList& operator=(ShadowBanList const&);
    ShadowBanList(ShadowBanList const&);
    ShadowBanList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ushort addBan(::RakNet::SystemAddress const& addr, ::std::chrono::seconds time);
    // NOLINTEND

};

}
