#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoriesFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf9dd26;
    ::ll::UntypedStorage<8, 24> mUnk87d61a;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoriesFile& operator=(CameraAimAssistCategoriesFile const&);
    CameraAimAssistCategoriesFile(CameraAimAssistCategoriesFile const&);
    CameraAimAssistCategoriesFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CameraAimAssistCategoriesFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
