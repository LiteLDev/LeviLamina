#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DataDrivenUIStyleVersionQuery : public ::OreUI::QueryBase<::OreUI::DataDrivenUIStyleVersionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>>    mVersionId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCompositionsReloadedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIStyleVersionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataDrivenUIStyleVersionQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
