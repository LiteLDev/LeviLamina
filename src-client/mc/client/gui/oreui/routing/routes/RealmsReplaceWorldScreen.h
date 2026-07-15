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
namespace Realms { class RealmsWorldContext; }
namespace Realms { class RealmsWorldEditor; }
namespace Realms { class RealmsWorldPackContext; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsReplaceWorldScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>> mRealmsWorldContext;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>>  mRealmsWorldEditor;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackContext>()>>
        mGetRealmsWorldPackContext;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsReplaceWorldScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void
    addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsReplaceWorldScreen(
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>                   realmsWorldContext,
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>                    realmsWorldEditor,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackContext>()>&& getRealmsWorldPackContext
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>                   realmsWorldContext,
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>                    realmsWorldEditor,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackContext>()>&& getRealmsWorldPackContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::EntryPoints
