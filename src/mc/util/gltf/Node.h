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

public:
    // prevent constructor by default
    Node& operator=(Node const&);
    Node(Node const&);
    Node();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Json::Value serialize() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::glTF::Node&&);

    MCNAPI_C void* $ctor(::glTF::Node const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace glTF
