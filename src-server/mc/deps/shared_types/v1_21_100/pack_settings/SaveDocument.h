#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct SaveDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfff563;
    ::ll::UntypedStorage<8, 24> mUnk968b05;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveDocument& operator=(SaveDocument const&);
    SaveDocument(SaveDocument const&);
    SaveDocument();

};

}
