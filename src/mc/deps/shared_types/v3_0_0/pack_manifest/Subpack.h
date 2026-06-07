#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Subpack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mFolderName;
    ::ll::TypedStorage<4, 4, int>            mMemoryTier;
    // NOLINTEND

public:
    // prevent constructor by default
    Subpack& operator=(Subpack const&);
    Subpack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Subpack(::SharedTypes::v3_0_0::PackManifestDefinition::Subpack const&);

    MCFOLD ::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Subpack const&);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
