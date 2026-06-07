#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

struct DataTransferIdentifierData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7055e4;
    ::ll::UntypedStorage<1, 1>  mUnk9bbbc0;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferIdentifierData& operator=(DataTransferIdentifierData const&);
    DataTransferIdentifierData(DataTransferIdentifierData const&);
    DataTransferIdentifierData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~DataTransferIdentifierData();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Services
