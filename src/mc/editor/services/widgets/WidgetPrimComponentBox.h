#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class WidgetPrimComponentBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1d1901;
    ::ll::UntypedStorage<4, 16> mUnkd61ad6;
    ::ll::UntypedStorage<4, 16> mUnk11217e;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentBox& operator=(WidgetPrimComponentBox const&);
    WidgetPrimComponentBox(WidgetPrimComponentBox const&);
    WidgetPrimComponentBox();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentBox const& other) const;
    // NOLINTEND
};

} // namespace Editor::Network
