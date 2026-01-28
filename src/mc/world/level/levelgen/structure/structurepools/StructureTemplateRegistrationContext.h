#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class FeatureRegistry;
class IStructureTemplateManager;
class JigsawStructureElementRegistry;
// clang-format on

struct StructureTemplateRegistrationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>> mManager;
    ::ll::TypedStorage<8, 8, ::JigsawStructureElementRegistry&>                           mStructureRegistry;
    ::ll::TypedStorage<8, 8, ::FeatureRegistry&>                                          mFeatureRegistry;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                          mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                                        mExperiments;
    // NOLINTEND

public:
    StructureTemplateRegistrationContext(
        Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> const& manager,
        JigsawStructureElementRegistry&                                 structureRegistry,
        FeatureRegistry&                                                featureRegistry,
        BaseGameVersion                                                 baseGameVersion,
        Experiments const&                                              experiments
    )
    : mManager(manager),
      mStructureRegistry(structureRegistry),
      mFeatureRegistry(featureRegistry),
      mBaseGameVersion(baseGameVersion),
      mExperiments(experiments) {}

public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
    StructureTemplateRegistrationContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTemplateRegistrationContext(::StructureTemplateRegistrationContext&&);

    MCAPI StructureTemplateRegistrationContext(::StructureTemplateRegistrationContext const&);

    MCAPI ~StructureTemplateRegistrationContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureTemplateRegistrationContext&&);

    MCAPI void* $ctor(::StructureTemplateRegistrationContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
