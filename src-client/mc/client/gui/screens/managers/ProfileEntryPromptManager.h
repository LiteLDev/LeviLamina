#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IProfileEntryPromptData;
// clang-format on

class ProfileEntryPromptManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                         mIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IProfileEntryPromptData>>> mData;
    ::ll::TypedStorage<1, 1, bool>                                                         mModalOpen;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void closeCurrentModal(bool openNextModal);
    // NOLINTEND
};
