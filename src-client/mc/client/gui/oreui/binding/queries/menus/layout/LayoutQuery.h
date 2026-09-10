#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LayoutServiceSystem;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class LayoutQuery : public ::OreUI::QueryBase<::OreUI::LayoutQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus>> mFetchStatus;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>        mVariant;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
                                                                                    mFabIds;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem>> mLayoutServiceSystem;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                         mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LayoutQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayoutQuery(::OreUI::GameDependencies const& game, ::std::string const& layoutId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& layoutId);
    // NOLINTEND
};

} // namespace OreUI
