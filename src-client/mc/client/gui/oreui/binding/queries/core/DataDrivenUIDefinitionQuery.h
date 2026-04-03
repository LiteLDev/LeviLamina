#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/core/DefinitionType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IDataDrivenUIRepository;
namespace OreUI { class DataDrivenUIGenericNode; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DataDrivenUIDefinitionQuery : public ::OreUI::QueryBase<::OreUI::DataDrivenUIDefinitionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::DataDrivenUIGenericNode, ::std::allocator<::OreUI::DataDrivenUIGenericNode>>>
                                                               mChildrenNodes;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCompositionsReloadedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIDefinitionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUIDefinitionQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenUIDefinitionQuery(
        ::OreUI::GameDependencies const& game,
        ::OreUI::DefinitionType          definitionType,
        ::std::string const&             definitionId
    );

    MCAPI void _updateState(
        ::IDataDrivenUIRepository& dataDrivenUIRepository,
        ::OreUI::DefinitionType    definitionType,
        ::std::string const&       definitionId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::GameDependencies const& game,
        ::OreUI::DefinitionType          definitionType,
        ::std::string const&             definitionId
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
