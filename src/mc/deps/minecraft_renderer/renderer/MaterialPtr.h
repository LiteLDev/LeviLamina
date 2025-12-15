#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterialGroupBase; }
namespace mce { class RenderMaterialInfo; }
namespace mce { class RenderMaterial; }
// clang-format on

namespace mce {

class MaterialPtr {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::RenderMaterialInfo>> mRenderMaterialInfoPtr;
#endif
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C MaterialPtr();

    MCAPI_C MaterialPtr(::mce::MaterialPtr const&);

    MCAPI_C MaterialPtr(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);

    MCAPI_C ::HashedString const& getHashedName() const;

    MCAPI_C bool isNull() const;

    MCAPI_C ::mce::RenderMaterial const* operator->() const;

    MCFOLD_C ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCAPI_C ~MaterialPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD_C void* $ctor();

    MCFOLD_C void* $ctor(::mce::MaterialPtr const&);

    MCAPI_C void* $ctor(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace mce
