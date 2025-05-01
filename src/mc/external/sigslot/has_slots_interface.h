#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace sigslot { class _signal_base_interface; }
// clang-format on

namespace sigslot {

class has_slots_interface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk387c62;
    ::ll::UntypedStorage<8, 8> mUnk3cbaa0;
    ::ll::UntypedStorage<8, 8> mUnkc8a25c;
    // NOLINTEND

public:
    // prevent constructor by default
    has_slots_interface& operator=(has_slots_interface const&);
    has_slots_interface(has_slots_interface const&);
    has_slots_interface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~has_slots_interface();
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

} // namespace sigslot
