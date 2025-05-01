#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoryPriorities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9fd642;
    ::ll::UntypedStorage<8, 64> mUnkb76217;
    ::ll::UntypedStorage<4, 8>  mUnk86c058;
    ::ll::UntypedStorage<4, 8>  mUnk845646;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoryPriorities& operator=(CameraAimAssistCategoryPriorities const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistCategoryPriorities();

    MCNAPI CameraAimAssistCategoryPriorities(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&) const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~CameraAimAssistCategoryPriorities();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
