#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Experiments;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class MyceliumBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~MyceliumBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Brightness const& MIN_BRIGHTNESS_TO_PERSIST();

    MCNAPI static ::Brightness const& MIN_BRIGHTNESS_TO_SPREAD();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
