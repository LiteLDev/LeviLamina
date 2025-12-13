#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackManifestDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk10ca8e;
    ::ll::UntypedStorage<8, 272> mUnk7e6886;
    ::ll::UntypedStorage<8, 24>  mUnk3b894e;
    ::ll::UntypedStorage<8, 32>  mUnkfdd4d5;
    ::ll::UntypedStorage<8, 32>  mUnkcba6c5;
    ::ll::UntypedStorage<8, 32>  mUnkc9d75f;
    ::ll::UntypedStorage<8, 32>  mUnk8d1070;
    ::ll::UntypedStorage<8, 184> mUnk95f659;
    ::ll::UntypedStorage<1, 2>   mUnk19bd8a;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifestDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackManifestDocument(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&&);

    MCNAPI PackManifestDocument(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const&);

    MCNAPI ~PackManifestDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&&);

    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
