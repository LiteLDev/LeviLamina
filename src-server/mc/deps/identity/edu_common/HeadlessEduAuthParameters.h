#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct HeadlessEduAuthParameters {
public:
    // HeadlessEduAuthParameters inner types declare
    // clang-format off
    struct Endpoints;
    // clang-format on

    // HeadlessEduAuthParameters inner types define
    struct Endpoints {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka366e6;
        ::ll::UntypedStorage<8, 8> mUnk176a25;
        ::ll::UntypedStorage<8, 8> mUnkcf7011;
        // NOLINTEND

    public:
        // prevent constructor by default
        Endpoints& operator=(Endpoints const&);
        Endpoints(Endpoints const&);
        Endpoints();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkb4492c;
    ::ll::UntypedStorage<8, 24>  mUnk84d7c6;
    // NOLINTEND

public:
    // prevent constructor by default
    HeadlessEduAuthParameters& operator=(HeadlessEduAuthParameters const&);
    HeadlessEduAuthParameters(HeadlessEduAuthParameters const&);
    HeadlessEduAuthParameters();
};

} // namespace Identity
