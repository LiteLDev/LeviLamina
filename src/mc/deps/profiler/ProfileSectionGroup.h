#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class AnnotationToken; }
// clang-format on

namespace Core::Profile {

class ProfileSectionGroup {
public:
    // ProfileSectionGroup inner types declare
    // clang-format off
    struct ExplicitlyInvalid;
    // clang-format on

    // ProfileSectionGroup inner types define
    struct ExplicitlyInvalid {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2306f8;
    ::ll::UntypedStorage<1, 1>  mUnkf8f57a;
    ::ll::UntypedStorage<8, 16> mUnk1533fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileSectionGroup& operator=(ProfileSectionGroup const&);
    ProfileSectionGroup(ProfileSectionGroup const&);
    ProfileSectionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfileSectionGroup(::Core::Profile::ProfileSectionGroup::ExplicitlyInvalid);

    MCNAPI explicit ProfileSectionGroup(::Core::Profile::AnnotationToken& token);

    MCNAPI ~ProfileSectionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Profile::ProfileSectionGroup::ExplicitlyInvalid);

    MCNAPI void* $ctor(::Core::Profile::AnnotationToken& token);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
