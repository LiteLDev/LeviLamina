#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class FeatureRegistry;
class JigsawStructureElementRegistry;
class StructureManager;
// clang-format on

struct StructureTemplateRegistrationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mManager;
    ::ll::TypedStorage<8, 8, ::JigsawStructureElementRegistry&>                  mStructureRegistry;
    ::ll::TypedStorage<8, 8, ::FeatureRegistry&>                                 mFeatureRegistry;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                 mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                               mExperiments;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
    StructureTemplateRegistrationContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplateRegistrationContext(::StructureTemplateRegistrationContext const&);

    MCNAPI StructureTemplateRegistrationContext(::StructureTemplateRegistrationContext&&);

    MCNAPI ~StructureTemplateRegistrationContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureTemplateRegistrationContext const&);

    MCNAPI void* $ctor(::StructureTemplateRegistrationContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
