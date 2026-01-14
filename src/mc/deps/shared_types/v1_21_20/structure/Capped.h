#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/BlockIgnore.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockRules.h"
#include "mc/deps/shared_types/v1_21_20/structure/ConstantIntProvider.h"
#include "mc/deps/shared_types/v1_21_20/structure/ProtectedBlock.h"
#include "mc/deps/shared_types/v1_21_20/structure/UniformIntProvider.h"

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct Capped {
public:
    // Capped inner types define
    using Delegate = ::std::variant<
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules,
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore,
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock>>
        mDelegate;
    ::ll::TypedStorage<
        4,
        12,
        ::std::variant<int, ::SharedTypes::v1_21_20::ConstantIntProvider, ::SharedTypes::v1_21_20::UniformIntProvider>>
        mLimit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Capped();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors
