#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/experimental/queries/core/DataDrivenUIGenericNode.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IDataDrivenUIRepository;
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class DataDrivenUICompositionQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::DataDrivenUICompositionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::DataDrivenUIGenericNode,
            ::std::allocator<::OreUI::Experimental::DataDrivenUIGenericNode>>>
                                                               mChildrenNodes;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCompositionsReloadedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUICompositionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUICompositionQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenUICompositionQuery(
        ::OreUI::Experimental::GameDependencies const& game,
        ::std::string const&                           compositionId
    );

    MCAPI void _updateState(::IDataDrivenUIRepository& dataDrivenUIRepository, ::std::string const& compositionId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::GameDependencies const& game, ::std::string const& compositionId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
