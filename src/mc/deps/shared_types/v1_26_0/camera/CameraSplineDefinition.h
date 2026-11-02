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
    CameraSplineDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraSplineDefinition(::SharedTypes::v1_26_0::CameraSplineDefinition const&);

    MCNAPI ::SharedTypes::v1_26_0::CameraSplineDefinition& operator=(::SharedTypes::v1_26_0::CameraSplineDefinition&&);

    MCNAPI ::SharedTypes::v1_26_0::CameraSplineDefinition&
    operator=(::SharedTypes::v1_26_0::CameraSplineDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_0::CameraSplineDefinition const& rhs) const;

    MCNAPI ~CameraSplineDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_0::CameraSplineDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
