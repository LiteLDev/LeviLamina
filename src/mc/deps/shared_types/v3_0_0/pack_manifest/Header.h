#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Header {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkac5bb5;
    ::ll::UntypedStorage<8, 40> mUnk48d092;
    ::ll::UntypedStorage<8, 16> mUnk821643;
    ::ll::UntypedStorage<8, 24> mUnkb1a963;
    ::ll::UntypedStorage<8, 40> mUnk64b471;
    ::ll::UntypedStorage<8, 40> mUnk65170f;
    ::ll::UntypedStorage<8, 40> mUnk59bd8c;
    ::ll::UntypedStorage<1, 2>  mUnk5c9186;
    ::ll::UntypedStorage<1, 2>  mUnk93f7fa;
    ::ll::UntypedStorage<1, 2>  mUnk4c4655;
    // NOLINTEND

public:
    // prevent constructor by default
    Header();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Header(::SharedTypes::v3_0_0::PackManifestDefinition::Header&&);

    MCNAPI Header(::SharedTypes::v3_0_0::PackManifestDefinition::Header const&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Header&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Header const&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Header&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Header&&);

    MCNAPI ~Header();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Header&&);

    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Header const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
