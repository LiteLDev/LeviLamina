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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERAACTIVATEDCOMPONENT_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;
#endif

    public:
        /**
         * @symbol ?initialize\@Definition\@TripodCameraActivatedComponent\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class TripodCameraActivatedComponent&) const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERAACTIVATEDCOMPONENT
public:
    TripodCameraActivatedComponent& operator=(TripodCameraActivatedComponent const&) = delete;
    TripodCameraActivatedComponent(TripodCameraActivatedComponent const&)            = delete;
    TripodCameraActivatedComponent()                                                 = delete;
#endif

public:
};
