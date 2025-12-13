#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct DropdownSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk76ecde;
    ::ll::UntypedStorage<8, 32> mUnka446ba;
    ::ll::UntypedStorage<8, 32> mUnk99284d;
    ::ll::UntypedStorage<8, 24> mUnk9df1a1;
    ::ll::UntypedStorage<8, 32> mUnk81f821;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownSetting(DropdownSetting const&);
    DropdownSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&);

    MCNAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&) const;

    MCNAPI ~DropdownSetting();
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
