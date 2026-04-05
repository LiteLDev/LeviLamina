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
#ifdef LL_PLAT_C
    MCAPI MaterialPtr();

    MCAPI MaterialPtr(::mce::MaterialPtr const&);

    MCAPI MaterialPtr(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);

    MCAPI ::HashedString const& getHashedName() const;

    MCAPI bool isNull() const;

    MCAPI ::mce::RenderMaterial const* operator->() const;

    MCFOLD ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCAPI ~MaterialPtr();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::mce::MaterialPtr const&);

    MCAPI void* $ctor(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace mce
