#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct SliderSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkac0c50;
    ::ll::UntypedStorage<8, 32> mUnk4031cd;
    ::ll::UntypedStorage<8, 32> mUnk57defc;
    ::ll::UntypedStorage<4, 4>  mUnk22aa61;
    ::ll::UntypedStorage<4, 4>  mUnkcc3264;
    ::ll::UntypedStorage<4, 4>  mUnk4c4ae8;
    ::ll::UntypedStorage<4, 4>  mUnk36ac4a;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderSetting& operator=(SliderSetting const&);
    SliderSetting(SliderSetting const&);
    SliderSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting&&);

    MCNAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
