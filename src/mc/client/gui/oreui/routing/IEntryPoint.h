#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI {

class IEntryPoint {
public:
    // prevent constructor by default
    IEntryPoint& operator=(IEntryPoint const&);
    IEntryPoint(IEntryPoint const&);
    IEntryPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntryPoint();

    // vIndex: 1
    virtual bool shouldAddToConfiguration() const = 0;

    // vIndex: 2
    virtual void
    addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&)
        const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
