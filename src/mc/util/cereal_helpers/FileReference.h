#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {

struct FileReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkefc077;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReference(FileReference const&);
    FileReference();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CerealHelpers::FileReference& operator=(::CerealHelpers::FileReference&&);

    MCNAPI ::CerealHelpers::FileReference& operator=(::CerealHelpers::FileReference const&);

    MCNAPI ~FileReference();
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

} // namespace CerealHelpers
