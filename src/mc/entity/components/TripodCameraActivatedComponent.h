#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TripodCameraActivatedComponent {
public:
    // TripodCameraActivatedComponent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TripodCameraActivatedComponent inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?initialize\@Definition\@TripodCameraActivatedComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class TripodCameraActivatedComponent&) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TripodCameraActivatedComponent& operator=(TripodCameraActivatedComponent const&) = delete;
    TripodCameraActivatedComponent(TripodCameraActivatedComponent const&)            = delete;
    TripodCameraActivatedComponent()                                                 = delete;
};
