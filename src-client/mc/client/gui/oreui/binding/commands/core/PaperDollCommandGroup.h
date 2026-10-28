#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class AllKnownTiles; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PaperDollCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::PaperDollCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::AllKnownTiles&>                                                 mKnownTiles;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, uint, float, float, float, float>> mSetScreenBounds;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, uint, float>>                      mSetBodyRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollCommandGroup& operator=(PaperDollCommandGroup const&);
    PaperDollCommandGroup(PaperDollCommandGroup const&);
    PaperDollCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PaperDollCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
