#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct DropdownOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcdd8b2;
    ::ll::UntypedStorage<8, 32> mUnkada053;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownOption& operator=(DropdownOption const&);
    DropdownOption(DropdownOption const&);
    DropdownOption();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption&&);

    MCNAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
