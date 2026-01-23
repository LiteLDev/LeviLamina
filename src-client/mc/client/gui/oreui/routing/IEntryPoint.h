#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
struct SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI {

class IEntryPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEntryPoint();

    virtual bool shouldAddToConfiguration() const = 0;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&,
        ::SceneFactory&,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&
    ) const = 0;
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

} // namespace OreUI
