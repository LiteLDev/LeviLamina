#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100 {

struct CameraDocument {
public:
    // CameraDocument inner types declare
    // clang-format off
    struct Description;
    // clang-format on

    // CameraDocument inner types define
    struct Description {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk6051ff;
        // NOLINTEND

    public:
        // prevent constructor by default
        Description& operator=(Description const&);
        Description(Description const&);
        Description();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4c6e47;
    ::ll::UntypedStorage<8, 56> mUnkb150b1;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDocument& operator=(CameraDocument const&);
    CameraDocument(CameraDocument const&);
    CameraDocument();
};

} // namespace SharedTypes::v1_21_100
