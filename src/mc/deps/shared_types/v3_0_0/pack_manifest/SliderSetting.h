#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct SliderSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mText;
    ::ll::TypedStorage<4, 4, float>                                                      mMin;
    ::ll::TypedStorage<4, 4, float>                                                      mMax;
    ::ll::TypedStorage<4, 4, float>                                                      mStep;
    ::ll::TypedStorage<4, 4, float>                                                      mDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderSetting& operator=(SliderSetting const&);
    SliderSetting(SliderSetting const&);
    SliderSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting&&);

    MCAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
