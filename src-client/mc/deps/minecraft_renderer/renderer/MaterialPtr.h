#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterial; }
namespace mce { class RenderMaterialGroupBase; }
// clang-format on

namespace mce {

class MaterialPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9b791d;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialPtr();

    MCNAPI MaterialPtr(::mce::MaterialPtr const&);

    MCNAPI MaterialPtr(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);

    MCNAPI ::HashedString const& getHashedName() const;

    MCNAPI bool isNull() const;

    MCNAPI ::mce::RenderMaterial const* operator->() const;

    MCNAPI ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCNAPI ~MaterialPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::MaterialPtr const&);

    MCNAPI void* $ctor(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
