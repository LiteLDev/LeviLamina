#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterial; }
namespace mce { class RenderMaterialGroupBase; }
namespace mce { class RenderMaterialInfo; }
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MaterialPtr(MaterialPtr const&);
    MaterialPtr();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MaterialPtr(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);

    MCAPI ::HashedString const& getHashedName() const;

    MCAPI bool isNull() const;

    MCAPI explicit operator bool() const;

    MCAPI ::mce::RenderMaterial const& operator*() const;

    MCFOLD ::mce::RenderMaterial const* operator->() const;

    MCFOLD ::mce::RenderMaterial* operator->();

    MCFOLD ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCFOLD bool operator==(::mce::MaterialPtr const& rhs) const;

    MCAPI ~MaterialPtr();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
