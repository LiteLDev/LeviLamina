#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::CodeBuilder {

struct Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6470d;
    ::ll::UntypedStorage<8, 16> mUnkd987ee;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Event(::std::string const& name);

    MCAPI ~Event();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Util::CodeBuilder
