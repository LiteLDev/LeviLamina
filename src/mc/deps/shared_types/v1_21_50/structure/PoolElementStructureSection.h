#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct PoolElementStructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7c4799;
    ::ll::UntypedStorage<4, 4>  mUnkeb5465;
    ::ll::UntypedStorage<4, 24> mUnk33fa9e;
    ::ll::UntypedStorage<4, 12> mUnkaacf29;
    ::ll::UntypedStorage<1, 1>  mUnk83dca9;
    ::ll::UntypedStorage<8, 24> mUnk4e76fe;
    // NOLINTEND

public:
    // prevent constructor by default
    PoolElementStructureSection& operator=(PoolElementStructureSection const&);
    PoolElementStructureSection(PoolElementStructureSection const&);
    PoolElementStructureSection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PoolElementStructureSection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
