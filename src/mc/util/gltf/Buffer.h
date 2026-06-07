#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkecc731;
    ::ll::UntypedStorage<4, 4>  mUnkf25ebd;
    ::ll::UntypedStorage<8, 32> mUnk7f9932;
    ::ll::UntypedStorage<4, 4>  mUnk916439;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Buffer& operator=(Buffer const&);
    Buffer(Buffer const&);
    Buffer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Buffer& operator=(Buffer const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Buffer();

    MCNAPI Buffer(::glTF::Buffer const&);

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Buffer();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glTF::Buffer const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace glTF
