#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
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
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mEntityDefault;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mBlockDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoryPriorities& operator=(CameraAimAssistCategoryPriorities const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistCategoryPriorities();

    MCAPI CameraAimAssistCategoryPriorities(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);

    MCAPI CameraAimAssistCategoryPriorities(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraAimAssistCategoryPriorities();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
