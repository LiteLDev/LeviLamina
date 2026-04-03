#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationMetadata {
public:
    // EducationMetadata inner types define
    enum class ContentType : uint {
        Invalid        = 0,
        WorldLesson    = 1,
        NonWorldLesson = 2,
        Count          = 3,
    };

    enum class UserType : uint {
        Unknown           = 0,
        StudentAndTeacher = 1,
        Teacher           = 2,
        Count             = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk87db90;
    ::ll::UntypedStorage<4, 4>  mUnkdbf9d6;
    ::ll::UntypedStorage<8, 32> mUnk2497e1;
    ::ll::UntypedStorage<8, 32> mUnkf61c5a;
    ::ll::UntypedStorage<8, 24> mUnk830a04;
    ::ll::UntypedStorage<8, 24> mUnkbb60b5;
    ::ll::UntypedStorage<8, 32> mUnk67afb7;
    ::ll::UntypedStorage<4, 4>  mUnkcc6517;
    ::ll::UntypedStorage<4, 4>  mUnk2daa20;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationMetadata& operator=(EducationMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EducationMetadata();

    MCNAPI EducationMetadata(::EducationMetadata const&);

    MCNAPI ~EducationMetadata();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::std::string, ::EducationMetadata::ContentType> const& STRING_TO_CONTENT_TYPE();

    MCNAPI static ::std::unordered_map<::std::string, ::EducationMetadata::UserType> const& STRING_TO_USER_TYPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::EducationMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
