#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class XALEnvironmentQuery : public ::OreUI::QueryBase<::OreUI::XALEnvironmentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IOptionRegistry>>       mOptions;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mCurrentSandbox;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mTargetSandbox;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsRetailSandbox;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    XALEnvironmentQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit XALEnvironmentQuery(::OreUI::ClientDependencies const& client);

    MCAPI void _refresh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
