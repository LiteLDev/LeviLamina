#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IProfileEntryPromptData;
class MinecraftScreenController;
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
    // prevent constructor by default
    ProfileEntryPromptManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ProfileEntryPromptManager(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> controller);

    MCAPI void closeCurrentModal(bool openNextModal);

    MCAPI bool tryOpenCurrentModal();

    MCAPI ~ProfileEntryPromptManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> controller);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
