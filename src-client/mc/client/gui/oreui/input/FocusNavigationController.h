#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/FocusDirection.h"
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FocusNavigationBinding; }
// clang-format on

namespace OreUI {

class FocusNavigationController : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FocusNavigationController inner types declare
    // clang-format off
    struct FocusNodeDesc;
    struct FocusBinding;
    struct Node;
    struct Placement;
    // clang-format on

    // FocusNavigationController inner types define
    enum class FocusNodeKind : uchar {
        Grid = 0,
        Item = 1,
    };

    struct FocusNodeDesc {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                              id;
        ::ll::TypedStorage<4, 4, uint>                                              parentId;
        ::ll::TypedStorage<1, 1, ::OreUI::FocusNavigationController::FocusNodeKind> kind;
        ::ll::TypedStorage<2, 2, ushort>                                            columns;
        ::ll::TypedStorage<2, 2, ushort>                                            rows;
        ::ll::TypedStorage<1, 1, bool>                                              hasExplicitCell;
        ::ll::TypedStorage<2, 2, ushort>                                            cellRow;
        ::ll::TypedStorage<2, 2, ushort>                                            cellCol;
        ::ll::TypedStorage<2, 2, ushort>                                            colSpan;
        ::ll::TypedStorage<2, 2, ushort>                                            rowSpan;
        ::ll::TypedStorage<4, 4, int>                                               order;
        ::ll::TypedStorage<1, 1, bool>                                              disabled;
        ::ll::TypedStorage<1, 1, bool>                                              hidden;
        ::ll::TypedStorage<1, 1, bool>                                              shouldBindFocus;
        // NOLINTEND
    };

    struct FocusBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> id;
        ::ll::TypedStorage<4, 4, uint> restoreId;
        // NOLINTEND
    };

    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 32, ::OreUI::FocusNavigationController::FocusNodeDesc> desc;
        ::ll::TypedStorage<8, 8, uint64>                                             seq;
        // NOLINTEND
    };

    struct Placement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>   id;
        ::ll::TypedStorage<2, 2, ushort> row;
        ::ll::TypedStorage<2, 2, ushort> col;
        ::ll::TypedStorage<2, 2, ushort> colSpan;
        ::ll::TypedStorage<2, 2, ushort> rowSpan;
        // NOLINTEND
    };

    using FocusNodeId = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::FocusNavigationBinding*>                                      mBinding;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::OreUI::FocusNavigationController::Node>> mNodes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::vector<uint>>>                      mChildren;
    ::ll::TypedStorage<4, 4, uint>                                                                  mFocused;
    ::ll::TypedStorage<4, 4, uint>                                                             mLastNotifiedFocused;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FocusNavigationController::FocusBinding>> mFocusBindingStack;
    ::ll::TypedStorage<8, 8, uint64>                                                           mNextSeq;
    ::ll::TypedStorage<2, 2, ushort>                                                           mDesiredRow;
    ::ll::TypedStorage<2, 2, ushort>                                                           mDesiredCol;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusNavigationController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FocusNavigationController(::OreUI::FocusNavigationBinding& binding);

    MCAPI ::std::vector<::OreUI::FocusNavigationController::Placement> _computePlacements(uint gridId) const;

    MCAPI uint _descendToLeaf(uint nodeId, ::OreUI::FocusDirection enterDirection) const;

    MCAPI bool _isValidFocusPath(uint id) const;

    MCAPI void _linkToParent(uint id);

    MCAPI uint _navigate(::OreUI::FocusDirection direction);

    MCAPI void _restoreReleasedFocus(::OreUI::FocusNavigationController::FocusBinding const& previous);

    MCAPI void _unlinkFromParent(uint id);

    MCAPI void _updateFocusBinding(uint id, bool shouldBindFocus);

    MCAPI void activate(::OreUI::GamepadButton button);

    MCAPI void addNode(::OreUI::FocusNavigationController::FocusNodeDesc const& desc);

    MCAPI void clear();

    MCAPI uint focusFirst();

    MCAPI bool isWithinFocusBinding(uint id) const;

    MCAPI uint navigate(::OreUI::FocusDirection direction);

    MCAPI void removeNode(uint id);

    MCAPI void requestFocus(uint id);

    MCAPI uint setFocus(uint id);

    MCAPI void updateNode(::OreUI::FocusNavigationController::FocusNodeDesc const& desc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::FocusNavigationBinding& binding);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
