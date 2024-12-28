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
    ::ll::UntypedStorage<8, 32> mUnk1a26d4;
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
    MCAPI explicit EventMessage(::Util::CodeBuilder::Event const& event);

    MCAPI ~EventMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Util::CodeBuilder::Event const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
