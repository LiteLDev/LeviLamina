#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterialInfo; }
// clang-format on

namespace mce {

class RenderMaterialGroupBase {
public:
    // RenderMaterialGroupBase inner types define
    using MaterialMap = ::std::unordered_map<::HashedString, ::std::shared_ptr<::mce::RenderMaterialInfo>>;

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RenderMaterialGroupBase() = default;
#else // LL_PLAT_C
    virtual ~RenderMaterialGroupBase();
#endif

    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const& name) = 0;

    virtual void clearMaterial(::HashedString const& name) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
