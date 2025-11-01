#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/IPAddress.h"

namespace rtc {

class InterfaceAddress : public ::rtc::IPAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd066fe;
    ::ll::UntypedStorage<4, 4> mUnk22cc12;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceAddress(InterfaceAddress const&);
    InterfaceAddress();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InterfaceAddress() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string ToString() const;

    MCNAPI ::rtc::InterfaceAddress const& operator=(::rtc::InterfaceAddress const& other);

    MCNAPI bool operator==(::rtc::InterfaceAddress const& other) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
