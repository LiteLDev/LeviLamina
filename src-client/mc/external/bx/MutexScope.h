#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Mutex; }
// clang-format on

namespace bx {

class MutexScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::Mutex&> m_mutex;
    // NOLINTEND

public:
    // prevent constructor by default
    MutexScope& operator=(MutexScope const&);
    MutexScope(MutexScope const&);
    MutexScope();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MutexScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace bx
