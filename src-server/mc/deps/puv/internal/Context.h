#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal::SliceSequence {

struct Context {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdd4c05;
    ::ll::UntypedStorage<8, 8> mUnk9e5ab7;
    ::ll::UntypedStorage<8, 24> mUnkdbbe72;
    ::ll::UntypedStorage<8, 8> mUnk97add6;
    ::ll::UntypedStorage<8, 8> mUnk917fb0;
    ::ll::UntypedStorage<8, 8> mUnkb00859;
    // NOLINTEND

public:
    // prevent constructor by default
    Context& operator=(Context const&);
    Context(Context const&);
    Context();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Context();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
