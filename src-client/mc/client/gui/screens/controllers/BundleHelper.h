#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ActiveBundleData.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenController;
// clang-format on

class BundleHelper {
public:
    // BundleHelper inner types define
    enum class BundleItemStickScrollDirection : int {
        Left  = 0,
        Right = 1,
        Up    = 2,
        Down  = 3,
    };

    enum class BundleItemScrollWheelDirection : int {
        Up   = 0,
        Down = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::ActiveBundleData> mActiveBundleData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isSlotInteractiveBundle(
        ::ContainerScreenController const& controller,
        ::std::string const&               collectionName,
        int                                collectionIndex
    ) const;
    // NOLINTEND
};
