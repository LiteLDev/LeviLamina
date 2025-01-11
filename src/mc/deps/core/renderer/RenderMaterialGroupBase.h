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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderMaterialGroupBase() = default;

    // vIndex: 1
    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const&) = 0;

    // vIndex: 2
    virtual void clearMaterial(::HashedString const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace mce
