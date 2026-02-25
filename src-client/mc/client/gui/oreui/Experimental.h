#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class DataDrivenUIGenericNode; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Container; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerItem; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
// clang-format on

namespace OreUI::Experimental {
// functions
// NOLINTBEGIN
MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::Panel const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::Context const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::Container const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::ContainerItem const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::PanelText const& source);

MCAPI ::OreUI::Experimental::DataDrivenUIGenericNode
convertToGenericContainer(::SharedTypes::v1_21_130::DataDrivenUI::ContextList const& source);

MCAPI void setupCommands();

MCAPI void setupQueries();
// NOLINTEND

} // namespace OreUI::Experimental
