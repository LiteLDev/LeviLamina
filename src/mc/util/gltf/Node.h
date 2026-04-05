#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Node {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6a956;
    ::ll::UntypedStorage<8, 24> mUnk98745f;
    ::ll::UntypedStorage<8, 24> mUnk4ce96f;
    ::ll::UntypedStorage<8, 32> mUnk8768a1;
    ::ll::UntypedStorage<8, 32> mUnk5067f0;
    ::ll::UntypedStorage<4, 68> mUnk776974;
    ::ll::UntypedStorage<4, 8>  mUnkde6d3b;
    ::ll::UntypedStorage<4, 20> mUnk3cd2aa;
    ::ll::UntypedStorage<4, 16> mUnk8f1fe9;
    ::ll::UntypedStorage<4, 16> mUnk8ab524;
    ::ll::UntypedStorage<8, 32> mUnk9bfaac;
    ::ll::UntypedStorage<4, 4>  mUnk2a10b3;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Node& operator=(Node const&);
    Node(Node const&);
    Node();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Node& operator=(Node const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Node();

    MCNAPI Node(::glTF::Node&&);

    MCNAPI Node(::glTF::Node const&);

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Node();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glTF::Node&&);

    MCNAPI void* $ctor(::glTF::Node const&);
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
