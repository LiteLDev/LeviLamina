#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StructureTemplateRegistrationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb0e125;
    ::ll::UntypedStorage<8, 8>  mUnka0d072;
    ::ll::UntypedStorage<8, 8>  mUnk644c4a;
    ::ll::UntypedStorage<8, 32> mUnk24f0d9;
    ::ll::UntypedStorage<8, 8>  mUnka6a2de;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
    StructureTemplateRegistrationContext();

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
