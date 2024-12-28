#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class Gameplay : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf8f668;
    ::ll::UntypedStorage<8, 8> mUnk90fdb1;
    // NOLINTEND

public:
    // prevent constructor by default
    Gameplay& operator=(Gameplay const&);
    Gameplay(Gameplay const&);
    Gameplay();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool shouldAddToConfiguration() const /*override*/;

    // vIndex: 2
    virtual void
    addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&) const
        /*override*/;

    // vIndex: 0
    virtual ~Gameplay() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldAddToConfiguration() const;

    MCAPI void
    $addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&) const;
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
