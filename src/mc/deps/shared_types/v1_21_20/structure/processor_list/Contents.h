#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureProcessorList {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk48f9d2;
    ::ll::UntypedStorage<8, 24> mUnkab4778;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents const&);

    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureProcessorList
