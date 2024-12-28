#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/village/POIType.h"

struct POIBlueprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk28a6f3;
    ::ll::UntypedStorage<8, 48> mUnk503ba6;
    ::ll::UntypedStorage<8, 48> mUnk9503a3;
    ::ll::UntypedStorage<4, 4>  mUnk124330;
    ::ll::UntypedStorage<4, 4>  mUnk960d54;
    ::ll::UntypedStorage<8, 8>  mUnk566a03;
    ::ll::UntypedStorage<8, 8>  mUnkd4d2cb;
    ::ll::UntypedStorage<8, 48> mUnk4a072d;
    ::ll::UntypedStorage<1, 1>  mUnk2385c1;
    // NOLINTEND

public:
    // prevent constructor by default
    POIBlueprint& operator=(POIBlueprint const&);
    POIBlueprint(POIBlueprint const&);
    POIBlueprint();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI POIBlueprint(
        ::std::string name,
        ::POIType     type,
        float         radius,
        bool          useBoundingBox,
        uint64        capacity,
        uint64        weight,
        ::std::string soundEvent,
        ::std::string initEvent,
        ::std::string endEvent
    );

    MCAPI ~POIBlueprint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string name,
        ::POIType     type,
        float         radius,
        bool          useBoundingBox,
        uint64        capacity,
        uint64        weight,
        ::std::string soundEvent,
        ::std::string initEvent,
        ::std::string endEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
