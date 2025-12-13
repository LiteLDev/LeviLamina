#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterialGroupBase; }
namespace mce { class RenderMaterial; }
// clang-format on

namespace mce {

class MaterialPtr {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<8, 16> mUnk9b791d;
#endif
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C MaterialPtr();

    MCNAPI_C MaterialPtr(::mce::MaterialPtr const&);

    MCNAPI_C MaterialPtr(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);

    MCNAPI_C ::HashedString const& getHashedName() const;

    MCNAPI_C bool isNull() const;

    MCNAPI_C ::mce::RenderMaterial const* operator->() const;

    MCNAPI_C ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCNAPI_C ~MaterialPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::mce::MaterialPtr const&);

    MCNAPI_C void* $ctor(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
