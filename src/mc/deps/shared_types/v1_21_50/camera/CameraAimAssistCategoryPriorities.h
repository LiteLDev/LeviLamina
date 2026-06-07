#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoryPriorities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<1>, int>> mEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<0>, int>> mBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>               mBlockTags;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>               mEntityTypeFamilies;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mEntityDefault;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mBlockDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoryPriorities(CameraAimAssistCategoryPriorities const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistCategoryPriorities();

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&);

    MCAPI ~CameraAimAssistCategoryPriorities();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
