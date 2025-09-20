#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct ToggleSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk641fc3;
    ::ll::UntypedStorage<8, 32> mUnk29ecba;
    ::ll::UntypedStorage<8, 32> mUnkbf0ec7;
    ::ll::UntypedStorage<1, 1>  mUnkba2101;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleSetting(ToggleSetting const&);
    ToggleSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting const&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting&&);

    MCNAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting const&) const;

    MCNAPI ~ToggleSetting();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
