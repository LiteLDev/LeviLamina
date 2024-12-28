#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct StructurePlaceSettings {
public:
    // StructurePlaceSettings inner types define
    enum class RetainLiquid : int {
        Remove = 0,
        Retain = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf9cc66;
    ::ll::UntypedStorage<1, 1>  mUnka6ac05;
    ::ll::UntypedStorage<4, 12> mUnkda395e;
    ::ll::UntypedStorage<4, 24> mUnk608538;
    ::ll::UntypedStorage<4, 4>  mUnkd26057;
    ::ll::UntypedStorage<8, 24> mUnk976eed;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePlaceSettings& operator=(StructurePlaceSettings const&);
    StructurePlaceSettings(StructurePlaceSettings const&);
    StructurePlaceSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StructurePlaceSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
