#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { class DataDrivenScreenAPI; }
// clang-format on

namespace OreUI {

class DataDrivenUIScreenIdQuery : public ::OreUI::QueryBase<::OreUI::DataDrivenUIScreenIdQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mSubscription;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mScreenId;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIScreenIdQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUIScreenIdQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataDrivenUIScreenIdQuery(::GameplayUI::DataDrivenScreenAPI* dataDrivenScreenAPI);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameplayUI::DataDrivenScreenAPI* dataDrivenScreenAPI);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
