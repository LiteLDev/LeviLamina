#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal::SliceSequence {

struct Context {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdd4c05;
    ::ll::UntypedStorage<8, 8>  mUnk9e5ab7;
    ::ll::UntypedStorage<8, 24> mUnkdbbe72;
    ::ll::UntypedStorage<8, 8>  mUnkba01e2;
    ::ll::UntypedStorage<8, 8>  mUnkb00859;
    // NOLINTEND

public:
    // prevent constructor by default
    Context& operator=(Context const&);
    Context(Context const&);
    Context();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Context();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal::SliceSequence
