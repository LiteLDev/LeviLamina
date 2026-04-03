#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_0 { struct CameraSplineControlPoint; }
namespace SharedTypes::v1_26_0 { struct CameraSplineProgressKeyFrame; }
namespace SharedTypes::v1_26_0 { struct CameraSplineRotationKeyFrame; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct CameraSplineDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mName;
    ::ll::TypedStorage<4, 4, float>                                                            mTotalTime;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mSplineType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineControlPoint>> mSplineControlPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineProgressKeyFrame>>
        mSplineProgressFrames;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineRotationKeyFrame>>
        mSplineRotationFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraSplineDefinition(CameraSplineDefinition const&);
    CameraSplineDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_0::CameraSplineDefinition& operator=(::SharedTypes::v1_26_0::CameraSplineDefinition&&);

    MCAPI ::SharedTypes::v1_26_0::CameraSplineDefinition&
    operator=(::SharedTypes::v1_26_0::CameraSplineDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_0::CameraSplineDefinition const&) const;

    MCAPI ~CameraSplineDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
