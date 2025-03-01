#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTemplateRegistrationContext(::StructureTemplateRegistrationContext const&);

    MCAPI StructureTemplateRegistrationContext(::StructureTemplateRegistrationContext&&);

    MCAPI ~StructureTemplateRegistrationContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureTemplateRegistrationContext const&);

    MCAPI void* $ctor(::StructureTemplateRegistrationContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
