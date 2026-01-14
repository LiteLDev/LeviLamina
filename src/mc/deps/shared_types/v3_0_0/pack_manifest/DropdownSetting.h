#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct DropdownOption; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct DropdownSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType>                    mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mText;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption>> mOptions;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownSetting(DropdownSetting const&);
    DropdownSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&);

    MCAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&) const;

    MCAPI ~DropdownSetting();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
