#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraTargetSettingsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9bb2d6;
    ::ll::UntypedStorage<1, 1> mUnke68408;
    ::ll::UntypedStorage<4, 4> mUnkd08a08;
    ::ll::UntypedStorage<4, 4> mUnkbc9920;
    ::ll::UntypedStorage<4, 12> mUnk6c3b39;
    ::ll::UntypedStorage<4, 12> mUnk38acc9;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTargetSettingsDefinition& operator=(CameraTargetSettingsDefinition const&);
    CameraTargetSettingsDefinition(CameraTargetSettingsDefinition const&);
    CameraTargetSettingsDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

};

}
