#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class WidgetPrimComponentEllipsoid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka79afd;
    ::ll::UntypedStorage<4, 12> mUnkc13799;
    ::ll::UntypedStorage<4, 16> mUnkfa9f15;
    ::ll::UntypedStorage<4, 16> mUnk10929d;
    ::ll::UntypedStorage<4, 8>  mUnk9f0242;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentEllipsoid& operator=(WidgetPrimComponentEllipsoid const&);
    WidgetPrimComponentEllipsoid(WidgetPrimComponentEllipsoid const&);
    WidgetPrimComponentEllipsoid();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentEllipsoid const&) const;
    // NOLINTEND
};

} // namespace Editor::Network
