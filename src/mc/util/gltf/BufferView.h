#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct BufferView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk36aa81;
    ::ll::UntypedStorage<4, 4>  mUnk16272b;
    ::ll::UntypedStorage<4, 4>  mUnk4da122;
    ::ll::UntypedStorage<8, 32> mUnk29bc6d;
    ::ll::UntypedStorage<4, 4>  mUnk74b307;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BufferView& operator=(BufferView const&);
    BufferView(BufferView const&);
    BufferView();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    BufferView& operator=(BufferView const&);
    BufferView(BufferView const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI BufferView();

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~BufferView();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
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
