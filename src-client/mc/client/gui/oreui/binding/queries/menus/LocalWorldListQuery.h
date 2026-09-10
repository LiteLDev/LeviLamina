#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAccessibilityProvider;
namespace OreUI { class GameDependencies; }
namespace World { class LocalWorldList; }
// clang-format on

namespace OreUI {

class LocalWorldListQuery : public ::OreUI::QueryBase<::OreUI::LocalWorldListQuery> {
public:
    // LocalWorldListQuery inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // LocalWorldListQuery inner types define
    struct Entry : public ::OreUI::PropertyObject<::OreUI::LocalWorldListQuery::Entry> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
        ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mName;
        ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mAllContentOwned;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>                     mLocalWorldList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mAccessibilityProvider;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::
            PropertyVector<::OreUI::LocalWorldListQuery::Entry, ::std::allocator<::OreUI::LocalWorldListQuery::Entry>>>
                                                        mWorlds;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mOtherStorageTypeHasWorlds;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldListQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LocalWorldListQuery(::OreUI::GameDependencies const& game);

    MCAPI void _rebuildWorlds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
