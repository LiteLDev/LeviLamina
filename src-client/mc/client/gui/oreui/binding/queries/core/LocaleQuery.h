#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class LocaleQuery : public ::OreUI::QueryBase<::OreUI::LocaleQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mLocaleToken;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mLocale;
    // NOLINTEND

public:
    // prevent constructor by default
    LocaleQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocaleQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocaleQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
