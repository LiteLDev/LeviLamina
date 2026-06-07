#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::CodeBuilder { struct Event; }
// clang-format on

namespace CodeBuilder {

struct EventMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7f2f12;
    ::ll::UntypedStorage<8, 16> mUnke430fe;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&);
    EventMessage(EventMessage const&);
    EventMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EventMessage(::Util::CodeBuilder::Event const& event);

    MCNAPI ~EventMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Util::CodeBuilder::Event const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
