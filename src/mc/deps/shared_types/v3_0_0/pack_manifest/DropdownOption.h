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
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownOption& operator=(DropdownOption const&);
    DropdownOption(DropdownOption const&);
    DropdownOption();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption&&);

    MCFOLD bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
